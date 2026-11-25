/********************************************************************************
** Form generated from reading UI file 'xsdattributeeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDATTRIBUTEEDITOR_H
#define UI_XSDATTRIBUTEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XsdAttributeEditor
{
public:
    QLabel *label;

    void setupUi(QWidget *XsdAttributeEditor)
    {
        if (XsdAttributeEditor->objectName().isEmpty())
            XsdAttributeEditor->setObjectName("XsdAttributeEditor");
        XsdAttributeEditor->resize(456, 59);
        label = new QLabel(XsdAttributeEditor);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 221, 16));

        retranslateUi(XsdAttributeEditor);

        QMetaObject::connectSlotsByName(XsdAttributeEditor);
    } // setupUi

    void retranslateUi(QWidget *XsdAttributeEditor)
    {
        XsdAttributeEditor->setWindowTitle(QCoreApplication::translate("XsdAttributeEditor", "Form", nullptr));
        label->setText(QCoreApplication::translate("XsdAttributeEditor", "Attribute editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XsdAttributeEditor: public Ui_XsdAttributeEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDATTRIBUTEEDITOR_H
