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

#ifndef CODECDEVICE_H
#define CODECDEVICE_H

#include <QIODevice>
#include <QByteArray>
#include "libQXmlEdit_global.h"

class QTextCodec;
class QXmlStreamWriter;
class QTextEncoder;
class QTextDecoder;

/**
 * Qt 6 text and XML streams only handle Unicode. This device sits between such a stream
 * and the real device: the stream side is UTF-8, the target side uses the given codec.
 * A NULL codec means UTF-8.
 */
class LIBQXMLEDITSHARED_EXPORT CodecDevice : public QIODevice
{
    QIODevice *_target;
    QTextCodec *_codec;
    QTextDecoder *_utf8Decoder;
    QTextEncoder *_encoder;
    QTextDecoder *_decoder;
    QByteArray _readBuffer;
    qint64 _written;
    bool _isRewritingDeclaration;
    QByteArray _declaration;

    void fillReadBuffer();
    bool writeEncoded(const QByteArray &utf8Data);
public:
    CodecDevice(QIODevice *target, QTextCodec *codec);
    virtual ~CodecDevice();

    bool isSequential() const override;
    bool atEnd() const override;
    qint64 bytesAvailable() const override;
    //! bytes received from the stream (UTF-8)
    qint64 pos() const override;

    QTextCodec *codec() const;
    //! Qt 6 QXmlStreamWriter::writeStartDocument() always declares UTF-8: this declares the codec of this device instead.
    //! standalone: -1 not declared, 0 no, 1 yes
    void writeStartDocument(QXmlStreamWriter &writer, const QString &version = QString(), const int standalone = -1);

protected:
    qint64 readData(char *data, qint64 maxSize) override;
    qint64 writeData(const char *data, qint64 size) override;
};

#endif // CODECDEVICE_H
