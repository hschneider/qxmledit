/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2011-2018 by Luca Bellonda and individual contributors  *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/

#include "codecdevice.h"
#include <QTextCodec>
#include <QTextEncoder>
#include <QTextDecoder>
#include <QXmlStreamWriter>

#define READ_CHUNK_SIZE (64 * 1024)

CodecDevice::CodecDevice(QIODevice *target, QTextCodec *codec) :
    _target(target), _codec(codec), _utf8Decoder(NULL), _encoder(NULL), _decoder(NULL), _written(0), _isRewritingDeclaration(false)
{
    if(NULL == _codec) {
        _codec = QTextCodec::codecForName("UTF-8");
    }
    // as QTextStream did: no byte order mark when writing
    _utf8Decoder = QTextCodec::codecForName("UTF-8")->makeDecoder();
    _encoder = _codec->makeEncoder(QTextCodec::IgnoreHeader);
    _decoder = _codec->makeDecoder();
}

CodecDevice::~CodecDevice()
{
    delete _utf8Decoder;
    delete _encoder;
    delete _decoder;
}

bool CodecDevice::isSequential() const
{
    return true;
}

bool CodecDevice::atEnd() const
{
    return _readBuffer.isEmpty() && _target->atEnd() && QIODevice::atEnd();
}

qint64 CodecDevice::pos() const
{
    return _written;
}

qint64 CodecDevice::bytesAvailable() const
{
    return _readBuffer.size() + QIODevice::bytesAvailable();
}

void CodecDevice::fillReadBuffer()
{
    while(_readBuffer.isEmpty() && !_target->atEnd()) {
        const QByteArray raw = _target->read(READ_CHUNK_SIZE);
        if(raw.isEmpty()) {
            break;
        }
        _readBuffer.append(_decoder->toUnicode(raw).toUtf8());
    }
}

qint64 CodecDevice::readData(char *data, qint64 maxSize)
{
    fillReadBuffer();
    if(_readBuffer.isEmpty()) {
        return _target->atEnd() ? -1 : 0;
    }
    const qint64 size = qMin(maxSize, qint64(_readBuffer.size()));
    memcpy(data, _readBuffer.constData(), size_t(size));
    _readBuffer.remove(0, int(size));
    return size;
}

bool CodecDevice::writeEncoded(const QByteArray &utf8Data)
{
    const QString text = _utf8Decoder->toUnicode(utf8Data);
    const QByteArray encoded = _encoder->fromUnicode(text);
    return _target->write(encoded) == encoded.size();
}

qint64 CodecDevice::writeData(const char *data, qint64 size)
{
    QByteArray utf8Data(data, int(size));
    if(_isRewritingDeclaration) {
        // collect the declaration written by the writer up to its end
        _declaration.append(utf8Data);
        const int end = _declaration.indexOf("?>");
        if(end < 0) {
            _written += size;
            return size;
        }
        _isRewritingDeclaration = false;
        utf8Data = _declaration;
        _declaration.clear();
        utf8Data.replace("encoding=\"UTF-8\"", "encoding=\"" + _codec->name() + "\"");
    }
    if(!writeEncoded(utf8Data)) {
        return -1;
    }
    _written += size;
    return size;
}

QTextCodec *CodecDevice::codec() const
{
    return _codec;
}

void CodecDevice::writeStartDocument(QXmlStreamWriter &writer, const QString &version, const int standalone)
{
    _isRewritingDeclaration = true ;
    const QString theVersion = version.isEmpty() ? QString("1.0") : version ;
    if(standalone >= 0) {
        writer.writeStartDocument(theVersion, standalone > 0);
    } else {
        writer.writeStartDocument(theVersion);
    }
    if(_isRewritingDeclaration) {
        // not expected: the declaration is written at once
        _isRewritingDeclaration = false ;
        writeEncoded(_declaration);
        _declaration.clear();
    }
}
