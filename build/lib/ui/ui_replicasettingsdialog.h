/********************************************************************************
** Form generated from reading UI file 'replicasettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLICASETTINGSDIALOG_H
#define UI_REPLICASETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReplicaSettingsDialog
{
public:
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QComboBox *attributes;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *startNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *cbFormat;
    QCheckBox *cbOverWrite;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbAtEnd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *separator;
    QCheckBox *cbReplace;
    QCheckBox *cbApplyChildren;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ReplicaSettingsDialog)
    {
        if (ReplicaSettingsDialog->objectName().isEmpty())
            ReplicaSettingsDialog->setObjectName("ReplicaSettingsDialog");
        ReplicaSettingsDialog->resize(429, 267);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReplicaSettingsDialog->setWindowIcon(icon);
        horizontalLayout_6 = new QHBoxLayout(ReplicaSettingsDialog);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(ReplicaSettingsDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label);

        attributes = new QComboBox(ReplicaSettingsDialog);
        attributes->setObjectName("attributes");
        attributes->setEditable(true);

        horizontalLayout_5->addWidget(attributes);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(ReplicaSettingsDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        startNumber = new QSpinBox(ReplicaSettingsDialog);
        startNumber->setObjectName("startNumber");
        startNumber->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        startNumber->setMaximum(1000000);

        horizontalLayout->addWidget(startNumber);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(ReplicaSettingsDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        cbFormat = new QComboBox(ReplicaSettingsDialog);
        cbFormat->setObjectName("cbFormat");

        horizontalLayout_2->addWidget(cbFormat);


        verticalLayout_3->addLayout(horizontalLayout_2);

        cbOverWrite = new QCheckBox(ReplicaSettingsDialog);
        cbOverWrite->setObjectName("cbOverWrite");

        verticalLayout_3->addWidget(cbOverWrite);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        cbAtEnd = new QCheckBox(ReplicaSettingsDialog);
        cbAtEnd->setObjectName("cbAtEnd");

        verticalLayout_2->addWidget(cbAtEnd);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(ReplicaSettingsDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        separator = new QLineEdit(ReplicaSettingsDialog);
        separator->setObjectName("separator");

        horizontalLayout_3->addWidget(separator);


        verticalLayout_2->addLayout(horizontalLayout_3);

        cbReplace = new QCheckBox(ReplicaSettingsDialog);
        cbReplace->setObjectName("cbReplace");

        verticalLayout_2->addWidget(cbReplace);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        cbApplyChildren = new QCheckBox(ReplicaSettingsDialog);
        cbApplyChildren->setObjectName("cbApplyChildren");

        verticalLayout_3->addWidget(cbApplyChildren);


        horizontalLayout_6->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ReplicaSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(attributes);
        label_2->setBuddy(startNumber);
        label_4->setBuddy(cbFormat);
        label_3->setBuddy(separator);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ReplicaSettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReplicaSettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReplicaSettingsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReplicaSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplicaSettingsDialog)
    {
        ReplicaSettingsDialog->setWindowTitle(QCoreApplication::translate("ReplicaSettingsDialog", "Insert Index in Attribute", nullptr));
        label->setText(QCoreApplication::translate("ReplicaSettingsDialog", "&Attribute:", nullptr));
        label_2->setText(QCoreApplication::translate("ReplicaSettingsDialog", "Start &number:", nullptr));
        startNumber->setSuffix(QString());
        label_4->setText(QCoreApplication::translate("ReplicaSettingsDialog", "&Format:", nullptr));
        cbOverWrite->setText(QCoreApplication::translate("ReplicaSettingsDialog", "Overwrite existing values", nullptr));
        cbAtEnd->setText(QCoreApplication::translate("ReplicaSettingsDialog", "Insert value at end of existing data", nullptr));
        label_3->setText(QCoreApplication::translate("ReplicaSettingsDialog", "&Separator:", nullptr));
        cbReplace->setText(QCoreApplication::translate("ReplicaSettingsDialog", "Replace existing value", nullptr));
        cbApplyChildren->setText(QCoreApplication::translate("ReplicaSettingsDialog", "Apply to the children too", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplicaSettingsDialog: public Ui_ReplicaSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLICASETTINGSDIALOG_H
