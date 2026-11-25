/********************************************************************************
** Form generated from reading UI file 'normalizenamespacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALIZENAMESPACEDIALOG_H
#define UI_NORMALIZENAMESPACEDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NormalizeNamespaceDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *namespaces;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QComboBox *prefix;
    QSpacerItem *verticalSpacer_3;
    QPushButton *select;
    QCheckBox *declareOnRoot;
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NormalizeNamespaceDialog)
    {
        if (NormalizeNamespaceDialog->objectName().isEmpty())
            NormalizeNamespaceDialog->setObjectName("NormalizeNamespaceDialog");
        NormalizeNamespaceDialog->resize(733, 230);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        NormalizeNamespaceDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(NormalizeNamespaceDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(NormalizeNamespaceDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        namespaces = new QComboBox(NormalizeNamespaceDialog);
        namespaces->setObjectName("namespaces");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(namespaces->sizePolicy().hasHeightForWidth());
        namespaces->setSizePolicy(sizePolicy);
        namespaces->setEditable(false);

        verticalLayout_2->addWidget(namespaces);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(NormalizeNamespaceDialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        prefix = new QComboBox(NormalizeNamespaceDialog);
        prefix->setObjectName("prefix");
        sizePolicy.setHeightForWidth(prefix->sizePolicy().hasHeightForWidth());
        prefix->setSizePolicy(sizePolicy);
        prefix->setEditable(true);

        verticalLayout_2->addWidget(prefix);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        select = new QPushButton(NormalizeNamespaceDialog);
        select->setObjectName("select");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(select->sizePolicy().hasHeightForWidth());
        select->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(select);

        declareOnRoot = new QCheckBox(NormalizeNamespaceDialog);
        declareOnRoot->setObjectName("declareOnRoot");

        verticalLayout_2->addWidget(declareOnRoot);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(NormalizeNamespaceDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(NormalizeNamespaceDialog);
        placeholder->setObjectName("placeholder");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy3);

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(NormalizeNamespaceDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy4);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(NormalizeNamespaceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NormalizeNamespaceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NormalizeNamespaceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NormalizeNamespaceDialog);
    } // setupUi

    void retranslateUi(QDialog *NormalizeNamespaceDialog)
    {
        NormalizeNamespaceDialog->setWindowTitle(QCoreApplication::translate("NormalizeNamespaceDialog", "Normalize Namesapce", nullptr));
        label->setText(QCoreApplication::translate("NormalizeNamespaceDialog", "Namespace:", nullptr));
        label_3->setText(QCoreApplication::translate("NormalizeNamespaceDialog", "Prefix:", nullptr));
        select->setText(QCoreApplication::translate("NormalizeNamespaceDialog", "Select...", nullptr));
        declareOnRoot->setText(QCoreApplication::translate("NormalizeNamespaceDialog", "Declare the namespace on root element", nullptr));
        label_2->setText(QCoreApplication::translate("NormalizeNamespaceDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NormalizeNamespaceDialog: public Ui_NormalizeNamespaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALIZENAMESPACEDIALOG_H
