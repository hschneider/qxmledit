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

#include "xmlschemalibxml.h"
#include "validatormessagehandler.h"
#include "modules/xml/libxmlutils.h"
#include <QObject>
#include <QStringList>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xmlschemas.h>

#define XSI_NAMESPACE   "http://www.w3.org/2001/XMLSchema-instance"
#define PARSE_OPTIONS   (XML_PARSE_BIG_LINES)

static QByteArray uriToLibXml(const QUrl &uri)
{
    if(uri.isEmpty()) {
        return QByteArray();
    }
    if(uri.isLocalFile()) {
        return uri.toLocalFile().toUtf8();
    }
    return uri.toString().toUtf8();
}

static const char *nullIfEmpty(const QByteArray &data)
{
    return data.isEmpty() ? NULL : data.constData();
}

// libxml2 does not resolve "file:" URLs like "file:relative/path": use local paths
static QString schemaLocationToLibXml(const QString &location)
{
    const QUrl url(location);
    if(url.scheme() == "file") {
        return url.toLocalFile();
    }
    return location;
}

static QString escapeAttribute(const QString &text)
{
    QString result = text;
    result.replace("&", "&amp;");
    result.replace("<", "&lt;");
    result.replace("\"", "&quot;");
    return result;
}

//-------------------------------------------------------------------------------

XmlSchema::XmlSchema() : _doc(NULL), _schema(NULL), _messageHandler(NULL)
{
}

XmlSchema::~XmlSchema()
{
    reset();
}

void XmlSchema::reset()
{
    if(NULL != _schema) {
        xmlSchemaFree(static_cast<xmlSchemaPtr>(_schema));
        _schema = NULL ;
    }
    // the schema references the document: free it after the schema
    if(NULL != _doc) {
        xmlFreeDoc(static_cast<xmlDocPtr>(_doc));
        _doc = NULL ;
    }
}

bool XmlSchema::load(const QByteArray &data, const QUrl &documentUri)
{
    LibXmlErrors errors;
    const QByteArray uri = uriToLibXml(documentUri);
    xmlDocPtr doc = xmlReadMemory(data.constData(), data.size(), nullIfEmpty(uri), NULL, PARSE_OPTIONS);
    const bool result = loadDocument(doc, errors);
    reportErrors(errors);
    return result;
}

bool XmlSchema::load(const QUrl &source)
{
    LibXmlErrors errors;
    const QByteArray uri = uriToLibXml(source);
    xmlDocPtr doc = xmlReadFile(uri.constData(), NULL, PARSE_OPTIONS);
    const bool result = loadDocument(doc, errors);
    reportErrors(errors);
    return result;
}

bool XmlSchema::loadDocument(void *docPtr, LibXmlErrors &errors)
{
    reset();
    xmlDocPtr doc = static_cast<xmlDocPtr>(docPtr);
    if(NULL == doc) {
        if(!errors.hasErrors()) {
            errors.add(QtCriticalMsg, QObject::tr("Unable to read the schema."));
        }
        return false;
    }
    xmlSchemaParserCtxtPtr ctxt = xmlSchemaNewDocParserCtxt(doc);
    if(NULL == ctxt) {
        xmlFreeDoc(doc);
        return false;
    }
    xmlSchemaSetParserStructuredErrors(ctxt, &LibXmlErrors::handler, &errors);
    xmlSchemaPtr schema = xmlSchemaParse(ctxt);
    xmlSchemaFreeParserCtxt(ctxt);
    if(NULL == schema) {
        xmlFreeDoc(doc);
        if(!errors.hasErrors()) {
            errors.add(QtCriticalMsg, QObject::tr("Schema is invalid."));
        }
        return false;
    }
    _doc = doc ;
    _schema = schema ;
    return true;
}

bool XmlSchema::isValid() const
{
    return NULL != _schema ;
}

void XmlSchema::setMessageHandler(ValidatorMessageHandler *handler)
{
    _messageHandler = handler ;
}

ValidatorMessageHandler *XmlSchema::messageHandler() const
{
    return _messageHandler ;
}

void *XmlSchema::schemaPtr() const
{
    return _schema ;
}

void XmlSchema::reportErrors(LibXmlErrors &errors)
{
    if((NULL == _messageHandler) || !errors.hasErrors()) {
        return ;
    }
    const LibXmlMessage message = errors.firstError();
    _messageHandler->handleMessage(message.type, message.text, QUrl(message.file), message.line, message.column);
}

//-------------------------------------------------------------------------------

XmlSchemaValidator::XmlSchemaValidator(XmlSchema &schema) : _schema(schema)
{
}

XmlSchemaValidator::~XmlSchemaValidator()
{
}

bool XmlSchemaValidator::validate(const QByteArray &data, const QUrl &documentUri)
{
    LibXmlErrors errors;
    const QByteArray uri = uriToLibXml(documentUri);
    xmlDocPtr doc = xmlReadMemory(data.constData(), data.size(), nullIfEmpty(uri), NULL, PARSE_OPTIONS);
    const bool result = validateDocument(doc, documentUri, errors);
    _schema.reportErrors(errors);
    return result;
}

bool XmlSchemaValidator::validate(const QUrl &source)
{
    LibXmlErrors errors;
    const QByteArray uri = uriToLibXml(source);
    xmlDocPtr doc = xmlReadFile(uri.constData(), NULL, PARSE_OPTIONS);
    const bool result = validateDocument(doc, source, errors);
    _schema.reportErrors(errors);
    return result;
}

// Builds a schema importing the locations declared in the document.
static bool loadSchemaFromHints(xmlDocPtr doc, const QUrl &documentUri, XmlSchema &hintsSchema)
{
    xmlNodePtr root = xmlDocGetRootElement(doc);
    if(NULL == root) {
        return false;
    }
    const xmlChar *xsi = reinterpret_cast<const xmlChar*>(XSI_NAMESPACE);
    xmlChar *locations = xmlGetNsProp(root, reinterpret_cast<const xmlChar*>("schemaLocation"), xsi);
    xmlChar *noNamespaceLocation = xmlGetNsProp(root, reinterpret_cast<const xmlChar*>("noNamespaceSchemaLocation"), xsi);
    const QStringList pairs = LibXmlErrors::toString(locations).simplified().split(' ', Qt::SkipEmptyParts);
    const QString noNamespace = LibXmlErrors::toString(noNamespaceLocation).trimmed();
    xmlFree(locations);
    xmlFree(noNamespaceLocation);
    if(pairs.isEmpty() && noNamespace.isEmpty()) {
        return false;
    }
    QString wrapper = "<xs:schema xmlns:xs=\"http://www.w3.org/2001/XMLSchema\">\n";
    for(int i = 0 ; i + 1 < pairs.size() ; i += 2) {
        wrapper += QString("<xs:import namespace=\"%1\" schemaLocation=\"%2\"/>\n")
                   .arg(escapeAttribute(pairs.at(i))).arg(escapeAttribute(schemaLocationToLibXml(pairs.at(i + 1))));
    }
    if(!noNamespace.isEmpty()) {
        wrapper += QString("<xs:include schemaLocation=\"%1\"/>\n").arg(escapeAttribute(schemaLocationToLibXml(noNamespace)));
    }
    wrapper += "</xs:schema>\n";
    return hintsSchema.load(wrapper.toUtf8(), documentUri);
}

bool XmlSchemaValidator::validateDocument(void *docPtr, const QUrl &documentUri, LibXmlErrors &errors)
{
    xmlDocPtr doc = static_cast<xmlDocPtr>(docPtr);
    if(NULL == doc) {
        if(!errors.hasErrors()) {
            errors.add(QtCriticalMsg, QObject::tr("Unable to read the data."));
        }
        return false;
    }
    XmlSchema hintsSchema;
    xmlSchemaPtr schema = static_cast<xmlSchemaPtr>(_schema.schemaPtr());
    if(NULL == schema) {
        ValidatorMessageHandler hintsHandler;
        hintsSchema.setMessageHandler(&hintsHandler);
        if(!loadSchemaFromHints(doc, documentUri, hintsSchema)) {
            xmlFreeDoc(doc);
            if(hintsHandler.hasMessage()) {
                errors.add(QtCriticalMsg, hintsHandler.description(), hintsHandler.line(), hintsHandler.column());
            } else {
                errors.add(QtCriticalMsg, QObject::tr("No schema to validate against: the document does not declare xsi:schemaLocation or xsi:noNamespaceSchemaLocation."));
            }
            return false;
        }
        schema = static_cast<xmlSchemaPtr>(hintsSchema.schemaPtr());
    }
    xmlSchemaValidCtxtPtr ctxt = xmlSchemaNewValidCtxt(schema);
    if(NULL == ctxt) {
        xmlFreeDoc(doc);
        return false;
    }
    xmlSchemaSetValidStructuredErrors(ctxt, &LibXmlErrors::handler, &errors);
    const int result = xmlSchemaValidateDoc(ctxt, doc);
    xmlSchemaFreeValidCtxt(ctxt);
    xmlFreeDoc(doc);
    if((0 != result) && !errors.hasErrors()) {
        errors.add(QtCriticalMsg, QObject::tr("Validation failed."));
    }
    return 0 == result ;
}
