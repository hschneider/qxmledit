/********************************************************************************
** Form generated from reading UI file 'anonaddexcelementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONADDEXCELEMENTDIALOG_H
#define UI_ANONADDEXCELEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <modules/anonymize/anonsettingwidget.h>

QT_BEGIN_NAMESPACE

class Ui_AnonAddExcElementDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    AnonSettingsWidget *settings;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AnonAddExcElementDialog)
    {
        if (AnonAddExcElementDialog->objectName().isEmpty())
            AnonAddExcElementDialog->setObjectName("AnonAddExcElementDialog");
        AnonAddExcElementDialog->resize(518, 247);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonAddExcElementDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AnonAddExcElementDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        settings = new AnonSettingsWidget(AnonAddExcElementDialog);
        settings->setObjectName("settings");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(settings);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(AnonAddExcElementDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(AnonAddExcElementDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonAddExcElementDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonAddExcElementDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnonAddExcElementDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonAddExcElementDialog)
    {
        AnonAddExcElementDialog->setWindowTitle(QCoreApplication::translate("AnonAddExcElementDialog", "Add Element Exception", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonAddExcElementDialog: public Ui_AnonAddExcElementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONADDEXCELEMENTDIALOG_H
