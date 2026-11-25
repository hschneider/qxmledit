/********************************************************************************
** Form generated from reading UI file 'configurationgeneraloptions.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONGENERALOPTIONS_H
#define UI_CONFIGURATIONGENERALOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigurationGeneralOptions
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QCheckBox *showWelcomePage;
    QCheckBox *autoscroll;
    QCheckBox *enableExperiments;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QCheckBox *enableEFontSize;
    QCheckBox *enableFWAFont;
    QLabel *elementFontSummary;
    QPushButton *changeElementsFont;
    QFontComboBox *fixedSizeAttrComboFont;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpinBox *fixedSizeAttributeFontSize;
    QCheckBox *chkDefBold;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *enableLogs;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QComboBox *logLevelCombo;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *cbAttrLen;
    QSpinBox *attrLenCols;
    QCheckBox *cbShowTagComplex;
    QCheckBox *cbEnableMultiThreading;
    QToolButton *toolButton;
    QCheckBox *expandTreeAfterLoad;
    QCheckBox *cbLightTheme;
    QCheckBox *cbShowImagesInTextTooltip;
    QCheckBox *cbOpenFilesInNewWindow;
    QCheckBox *cbSingleInstance;
    QCheckBox *cbSHowElementsIcon;
    QCheckBox *cbShowPathInElementTooltip;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cmdResetBehavior;

    void setupUi(QWidget *ConfigurationGeneralOptions)
    {
        if (ConfigurationGeneralOptions->objectName().isEmpty())
            ConfigurationGeneralOptions->setObjectName("ConfigurationGeneralOptions");
        ConfigurationGeneralOptions->resize(799, 486);
        verticalLayout_2 = new QVBoxLayout(ConfigurationGeneralOptions);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ConfigurationGeneralOptions);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, -1, -1, -1);
        showWelcomePage = new QCheckBox(ConfigurationGeneralOptions);
        showWelcomePage->setObjectName("showWelcomePage");

        verticalLayout->addWidget(showWelcomePage);

        autoscroll = new QCheckBox(ConfigurationGeneralOptions);
        autoscroll->setObjectName("autoscroll");

        verticalLayout->addWidget(autoscroll);

        enableExperiments = new QCheckBox(ConfigurationGeneralOptions);
        enableExperiments->setObjectName("enableExperiments");

        verticalLayout->addWidget(enableExperiments);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(ConfigurationGeneralOptions);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        enableEFontSize = new QCheckBox(ConfigurationGeneralOptions);
        enableEFontSize->setObjectName("enableEFontSize");

        gridLayout->addWidget(enableEFontSize, 1, 0, 1, 1);

        enableFWAFont = new QCheckBox(ConfigurationGeneralOptions);
        enableFWAFont->setObjectName("enableFWAFont");

        gridLayout->addWidget(enableFWAFont, 2, 0, 1, 1);

        elementFontSummary = new QLabel(ConfigurationGeneralOptions);
        elementFontSummary->setObjectName("elementFontSummary");
        elementFontSummary->setFrameShape(QFrame::Panel);
        elementFontSummary->setFrameShadow(QFrame::Sunken);
        elementFontSummary->setLineWidth(2);

        gridLayout->addWidget(elementFontSummary, 1, 1, 1, 1);

        changeElementsFont = new QPushButton(ConfigurationGeneralOptions);
        changeElementsFont->setObjectName("changeElementsFont");

        gridLayout->addWidget(changeElementsFont, 1, 2, 1, 1);

        fixedSizeAttrComboFont = new QFontComboBox(ConfigurationGeneralOptions);
        fixedSizeAttrComboFont->setObjectName("fixedSizeAttrComboFont");
        fixedSizeAttrComboFont->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fixedSizeAttrComboFont->sizePolicy().hasHeightForWidth());
        fixedSizeAttrComboFont->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fixedSizeAttrComboFont, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(ConfigurationGeneralOptions);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        fixedSizeAttributeFontSize = new QSpinBox(ConfigurationGeneralOptions);
        fixedSizeAttributeFontSize->setObjectName("fixedSizeAttributeFontSize");
        fixedSizeAttributeFontSize->setEnabled(true);
        fixedSizeAttributeFontSize->setMinimum(1);

        horizontalLayout->addWidget(fixedSizeAttributeFontSize);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        chkDefBold = new QCheckBox(ConfigurationGeneralOptions);
        chkDefBold->setObjectName("chkDefBold");

        gridLayout->addWidget(chkDefBold, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        enableLogs = new QCheckBox(ConfigurationGeneralOptions);
        enableLogs->setObjectName("enableLogs");

        horizontalLayout_2->addWidget(enableLogs);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(ConfigurationGeneralOptions);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        logLevelCombo = new QComboBox(ConfigurationGeneralOptions);
        logLevelCombo->setObjectName("logLevelCombo");

        horizontalLayout_2->addWidget(logLevelCombo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cbAttrLen = new QCheckBox(ConfigurationGeneralOptions);
        cbAttrLen->setObjectName("cbAttrLen");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbAttrLen->sizePolicy().hasHeightForWidth());
        cbAttrLen->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(cbAttrLen);

        attrLenCols = new QSpinBox(ConfigurationGeneralOptions);
        attrLenCols->setObjectName("attrLenCols");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(attrLenCols->sizePolicy().hasHeightForWidth());
        attrLenCols->setSizePolicy(sizePolicy2);
        attrLenCols->setMinimum(1);
        attrLenCols->setMaximum(2500);

        horizontalLayout_3->addWidget(attrLenCols);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        cbShowTagComplex = new QCheckBox(ConfigurationGeneralOptions);
        cbShowTagComplex->setObjectName("cbShowTagComplex");

        gridLayout_2->addWidget(cbShowTagComplex, 3, 1, 1, 1);

        cbEnableMultiThreading = new QCheckBox(ConfigurationGeneralOptions);
        cbEnableMultiThreading->setObjectName("cbEnableMultiThreading");

        gridLayout_2->addWidget(cbEnableMultiThreading, 5, 1, 1, 1);

        toolButton = new QToolButton(ConfigurationGeneralOptions);
        toolButton->setObjectName("toolButton");

        gridLayout_2->addWidget(toolButton, 4, 1, 1, 1);

        expandTreeAfterLoad = new QCheckBox(ConfigurationGeneralOptions);
        expandTreeAfterLoad->setObjectName("expandTreeAfterLoad");

        gridLayout_2->addWidget(expandTreeAfterLoad, 0, 0, 1, 1);

        cbLightTheme = new QCheckBox(ConfigurationGeneralOptions);
        cbLightTheme->setObjectName("cbLightTheme");

        gridLayout_2->addWidget(cbLightTheme, 4, 0, 1, 1);

        cbShowImagesInTextTooltip = new QCheckBox(ConfigurationGeneralOptions);
        cbShowImagesInTextTooltip->setObjectName("cbShowImagesInTextTooltip");

        gridLayout_2->addWidget(cbShowImagesInTextTooltip, 1, 0, 1, 1);

        cbOpenFilesInNewWindow = new QCheckBox(ConfigurationGeneralOptions);
        cbOpenFilesInNewWindow->setObjectName("cbOpenFilesInNewWindow");

        gridLayout_2->addWidget(cbOpenFilesInNewWindow, 3, 0, 1, 1);

        cbSingleInstance = new QCheckBox(ConfigurationGeneralOptions);
        cbSingleInstance->setObjectName("cbSingleInstance");

        gridLayout_2->addWidget(cbSingleInstance, 5, 0, 1, 1);

        cbSHowElementsIcon = new QCheckBox(ConfigurationGeneralOptions);
        cbSHowElementsIcon->setObjectName("cbSHowElementsIcon");

        gridLayout_2->addWidget(cbSHowElementsIcon, 1, 1, 1, 1);

        cbShowPathInElementTooltip = new QCheckBox(ConfigurationGeneralOptions);
        cbShowPathInElementTooltip->setObjectName("cbShowPathInElementTooltip");

        gridLayout_2->addWidget(cbShowPathInElementTooltip, 2, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(ConfigurationGeneralOptions);
        label_7->setObjectName("label_7");
        label_7->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        cmdResetBehavior = new QPushButton(ConfigurationGeneralOptions);
        cmdResetBehavior->setObjectName("cmdResetBehavior");

        horizontalLayout_4->addWidget(cmdResetBehavior);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(ConfigurationGeneralOptions);

        QMetaObject::connectSlotsByName(ConfigurationGeneralOptions);
    } // setupUi

    void retranslateUi(QWidget *ConfigurationGeneralOptions)
    {
        ConfigurationGeneralOptions->setWindowTitle(QCoreApplication::translate("ConfigurationGeneralOptions", "Form", nullptr));
        label->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Behavior", nullptr));
        showWelcomePage->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Show welcome page", nullptr));
        autoscroll->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Autoscroll in the elements tree", nullptr));
        enableExperiments->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Enable experimental features for test purpose", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Appearance", nullptr));
        enableEFontSize->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Override the font for elements display", nullptr));
        enableFWAFont->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Override the font for fixed spacing attributes ", nullptr));
        elementFontSummary->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "<Not Set>", nullptr));
        changeElementsFont->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "change font...", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "size", nullptr));
        chkDefBold->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Default font bold", nullptr));
        enableLogs->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Enable Logs", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Level:", nullptr));
        cbAttrLen->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Limit atttributes length to columns:", nullptr));
        cbShowTagComplex->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Show decorated element Tags", nullptr));
        cbEnableMultiThreading->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Enable multithreading", nullptr));
        toolButton->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "...", nullptr));
        expandTreeAfterLoad->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Automatically expand editor tree when loading data", nullptr));
        cbLightTheme->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Light theme", nullptr));
        cbShowImagesInTextTooltip->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Show images in text tooltip", nullptr));
        cbOpenFilesInNewWindow->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Open files in new window", nullptr));
        cbSingleInstance->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Single instance application", nullptr));
        cbSHowElementsIcon->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Show elements icon", nullptr));
        cbShowPathInElementTooltip->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Show path in element tooltip", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">Warning</span><span style=\" font-size:9pt;\">: changes will be applied only after a program restart.</span></p></td></tr></table></body></html>", nullptr));
        cmdResetBehavior->setText(QCoreApplication::translate("ConfigurationGeneralOptions", "Reset behavior", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationGeneralOptions: public Ui_ConfigurationGeneralOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONGENERALOPTIONS_H
