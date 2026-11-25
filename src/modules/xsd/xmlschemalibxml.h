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

#ifndef XMLSCHEMALIBXML_H
#define XMLSCHEMALIBXML_H

#include <QByteArray>
#include <QUrl>
#include "libQXmlEdit_global.h"

class ValidatorMessageHandler;
class LibXmlErrors;

/**
 * XML Schema loaded with libxml2. Mirrors the subset of QXmlSchema used by QXmlEdit.
 */
class LIBQXMLEDITSHARED_EXPORT XmlSchema
{
    void *_doc;     // xmlDocPtr
    void *_schema;  // xmlSchemaPtr
    ValidatorMessageHandler *_messageHandler;

    bool loadDocument(void *doc, LibXmlErrors &errors);
    void reset();
    Q_DISABLE_COPY(XmlSchema)
public:
    XmlSchema();
    ~XmlSchema();

    bool load(const QByteArray &data, const QUrl &documentUri = QUrl());
    bool load(const QUrl &source);
    bool isValid() const;
    void setMessageHandler(ValidatorMessageHandler *handler);
    ValidatorMessageHandler *messageHandler() const;
    void *schemaPtr() const;

    //! reports the first error to the message handler, if any
    void reportErrors(LibXmlErrors &errors);
};

/**
 * Validates instances against an XmlSchema. If the schema is not valid (or empty)
 * the xsi:schemaLocation and xsi:noNamespaceSchemaLocation hints of the document are used.
 */
class LIBQXMLEDITSHARED_EXPORT XmlSchemaValidator
{
    XmlSchema &_schema;
    bool validateDocument(void *doc, const QUrl &documentUri, LibXmlErrors &errors);
public:
    XmlSchemaValidator(XmlSchema &schema);
    ~XmlSchemaValidator();

    bool validate(const QByteArray &data, const QUrl &documentUri = QUrl());
    bool validate(const QUrl &source);
};

#endif // XMLSCHEMALIBXML_H
