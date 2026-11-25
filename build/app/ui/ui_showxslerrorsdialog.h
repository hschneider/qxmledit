/********************************************************************************
** Form generated from reading UI file 'showxslerrorsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWXSLERRORSDIALOG_H
#define UI_SHOWXSLERRORSDIALOG_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowXSLErrorsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *messages;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdCopy;

    void setupUi(QDialog *ShowXSLErrorsDialog)
    {
        if (ShowXSLErrorsDialog->objectName().isEmpty())
            ShowXSLErrorsDialog->setObjectName("ShowXSLErrorsDialog");
        ShowXSLErrorsDialog->resize(762, 473);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ShowXSLErrorsDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ShowXSLErrorsDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        messages = new QTableWidget(ShowXSLErrorsDialog);
        messages->setObjectName("messages");
        messages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        messages->setAlternatingRowColors(true);

        horizontalLayout->addWidget(messages);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ShowXSLErrorsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        cmdCopy = new QPushButton(ShowXSLErrorsDialog);
        cmdCopy->setObjectName("cmdCopy");

        verticalLayout->addWidget(cmdCopy);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ShowXSLErrorsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShowXSLErrorsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShowXSLErrorsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ShowXSLErrorsDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowXSLErrorsDialog)
    {
        ShowXSLErrorsDialog->setWindowTitle(QCoreApplication::translate("ShowXSLErrorsDialog", "XSL Execution Errors", nullptr));
        cmdCopy->setText(QCoreApplication::translate("ShowXSLErrorsDialog", "Copy Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowXSLErrorsDialog: public Ui_ShowXSLErrorsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWXSLERRORSDIALOG_H
