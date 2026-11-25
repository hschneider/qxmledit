/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2013-2023 by Luca Bellonda and individual contributors  *
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

#include "modules/search/searchxquery.h"
#include "modules/xml/libxmlutils.h"
#include "utils.h"
#include "regola.h"
#include "findtextparams.h"
#include "xmlutils.h"
#include <libxml/tree.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>

namespace {

const xmlChar *xc(const QByteArray &data)
{
    return reinterpret_cast<const xmlChar*>(data.constData());
}

// Copies the Element tree into a libxml2 document. Each node keeps the source Element in _private.
// Unprefixed elements are in no namespace, so unprefixed XPath steps match them
// (as the former XQuery "declare default element namespace" did).
class LibXmlTreeBuilder
{
    xmlDocPtr _doc;
    QMap<QString, QString> _namespaces;
    QMap<QString, xmlNsPtr> _nsByPrefix;
public:
    xmlNodePtr rootMatch;
    Element *rootToMatch;

    LibXmlTreeBuilder(const QMap<QString, QString> &namespaces, Element *newRootToMatch) :
        _doc(NULL), _namespaces(namespaces), rootMatch(NULL), rootToMatch(newRootToMatch)
    {
        _doc = xmlNewDoc(BAD_CAST "1.0");
    }

    ~LibXmlTreeBuilder()
    {
        xmlFreeDoc(_doc);
    }

    xmlDocPtr doc()
    {
        return _doc;
    }

    void build(Element *root)
    {
        if(NULL == root) {
            return;
        }
        xmlNodePtr node = makeNode(root);
        if(NULL != node) {
            xmlDocSetRootElement(_doc, node);
            foreach(const QString &prefix, _namespaces.keys()) {
                if(!prefix.isEmpty()) {
                    _nsByPrefix[prefix] = xmlNewNs(node, xc(_namespaces[prefix].toUtf8()), xc(prefix.toUtf8()));
                }
            }
            fill(root, node);
        }
    }

private:
    xmlNodePtr makeNode(Element *element)
    {
        xmlNodePtr node = NULL;
        switch(element->getType()) {
        case Element::ET_ELEMENT:
            node = xmlNewDocNode(_doc, NULL, xc(element->tag().toUtf8()), NULL);
            break;
        case Element::ET_TEXT:
            node = xmlNewDocText(_doc, xc(element->text.toUtf8()));
            break;
        case Element::ET_COMMENT:
            node = xmlNewDocComment(_doc, xc(element->getComment().toUtf8()));
            break;
        case Element::ET_PROCESSING_INSTRUCTION:
            node = xmlNewDocPI(_doc, xc(element->getPITarget().toUtf8()), xc(element->getPIData().toUtf8()));
            break;
        default:
            break;
        }
        if(NULL != node) {
            node->_private = element;
            if(element == rootToMatch) {
                rootMatch = node;
            }
        }
        return node;
    }

    void fill(Element *element, xmlNodePtr node)
    {
        if(element->getType() != Element::ET_ELEMENT) {
            return ;
        }
        QString prefix, localName;
        XmlUtils::decodeQualifiedName(element->tag(), prefix, localName);
        if(!prefix.isEmpty() && _nsByPrefix.contains(prefix)) {
            xmlNodeSetName(node, xc(localName.toUtf8()));
            xmlSetNs(node, _nsByPrefix[prefix]);
        }
        foreach(Attribute *attribute, element->attributes) {
            xmlNewProp(node, xc(attribute->name.toUtf8()), xc(attribute->value.toUtf8()));
        }
        foreach(TextChunk *chunk, element->getTextChunks()) {
            xmlNodePtr text = xmlNewDocText(_doc, xc(chunk->text.toUtf8()));
            text->_private = element;
            xmlAddChild(node, text);
        }
        foreach(Element *child, *element->getChildItems()) {
            xmlNodePtr childNode = makeNode(child);
            if(NULL != childNode) {
                xmlAddChild(node, childNode);
                fill(child, childNode);
            }
        }
    }
};

Element *nodeToElement(xmlNodePtr node)
{
    if(NULL == node) {
        return NULL;
    }
    switch(node->type) {
    case XML_ATTRIBUTE_NODE:
        return (NULL != node->parent) ? static_cast<Element*>(node->parent->_private) : NULL;
    case XML_ELEMENT_NODE:
    case XML_TEXT_NODE:
    case XML_COMMENT_NODE:
    case XML_PI_NODE:
        return static_cast<Element*>(node->_private);
    default:
        return NULL;
    }
}

}

SearchXQuery::SearchXQuery(QObject *parent) :
    QObject(parent)
{
}

SearchXQuery::~SearchXQuery()
{
}

QString SearchXQuery::composeQueryString(Regola * /*regola*/, FindTextParams &searchInfo)
{
    const QString textToFind = getTextToFind(searchInfo);
    return adjustTextToFind(textToFind);
}

QString SearchXQuery::adjustTextToFind(const QString &textToFind)
{
    if(textToFind.startsWith("/")) {
        return textToFind;
    }
    return "/" + textToFind;
}

QString SearchXQuery::getTextToFind(FindTextParams &searchInfo)
{
    return searchInfo.getTextToFind().trimmed();
}

void SearchXQuery::search(Regola *regola, Element *element, FindTextParams &searchInfo)
{
    Element *rootElement = element;
    if(!searchInfo.isLookOnlyChildren()) {
        rootElement = NULL ;
    }
    const QMap<QString, QString> namespaces = regola->namespaces();
    LibXmlErrors errors;
    LibXmlTreeBuilder builder(namespaces, rootElement);
    builder.build(regola->root());

    QString queryString = composeQueryString(regola, searchInfo);
    xmlXPathContextPtr context = xmlXPathNewContext(builder.doc());
    if(NULL == context) {
        Utils::error(tr("Internal error."));
        return ;
    }
    foreach(const QString &prefix, namespaces.keys()) {
        if(!prefix.isEmpty()) {
            xmlXPathRegisterNs(context, xc(prefix.toUtf8()), xc(namespaces[prefix].toUtf8()));
        }
    }
    context->node = reinterpret_cast<xmlNodePtr>(builder.doc());
    if((NULL != rootElement) && (NULL != builder.rootMatch)) {
        // the search is relative to the selected element
        context->node = builder.rootMatch;
        queryString = "." + queryString;
    }
    xmlXPathObjectPtr result = xmlXPathEvalExpression(xc(queryString.toUtf8()), context);
    if(NULL == result) {
        xmlXPathFreeContext(context);
        QString detail = errors.firstError().text;
        Utils::error(tr("The syntax of the XPath expression is not valid.") + (detail.isEmpty() ? QString() : "\n" + detail));
        return ;
    }

    regola->unhiliteAll();
    bool isCloseUnrelated = searchInfo.isCloseUnrelated();
    if(searchInfo.isCountingOnly()) {
        isCloseUnrelated = false;
    }
    if(isCloseUnrelated) {
        Element *topElement = regola->root();
        if(NULL != topElement) {
            topElement->unexpandRecursive();
        }
    }

    const int count = ((XPATH_NODESET == result->type) && (NULL != result->nodesetval)) ? result->nodesetval->nodeNr : 0 ;
    for(int i = 0 ; i < count ; i++) {
        Element *element = nodeToElement(result->nodesetval->nodeTab[i]);
        if(NULL != element) {
            D(printf(">>'%s'\n", element->tag().toLatin1().data());)
            D(fflush(stdout);)
            searchInfo.newOccurence(element->selfInfo.totalSize + element->childrenInfo.totalSize);
            if(!searchInfo.isCountingOnly()) {
                searchInfo.addSelection(element);
                element->hilite();
                if(searchInfo.isSelToBookmarks()) {
                    regola->addBookmark(element);
                }
            }
            // Recurse up tp the root.
            if(!searchInfo.isCountingOnly()) {
                QTreeWidgetItem * ui = element->getUI();
                if(isCloseUnrelated && (NULL != ui)) {
                    ui = ui->parent();
                    while(NULL != ui) {
                        if(!ui->isExpanded()) {
                            ui->setExpanded(true);
                        }
                        ui = ui->parent();
                    }
                }
            }
        }
    }
    xmlXPathFreeObject(result);
    xmlXPathFreeContext(context);
}
