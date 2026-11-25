/********************************************************************************
** Form generated from reading UI file 'removeprefixdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPREFIXDIALOG_H
#define UI_REMOVEPREFIXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemovePrefixDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *allPrefixes;
    QRadioButton *onePrefix;
    QComboBox *prefixes;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *RemovePrefixDialog)
    {
        if (RemovePrefixDialog->objectName().isEmpty())
            RemovePrefixDialog->setObjectName("RemovePrefixDialog");
        RemovePrefixDialog->resize(686, 216);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RemovePrefixDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(RemovePrefixDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        allPrefixes = new QRadioButton(RemovePrefixDialog);
        allPrefixes->setObjectName("allPrefixes");

        verticalLayout->addWidget(allPrefixes);

        onePrefix = new QRadioButton(RemovePrefixDialog);
        onePrefix->setObjectName("onePrefix");

        verticalLayout->addWidget(onePrefix);

        prefixes = new QComboBox(RemovePrefixDialog);
        prefixes->setObjectName("prefixes");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prefixes->sizePolicy().hasHeightForWidth());
        prefixes->setSizePolicy(sizePolicy);
        prefixes->setEditable(true);

        verticalLayout->addWidget(prefixes);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(RemovePrefixDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(RemovePrefixDialog);
        placeholder->setObjectName("placeholder");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy2);

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        buttonBox = new QDialogButtonBox(RemovePrefixDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(RemovePrefixDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RemovePrefixDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RemovePrefixDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RemovePrefixDialog);
    } // setupUi

    void retranslateUi(QDialog *RemovePrefixDialog)
    {
        RemovePrefixDialog->setWindowTitle(QCoreApplication::translate("RemovePrefixDialog", "Remove Prefix", nullptr));
        allPrefixes->setText(QCoreApplication::translate("RemovePrefixDialog", "All prefixes", nullptr));
        onePrefix->setText(QCoreApplication::translate("RemovePrefixDialog", "Choose a prefix:", nullptr));
        label_2->setText(QCoreApplication::translate("RemovePrefixDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemovePrefixDialog: public Ui_RemovePrefixDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPREFIXDIALOG_H
