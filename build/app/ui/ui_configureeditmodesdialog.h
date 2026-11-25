/********************************************************************************
** Form generated from reading UI file 'configureeditmodesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREEDITMODESDIALOG_H
#define UI_CONFIGUREEDITMODESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureEditModesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QCheckBox *cbPreferEditAsForm;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QCheckBox *cbShowXSLTPanel;
    QCheckBox *cbAutomaticallySwitchToXSLTMode;
    QCheckBox *cbSaxon;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *saxonPath;
    QPushButton *cmdSaxonPath;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QCheckBox *cbShowSCXMLPanel;
    QCheckBox *cbAutomaticallySwitchToSCXMLMode;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ConfigureEditModesDialog)
    {
        if (ConfigureEditModesDialog->objectName().isEmpty())
            ConfigureEditModesDialog->setObjectName("ConfigureEditModesDialog");
        ConfigureEditModesDialog->resize(612, 367);
        verticalLayout = new QVBoxLayout(ConfigureEditModesDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(ConfigureEditModesDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        cbPreferEditAsForm = new QCheckBox(ConfigureEditModesDialog);
        cbPreferEditAsForm->setObjectName("cbPreferEditAsForm");

        verticalLayout->addWidget(cbPreferEditAsForm);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(ConfigureEditModesDialog);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);

        verticalLayout->addWidget(label);

        cbShowXSLTPanel = new QCheckBox(ConfigureEditModesDialog);
        cbShowXSLTPanel->setObjectName("cbShowXSLTPanel");

        verticalLayout->addWidget(cbShowXSLTPanel);

        cbAutomaticallySwitchToXSLTMode = new QCheckBox(ConfigureEditModesDialog);
        cbAutomaticallySwitchToXSLTMode->setObjectName("cbAutomaticallySwitchToXSLTMode");

        verticalLayout->addWidget(cbAutomaticallySwitchToXSLTMode);

        cbSaxon = new QCheckBox(ConfigureEditModesDialog);
        cbSaxon->setObjectName("cbSaxon");

        verticalLayout->addWidget(cbSaxon);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saxonPath = new QLineEdit(ConfigureEditModesDialog);
        saxonPath->setObjectName("saxonPath");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(saxonPath->sizePolicy().hasHeightForWidth());
        saxonPath->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(saxonPath);

        cmdSaxonPath = new QPushButton(ConfigureEditModesDialog);
        cmdSaxonPath->setObjectName("cmdSaxonPath");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdSaxonPath->setIcon(icon);

        horizontalLayout->addWidget(cmdSaxonPath);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(ConfigureEditModesDialog);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        cbShowSCXMLPanel = new QCheckBox(ConfigureEditModesDialog);
        cbShowSCXMLPanel->setObjectName("cbShowSCXMLPanel");

        verticalLayout->addWidget(cbShowSCXMLPanel);

        cbAutomaticallySwitchToSCXMLMode = new QCheckBox(ConfigureEditModesDialog);
        cbAutomaticallySwitchToSCXMLMode->setObjectName("cbAutomaticallySwitchToSCXMLMode");

        verticalLayout->addWidget(cbAutomaticallySwitchToSCXMLMode);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureEditModesDialog);

        QMetaObject::connectSlotsByName(ConfigureEditModesDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureEditModesDialog)
    {
        ConfigureEditModesDialog->setWindowTitle(QCoreApplication::translate("ConfigureEditModesDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureEditModesDialog", "XML mode", nullptr));
        cbPreferEditAsForm->setText(QCoreApplication::translate("ConfigureEditModesDialog", "edit elements in a form instead of a text box", nullptr));
        label->setText(QCoreApplication::translate("ConfigureEditModesDialog", "XSLT mode", nullptr));
        cbShowXSLTPanel->setText(QCoreApplication::translate("ConfigureEditModesDialog", "Show the \"Switch to XSLT\" panel when opening files.", nullptr));
        cbAutomaticallySwitchToXSLTMode->setText(QCoreApplication::translate("ConfigureEditModesDialog", "Automatically switch to XSLT edit mode when opening an XSLT file.", nullptr));
        cbSaxon->setText(QCoreApplication::translate("ConfigureEditModesDialog", "Use external Java engine with Saxon command line syntax", nullptr));
        cmdSaxonPath->setText(QString());
        label_2->setText(QCoreApplication::translate("ConfigureEditModesDialog", "SCXML mode", nullptr));
        cbShowSCXMLPanel->setText(QCoreApplication::translate("ConfigureEditModesDialog", "Show the \"Switch to SCXML\" panel when opening files.", nullptr));
        cbAutomaticallySwitchToSCXMLMode->setText(QCoreApplication::translate("ConfigureEditModesDialog", "Automatically switch to SCXML edit mode when opening a SCXML file.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureEditModesDialog: public Ui_ConfigureEditModesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREEDITMODESDIALOG_H
