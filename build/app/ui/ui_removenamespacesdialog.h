/********************************************************************************
** Form generated from reading UI file 'removenamespacesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVENAMESPACESDIALOG_H
#define UI_REMOVENAMESPACESDIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveNamespacesDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *allNamespaces;
    QRadioButton *oneNamespace;
    QComboBox *namespaces;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *prefixexOfNamespace;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *removeDeclarations;
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *RemoveNamespacesDialog)
    {
        if (RemoveNamespacesDialog->objectName().isEmpty())
            RemoveNamespacesDialog->setObjectName("RemoveNamespacesDialog");
        RemoveNamespacesDialog->resize(706, 188);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RemoveNamespacesDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(RemoveNamespacesDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        allNamespaces = new QRadioButton(RemoveNamespacesDialog);
        allNamespaces->setObjectName("allNamespaces");

        verticalLayout->addWidget(allNamespaces);

        oneNamespace = new QRadioButton(RemoveNamespacesDialog);
        oneNamespace->setObjectName("oneNamespace");

        verticalLayout->addWidget(oneNamespace);

        namespaces = new QComboBox(RemoveNamespacesDialog);
        namespaces->setObjectName("namespaces");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(namespaces->sizePolicy().hasHeightForWidth());
        namespaces->setSizePolicy(sizePolicy);
        namespaces->setEditable(false);

        verticalLayout->addWidget(namespaces);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_3 = new QLabel(RemoveNamespacesDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        prefixexOfNamespace = new QLabel(RemoveNamespacesDialog);
        prefixexOfNamespace->setObjectName("prefixexOfNamespace");

        verticalLayout->addWidget(prefixexOfNamespace);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        removeDeclarations = new QCheckBox(RemoveNamespacesDialog);
        removeDeclarations->setObjectName("removeDeclarations");

        verticalLayout->addWidget(removeDeclarations);


        horizontalLayout->addLayout(verticalLayout);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(RemoveNamespacesDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(RemoveNamespacesDialog);
        placeholder->setObjectName("placeholder");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy2);

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(RemoveNamespacesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(RemoveNamespacesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RemoveNamespacesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RemoveNamespacesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RemoveNamespacesDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveNamespacesDialog)
    {
        RemoveNamespacesDialog->setWindowTitle(QCoreApplication::translate("RemoveNamespacesDialog", "Remove Namespaces", nullptr));
        allNamespaces->setText(QCoreApplication::translate("RemoveNamespacesDialog", "All namespaces", nullptr));
        oneNamespace->setText(QCoreApplication::translate("RemoveNamespacesDialog", "Choose a namespace:", nullptr));
        label_3->setText(QCoreApplication::translate("RemoveNamespacesDialog", "Used prefixes:", nullptr));
        prefixexOfNamespace->setText(QCoreApplication::translate("RemoveNamespacesDialog", "----", nullptr));
        removeDeclarations->setText(QCoreApplication::translate("RemoveNamespacesDialog", "Remove declarations", nullptr));
        label_2->setText(QCoreApplication::translate("RemoveNamespacesDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveNamespacesDialog: public Ui_RemoveNamespacesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVENAMESPACESDIALOG_H
