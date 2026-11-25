/********************************************************************************
** Form generated from reading UI file 'licensedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSEDIALOG_H
#define UI_LICENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LicenseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LicenseDialog)
    {
        if (LicenseDialog->objectName().isEmpty())
            LicenseDialog->setObjectName("LicenseDialog");
        LicenseDialog->resize(591, 502);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        LicenseDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(LicenseDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(LicenseDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        textBrowser = new QTextBrowser(LicenseDialog);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_2->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(LicenseDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(LicenseDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, LicenseDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, LicenseDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(LicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *LicenseDialog)
    {
        LicenseDialog->setWindowTitle(QCoreApplication::translate("LicenseDialog", "License Agreement", nullptr));
        label->setText(QCoreApplication::translate("LicenseDialog", "Please read the license agreement. The license can be reviewed in the \"About\" panel.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LicenseDialog: public Ui_LicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSEDIALOG_H
