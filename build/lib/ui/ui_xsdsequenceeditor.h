/********************************************************************************
** Form generated from reading UI file 'xsdsequenceeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDSEQUENCEEDITOR_H
#define UI_XSDSEQUENCEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XsdSequenceEditor
{
public:
    QLabel *label;

    void setupUi(QWidget *XsdSequenceEditor)
    {
        if (XsdSequenceEditor->objectName().isEmpty())
            XsdSequenceEditor->setObjectName("XsdSequenceEditor");
        XsdSequenceEditor->resize(439, 113);
        label = new QLabel(XsdSequenceEditor);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 301, 16));

        retranslateUi(XsdSequenceEditor);

        QMetaObject::connectSlotsByName(XsdSequenceEditor);
    } // setupUi

    void retranslateUi(QWidget *XsdSequenceEditor)
    {
        XsdSequenceEditor->setWindowTitle(QCoreApplication::translate("XsdSequenceEditor", "Form", nullptr));
        label->setText(QCoreApplication::translate("XsdSequenceEditor", "sequence editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XsdSequenceEditor: public Ui_XsdSequenceEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDSEQUENCEEDITOR_H
