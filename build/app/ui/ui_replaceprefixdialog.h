/********************************************************************************
** Form generated from reading UI file 'replaceprefixdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEPREFIXDIALOG_H
#define UI_REPLACEPREFIXDIALOG_H

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

class Ui_ReplacePrefixDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *allPrefixes;
    QRadioButton *onePrefix;
    QComboBox *prefixes;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QComboBox *replacePrefix;
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ReplacePrefixDialog)
    {
        if (ReplacePrefixDialog->objectName().isEmpty())
            ReplacePrefixDialog->setObjectName("ReplacePrefixDialog");
        ReplacePrefixDialog->resize(678, 195);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReplacePrefixDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ReplacePrefixDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        allPrefixes = new QRadioButton(ReplacePrefixDialog);
        allPrefixes->setObjectName("allPrefixes");

        verticalLayout->addWidget(allPrefixes);

        onePrefix = new QRadioButton(ReplacePrefixDialog);
        onePrefix->setObjectName("onePrefix");

        verticalLayout->addWidget(onePrefix);

        prefixes = new QComboBox(ReplacePrefixDialog);
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

        label = new QLabel(ReplacePrefixDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        replacePrefix = new QComboBox(ReplacePrefixDialog);
        replacePrefix->setObjectName("replacePrefix");
        sizePolicy.setHeightForWidth(replacePrefix->sizePolicy().hasHeightForWidth());
        replacePrefix->setSizePolicy(sizePolicy);
        replacePrefix->setEditable(true);

        verticalLayout->addWidget(replacePrefix);


        horizontalLayout->addLayout(verticalLayout);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(ReplacePrefixDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(ReplacePrefixDialog);
        placeholder->setObjectName("placeholder");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy2);
        placeholder->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(ReplacePrefixDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(replacePrefix);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ReplacePrefixDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReplacePrefixDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReplacePrefixDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReplacePrefixDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplacePrefixDialog)
    {
        ReplacePrefixDialog->setWindowTitle(QCoreApplication::translate("ReplacePrefixDialog", "Replace Prefix", nullptr));
        allPrefixes->setText(QCoreApplication::translate("ReplacePrefixDialog", "&All prefixes", nullptr));
        onePrefix->setText(QCoreApplication::translate("ReplacePrefixDialog", "&Choose a prefix:", nullptr));
        label->setText(QCoreApplication::translate("ReplacePrefixDialog", "&Replace with:", nullptr));
        label_2->setText(QCoreApplication::translate("ReplacePrefixDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplacePrefixDialog: public Ui_ReplacePrefixDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEPREFIXDIALOG_H
