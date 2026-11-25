/********************************************************************************
** Form generated from reading UI file 'xsdchoiceeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDCHOICEEDITOR_H
#define UI_XSDCHOICEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XsdChoiceEditor
{
public:
    QLabel *label;

    void setupUi(QWidget *XsdChoiceEditor)
    {
        if (XsdChoiceEditor->objectName().isEmpty())
            XsdChoiceEditor->setObjectName("XsdChoiceEditor");
        XsdChoiceEditor->resize(429, 73);
        label = new QLabel(XsdChoiceEditor);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 251, 16));

        retranslateUi(XsdChoiceEditor);

        QMetaObject::connectSlotsByName(XsdChoiceEditor);
    } // setupUi

    void retranslateUi(QWidget *XsdChoiceEditor)
    {
        XsdChoiceEditor->setWindowTitle(QCoreApplication::translate("XsdChoiceEditor", "Form", nullptr));
        label->setText(QCoreApplication::translate("XsdChoiceEditor", "Choice editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XsdChoiceEditor: public Ui_XsdChoiceEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDCHOICEEDITOR_H
