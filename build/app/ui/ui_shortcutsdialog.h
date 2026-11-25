/********************************************************************************
** Form generated from reading UI file 'shortcutsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTSDIALOG_H
#define UI_SHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShortcutsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ShortcutsDialog)
    {
        if (ShortcutsDialog->objectName().isEmpty())
            ShortcutsDialog->setObjectName("ShortcutsDialog");
        ShortcutsDialog->setWindowModality(Qt::WindowModal);
        ShortcutsDialog->resize(1085, 728);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ShortcutsDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ShortcutsDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(ShortcutsDialog);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ShortcutsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ShortcutsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShortcutsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShortcutsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutsDialog)
    {
        ShortcutsDialog->setWindowTitle(QCoreApplication::translate("ShortcutsDialog", "Common Shortcuts for Editing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutsDialog: public Ui_ShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTSDIALOG_H
