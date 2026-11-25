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

#include "libxmlutils.h"
#include <libxml/parser.h>
#include <libxml/globals.h>

LibXmlErrors::LibXmlErrors()
{
    xmlInitParser();
    _oldHandler = xmlStructuredError;
    _oldContext = xmlStructuredErrorContext;
    xmlSetStructuredErrorFunc(this, &LibXmlErrors::handler);
}

LibXmlErrors::~LibXmlErrors()
{
    xmlSetStructuredErrorFunc(_oldContext, _oldHandler);
}

bool LibXmlErrors::hasErrors() const
{
    foreach(const LibXmlMessage &message, messages) {
        if(message.type != QtWarningMsg) {
            return true;
        }
    }
    return false;
}

void LibXmlErrors::add(const QtMsgType type, const QString &text, const int line, const int column)
{
    LibXmlMessage message;
    message.type = type;
    message.text = text;
    message.line = line;
    message.column = column;
    messages.append(message);
}

LibXmlMessage LibXmlErrors::firstError() const
{
    foreach(const LibXmlMessage &message, messages) {
        if(message.type != QtWarningMsg) {
            return message;
        }
    }
    return LibXmlMessage();
}

void LibXmlErrors::handler(void *userData, QXmlEditLibXmlError *error)
{
    if((NULL == userData) || (NULL == error)) {
        return ;
    }
    LibXmlErrors *self = static_cast<LibXmlErrors*>(userData);
    LibXmlMessage message;
    message.type = (error->level == XML_ERR_WARNING) ? QtWarningMsg : QtCriticalMsg;
    message.text = QString::fromUtf8(error->message).trimmed();
    message.file = QString::fromUtf8(error->file);
    message.line = error->line;
    message.column = error->int2;
    self->messages.append(message);
}

QString LibXmlErrors::toString(const unsigned char *text)
{
    if(NULL == text) {
        return QString();
    }
    return QString::fromUtf8(reinterpret_cast<const char*>(text));
}
