/********************************************************************************
** Form generated from reading UI file 'configurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigurationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigurationDialog)
    {
        if (ConfigurationDialog->objectName().isEmpty())
            ConfigurationDialog->setObjectName("ConfigurationDialog");
        ConfigurationDialog->resize(817, 587);
        verticalLayout = new QVBoxLayout(ConfigurationDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        tabWidget = new QTabWidget(ConfigurationDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(32, 32));
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);

        horizontalLayout->addWidget(tabWidget);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ConfigurationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConfigurationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigurationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigurationDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurationDialog)
    {
        ConfigurationDialog->setWindowTitle(QCoreApplication::translate("ConfigurationDialog", "Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationDialog: public Ui_ConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
