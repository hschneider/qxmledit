/********************************************************************************
** Form generated from reading UI file 'elementeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTEDITOR_H
#define UI_ELEMENTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementEditor
{
public:
    QCheckBox *chkNillable;
    QCheckBox *chkAbstract;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *minOccurs;
    QSpinBox *maxOccurs;
    QLabel *label_3;
    QLineEdit *defaultValue;
    QLabel *label_4;
    QComboBox *type;
    QLineEdit *fixed;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *cmbFinal;
    QLabel *label_7;
    QComboBox *cmbBlock;
    QLabel *label_8;
    QComboBox *cmbElementCategory;
    QLabel *label_9;
    QComboBox *cmbReference;

    void setupUi(QWidget *ElementEditor)
    {
        if (ElementEditor->objectName().isEmpty())
            ElementEditor->setObjectName("ElementEditor");
        ElementEditor->resize(463, 163);
        chkNillable = new QCheckBox(ElementEditor);
        chkNillable->setObjectName("chkNillable");
        chkNillable->setGeometry(QRect(30, 40, 74, 21));
        chkNillable->setTristate(true);
        chkAbstract = new QCheckBox(ElementEditor);
        chkAbstract->setObjectName("chkAbstract");
        chkAbstract->setGeometry(QRect(100, 40, 74, 21));
        chkAbstract->setTristate(true);
        label = new QLabel(ElementEditor);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 80, 71, 16));
        label_2 = new QLabel(ElementEditor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 80, 71, 16));
        minOccurs = new QSpinBox(ElementEditor);
        minOccurs->setObjectName("minOccurs");
        minOccurs->setGeometry(QRect(100, 80, 49, 22));
        maxOccurs = new QSpinBox(ElementEditor);
        maxOccurs->setObjectName("maxOccurs");
        maxOccurs->setGeometry(QRect(240, 80, 49, 22));
        label_3 = new QLabel(ElementEditor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 110, 71, 16));
        defaultValue = new QLineEdit(ElementEditor);
        defaultValue->setObjectName("defaultValue");
        defaultValue->setGeometry(QRect(110, 110, 221, 22));
        label_4 = new QLabel(ElementEditor);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 40, 31, 16));
        type = new QComboBox(ElementEditor);
        type->setObjectName("type");
        type->setGeometry(QRect(220, 40, 211, 23));
        type->setEditable(true);
        type->setMaxVisibleItems(20);
        fixed = new QLineEdit(ElementEditor);
        fixed->setObjectName("fixed");
        fixed->setGeometry(QRect(110, 130, 221, 22));
        label_5 = new QLabel(ElementEditor);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 130, 71, 16));
        label_6 = new QLabel(ElementEditor);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 100, 31, 16));
        cmbFinal = new QComboBox(ElementEditor);
        cmbFinal->setObjectName("cmbFinal");
        cmbFinal->setGeometry(QRect(370, 100, 78, 23));
        label_7 = new QLabel(ElementEditor);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(340, 130, 31, 16));
        cmbBlock = new QComboBox(ElementEditor);
        cmbBlock->setObjectName("cmbBlock");
        cmbBlock->setGeometry(QRect(370, 130, 78, 23));
        label_8 = new QLabel(ElementEditor);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 81, 16));
        cmbElementCategory = new QComboBox(ElementEditor);
        cmbElementCategory->setObjectName("cmbElementCategory");
        cmbElementCategory->setGeometry(QRect(80, 10, 171, 23));
        label_9 = new QLabel(ElementEditor);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(260, 10, 61, 16));
        cmbReference = new QComboBox(ElementEditor);
        cmbReference->setObjectName("cmbReference");
        cmbReference->setGeometry(QRect(320, 10, 131, 23));
        cmbReference->setEditable(true);

        retranslateUi(ElementEditor);

        QMetaObject::connectSlotsByName(ElementEditor);
    } // setupUi

    void retranslateUi(QWidget *ElementEditor)
    {
        ElementEditor->setWindowTitle(QCoreApplication::translate("ElementEditor", "Form", nullptr));
        chkNillable->setText(QCoreApplication::translate("ElementEditor", "Nillable", nullptr));
        chkAbstract->setText(QCoreApplication::translate("ElementEditor", "Abstract", nullptr));
        label->setText(QCoreApplication::translate("ElementEditor", "Min Occurs", nullptr));
        label_2->setText(QCoreApplication::translate("ElementEditor", "Max Occurs", nullptr));
        label_3->setText(QCoreApplication::translate("ElementEditor", "Default Value:", nullptr));
        label_4->setText(QCoreApplication::translate("ElementEditor", "Type:", nullptr));
        fixed->setText(QString());
        label_5->setText(QCoreApplication::translate("ElementEditor", "Fixed:", nullptr));
        label_6->setText(QCoreApplication::translate("ElementEditor", "Final", nullptr));
        label_7->setText(QCoreApplication::translate("ElementEditor", "Block", nullptr));
        label_8->setText(QCoreApplication::translate("ElementEditor", "type of object:", nullptr));
        label_9->setText(QCoreApplication::translate("ElementEditor", "references:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElementEditor: public Ui_ElementEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTEDITOR_H
