/********************************************************************************
** Form generated from reading UI file 'anonsettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONSETTINGWIDGET_H
#define UI_ANONSETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnonSettingsWidget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *include;
    QRadioButton *exclude;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkRecursive;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *methodGroup;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *methodDefault;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *methodFixed;
    QLineEdit *FixedValue;
    QCheckBox *processNamespaces;

    void setupUi(QWidget *AnonSettingsWidget)
    {
        if (AnonSettingsWidget->objectName().isEmpty())
            AnonSettingsWidget->setObjectName("AnonSettingsWidget");
        AnonSettingsWidget->resize(935, 362);
        verticalLayout_4 = new QVBoxLayout(AnonSettingsWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(AnonSettingsWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        include = new QRadioButton(groupBox);
        include->setObjectName("include");

        verticalLayout_2->addWidget(include);

        exclude = new QRadioButton(groupBox);
        exclude->setObjectName("exclude");
        exclude->setChecked(true);

        verticalLayout_2->addWidget(exclude);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        chkRecursive = new QCheckBox(groupBox);
        chkRecursive->setObjectName("chkRecursive");

        horizontalLayout->addWidget(chkRecursive);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        methodGroup = new QGroupBox(AnonSettingsWidget);
        methodGroup->setObjectName("methodGroup");
        verticalLayout_3 = new QVBoxLayout(methodGroup);
        verticalLayout_3->setObjectName("verticalLayout_3");
        methodDefault = new QRadioButton(methodGroup);
        methodDefault->setObjectName("methodDefault");

        verticalLayout_3->addWidget(methodDefault);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        methodFixed = new QRadioButton(methodGroup);
        methodFixed->setObjectName("methodFixed");

        horizontalLayout_2->addWidget(methodFixed);

        FixedValue = new QLineEdit(methodGroup);
        FixedValue->setObjectName("FixedValue");

        horizontalLayout_2->addWidget(FixedValue);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(methodGroup);


        verticalLayout_4->addLayout(verticalLayout);

        processNamespaces = new QCheckBox(AnonSettingsWidget);
        processNamespaces->setObjectName("processNamespaces");

        verticalLayout_4->addWidget(processNamespaces);


        retranslateUi(AnonSettingsWidget);

        QMetaObject::connectSlotsByName(AnonSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *AnonSettingsWidget)
    {
        AnonSettingsWidget->setWindowTitle(QCoreApplication::translate("AnonSettingsWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AnonSettingsWidget", "Inclusion", nullptr));
        include->setText(QCoreApplication::translate("AnonSettingsWidget", "Anonymize", nullptr));
        exclude->setText(QCoreApplication::translate("AnonSettingsWidget", "Do not anonymize", nullptr));
        chkRecursive->setText(QCoreApplication::translate("AnonSettingsWidget", "Recursive", nullptr));
        methodGroup->setTitle(QCoreApplication::translate("AnonSettingsWidget", "Method", nullptr));
        methodDefault->setText(QCoreApplication::translate("AnonSettingsWidget", "Use default method", nullptr));
        methodFixed->setText(QCoreApplication::translate("AnonSettingsWidget", "Fixed value:", nullptr));
        processNamespaces->setText(QCoreApplication::translate("AnonSettingsWidget", "Process namespaces", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonSettingsWidget: public Ui_AnonSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONSETTINGWIDGET_H
