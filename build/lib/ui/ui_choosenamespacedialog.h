/********************************************************************************
** Form generated from reading UI file 'choosenamespacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSENAMESPACEDIALOG_H
#define UI_CHOOSENAMESPACEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseNamespaceDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTableWidget *userNamespaces;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdIns;
    QPushButton *cmdMod;
    QPushButton *cmdDel;
    QLabel *label_2;
    QTableWidget *predefNamespaces;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *prefix;
    QLabel *label_4;
    QLineEdit *uri;
    QLabel *label_5;
    QLabel *nsDescription;
    QLabel *label_6;
    QLineEdit *schemaLocation;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ChooseNamespaceDialog)
    {
        if (ChooseNamespaceDialog->objectName().isEmpty())
            ChooseNamespaceDialog->setObjectName("ChooseNamespaceDialog");
        ChooseNamespaceDialog->resize(787, 609);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ChooseNamespaceDialog->setWindowIcon(icon);
        ChooseNamespaceDialog->setModal(true);
        horizontalLayout_2 = new QHBoxLayout(ChooseNamespaceDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ChooseNamespaceDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        userNamespaces = new QTableWidget(ChooseNamespaceDialog);
        userNamespaces->setObjectName("userNamespaces");
        userNamespaces->setEditTriggers(QAbstractItemView::NoEditTriggers);
        userNamespaces->setAlternatingRowColors(true);
        userNamespaces->setSelectionMode(QAbstractItemView::SingleSelection);
        userNamespaces->setSelectionBehavior(QAbstractItemView::SelectRows);
        userNamespaces->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(userNamespaces);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdIns = new QPushButton(ChooseNamespaceDialog);
        cmdIns->setObjectName("cmdIns");

        verticalLayout->addWidget(cmdIns);

        cmdMod = new QPushButton(ChooseNamespaceDialog);
        cmdMod->setObjectName("cmdMod");

        verticalLayout->addWidget(cmdMod);

        cmdDel = new QPushButton(ChooseNamespaceDialog);
        cmdDel->setObjectName("cmdDel");

        verticalLayout->addWidget(cmdDel);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(ChooseNamespaceDialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        predefNamespaces = new QTableWidget(ChooseNamespaceDialog);
        predefNamespaces->setObjectName("predefNamespaces");
        predefNamespaces->setEditTriggers(QAbstractItemView::NoEditTriggers);
        predefNamespaces->setAlternatingRowColors(true);
        predefNamespaces->setSelectionMode(QAbstractItemView::SingleSelection);
        predefNamespaces->setSelectionBehavior(QAbstractItemView::SelectRows);
        predefNamespaces->setSortingEnabled(true);
        predefNamespaces->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        predefNamespaces->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(predefNamespaces);

        groupBox = new QGroupBox(ChooseNamespaceDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        prefix = new QLineEdit(groupBox);
        prefix->setObjectName("prefix");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prefix->sizePolicy().hasHeightForWidth());
        prefix->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, prefix);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        uri = new QLineEdit(groupBox);
        uri->setObjectName("uri");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, uri);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_5);

        nsDescription = new QLabel(groupBox);
        nsDescription->setObjectName("nsDescription");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nsDescription->sizePolicy().hasHeightForWidth());
        nsDescription->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, nsDescription);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_6);

        schemaLocation = new QLineEdit(groupBox);
        schemaLocation->setObjectName("schemaLocation");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, schemaLocation);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        buttonBox = new QDialogButtonBox(ChooseNamespaceDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);

#if QT_CONFIG(shortcut)
        label->setBuddy(userNamespaces);
        label_2->setBuddy(predefNamespaces);
        label_3->setBuddy(prefix);
        label_4->setBuddy(uri);
        label_6->setBuddy(schemaLocation);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ChooseNamespaceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChooseNamespaceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChooseNamespaceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChooseNamespaceDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseNamespaceDialog)
    {
        ChooseNamespaceDialog->setWindowTitle(QCoreApplication::translate("ChooseNamespaceDialog", "Namespaces", nullptr));
        label->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&User defined namespaces", nullptr));
        cmdIns->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Insert", nullptr));
        cmdMod->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Modify", nullptr));
        cmdDel->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Delete", nullptr));
        label_2->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Well known namespaces", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ChooseNamespaceDialog", "Selection", nullptr));
        label_3->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Prefix:", nullptr));
        label_4->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Namespace:", nullptr));
        label_5->setText(QCoreApplication::translate("ChooseNamespaceDialog", "Description:", nullptr));
        nsDescription->setText(QCoreApplication::translate("ChooseNamespaceDialog", "----", nullptr));
        label_6->setText(QCoreApplication::translate("ChooseNamespaceDialog", "&Location:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseNamespaceDialog: public Ui_ChooseNamespaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSENAMESPACEDIALOG_H
