/********************************************************************************
** Form generated from reading UI file 'anonprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONPROFILEDIALOG_H
#define UI_ANONPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnonProfileDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *snippets;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *newCmd;
    QPushButton *modifyCmd;
    QPushButton *deleteCmd;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AnonProfileDialog)
    {
        if (AnonProfileDialog->objectName().isEmpty())
            AnonProfileDialog->setObjectName("AnonProfileDialog");
        AnonProfileDialog->resize(794, 588);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonProfileDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AnonProfileDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        snippets = new QTreeWidget(AnonProfileDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        snippets->setHeaderItem(__qtreewidgetitem);
        snippets->setObjectName("snippets");

        verticalLayout->addWidget(snippets);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(AnonProfileDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        newCmd = new QPushButton(AnonProfileDialog);
        newCmd->setObjectName("newCmd");

        verticalLayout_2->addWidget(newCmd);

        modifyCmd = new QPushButton(AnonProfileDialog);
        modifyCmd->setObjectName("modifyCmd");

        verticalLayout_2->addWidget(modifyCmd);

        deleteCmd = new QPushButton(AnonProfileDialog);
        deleteCmd->setObjectName("deleteCmd");

        verticalLayout_2->addWidget(deleteCmd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(AnonProfileDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonProfileDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonProfileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnonProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonProfileDialog)
    {
        AnonProfileDialog->setWindowTitle(QCoreApplication::translate("AnonProfileDialog", "Profiles", nullptr));
        newCmd->setText(QCoreApplication::translate("AnonProfileDialog", "&New", nullptr));
        modifyCmd->setText(QCoreApplication::translate("AnonProfileDialog", "&Modify", nullptr));
        deleteCmd->setText(QCoreApplication::translate("AnonProfileDialog", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonProfileDialog: public Ui_AnonProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONPROFILEDIALOG_H
