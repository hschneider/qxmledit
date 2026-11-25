/********************************************************************************
** Form generated from reading UI file 'attributeprofilemgmtdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTEPROFILEMGMTDIALOG_H
#define UI_ATTRIBUTEPROFILEMGMTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AttributeProfileMgmtDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *profilesList;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *newButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QPushButton *activateButton;

    void setupUi(QDialog *AttributeProfileMgmtDialog)
    {
        if (AttributeProfileMgmtDialog->objectName().isEmpty())
            AttributeProfileMgmtDialog->setObjectName("AttributeProfileMgmtDialog");
        AttributeProfileMgmtDialog->resize(501, 549);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AttributeProfileMgmtDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AttributeProfileMgmtDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(AttributeProfileMgmtDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        profilesList = new QListWidget(AttributeProfileMgmtDialog);
        profilesList->setObjectName("profilesList");

        verticalLayout_2->addWidget(profilesList);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(AttributeProfileMgmtDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        newButton = new QPushButton(AttributeProfileMgmtDialog);
        newButton->setObjectName("newButton");

        verticalLayout->addWidget(newButton);

        editButton = new QPushButton(AttributeProfileMgmtDialog);
        editButton->setObjectName("editButton");

        verticalLayout->addWidget(editButton);

        deleteButton = new QPushButton(AttributeProfileMgmtDialog);
        deleteButton->setObjectName("deleteButton");

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        activateButton = new QPushButton(AttributeProfileMgmtDialog);
        activateButton->setObjectName("activateButton");

        verticalLayout->addWidget(activateButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(AttributeProfileMgmtDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AttributeProfileMgmtDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AttributeProfileMgmtDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AttributeProfileMgmtDialog);
    } // setupUi

    void retranslateUi(QDialog *AttributeProfileMgmtDialog)
    {
        AttributeProfileMgmtDialog->setWindowTitle(QCoreApplication::translate("AttributeProfileMgmtDialog", "Profiles list", nullptr));
        label->setText(QCoreApplication::translate("AttributeProfileMgmtDialog", "Profiles list", nullptr));
        newButton->setText(QCoreApplication::translate("AttributeProfileMgmtDialog", "New...", nullptr));
        editButton->setText(QCoreApplication::translate("AttributeProfileMgmtDialog", "Edit...", nullptr));
        deleteButton->setText(QCoreApplication::translate("AttributeProfileMgmtDialog", "Delete", nullptr));
        activateButton->setText(QCoreApplication::translate("AttributeProfileMgmtDialog", "Activate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttributeProfileMgmtDialog: public Ui_AttributeProfileMgmtDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTEPROFILEMGMTDIALOG_H
