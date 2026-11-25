/********************************************************************************
** Form generated from reading UI file 'editnamespacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITNAMESPACEDIALOG_H
#define UI_EDITNAMESPACEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditNamespaceDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLineEdit *name;
    QLabel *label_8;
    QLineEdit *description;
    QLabel *label_9;
    QLineEdit *tags;
    QLabel *label_10;
    QLabel *creationDate;
    QLabel *label_11;
    QLabel *updateDate;
    QLabel *label;
    QLineEdit *defaultPrefix;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *uri;
    QLabel *label_5;
    QLineEdit *schemaLocation;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *prefixes;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdAddP;
    QPushButton *cmdModP;
    QPushButton *cmdDelP;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *EditNamespaceDialog)
    {
        if (EditNamespaceDialog->objectName().isEmpty())
            EditNamespaceDialog->setObjectName("EditNamespaceDialog");
        EditNamespaceDialog->resize(619, 527);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditNamespaceDialog->setWindowIcon(icon);
        EditNamespaceDialog->setModal(true);
        horizontalLayout_2 = new QHBoxLayout(EditNamespaceDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7 = new QLabel(EditNamespaceDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        name = new QLineEdit(EditNamespaceDialog);
        name->setObjectName("name");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMaxLength(40);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, name);

        label_8 = new QLabel(EditNamespaceDialog);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_8);

        description = new QLineEdit(EditNamespaceDialog);
        description->setObjectName("description");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, description);

        label_9 = new QLabel(EditNamespaceDialog);
        label_9->setObjectName("label_9");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        tags = new QLineEdit(EditNamespaceDialog);
        tags->setObjectName("tags");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, tags);

        label_10 = new QLabel(EditNamespaceDialog);
        label_10->setObjectName("label_10");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_10);

        creationDate = new QLabel(EditNamespaceDialog);
        creationDate->setObjectName("creationDate");
        sizePolicy2.setHeightForWidth(creationDate->sizePolicy().hasHeightForWidth());
        creationDate->setSizePolicy(sizePolicy2);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, creationDate);

        label_11 = new QLabel(EditNamespaceDialog);
        label_11->setObjectName("label_11");
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_11);

        updateDate = new QLabel(EditNamespaceDialog);
        updateDate->setObjectName("updateDate");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(updateDate->sizePolicy().hasHeightForWidth());
        updateDate->setSizePolicy(sizePolicy3);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, updateDate);

        label = new QLabel(EditNamespaceDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label);

        defaultPrefix = new QLineEdit(EditNamespaceDialog);
        defaultPrefix->setObjectName("defaultPrefix");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, defaultPrefix);


        verticalLayout_3->addLayout(formLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(EditNamespaceDialog);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        uri = new QLineEdit(EditNamespaceDialog);
        uri->setObjectName("uri");

        verticalLayout_2->addWidget(uri);


        verticalLayout_3->addLayout(verticalLayout_2);

        label_5 = new QLabel(EditNamespaceDialog);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        schemaLocation = new QLineEdit(EditNamespaceDialog);
        schemaLocation->setObjectName("schemaLocation");

        verticalLayout_3->addWidget(schemaLocation);

        label_2 = new QLabel(EditNamespaceDialog);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        prefixes = new QListWidget(EditNamespaceDialog);
        prefixes->setObjectName("prefixes");
        prefixes->setEditTriggers(QAbstractItemView::AllEditTriggers);
        prefixes->setAlternatingRowColors(true);
        prefixes->setSelectionBehavior(QAbstractItemView::SelectRows);
        prefixes->setUniformItemSizes(true);
        prefixes->setSelectionRectVisible(true);

        horizontalLayout->addWidget(prefixes);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdAddP = new QPushButton(EditNamespaceDialog);
        cmdAddP->setObjectName("cmdAddP");

        verticalLayout->addWidget(cmdAddP);

        cmdModP = new QPushButton(EditNamespaceDialog);
        cmdModP->setObjectName("cmdModP");

        verticalLayout->addWidget(cmdModP);

        cmdDelP = new QPushButton(EditNamespaceDialog);
        cmdDelP->setObjectName("cmdDelP");

        verticalLayout->addWidget(cmdDelP);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        buttonBox = new QDialogButtonBox(EditNamespaceDialog);
        buttonBox->setObjectName("buttonBox");
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(name);
        label_8->setBuddy(description);
        label_9->setBuddy(tags);
        label->setBuddy(defaultPrefix);
        label_4->setBuddy(uri);
        label_5->setBuddy(schemaLocation);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(name, description);
        QWidget::setTabOrder(description, tags);
        QWidget::setTabOrder(tags, defaultPrefix);
        QWidget::setTabOrder(defaultPrefix, uri);
        QWidget::setTabOrder(uri, schemaLocation);
        QWidget::setTabOrder(schemaLocation, cmdAddP);
        QWidget::setTabOrder(cmdAddP, cmdModP);
        QWidget::setTabOrder(cmdModP, cmdDelP);
        QWidget::setTabOrder(cmdDelP, prefixes);

        retranslateUi(EditNamespaceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditNamespaceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditNamespaceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditNamespaceDialog);
    } // setupUi

    void retranslateUi(QDialog *EditNamespaceDialog)
    {
        EditNamespaceDialog->setWindowTitle(QCoreApplication::translate("EditNamespaceDialog", "Edit Namespace", nullptr));
        label_7->setText(QCoreApplication::translate("EditNamespaceDialog", "&Name:", nullptr));
        label_8->setText(QCoreApplication::translate("EditNamespaceDialog", "D&escription:", nullptr));
        label_9->setText(QCoreApplication::translate("EditNamespaceDialog", "&Tags (comma separed):", nullptr));
        label_10->setText(QCoreApplication::translate("EditNamespaceDialog", "Created on:", nullptr));
        creationDate->setText(QCoreApplication::translate("EditNamespaceDialog", "------", nullptr));
        label_11->setText(QCoreApplication::translate("EditNamespaceDialog", "Last modified on:", nullptr));
        updateDate->setText(QCoreApplication::translate("EditNamespaceDialog", "---", nullptr));
        label->setText(QCoreApplication::translate("EditNamespaceDialog", "Default &prefix:", nullptr));
        label_4->setText(QCoreApplication::translate("EditNamespaceDialog", "XML Schema definition (XSD)", nullptr));
        label_5->setText(QCoreApplication::translate("EditNamespaceDialog", "Schema &location", nullptr));
        label_2->setText(QCoreApplication::translate("EditNamespaceDialog", "Other prefixes:", nullptr));
        cmdAddP->setText(QCoreApplication::translate("EditNamespaceDialog", "&Add", nullptr));
        cmdModP->setText(QCoreApplication::translate("EditNamespaceDialog", "&Modify", nullptr));
        cmdDelP->setText(QCoreApplication::translate("EditNamespaceDialog", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditNamespaceDialog: public Ui_EditNamespaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITNAMESPACEDIALOG_H
