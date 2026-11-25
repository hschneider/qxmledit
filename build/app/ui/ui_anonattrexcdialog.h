/********************************************************************************
** Form generated from reading UI file 'anonattrexcdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONATTREXCDIALOG_H
#define UI_ANONATTREXCDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <modules/anonymize/anonsettingwidget.h>

QT_BEGIN_NAMESPACE

class Ui_AnonAttrExcDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    AnonSettingsWidget *settings;
    QTableWidget *attributes;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdDeselectAll;
    QPushButton *cmdSelectAll;

    void setupUi(QDialog *AnonAttrExcDialog)
    {
        if (AnonAttrExcDialog->objectName().isEmpty())
            AnonAttrExcDialog->setObjectName("AnonAttrExcDialog");
        AnonAttrExcDialog->resize(899, 627);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonAttrExcDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AnonAttrExcDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        settings = new AnonSettingsWidget(AnonAttrExcDialog);
        settings->setObjectName("settings");

        verticalLayout_6->addWidget(settings);

        attributes = new QTableWidget(AnonAttrExcDialog);
        attributes->setObjectName("attributes");
        attributes->setSortingEnabled(true);

        verticalLayout_6->addWidget(attributes);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        buttonBox = new QDialogButtonBox(AnonAttrExcDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMaximumSize(QSize(16777215, 301));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_4->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdDeselectAll = new QPushButton(AnonAttrExcDialog);
        cmdDeselectAll->setObjectName("cmdDeselectAll");

        verticalLayout->addWidget(cmdDeselectAll);

        cmdSelectAll = new QPushButton(AnonAttrExcDialog);
        cmdSelectAll->setObjectName("cmdSelectAll");

        verticalLayout->addWidget(cmdSelectAll);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(AnonAttrExcDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonAttrExcDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonAttrExcDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnonAttrExcDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonAttrExcDialog)
    {
        AnonAttrExcDialog->setWindowTitle(QCoreApplication::translate("AnonAttrExcDialog", "Add Attribute Exception", nullptr));
        cmdDeselectAll->setText(QCoreApplication::translate("AnonAttrExcDialog", "Deselect All", nullptr));
        cmdSelectAll->setText(QCoreApplication::translate("AnonAttrExcDialog", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonAttrExcDialog: public Ui_AnonAttrExcDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONATTREXCDIALOG_H
