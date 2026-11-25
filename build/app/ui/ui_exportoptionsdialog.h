/********************************************************************************
** Form generated from reading UI file 'exportoptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTOPTIONSDIALOG_H
#define UI_EXPORTOPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportOptionsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *useNamespaces;
    QCheckBox *insertDeclaration;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportOptionsDialog)
    {
        if (ExportOptionsDialog->objectName().isEmpty())
            ExportOptionsDialog->setObjectName("ExportOptionsDialog");
        ExportOptionsDialog->resize(420, 105);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ExportOptionsDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ExportOptionsDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        useNamespaces = new QCheckBox(ExportOptionsDialog);
        useNamespaces->setObjectName("useNamespaces");

        verticalLayout->addWidget(useNamespaces);

        insertDeclaration = new QCheckBox(ExportOptionsDialog);
        insertDeclaration->setObjectName("insertDeclaration");
        insertDeclaration->setChecked(true);

        verticalLayout->addWidget(insertDeclaration);


        horizontalLayout->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(ExportOptionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(ExportOptionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportOptionsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportOptionsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportOptionsDialog)
    {
        ExportOptionsDialog->setWindowTitle(QCoreApplication::translate("ExportOptionsDialog", "Export Options", nullptr));
        useNamespaces->setText(QCoreApplication::translate("ExportOptionsDialog", "Use &Namespaces", nullptr));
        insertDeclaration->setText(QCoreApplication::translate("ExportOptionsDialog", "Insert declaration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportOptionsDialog: public Ui_ExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTOPTIONSDIALOG_H
