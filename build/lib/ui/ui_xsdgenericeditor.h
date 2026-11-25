/********************************************************************************
** Form generated from reading UI file 'xsdgenericeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDGENERICEDITOR_H
#define UI_XSDGENERICEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XSDGenericEditor
{
public:
    QLabel *label;

    void setupUi(QWidget *XSDGenericEditor)
    {
        if (XSDGenericEditor->objectName().isEmpty())
            XSDGenericEditor->setObjectName("XSDGenericEditor");
        XSDGenericEditor->resize(508, 135);
        label = new QLabel(XSDGenericEditor);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 46, 14));

        retranslateUi(XSDGenericEditor);

        QMetaObject::connectSlotsByName(XSDGenericEditor);
    } // setupUi

    void retranslateUi(QWidget *XSDGenericEditor)
    {
        XSDGenericEditor->setWindowTitle(QCoreApplication::translate("XSDGenericEditor", "Form", nullptr));
        label->setText(QCoreApplication::translate("XSDGenericEditor", "Generic editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDGenericEditor: public Ui_XSDGenericEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDGENERICEDITOR_H
