/********************************************************************************
** Form generated from reading UI file 'namespacemanagementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAMESPACEMANAGEMENTDIALOG_H
#define UI_NAMESPACEMANAGEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NamespaceManagementDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *prefix;
    QPushButton *cmdClear;
    QLabel *label_2;
    QComboBox *uri;
    QPushButton *cmdSelect;
    QLabel *label_3;
    QLabel *nsDescription;
    QGridLayout *gridLayout_2;
    QRadioButton *radioDoNotDeclare;
    QRadioButton *radioDeclareInElement;
    QLabel *lblWarning;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *nsList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *cmdAddNs;
    QPushButton *cmdModNs;
    QPushButton *cmdRemNs;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *NamespaceManagementDialog)
    {
        if (NamespaceManagementDialog->objectName().isEmpty())
            NamespaceManagementDialog->setObjectName("NamespaceManagementDialog");
        NamespaceManagementDialog->resize(725, 553);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        NamespaceManagementDialog->setWindowIcon(icon);
        NamespaceManagementDialog->setModal(true);
        horizontalLayout_2 = new QHBoxLayout(NamespaceManagementDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(NamespaceManagementDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        prefix = new QLineEdit(groupBox);
        prefix->setObjectName("prefix");

        gridLayout->addWidget(prefix, 0, 1, 1, 1);

        cmdClear = new QPushButton(groupBox);
        cmdClear->setObjectName("cmdClear");

        gridLayout->addWidget(cmdClear, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        uri = new QComboBox(groupBox);
        uri->setObjectName("uri");
        uri->setEditable(true);

        gridLayout->addWidget(uri, 1, 1, 1, 2);

        cmdSelect = new QPushButton(groupBox);
        cmdSelect->setObjectName("cmdSelect");

        gridLayout->addWidget(cmdSelect, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        nsDescription = new QLabel(groupBox);
        nsDescription->setObjectName("nsDescription");

        gridLayout->addWidget(nsDescription, 2, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(40, -1, 0, -1);
        radioDoNotDeclare = new QRadioButton(groupBox);
        radioDoNotDeclare->setObjectName("radioDoNotDeclare");

        gridLayout_2->addWidget(radioDoNotDeclare, 1, 0, 1, 1);

        radioDeclareInElement = new QRadioButton(groupBox);
        radioDeclareInElement->setObjectName("radioDeclareInElement");

        gridLayout_2->addWidget(radioDeclareInElement, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        lblWarning = new QLabel(groupBox);
        lblWarning->setObjectName("lblWarning");
        lblWarning->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblWarning);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(NamespaceManagementDialog);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        nsList = new QTableWidget(groupBox_2);
        nsList->setObjectName("nsList");
        nsList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        nsList->setAlternatingRowColors(true);
        nsList->setSelectionMode(QAbstractItemView::SingleSelection);
        nsList->setSelectionBehavior(QAbstractItemView::SelectRows);
        nsList->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(nsList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        cmdAddNs = new QPushButton(groupBox_2);
        cmdAddNs->setObjectName("cmdAddNs");

        verticalLayout_2->addWidget(cmdAddNs);

        cmdModNs = new QPushButton(groupBox_2);
        cmdModNs->setObjectName("cmdModNs");

        verticalLayout_2->addWidget(cmdModNs);

        cmdRemNs = new QPushButton(groupBox_2);
        cmdRemNs->setObjectName("cmdRemNs");

        verticalLayout_2->addWidget(cmdRemNs);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, -1, 0, -1);
        buttonBox = new QDialogButtonBox(NamespaceManagementDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_5);

#if QT_CONFIG(shortcut)
        label->setBuddy(prefix);
        label_2->setBuddy(uri);
#endif // QT_CONFIG(shortcut)

        retranslateUi(NamespaceManagementDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NamespaceManagementDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NamespaceManagementDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NamespaceManagementDialog);
    } // setupUi

    void retranslateUi(QDialog *NamespaceManagementDialog)
    {
        NamespaceManagementDialog->setWindowTitle(QCoreApplication::translate("NamespaceManagementDialog", "Namespaces", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NamespaceManagementDialog", "Element", nullptr));
        label->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Prefix:", nullptr));
        cmdClear->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Clear", nullptr));
        label_2->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Namespace:", nullptr));
        cmdSelect->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Select", nullptr));
        label_3->setText(QCoreApplication::translate("NamespaceManagementDialog", "Description:", nullptr));
        nsDescription->setText(QCoreApplication::translate("NamespaceManagementDialog", "-----", nullptr));
        radioDoNotDeclare->setText(QCoreApplication::translate("NamespaceManagementDialog", "Do not declare &the namespace", nullptr));
        radioDeclareInElement->setText(QCoreApplication::translate("NamespaceManagementDialog", "Declare namespace in the &element itself", nullptr));
        lblWarning->setText(QCoreApplication::translate("NamespaceManagementDialog", "Warning: the namespace chosen is not declared", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NamespaceManagementDialog", "&Other namespace declarations", nullptr));
        cmdAddNs->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Add", nullptr));
        cmdModNs->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Modify", nullptr));
        cmdRemNs->setText(QCoreApplication::translate("NamespaceManagementDialog", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NamespaceManagementDialog: public Ui_NamespaceManagementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAMESPACEMANAGEMENTDIALOG_H
