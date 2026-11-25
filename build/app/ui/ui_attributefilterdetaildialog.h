/********************************************************************************
** Form generated from reading UI file 'attributefilterdetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTEFILTERDETAILDIALOG_H
#define UI_ATTRIBUTEFILTERDETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AttributeFilterDetailDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *txtName;
    QLabel *label_4;
    QLineEdit *txtDescription;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioShow;
    QRadioButton *radioHide;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QListWidget *namesList;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *newCmd;
    QPushButton *editCmd;
    QPushButton *deleteCmd;

    void setupUi(QDialog *AttributeFilterDetailDialog)
    {
        if (AttributeFilterDetailDialog->objectName().isEmpty())
            AttributeFilterDetailDialog->setObjectName("AttributeFilterDetailDialog");
        AttributeFilterDetailDialog->resize(510, 610);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AttributeFilterDetailDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(AttributeFilterDetailDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(AttributeFilterDetailDialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        txtName = new QLineEdit(AttributeFilterDetailDialog);
        txtName->setObjectName("txtName");

        verticalLayout_2->addWidget(txtName);

        label_4 = new QLabel(AttributeFilterDetailDialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        txtDescription = new QLineEdit(AttributeFilterDetailDialog);
        txtDescription->setObjectName("txtDescription");

        verticalLayout_2->addWidget(txtDescription);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(AttributeFilterDetailDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioShow = new QRadioButton(AttributeFilterDetailDialog);
        radioShow->setObjectName("radioShow");

        verticalLayout_3->addWidget(radioShow);

        radioHide = new QRadioButton(AttributeFilterDetailDialog);
        radioHide->setObjectName("radioHide");

        verticalLayout_3->addWidget(radioHide);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        label = new QLabel(AttributeFilterDetailDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        namesList = new QListWidget(AttributeFilterDetailDialog);
        namesList->setObjectName("namesList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(namesList->sizePolicy().hasHeightForWidth());
        namesList->setSizePolicy(sizePolicy);
        namesList->setAlternatingRowColors(true);
        namesList->setModelColumn(0);
        namesList->setSelectionRectVisible(true);
        namesList->setSortingEnabled(true);

        verticalLayout_2->addWidget(namesList);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(AttributeFilterDetailDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        newCmd = new QPushButton(AttributeFilterDetailDialog);
        newCmd->setObjectName("newCmd");

        verticalLayout->addWidget(newCmd);

        editCmd = new QPushButton(AttributeFilterDetailDialog);
        editCmd->setObjectName("editCmd");

        verticalLayout->addWidget(editCmd);

        deleteCmd = new QPushButton(AttributeFilterDetailDialog);
        deleteCmd->setObjectName("deleteCmd");

        verticalLayout->addWidget(deleteCmd);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(AttributeFilterDetailDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AttributeFilterDetailDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AttributeFilterDetailDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AttributeFilterDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *AttributeFilterDetailDialog)
    {
        AttributeFilterDetailDialog->setWindowTitle(QCoreApplication::translate("AttributeFilterDetailDialog", "Profile Details", nullptr));
        label_3->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Description:", nullptr));
        label_2->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Action:", nullptr));
        radioShow->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Show only the selected", nullptr));
        radioHide->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Hide the selected", nullptr));
        label->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Attribute Names", nullptr));
        newCmd->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "New", nullptr));
        editCmd->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Edit", nullptr));
        deleteCmd->setText(QCoreApplication::translate("AttributeFilterDetailDialog", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttributeFilterDetailDialog: public Ui_AttributeFilterDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTEFILTERDETAILDIALOG_H
