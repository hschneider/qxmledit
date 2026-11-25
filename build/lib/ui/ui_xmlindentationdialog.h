/********************************************************************************
** Form generated from reading UI file 'xmlindentationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMLINDENTATIONDIALOG_H
#define UI_XMLINDENTATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XmlIndentationDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *indentSettings;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *xmlIndent;
    QCheckBox *chkNoIndent;
    QCheckBox *cbSortAttributesAlpha;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *attrNoIndendation;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdPredefinedAttributes;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *attrNewLineAt;
    QSpinBox *attrCharacters;
    QLabel *label_7;
    QCheckBox *cbFormattingInfo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *XmlIndentationDialog)
    {
        if (XmlIndentationDialog->objectName().isEmpty())
            XmlIndentationDialog->setObjectName("XmlIndentationDialog");
        XmlIndentationDialog->resize(509, 270);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XmlIndentationDialog->sizePolicy().hasHeightForWidth());
        XmlIndentationDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XmlIndentationDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(XmlIndentationDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        indentSettings = new QGroupBox(XmlIndentationDialog);
        indentSettings->setObjectName("indentSettings");
        sizePolicy.setHeightForWidth(indentSettings->sizePolicy().hasHeightForWidth());
        indentSettings->setSizePolicy(sizePolicy);
        indentSettings->setCheckable(true);
        verticalLayout = new QVBoxLayout(indentSettings);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(indentSettings);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        xmlIndent = new QSpinBox(indentSettings);
        xmlIndent->setObjectName("xmlIndent");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(xmlIndent->sizePolicy().hasHeightForWidth());
        xmlIndent->setSizePolicy(sizePolicy2);
        xmlIndent->setMaximum(16);

        horizontalLayout->addWidget(xmlIndent);

        chkNoIndent = new QCheckBox(indentSettings);
        chkNoIndent->setObjectName("chkNoIndent");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(chkNoIndent->sizePolicy().hasHeightForWidth());
        chkNoIndent->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(chkNoIndent);


        verticalLayout->addLayout(horizontalLayout);

        cbSortAttributesAlpha = new QCheckBox(indentSettings);
        cbSortAttributesAlpha->setObjectName("cbSortAttributesAlpha");

        verticalLayout->addWidget(cbSortAttributesAlpha);

        frame_2 = new QFrame(indentSettings);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        formLayout = new QFormLayout(frame_2);
        formLayout->setObjectName("formLayout");
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        attrNoIndendation = new QRadioButton(frame_2);
        attrNoIndendation->setObjectName("attrNoIndendation");

        horizontalLayout_2->addWidget(attrNoIndendation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cmdPredefinedAttributes = new QPushButton(frame_2);
        cmdPredefinedAttributes->setObjectName("cmdPredefinedAttributes");

        horizontalLayout_2->addWidget(cmdPredefinedAttributes);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        attrNewLineAt = new QRadioButton(frame_2);
        attrNewLineAt->setObjectName("attrNewLineAt");

        horizontalLayout_3->addWidget(attrNewLineAt);

        attrCharacters = new QSpinBox(frame_2);
        attrCharacters->setObjectName("attrCharacters");
        attrCharacters->setFrame(true);
        attrCharacters->setMaximum(1000);

        horizontalLayout_3->addWidget(attrCharacters);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);


        verticalLayout->addWidget(frame_2);


        verticalLayout_2->addWidget(indentSettings);

        cbFormattingInfo = new QCheckBox(XmlIndentationDialog);
        cbFormattingInfo->setObjectName("cbFormattingInfo");

        verticalLayout_2->addWidget(cbFormattingInfo);

        buttonBox = new QDialogButtonBox(XmlIndentationDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(xmlIndent);
#endif // QT_CONFIG(shortcut)

        retranslateUi(XmlIndentationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XmlIndentationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XmlIndentationDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XmlIndentationDialog);
    } // setupUi

    void retranslateUi(QDialog *XmlIndentationDialog)
    {
        XmlIndentationDialog->setWindowTitle(QCoreApplication::translate("XmlIndentationDialog", "Indentation", nullptr));
        indentSettings->setTitle(QCoreApplication::translate("XmlIndentationDialog", "&Override general settings", nullptr));
        label->setText(QCoreApplication::translate("XmlIndentationDialog", "XML &indentation", nullptr));
        chkNoIndent->setText(QCoreApplication::translate("XmlIndentationDialog", "do &not indent at all", nullptr));
        cbSortAttributesAlpha->setText(QCoreApplication::translate("XmlIndentationDialog", "Sort attributes &alphabetically", nullptr));
        label_6->setText(QCoreApplication::translate("XmlIndentationDialog", "Attributes line length:", nullptr));
        attrNoIndendation->setText(QCoreApplication::translate("XmlIndentationDialog", "N&o limit", nullptr));
        cmdPredefinedAttributes->setText(QCoreApplication::translate("XmlIndentationDialog", "&Predefined", nullptr));
        attrNewLineAt->setText(QCoreApplication::translate("XmlIndentationDialog", "New &line at", nullptr));
        label_7->setText(QCoreApplication::translate("XmlIndentationDialog", "characters", nullptr));
        cbFormattingInfo->setText(QCoreApplication::translate("XmlIndentationDialog", "Use formatting processing instruction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XmlIndentationDialog: public Ui_XmlIndentationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMLINDENTATIONDIALOG_H
