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

#ifndef LIBXMLUTILS_H
#define LIBXMLUTILS_H

#include <QString>
#include <QList>
#include "libQXmlEdit_global.h"
#include <libxml/xmlerror.h>
#include <libxml/xmlversion.h>

#if LIBXML_VERSION >= 21200
typedef const xmlError QXmlEditLibXmlError;
#else
typedef xmlError QXmlEditLibXmlError;
#endif

class LibXmlMessage
{
public:
    QtMsgType type;
    QString text;
    QString file;
    int line;
    int column;
    LibXmlMessage() : type(QtCriticalMsg), line(0), column(0) {}
};

/**
 * Collects the libxml2 errors raised in the current thread while the object is alive.
 * The previous error handler is restored on destruction.
 */
class LIBQXMLEDITSHARED_EXPORT LibXmlErrors
{
    xmlStructuredErrorFunc _oldHandler;
    void *_oldContext;
public:
    QList<LibXmlMessage> messages;

    LibXmlErrors();
    ~LibXmlErrors();

    bool hasErrors() const;
    void add(const QtMsgType type, const QString &text, const int line = 0, const int column = 0);
    //! first error, or an empty message
    LibXmlMessage firstError() const;

    static void handler(void *userData, QXmlEditLibXmlError *error);
    static QString toString(const unsigned char *text);
};

#endif // LIBXMLUTILS_H
