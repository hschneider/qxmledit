/********************************************************************************
** Form generated from reading UI file 'configurexmlmanagementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREXMLMANAGEMENTDIALOG_H
#define UI_CONFIGUREXMLMANAGEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureXMLManagementDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkInsProlog;
    QComboBox *comboEncoding;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbInsertFormattingMetadata;
    QLabel *label_4;
    QCheckBox *chkMetadata;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *xmlIndent;
    QCheckBox *chkNoIndent;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cmdIndentReset;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *attrNoIndendation;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cmdPredefinedAttributes;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *attrNewLineAt;
    QSpinBox *attrCharacters;
    QLabel *label_8;
    QCheckBox *chkSortAttributes;
    QCheckBox *cbProcessFormattingMetadata;
    QLabel *label_9;
    QCheckBox *cbAnonLegacyAlg;

    void setupUi(QDialog *ConfigureXMLManagementDialog)
    {
        if (ConfigureXMLManagementDialog->objectName().isEmpty())
            ConfigureXMLManagementDialog->setObjectName("ConfigureXMLManagementDialog");
        ConfigureXMLManagementDialog->resize(638, 495);
        verticalLayout = new QVBoxLayout(ConfigureXMLManagementDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(ConfigureXMLManagementDialog);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setFrameShape(QFrame::NoFrame);
        label_5->setLineWidth(0);
        label_5->setMargin(16);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        chkInsProlog = new QCheckBox(ConfigureXMLManagementDialog);
        chkInsProlog->setObjectName("chkInsProlog");
        chkInsProlog->setEnabled(true);

        horizontalLayout->addWidget(chkInsProlog);

        comboEncoding = new QComboBox(ConfigureXMLManagementDialog);
        comboEncoding->setObjectName("comboEncoding");
        comboEncoding->setEnabled(true);

        horizontalLayout->addWidget(comboEncoding);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        cbInsertFormattingMetadata = new QCheckBox(ConfigureXMLManagementDialog);
        cbInsertFormattingMetadata->setObjectName("cbInsertFormattingMetadata");

        verticalLayout->addWidget(cbInsertFormattingMetadata);

        label_4 = new QLabel(ConfigureXMLManagementDialog);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);
        label_4->setMargin(16);

        verticalLayout->addWidget(label_4);

        chkMetadata = new QCheckBox(ConfigureXMLManagementDialog);
        chkMetadata->setObjectName("chkMetadata");

        verticalLayout->addWidget(chkMetadata);

        label_6 = new QLabel(ConfigureXMLManagementDialog);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setMargin(16);

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(ConfigureXMLManagementDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        xmlIndent = new QSpinBox(ConfigureXMLManagementDialog);
        xmlIndent->setObjectName("xmlIndent");
        xmlIndent->setMaximum(16);

        horizontalLayout_2->addWidget(xmlIndent);

        chkNoIndent = new QCheckBox(ConfigureXMLManagementDialog);
        chkNoIndent->setObjectName("chkNoIndent");

        horizontalLayout_2->addWidget(chkNoIndent);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        cmdIndentReset = new QPushButton(ConfigureXMLManagementDialog);
        cmdIndentReset->setObjectName("cmdIndentReset");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cmdIndentReset->sizePolicy().hasHeightForWidth());
        cmdIndentReset->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(cmdIndentReset);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        frame_2 = new QFrame(ConfigureXMLManagementDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        formLayout = new QFormLayout(frame_2);
        formLayout->setObjectName("formLayout");
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        attrNoIndendation = new QRadioButton(frame_2);
        attrNoIndendation->setObjectName("attrNoIndendation");

        horizontalLayout_3->addWidget(attrNoIndendation);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        cmdPredefinedAttributes = new QPushButton(frame_2);
        cmdPredefinedAttributes->setObjectName("cmdPredefinedAttributes");

        horizontalLayout_3->addWidget(cmdPredefinedAttributes);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        attrNewLineAt = new QRadioButton(frame_2);
        attrNewLineAt->setObjectName("attrNewLineAt");

        horizontalLayout_4->addWidget(attrNewLineAt);

        attrCharacters = new QSpinBox(frame_2);
        attrCharacters->setObjectName("attrCharacters");
        attrCharacters->setFrame(true);
        attrCharacters->setMaximum(1000);

        horizontalLayout_4->addWidget(attrCharacters);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_4);


        verticalLayout->addWidget(frame_2);

        chkSortAttributes = new QCheckBox(ConfigureXMLManagementDialog);
        chkSortAttributes->setObjectName("chkSortAttributes");

        verticalLayout->addWidget(chkSortAttributes);

        cbProcessFormattingMetadata = new QCheckBox(ConfigureXMLManagementDialog);
        cbProcessFormattingMetadata->setObjectName("cbProcessFormattingMetadata");

        verticalLayout->addWidget(cbProcessFormattingMetadata);

        label_9 = new QLabel(ConfigureXMLManagementDialog);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font);
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setLineWidth(0);
        label_9->setMargin(16);

        verticalLayout->addWidget(label_9);

        cbAnonLegacyAlg = new QCheckBox(ConfigureXMLManagementDialog);
        cbAnonLegacyAlg->setObjectName("cbAnonLegacyAlg");

        verticalLayout->addWidget(cbAnonLegacyAlg);

#if QT_CONFIG(shortcut)
        label->setBuddy(xmlIndent);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(chkInsProlog, comboEncoding);
        QWidget::setTabOrder(comboEncoding, chkMetadata);
        QWidget::setTabOrder(chkMetadata, xmlIndent);
        QWidget::setTabOrder(xmlIndent, chkNoIndent);
        QWidget::setTabOrder(chkNoIndent, cmdIndentReset);
        QWidget::setTabOrder(cmdIndentReset, attrNoIndendation);
        QWidget::setTabOrder(attrNoIndendation, attrNewLineAt);
        QWidget::setTabOrder(attrNewLineAt, attrCharacters);
        QWidget::setTabOrder(attrCharacters, cmdPredefinedAttributes);
        QWidget::setTabOrder(cmdPredefinedAttributes, chkSortAttributes);

        retranslateUi(ConfigureXMLManagementDialog);

        QMetaObject::connectSlotsByName(ConfigureXMLManagementDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureXMLManagementDialog)
    {
        ConfigureXMLManagementDialog->setWindowTitle(QCoreApplication::translate("ConfigureXMLManagementDialog", "xml management", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Creation", nullptr));
        chkInsProlog->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Automatically insert prolog with encoding:", nullptr));
        cbInsertFormattingMetadata->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Automatically insert formatting metadata processing instruction", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Metadata", nullptr));
        chkMetadata->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Automatically update metadata as processing instruction if found when saving data", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Save", nullptr));
        label->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "XML &indentation on save", nullptr));
        chkNoIndent->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "do not indent at all", nullptr));
#if QT_CONFIG(tooltip)
        cmdIndentReset->setToolTip(QCoreApplication::translate("ConfigureXMLManagementDialog", "Resets the xml indentation value.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdIndentReset->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Reset", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Attributes line length:", nullptr));
        attrNoIndendation->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "No limit", nullptr));
        cmdPredefinedAttributes->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Predefined", nullptr));
        attrNewLineAt->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "New line at", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "characters", nullptr));
        chkSortAttributes->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Sort alphabetically the attributes", nullptr));
        cbProcessFormattingMetadata->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Process formatting metadata", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Anonymization", nullptr));
        cbAnonLegacyAlg->setText(QCoreApplication::translate("ConfigureXMLManagementDialog", "Use legacy algorithm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureXMLManagementDialog: public Ui_ConfigureXMLManagementDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREXMLMANAGEMENTDIALOG_H
