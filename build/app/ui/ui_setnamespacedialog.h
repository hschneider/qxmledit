/********************************************************************************
** Form generated from reading UI file 'setnamespacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETNAMESPACEDIALOG_H
#define UI_SETNAMESPACEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
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

class Ui_SetNamespaceDialog
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
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SetNamespaceDialog)
    {
        if (SetNamespaceDialog->objectName().isEmpty())
            SetNamespaceDialog->setObjectName("SetNamespaceDialog");
        SetNamespaceDialog->resize(766, 196);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SetNamespaceDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SetNamespaceDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(SetNamespaceDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        namespaces = new QComboBox(SetNamespaceDialog);
        namespaces->setObjectName("namespaces");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(namespaces->sizePolicy().hasHeightForWidth());
        namespaces->setSizePolicy(sizePolicy);
        namespaces->setAutoFillBackground(false);
        namespaces->setEditable(true);
        namespaces->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        verticalLayout_2->addWidget(namespaces);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(SetNamespaceDialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        prefix = new QComboBox(SetNamespaceDialog);
        prefix->setObjectName("prefix");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(prefix->sizePolicy().hasHeightForWidth());
        prefix->setSizePolicy(sizePolicy1);
        prefix->setEditable(true);

        verticalLayout_2->addWidget(prefix);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        select = new QPushButton(SetNamespaceDialog);
        select->setObjectName("select");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(select->sizePolicy().hasHeightForWidth());
        select->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(select);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(SetNamespaceDialog);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(SetNamespaceDialog);
        placeholder->setObjectName("placeholder");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy3);
        placeholder->setMinimumSize(QSize(50, 50));
        placeholder->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SetNamespaceDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
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


        retranslateUi(SetNamespaceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SetNamespaceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SetNamespaceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SetNamespaceDialog);
    } // setupUi

    void retranslateUi(QDialog *SetNamespaceDialog)
    {
        SetNamespaceDialog->setWindowTitle(QCoreApplication::translate("SetNamespaceDialog", "Assign Namespace", nullptr));
        label->setText(QCoreApplication::translate("SetNamespaceDialog", "Namespace:", nullptr));
        label_3->setText(QCoreApplication::translate("SetNamespaceDialog", "Prefix:", nullptr));
        select->setText(QCoreApplication::translate("SetNamespaceDialog", "Select...", nullptr));
        label_2->setText(QCoreApplication::translate("SetNamespaceDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetNamespaceDialog: public Ui_SetNamespaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETNAMESPACEDIALOG_H
