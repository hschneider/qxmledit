/********************************************************************************
** Form generated from reading UI file 'xsltelementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSLTELEMENTDIALOG_H
#define UI_XSLTELEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "modules/widgets/lineeditwithcompleter.h"

QT_BEGIN_NAMESPACE

class Ui_XsltElementDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *pathLabel;
    QLabel *label_2;
    QLabel *tagName;
    QLabel *labelComboName;
    QComboBox *comboName;
    QLabel *labelSelect;
    QHBoxLayout *horizontalLayout;
    LineEditWithCompleter *selectAttr;
    QLabel *label;
    QLabel *modeLabel;
    LineEditWithCompleter *modeAttr;
    QLabel *lblWarningNames;
    QCheckBox *cmdInsParam;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *XsltElementDialog)
    {
        if (XsltElementDialog->objectName().isEmpty())
            XsltElementDialog->setObjectName("XsltElementDialog");
        XsltElementDialog->resize(815, 210);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XsltElementDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(XsltElementDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(XsltElementDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        pathLabel = new QLabel(XsltElementDialog);
        pathLabel->setObjectName("pathLabel");
        pathLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, pathLabel);

        label_2 = new QLabel(XsltElementDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        tagName = new QLabel(XsltElementDialog);
        tagName->setObjectName("tagName");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, tagName);

        labelComboName = new QLabel(XsltElementDialog);
        labelComboName->setObjectName("labelComboName");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelComboName);

        comboName = new QComboBox(XsltElementDialog);
        comboName->setObjectName("comboName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboName->sizePolicy().hasHeightForWidth());
        comboName->setSizePolicy(sizePolicy);
        comboName->setEditable(true);
        comboName->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboName->setMinimumContentsLength(50);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, comboName);

        labelSelect = new QLabel(XsltElementDialog);
        labelSelect->setObjectName("labelSelect");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, labelSelect);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        selectAttr = new LineEditWithCompleter(XsltElementDialog);
        selectAttr->setObjectName("selectAttr");

        horizontalLayout->addWidget(selectAttr);

        label = new QLabel(XsltElementDialog);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/documentinfo")));

        horizontalLayout->addWidget(label);


        formLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        modeLabel = new QLabel(XsltElementDialog);
        modeLabel->setObjectName("modeLabel");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, modeLabel);

        modeAttr = new LineEditWithCompleter(XsltElementDialog);
        modeAttr->setObjectName("modeAttr");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, modeAttr);

        lblWarningNames = new QLabel(XsltElementDialog);
        lblWarningNames->setObjectName("lblWarningNames");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, lblWarningNames);

        cmdInsParam = new QCheckBox(XsltElementDialog);
        cmdInsParam->setObjectName("cmdInsParam");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, cmdInsParam);


        horizontalLayout_2->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(XsltElementDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        labelComboName->setBuddy(comboName);
        labelSelect->setBuddy(selectAttr);
        modeLabel->setBuddy(modeAttr);
#endif // QT_CONFIG(shortcut)

        retranslateUi(XsltElementDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XsltElementDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XsltElementDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XsltElementDialog);
    } // setupUi

    void retranslateUi(QDialog *XsltElementDialog)
    {
        XsltElementDialog->setWindowTitle(QCoreApplication::translate("XsltElementDialog", "XSLT Element", nullptr));
        label_5->setText(QCoreApplication::translate("XsltElementDialog", "Path:", nullptr));
        pathLabel->setText(QCoreApplication::translate("XsltElementDialog", "---", nullptr));
        label_2->setText(QCoreApplication::translate("XsltElementDialog", "Element", nullptr));
        tagName->setText(QCoreApplication::translate("XsltElementDialog", "---", nullptr));
        labelComboName->setText(QCoreApplication::translate("XsltElementDialog", "&Name:", nullptr));
        labelSelect->setText(QCoreApplication::translate("XsltElementDialog", "&Select:", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("XsltElementDialog", "<html><head/><body><p>Ctrl+Space to activate the autocompletion.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        modeLabel->setText(QCoreApplication::translate("XsltElementDialog", "M&ode:", nullptr));
        lblWarningNames->setText(QCoreApplication::translate("XsltElementDialog", "Tip: add elements and attributes names for autocompletion using the main menu command.", nullptr));
        cmdInsParam->setText(QCoreApplication::translate("XsltElementDialog", "Insert parameters.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XsltElementDialog: public Ui_XsltElementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSLTELEMENTDIALOG_H
