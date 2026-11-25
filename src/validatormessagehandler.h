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

#ifndef VALIDATORMESSAGEHANDLER_H
#define VALIDATORMESSAGEHANDLER_H

#include <QString>
#include <QUrl>

// Holds the first error reported by a validation (libxml2 based).
class ValidatorMessageHandler
{
private:
    bool _hasMessage;
    QtMsgType _type;
    QString _description;
    QUrl _identifier;
    int _line;
    int _column;

public:
    ValidatorMessageHandler();
    virtual ~ValidatorMessageHandler();

    void handleMessage(QtMsgType type, const QString & description, const QUrl & identifier, const int line, const int column);

    bool hasMessage()
    {
        return _hasMessage;
    }
    QtMsgType type()
    {
        return _type;
    }
    const QString & description()
    {
        return _description ;
    }
    const QUrl & identifier()
    {
        return _identifier;
    }
    int line()
    {
        return _line ;
    }
    int column()
    {
        return _column ;
    }

    QString descriptionInPlainText();

};

#endif // VALIDATORMESSAGEHANDLER_H
