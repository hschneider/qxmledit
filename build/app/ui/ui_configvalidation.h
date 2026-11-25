/********************************************************************************
** Form generated from reading UI file 'configvalidation.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGVALIDATION_H
#define UI_CONFIGVALIDATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigValidation
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QCheckBox *chbAutomaticValidationLoading;
    QCheckBox *chkEnableDiskCache;
    QLabel *label;
    QLineEdit *extValidationProgram;
    QLabel *label_3;
    QCheckBox *chkDisplayHorizontal;
    QLabel *label_4;
    QCheckBox *embedFontsPDFReport;
    QCheckBox *embedImageInHTML;
    QCheckBox *useGraphVizReportHTML;
    QCheckBox *overrideGraphVizPathReport;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *dotVizPathReportHTML;
    QPushButton *browseDotVizPath;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *pathInst2Xsd;
    QPushButton *browseInst2Xsd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *pathXsd2Inst;
    QPushButton *browseXsd2Inst;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *ConfigValidation)
    {
        if (ConfigValidation->objectName().isEmpty())
            ConfigValidation->setObjectName("ConfigValidation");
        ConfigValidation->resize(491, 482);
        verticalLayout = new QVBoxLayout(ConfigValidation);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(ConfigValidation);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        chbAutomaticValidationLoading = new QCheckBox(ConfigValidation);
        chbAutomaticValidationLoading->setObjectName("chbAutomaticValidationLoading");

        verticalLayout->addWidget(chbAutomaticValidationLoading);

        chkEnableDiskCache = new QCheckBox(ConfigValidation);
        chkEnableDiskCache->setObjectName("chkEnableDiskCache");

        verticalLayout->addWidget(chkEnableDiskCache);

        label = new QLabel(ConfigValidation);
        label->setObjectName("label");
        label->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        extValidationProgram = new QLineEdit(ConfigValidation);
        extValidationProgram->setObjectName("extValidationProgram");
        extValidationProgram->setEnabled(false);

        verticalLayout->addWidget(extValidationProgram);

        label_3 = new QLabel(ConfigValidation);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        chkDisplayHorizontal = new QCheckBox(ConfigValidation);
        chkDisplayHorizontal->setObjectName("chkDisplayHorizontal");

        verticalLayout->addWidget(chkDisplayHorizontal);

        label_4 = new QLabel(ConfigValidation);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        embedFontsPDFReport = new QCheckBox(ConfigValidation);
        embedFontsPDFReport->setObjectName("embedFontsPDFReport");

        verticalLayout->addWidget(embedFontsPDFReport);

        embedImageInHTML = new QCheckBox(ConfigValidation);
        embedImageInHTML->setObjectName("embedImageInHTML");

        verticalLayout->addWidget(embedImageInHTML);

        useGraphVizReportHTML = new QCheckBox(ConfigValidation);
        useGraphVizReportHTML->setObjectName("useGraphVizReportHTML");

        verticalLayout->addWidget(useGraphVizReportHTML);

        overrideGraphVizPathReport = new QCheckBox(ConfigValidation);
        overrideGraphVizPathReport->setObjectName("overrideGraphVizPathReport");

        verticalLayout->addWidget(overrideGraphVizPathReport);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dotVizPathReportHTML = new QLineEdit(ConfigValidation);
        dotVizPathReportHTML->setObjectName("dotVizPathReportHTML");

        horizontalLayout->addWidget(dotVizPathReportHTML);

        browseDotVizPath = new QPushButton(ConfigValidation);
        browseDotVizPath->setObjectName("browseDotVizPath");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browseDotVizPath->sizePolicy().hasHeightForWidth());
        browseDotVizPath->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        browseDotVizPath->setIcon(icon);

        horizontalLayout->addWidget(browseDotVizPath);


        verticalLayout->addLayout(horizontalLayout);

        label_5 = new QLabel(ConfigValidation);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(ConfigValidation);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        pathInst2Xsd = new QLineEdit(ConfigValidation);
        pathInst2Xsd->setObjectName("pathInst2Xsd");

        horizontalLayout_2->addWidget(pathInst2Xsd);

        browseInst2Xsd = new QPushButton(ConfigValidation);
        browseInst2Xsd->setObjectName("browseInst2Xsd");
        sizePolicy1.setHeightForWidth(browseInst2Xsd->sizePolicy().hasHeightForWidth());
        browseInst2Xsd->setSizePolicy(sizePolicy1);
        browseInst2Xsd->setIcon(icon);

        horizontalLayout_2->addWidget(browseInst2Xsd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(ConfigValidation);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        pathXsd2Inst = new QLineEdit(ConfigValidation);
        pathXsd2Inst->setObjectName("pathXsd2Inst");

        horizontalLayout_3->addWidget(pathXsd2Inst);

        browseXsd2Inst = new QPushButton(ConfigValidation);
        browseXsd2Inst->setObjectName("browseXsd2Inst");
        sizePolicy1.setHeightForWidth(browseXsd2Inst->sizePolicy().hasHeightForWidth());
        browseXsd2Inst->setSizePolicy(sizePolicy1);
        browseXsd2Inst->setIcon(icon);

        horizontalLayout_3->addWidget(browseXsd2Inst);


        verticalLayout->addLayout(horizontalLayout_3);

        label_8 = new QLabel(ConfigValidation);
        label_8->setObjectName("label_8");
        QFont font1;
        font1.setItalic(true);
        label_8->setFont(font1);

        verticalLayout->addWidget(label_8);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

#if QT_CONFIG(shortcut)
        label_6->setBuddy(pathInst2Xsd);
        label_7->setBuddy(pathInst2Xsd);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ConfigValidation);

        QMetaObject::connectSlotsByName(ConfigValidation);
    } // setupUi

    void retranslateUi(QWidget *ConfigValidation)
    {
        ConfigValidation->setWindowTitle(QCoreApplication::translate("ConfigValidation", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigValidation", "XSD Validation and Loading", nullptr));
        chbAutomaticValidationLoading->setText(QCoreApplication::translate("ConfigValidation", "Enable automatic loading of XML Schema associated to file edited", nullptr));
        chkEnableDiskCache->setText(QCoreApplication::translate("ConfigValidation", "Enable disk cache (maximum size: 1 Mega)", nullptr));
        label->setText(QCoreApplication::translate("ConfigValidation", "External validation program", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigValidation", "XSD Viewer", nullptr));
        chkDisplayHorizontal->setText(QCoreApplication::translate("ConfigValidation", "Horizontal Layout", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigValidation", "XSD Report", nullptr));
        embedFontsPDFReport->setText(QCoreApplication::translate("ConfigValidation", "Embed fonts in PDF report", nullptr));
        embedImageInHTML->setText(QCoreApplication::translate("ConfigValidation", "Embed diagram image in HTML (instead of create a separate file)", nullptr));
        useGraphVizReportHTML->setText(QCoreApplication::translate("ConfigValidation", "Use Graphviz to generate diagram image in HTML report (experimental)", nullptr));
        overrideGraphVizPathReport->setText(QCoreApplication::translate("ConfigValidation", "Override Graphviz path (system path will be used if empty)", nullptr));
        browseDotVizPath->setText(QString());
        label_5->setText(QCoreApplication::translate("ConfigValidation", "XSD Manipulation", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigValidation", "Path of inst2xsd", nullptr));
        browseInst2Xsd->setText(QString());
        label_7->setText(QCoreApplication::translate("ConfigValidation", "Path of xsd2inst", nullptr));
        browseXsd2Inst->setText(QString());
        label_8->setText(QCoreApplication::translate("ConfigValidation", "This feature generates XML/XSD and requires Apache XMLBeans.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigValidation: public Ui_ConfigValidation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGVALIDATION_H
