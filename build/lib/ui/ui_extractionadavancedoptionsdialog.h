/********************************************************************************
** Form generated from reading UI file 'extractionadavancedoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACTIONADAVANCEDOPTIONSDIALOG_H
#define UI_EXTRACTIONADAVANCEDOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtractionAdavancedOptionsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbUseNamespaces;
    QLabel *label;
    QTableWidget *scriptTable;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdSelectAll;
    QPushButton *cmdSelectNone;

    void setupUi(QDialog *ExtractionAdavancedOptionsDialog)
    {
        if (ExtractionAdavancedOptionsDialog->objectName().isEmpty())
            ExtractionAdavancedOptionsDialog->setObjectName("ExtractionAdavancedOptionsDialog");
        ExtractionAdavancedOptionsDialog->resize(672, 566);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ExtractionAdavancedOptionsDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ExtractionAdavancedOptionsDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        cbUseNamespaces = new QCheckBox(ExtractionAdavancedOptionsDialog);
        cbUseNamespaces->setObjectName("cbUseNamespaces");
        cbUseNamespaces->setChecked(true);

        verticalLayout_2->addWidget(cbUseNamespaces);

        label = new QLabel(ExtractionAdavancedOptionsDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        scriptTable = new QTableWidget(ExtractionAdavancedOptionsDialog);
        scriptTable->setObjectName("scriptTable");
        scriptTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        scriptTable->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(scriptTable);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ExtractionAdavancedOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        cmdSelectAll = new QPushButton(ExtractionAdavancedOptionsDialog);
        cmdSelectAll->setObjectName("cmdSelectAll");

        verticalLayout->addWidget(cmdSelectAll);

        cmdSelectNone = new QPushButton(ExtractionAdavancedOptionsDialog);
        cmdSelectNone->setObjectName("cmdSelectNone");

        verticalLayout->addWidget(cmdSelectNone);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(scriptTable);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExtractionAdavancedOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExtractionAdavancedOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExtractionAdavancedOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExtractionAdavancedOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtractionAdavancedOptionsDialog)
    {
        ExtractionAdavancedOptionsDialog->setWindowTitle(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "Extraction Advanced Options", nullptr));
        cbUseNamespaces->setText(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "Use namespaces", nullptr));
        label->setText(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "&Scripts", nullptr));
#if QT_CONFIG(tooltip)
        cmdSelectAll->setToolTip(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "Select all the scripts.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSelectAll->setText(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "Select &All", nullptr));
#if QT_CONFIG(tooltip)
        cmdSelectNone->setToolTip(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "Unselect all the sripts.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSelectNone->setText(QCoreApplication::translate("ExtractionAdavancedOptionsDialog", "&Unselect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtractionAdavancedOptionsDialog: public Ui_ExtractionAdavancedOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACTIONADAVANCEDOPTIONSDIALOG_H
