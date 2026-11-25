/********************************************************************************
** Form generated from reading UI file 'attributefilterdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTEFILTERDIALOG_H
#define UI_ATTRIBUTEFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AttributeFilterDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *selectAllCmd;
    QPushButton *selectNoneCmd;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AttributeFilterDialog)
    {
        if (AttributeFilterDialog->objectName().isEmpty())
            AttributeFilterDialog->setObjectName("AttributeFilterDialog");
        AttributeFilterDialog->resize(637, 529);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AttributeFilterDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AttributeFilterDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        verticalLayout_3->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(AttributeFilterDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(AttributeFilterDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        selectAllCmd = new QPushButton(AttributeFilterDialog);
        selectAllCmd->setObjectName("selectAllCmd");

        verticalLayout->addWidget(selectAllCmd);

        selectNoneCmd = new QPushButton(AttributeFilterDialog);
        selectNoneCmd->setObjectName("selectNoneCmd");

        verticalLayout->addWidget(selectNoneCmd);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(AttributeFilterDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AttributeFilterDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AttributeFilterDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AttributeFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *AttributeFilterDialog)
    {
        AttributeFilterDialog->setWindowTitle(QCoreApplication::translate("AttributeFilterDialog", "Attributes filter", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AttributeFilterDialog", "Attributes", nullptr));
        selectAllCmd->setText(QCoreApplication::translate("AttributeFilterDialog", "Select all", nullptr));
        selectNoneCmd->setText(QCoreApplication::translate("AttributeFilterDialog", "Select none", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttributeFilterDialog: public Ui_AttributeFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTEFILTERDIALOG_H
