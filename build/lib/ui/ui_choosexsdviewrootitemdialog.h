/********************************************************************************
** Form generated from reading UI file 'choosexsdviewrootitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEXSDVIEWROOTITEMDIALOG_H
#define UI_CHOOSEXSDVIEWROOTITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseXSDViewRootItemDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *list;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ChooseXSDViewRootItemDialog)
    {
        if (ChooseXSDViewRootItemDialog->objectName().isEmpty())
            ChooseXSDViewRootItemDialog->setObjectName("ChooseXSDViewRootItemDialog");
        ChooseXSDViewRootItemDialog->resize(442, 234);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ChooseXSDViewRootItemDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ChooseXSDViewRootItemDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ChooseXSDViewRootItemDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        list = new QListWidget(ChooseXSDViewRootItemDialog);
        list->setObjectName("list");

        verticalLayout->addWidget(list);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(ChooseXSDViewRootItemDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(ChooseXSDViewRootItemDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChooseXSDViewRootItemDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChooseXSDViewRootItemDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChooseXSDViewRootItemDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseXSDViewRootItemDialog)
    {
        ChooseXSDViewRootItemDialog->setWindowTitle(QCoreApplication::translate("ChooseXSDViewRootItemDialog", "Choose Root Candidate", nullptr));
        label->setText(QCoreApplication::translate("ChooseXSDViewRootItemDialog", "Select the root item among the candidates", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseXSDViewRootItemDialog: public Ui_ChooseXSDViewRootItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEXSDVIEWROOTITEMDIALOG_H
