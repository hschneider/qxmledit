/********************************************************************************
** Form generated from reading UI file 'xsdsinglecommentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDSINGLECOMMENTDIALOG_H
#define UI_XSDSINGLECOMMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <xmleditwidget.h>

QT_BEGIN_NAMESPACE

class Ui_XSDSingleCommentDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *typeDoc;
    QRadioButton *typeAppInfo;
    QLabel *label;
    QComboBox *uri;
    QLabel *label_2;
    QComboBox *lang;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *textValue;
    QWidget *viewAsXML;
    QVBoxLayout *verticalLayout_2;
    XmlEditWidget *xmlEditor;
    QLabel *warningNoXML;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdAdvanced;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *XSDSingleCommentDialog)
    {
        if (XSDSingleCommentDialog->objectName().isEmpty())
            XSDSingleCommentDialog->setObjectName("XSDSingleCommentDialog");
        XSDSingleCommentDialog->setWindowModality(Qt::WindowModal);
        XSDSingleCommentDialog->resize(754, 456);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDSingleCommentDialog->setWindowIcon(icon);
        XSDSingleCommentDialog->setSizeGripEnabled(true);
        XSDSingleCommentDialog->setModal(true);
        horizontalLayout = new QHBoxLayout(XSDSingleCommentDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4 = new QLabel(XSDSingleCommentDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_4);

        groupBox = new QGroupBox(XSDSingleCommentDialog);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        typeDoc = new QRadioButton(groupBox);
        typeDoc->setObjectName("typeDoc");

        verticalLayout->addWidget(typeDoc);

        typeAppInfo = new QRadioButton(groupBox);
        typeAppInfo->setObjectName("typeAppInfo");

        verticalLayout->addWidget(typeAppInfo);


        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, groupBox);

        label = new QLabel(XSDSingleCommentDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        uri = new QComboBox(XSDSingleCommentDialog);
        uri->setObjectName("uri");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(uri->sizePolicy().hasHeightForWidth());
        uri->setSizePolicy(sizePolicy);
        uri->setEditable(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, uri);

        label_2 = new QLabel(XSDSingleCommentDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        lang = new QComboBox(XSDSingleCommentDialog);
        lang->setObjectName("lang");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lang->sizePolicy().hasHeightForWidth());
        lang->setSizePolicy(sizePolicy1);
        lang->setEditable(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lang);

        label_3 = new QLabel(XSDSingleCommentDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_3);

        tabWidget = new QTabWidget(XSDSingleCommentDialog);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        textValue = new QPlainTextEdit(tab);
        textValue->setObjectName("textValue");

        horizontalLayout_2->addWidget(textValue);

        tabWidget->addTab(tab, QString());
        viewAsXML = new QWidget();
        viewAsXML->setObjectName("viewAsXML");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(viewAsXML->sizePolicy().hasHeightForWidth());
        viewAsXML->setSizePolicy(sizePolicy4);
        verticalLayout_2 = new QVBoxLayout(viewAsXML);
        verticalLayout_2->setObjectName("verticalLayout_2");
        xmlEditor = new XmlEditWidget(viewAsXML);
        xmlEditor->setObjectName("xmlEditor");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(xmlEditor->sizePolicy().hasHeightForWidth());
        xmlEditor->setSizePolicy(sizePolicy5);

        verticalLayout_2->addWidget(xmlEditor);

        warningNoXML = new QLabel(viewAsXML);
        warningNoXML->setObjectName("warningNoXML");
        sizePolicy4.setHeightForWidth(warningNoXML->sizePolicy().hasHeightForWidth());
        warningNoXML->setSizePolicy(sizePolicy4);
        warningNoXML->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(warningNoXML);

        tabWidget->addTab(viewAsXML, QString());

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, tabWidget);


        horizontalLayout->addLayout(formLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        buttonBox = new QDialogButtonBox(XSDSingleCommentDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy6);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_4->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        cmdAdvanced = new QPushButton(XSDSingleCommentDialog);
        cmdAdvanced->setObjectName("cmdAdvanced");

        verticalLayout_4->addWidget(cmdAdvanced);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_4);

#if QT_CONFIG(shortcut)
        label->setBuddy(uri);
        label_2->setBuddy(lang);
        label_3->setBuddy(tabWidget);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(textValue, typeDoc);
        QWidget::setTabOrder(typeDoc, typeAppInfo);
        QWidget::setTabOrder(typeAppInfo, uri);
        QWidget::setTabOrder(uri, lang);
        QWidget::setTabOrder(lang, tabWidget);
        QWidget::setTabOrder(tabWidget, cmdAdvanced);

        retranslateUi(XSDSingleCommentDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDSingleCommentDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDSingleCommentDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XSDSingleCommentDialog);
    } // setupUi

    void retranslateUi(QDialog *XSDSingleCommentDialog)
    {
        XSDSingleCommentDialog->setWindowTitle(QCoreApplication::translate("XSDSingleCommentDialog", "XSD Annotation", nullptr));
        label_4->setText(QCoreApplication::translate("XSDSingleCommentDialog", "Type:", nullptr));
        groupBox->setTitle(QString());
        typeDoc->setText(QCoreApplication::translate("XSDSingleCommentDialog", "&documentation", nullptr));
        typeAppInfo->setText(QCoreApplication::translate("XSDSingleCommentDialog", "&appInfo", nullptr));
        label->setText(QCoreApplication::translate("XSDSingleCommentDialog", "&Source:", nullptr));
        label_2->setText(QCoreApplication::translate("XSDSingleCommentDialog", "&Language:", nullptr));
        label_3->setText(QCoreApplication::translate("XSDSingleCommentDialog", "&Comment:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("XSDSingleCommentDialog", "Text", nullptr));
        warningNoXML->setText(QCoreApplication::translate("XSDSingleCommentDialog", "The content is not valid XML.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(viewAsXML), QCoreApplication::translate("XSDSingleCommentDialog", "XML", nullptr));
        cmdAdvanced->setText(QCoreApplication::translate("XSDSingleCommentDialog", "Advanced...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDSingleCommentDialog: public Ui_XSDSingleCommentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDSINGLECOMMENTDIALOG_H
