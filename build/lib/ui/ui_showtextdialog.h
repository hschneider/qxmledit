/********************************************************************************
** Form generated from reading UI file 'showtextdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTEXTDIALOG_H
#define UI_SHOWTEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowTextDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShowTextDialog)
    {
        if (ShowTextDialog->objectName().isEmpty())
            ShowTextDialog->setObjectName("ShowTextDialog");
        ShowTextDialog->resize(571, 473);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ShowTextDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ShowTextDialog);
        verticalLayout->setObjectName("verticalLayout");
        textBrowser = new QTextBrowser(ShowTextDialog);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(ShowTextDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ShowTextDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShowTextDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShowTextDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ShowTextDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowTextDialog)
    {
        ShowTextDialog->setWindowTitle(QCoreApplication::translate("ShowTextDialog", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowTextDialog: public Ui_ShowTextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTEXTDIALOG_H
