/********************************************************************************
** Form generated from reading UI file 'setprefixdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPREFIXDIALOG_H
#define UI_SETPREFIXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetPrefixDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *prefixes;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SetPrefixDialog)
    {
        if (SetPrefixDialog->objectName().isEmpty())
            SetPrefixDialog->setObjectName("SetPrefixDialog");
        SetPrefixDialog->resize(663, 166);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SetPrefixDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SetPrefixDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(SetPrefixDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        prefixes = new QComboBox(SetPrefixDialog);
        prefixes->setObjectName("prefixes");
        prefixes->setEditable(true);

        verticalLayout->addWidget(prefixes);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(SetPrefixDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(SetPrefixDialog);
        placeholder->setObjectName("placeholder");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy1);

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(SetPrefixDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SetPrefixDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SetPrefixDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SetPrefixDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SetPrefixDialog);
    } // setupUi

    void retranslateUi(QDialog *SetPrefixDialog)
    {
        SetPrefixDialog->setWindowTitle(QCoreApplication::translate("SetPrefixDialog", "Assign Prefix", nullptr));
        label->setText(QCoreApplication::translate("SetPrefixDialog", "Prefix to set:", nullptr));
        label_2->setText(QCoreApplication::translate("SetPrefixDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetPrefixDialog: public Ui_SetPrefixDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPREFIXDIALOG_H
