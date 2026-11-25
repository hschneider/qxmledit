/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2017-2018 by Luca Bellonda and individual contributors  *
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

#include "xsltexecutor.h"
#include <QProcess>
#include "utils.h"
#include "modules/xml/libxmlutils.h"
#include <libxml/parser.h>
#include <libxslt/xslt.h>
#include <libxslt/xsltInternals.h>
#include <libxslt/transform.h>
#include <libxslt/variables.h>
#include <libxslt/xsltutils.h>
#include <cstdarg>

#ifdef QXMLEDIT_TEST
QStringList XSLTExecutor::testSaxonArguments;
bool XSLTExecutor::stop = false;
bool XSLTExecutor::saxonWasChosen = false ;
void XSLTExecutor::resetTest()
{
    stop = false;
    saxonWasChosen = false ;
}
#endif


XSLTExecutor::XSLTExecutor(ApplicationData *data)
{
    _data = data ;
    _sourceHolder = NULL ;
    _outputHolder = NULL ;
    _xsltHolder = NULL ;
}

XSLTExecutor::~XSLTExecutor()
{
    if(NULL != _sourceHolder) {
        delete _sourceHolder ;
    }
    if(NULL != _outputHolder) {
        delete _outputHolder ;
    }
    if(NULL != _xsltHolder) {
        delete _xsltHolder ;
    }
}

// Collects the (fragmented) text that libxslt sends to its generic error function.
static void xsltCollectMessage(void *context, const char *format, ...)
{
    char buffer[4096];
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);
    static_cast<QString*>(context)->append(QString::fromUtf8(buffer));
}

bool XSLTExecutor::innerExecQt(MessagesOperationResult &result,
                               QIODevice *inputDevice, QIODevice *xsltSheetDevice,
                               OutputHolder *outputDevice,
                               QHash<QString, QString> parameters)
{
#ifdef QXMLEDIT_TEST
    XSLTExecutor::saxonWasChosen = false ;
#endif

    XSLTExecutor::MessageHandler messageHandler(result);
    QList<LibXmlMessage> messages;
    QString xsltText;
    bool success = false ;
    {
        LibXmlErrors errors;
        xsltSetGenericErrorFunc(&xsltText, xsltCollectMessage);
        const QByteArray xsltData = xsltSheetDevice->readAll();
        const QByteArray inputData = inputDevice->readAll();
        xmlDocPtr xsltDoc = xmlReadMemory(xsltData.constData(), xsltData.size(), NULL, NULL, XML_PARSE_BIG_LINES);
        // the stylesheet owns xsltDoc after a successful parse
        xsltStylesheetPtr style = (NULL != xsltDoc) ? xsltParseStylesheetDoc(xsltDoc) : NULL;
        if((NULL == style) && (NULL != xsltDoc)) {
            xmlFreeDoc(xsltDoc);
        }
        if(NULL == style) {
            messages.append(errors.messages);
            addError(result, ErrorXSLTInvalid, QObject::tr("XSL is not valid."), -1, -1);
        } else {
#ifdef QXMLEDIT_TEST
            if(XSLTExecutor::stop) {
                xsltFreeStylesheet(style);
                xsltSetGenericErrorFunc(NULL, NULL);
                return true;
            }
#endif
            xmlDocPtr inputDoc = xmlReadMemory(inputData.constData(), inputData.size(), NULL, NULL, XML_PARSE_BIG_LINES);
            if(NULL != inputDoc) {
                xsltTransformContextPtr context = xsltNewTransformContext(style, inputDoc);
                QList<QByteArray> names;
                QList<QByteArray> values;
                foreach(const QString &key, parameters.keys()) {
                    names.append(key.toUtf8());
                    values.append(parameters[key].toUtf8());
                    xsltQuoteOneUserParam(context, reinterpret_cast<const xmlChar*>(names.last().constData()),
                                          reinterpret_cast<const xmlChar*>(values.last().constData()));
                }
                xmlDocPtr resultDoc = xsltApplyStylesheetUser(style, inputDoc, NULL, NULL, NULL, context);
                const bool transformError = (NULL == resultDoc) || (context->state == XSLT_STATE_ERROR) || (context->state == XSLT_STATE_STOPPED);
                if(!transformError) {
                    xmlChar *output = NULL;
                    int outputLength = 0;
                    if(0 == xsltSaveResultToString(&output, &outputLength, resultDoc, style)) {
                        const QByteArray data(reinterpret_cast<const char*>(output), outputLength);
                        const QString encoding = LibXmlErrors::toString(style->encoding);
                        success = outputDevice->writeResult(data, encoding);
                    }
                    xmlFree(output);
                }
                if(NULL != resultDoc) {
                    xmlFreeDoc(resultDoc);
                }
                xsltFreeTransformContext(context);
                xmlFreeDoc(inputDoc);
            }
            messages.append(errors.messages);
            xsltFreeStylesheet(style);
        }
        xsltSetGenericErrorFunc(NULL, NULL);
    }
    const QtMsgType xsltTextType = success ? QtWarningMsg : QtCriticalMsg;
    foreach(const LibXmlMessage &message, messages) {
        messageHandler.handleMessage(success ? QtWarningMsg : message.type, message.text, message.line, message.column);
    }
    foreach(const QString &line, xsltText.split('\n', Qt::SkipEmptyParts)) {
        messageHandler.handleMessage(xsltTextType, line.trimmed(), -1, -1);
    }
    if(!success && result.isOk()) {
        addError(result, ErrorRuntime, QObject::tr("XSL transformation failed."), -1, -1);
    }
    return success ;
}

QStringList XSLTExecutor::saxonArguments(const QString &saxonPath,
        const QString &inputFile, const QString &xsltSheet,
        const QString &outputFile,
        QHash<QString, QString> parameters)
{
    QStringList arguments;
    arguments << "-jar" ;
    arguments << saxonPath;
    arguments << QString("-s:%1").arg(inputFile);
    arguments << QString("-xsl:%1").arg(xsltSheet);
    arguments << QString("-o:%1").arg(outputFile);
    QMap<QString, QString> sortedMap;
    foreach(const QString &key, parameters.keys()) {
        sortedMap[key] = parameters[key];
    }

    foreach(const QString &key, sortedMap.keys()) {
        arguments << QString("%1=%2").arg(key).arg(sortedMap[key]);
    }
    return arguments ;
}

bool XSLTExecutor::innerExecSaxon(MessagesOperationResult &result,
                                  const QString &inputFile, const QString &xsltSheet,
                                  const QString &outputFile,
                                  QHash<QString, QString> parameters)
{
#ifdef QXMLEDIT_TEST
    XSLTExecutor::saxonWasChosen = true ;
#endif
    QString saxonPath = _data->saxonXSLPath();
    if(saxonPath.isEmpty()) {
        addError(result, ErrorEngineNotConfigured, QObject::tr("Saxon engine not configured."), -1, -1);
        return false;
    }

    bool success = false ;
    QProcess saxon;
    QStringList arguments = saxonArguments(saxonPath, inputFile, xsltSheet, outputFile, parameters);
#ifdef QXMLEDIT_TEST
    testSaxonArguments = arguments;
    return true ;
#endif
    saxon.start("java", arguments);
    if(!saxon.waitForStarted()) {
        addError(result, ErrorRuntime, QObject::tr("Saxon engine not started."), -1, -1);
        return false;
    }
    saxon.closeWriteChannel();
    if(!saxon.waitForFinished(TimeoutSaxon)) {
        addError(result, ErrorRuntime, QObject::tr("Errors executing xsl."), -1, -1);
    } else {
        QProcess::ExitStatus status = saxon.exitStatus();
        if(QProcess::NormalExit == status) {
            if(0 != saxon.exitCode()) {
                addError(result, ErrorRuntime, QObject::tr("Exit code not zero:%1.").arg(saxon.exitCode()), -1, -1);
            } else {
                success = true;
            }
        }
    }
    if(!success) {
        QByteArray stdErr = saxon.readAllStandardError() ;
        QByteArray stdOut = saxon.readAllStandardOutput() ;
        QString stdErrString(stdErr);
        QString stdOutString(stdOut);
        QStringList errMessages = stdErrString.split("\n");
        foreach(const QString &err, errMessages) {
            addError(result, ErrorRuntime, err, -1, -1);
        }
        QStringList errInfo = stdOutString.split("\n");
        foreach(const QString &out, errInfo) {
            addInfo(result, ErrorRuntime, out, -1, -1);
        }
    }
    return success ;
}

void XSLTExecutor::addError(MessagesOperationResult &result, const int messageCode, const QString &msgText, const qint64 line, const qint64 column)
{
    SourceMessage *message = new SourceMessage();
    message->setCode(messageCode);
    message->setDescription(msgText);
    message->setType(SourceMessage::Error);
    message->setLine(line);
    message->setColumn(column);
    result.addMessage(message);
    result.setError(true);
}

void XSLTExecutor::addInfo(MessagesOperationResult &result, const int messageCode, const QString &msgText, const qint64 line, const qint64 column)
{
    SourceMessage *message = new SourceMessage();
    message->setCode(messageCode);
    message->setDescription(msgText);
    message->setType(SourceMessage::Info);
    message->setLine(line);
    message->setColumn(column);
    result.addMessage(message);
    result.setError(true);
}

bool XSLTExecutor::closeDevice(QIODevice *device)
{
    if(device->isOpen()) {
        device->close();
    }
    return true ;
}

bool XSLTExecutor::closeDevice(XSLTExecutor::OutputHolder *device, MessagesOperationResult &result, const int errorCode, const QString &deviceType)
{
    if(!device->close()) {
        if(!result.isOk()) {
            result.setError(true);
            addError(result, errorCode, QObject::tr("Error closing %1 device").arg(deviceType), -1, -1);
            return false;
        }
    }
    return true ;
}

bool XSLTExecutor::execQt(MessagesOperationResult &result)
{
#ifdef QXMLEDIT_TEST
    XSLTExecutor::saxonWasChosen = false ;
    if(XSLTExecutor::stop) {
        return true;
    }
#endif

    result.setError(false);

    if(NULL == _sourceHolder) {
        addError(result, ErrorSourceMissing, QObject::tr("Source not set"), -1, -1);
    }
    if(NULL == _xsltHolder) {
        addError(result, ErrorXSLMissing, QObject::tr("XSL not set"), -1, -1);
    }
    if(NULL == _outputHolder) {
        addError(result, ErrorOutputMissing, QObject::tr("Output not set"), -1, -1);
    }
    if(!result.isOk()) {
        return false;
    }

    QIODevice *sourceDevice = _sourceHolder->device();
    QIODevice *xsltDevice = _xsltHolder->device();
    if(!sourceDevice->open(QIODevice::ReadOnly)) {
        addError(result, ErrorOpeningDeviceInput, "Opening input", -1, -1);
    }
    if(!xsltDevice->open(QIODevice::ReadOnly)) {
        addError(result, ErrorOpeningDeviceXSL, "Opening xsl", -1, -1);
    }
    if(!_outputHolder->openForWrite()) {
        addError(result, ErrorOpeningDeviceOutput, "Opening output", -1, -1);
    }
    bool status = false;
    if(!result.isError()) {
        status = innerExecQt(result, sourceDevice, xsltDevice, _outputHolder, _parameters);
    }
    closeDevice(sourceDevice);
    closeDevice(xsltDevice);
    closeDevice(_outputHolder, result, ErrorClosingDeviceOutput, QObject::tr("output"));
    return status;
}

//-----
void XSLTExecutor::setInputLiteral(const QString &data)
{
    setInputHolder(new InputStringHolder(data), &_sourceHolder);
}

void XSLTExecutor::setInputFile(const QString &fileName)
{
    setInputHolder(new InputFileHolder(fileName), &_sourceHolder);
}

//-----
void XSLTExecutor::setOutput(const QString &fileName)
{
    setOutputHolder(new OutputFileHolder(fileName), &_outputHolder);
}

void XSLTExecutor::setOutput(QString *outputStringPtr)
{
    setOutputHolder(new OutputStringHolder(outputStringPtr), &_outputHolder);
}

//-----
void XSLTExecutor::setXSLLiteral(const QString &data)
{
    setInputHolder(new InputStringHolder(data), &_xsltHolder);
}

void XSLTExecutor::setXSLFile(const QString &fileName)
{
    setInputHolder(new InputFileHolder(fileName), &_xsltHolder);
}

//-----
void XSLTExecutor::setParameters(QHash<QString, QString> parameters)
{
    _parameters.clear();
    _parameters = parameters ;
}

//--
void XSLTExecutor::setInputHolder(InputHolder *newHolder, InputHolder **holder)
{
    if(NULL != *holder) {
        delete *holder ;
    }
    *holder = newHolder;
}

void XSLTExecutor::setOutputHolder(OutputHolder *newHolder, OutputHolder **holder)
{
    if(NULL != *holder) {
        delete *holder ;
    }
    *holder = newHolder;
}

//------------------------------------------------------------------------------------------------
bool XSLTExecutor::execSaxon(MessagesOperationResult &result)
{
#ifdef QXMLEDIT_TEST
    XSLTExecutor::saxonWasChosen = true ;
#endif

    result.setError(false);

    if(NULL == _sourceHolder) {
        addError(result, ErrorSourceMissing, QObject::tr("Source not set"), -1, -1);
    }
    if(NULL == _xsltHolder) {
        addError(result, ErrorXSLMissing, QObject::tr("XSL not set"), -1, -1);
    }
    if(NULL == _outputHolder) {
        addError(result, ErrorOutputMissing, QObject::tr("Output not set"), -1, -1);
    }
    if(result.isError()) {
        // avoiding null pointers
        return false;
    }
    if(!_sourceHolder->isFile()) {
        if(!_sourceHolder->createTempFile()) {
            addError(result, ErrorOpeningDeviceInput, QObject::tr("Unable to create temporary file for input data."), -1, -1);
        }
    }
    if(!_xsltHolder->isFile()) {
        if(!_xsltHolder->createTempFile()) {
            addError(result, ErrorOpeningDeviceXSL, QObject::tr("Unable to create temporary file for xsl template."), -1, -1);
        }
    }
    if(!_outputHolder->isFile()) {
        if(!_outputHolder->createTempFilePath()) {
            addError(result, ErrorOpeningDeviceOutput, QObject::tr("Unable to create temporary file for input data."), -1, -1);
        }
    }
    if(result.isError()) {
        _sourceHolder->removeTempFile();
        _xsltHolder->removeTempFile();
        // avoiding null pointers
        return false;
    }
    if(!result.isOk()) {
        return false;
    }
    bool status = false;
    if(!result.isError()) {
        status = innerExecSaxon(result, _sourceHolder->fileName(), _xsltHolder->fileName(), _outputHolder->fileName(), _parameters);
    }

    _sourceHolder->removeTempFile();
    _xsltHolder->removeTempFile();
    if(!_outputHolder->isFile()) {
        if(!_outputHolder->readResult()) {
            addError(result, ErrorClosingDeviceOutput, QObject::tr("Unable to get results."), -1, -1);
        }
    }
    _outputHolder->removeTempFile();

    return status;
}

bool XSLTExecutor::exec(MessagesOperationResult &result)
{
    if(NULL == _data) {
        addError(result, ErrorConfigurationMissing, QObject::tr("Configuration non valid."), -1, -1);
        return false;
    }
    if(_data->isUseSaxonXSL()) {
        return execSaxon(result);
    } else {
        return execQt(result);
    }
}

bool XSLTExecutor::execBatch(ApplicationData *appData, MessagesOperationResult &result,
                             const QString &inputFile, const QString &xsltSheet,
                             const QString &outputFile,
                             QList<QPair<QString, QString> > params,
                             const bool forceSaxon)
{
    XSLTExecutor executor(appData);
    if(NULL == appData) {
        executor.addError(result, ErrorConfigurationMissing, QObject::tr("Missing configuration."), -1, -1);
        return false;
    }
    if(forceSaxon && appData->saxonXSLPath().isEmpty()) {
        executor.addError(result, ErrorEngineNotConfigured, QObject::tr("Saxon engine not configured."), -1, -1);
        return false;
    }
    // parameters translations
    QHash<QString, QString> parameters;
    Utils::copyPairsToHash(parameters, params);
    bool success = false;

    if(forceSaxon || appData->isUseSaxonXSL()) {
        success = executor.innerExecSaxon(result,
                                          inputFile, xsltSheet,
                                          outputFile,
                                          parameters);
    } else {
        executor.setInputFile(inputFile);
        executor.setXSLFile(xsltSheet);
        executor.setOutput(outputFile);
        executor.setParameters(parameters);
        success = executor.exec(result);
    }

    return success;
}


