/********************************************************************************
** Form generated from reading UI file 'xsdrooteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDROOTEDITOR_H
#define UI_XSDROOTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XsdRootEditor
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *XsdRootEditor)
    {
        if (XsdRootEditor->objectName().isEmpty())
            XsdRootEditor->setObjectName("XsdRootEditor");
        XsdRootEditor->resize(489, 165);
        label = new QLabel(XsdRootEditor);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 46, 14));
        label_2 = new QLabel(XsdRootEditor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 40, 121, 16));
        label_3 = new QLabel(XsdRootEditor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 70, 121, 16));
        label_4 = new QLabel(XsdRootEditor);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 40, 81, 16));
        comboBox = new QComboBox(XsdRootEditor);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(160, 40, 101, 23));
        comboBox_2 = new QComboBox(XsdRootEditor);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(160, 60, 101, 23));
        comboBox_3 = new QComboBox(XsdRootEditor);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(380, 40, 78, 23));
        label_5 = new QLabel(XsdRootEditor);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 60, 71, 16));
        label_6 = new QLabel(XsdRootEditor);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 100, 101, 16));
        lineEdit = new QLineEdit(XsdRootEditor);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 90, 281, 22));
        lineEdit_2 = new QLineEdit(XsdRootEditor);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(70, 10, 113, 22));
        label_7 = new QLabel(XsdRootEditor);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 120, 46, 14));
        label_8 = new QLabel(XsdRootEditor);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(25, 140, 111, 20));
        lineEdit_3 = new QLineEdit(XsdRootEditor);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(160, 120, 113, 22));
        lineEdit_4 = new QLineEdit(XsdRootEditor);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(160, 140, 301, 22));

        retranslateUi(XsdRootEditor);

        QMetaObject::connectSlotsByName(XsdRootEditor);
    } // setupUi

    void retranslateUi(QWidget *XsdRootEditor)
    {
        XsdRootEditor->setWindowTitle(QCoreApplication::translate("XsdRootEditor", "Form", nullptr));
        label->setText(QCoreApplication::translate("XsdRootEditor", "id", nullptr));
        label_2->setText(QCoreApplication::translate("XsdRootEditor", "attribute form default:", nullptr));
        label_3->setText(QCoreApplication::translate("XsdRootEditor", "element form default:", nullptr));
        label_4->setText(QCoreApplication::translate("XsdRootEditor", "block default:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("XsdRootEditor", "qualified", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("XsdRootEditor", "unqualified", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("XsdRootEditor", "qualified", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("XsdRootEditor", "unqualified", nullptr));

        label_5->setText(QCoreApplication::translate("XsdRootEditor", "final default:", nullptr));
        label_6->setText(QCoreApplication::translate("XsdRootEditor", "target namespace:", nullptr));
        label_7->setText(QCoreApplication::translate("XsdRootEditor", "version:", nullptr));
        label_8->setText(QCoreApplication::translate("XsdRootEditor", "namespace (xmlns)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XsdRootEditor: public Ui_XsdRootEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDROOTEDITOR_H
