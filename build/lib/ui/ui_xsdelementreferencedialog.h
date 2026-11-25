/********************************************************************************
** Form generated from reading UI file 'xsdelementreferencedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDELEMENTREFERENCEDIALOG_H
#define UI_XSDELEMENTREFERENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XSDElementReferenceDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *XSDElementReferenceDialog)
    {
        if (XSDElementReferenceDialog->objectName().isEmpty())
            XSDElementReferenceDialog->setObjectName("XSDElementReferenceDialog");
        XSDElementReferenceDialog->resize(571, 526);
        horizontalLayout = new QHBoxLayout(XSDElementReferenceDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(XSDElementReferenceDialog);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        buttonBox = new QDialogButtonBox(XSDElementReferenceDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(XSDElementReferenceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDElementReferenceDialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDElementReferenceDialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(XSDElementReferenceDialog);
    } // setupUi

    void retranslateUi(QDialog *XSDElementReferenceDialog)
    {
        XSDElementReferenceDialog->setWindowTitle(QCoreApplication::translate("XSDElementReferenceDialog", "XSD Element Reference", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("XSDElementReferenceDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Oxygen'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:13pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif'; font-size:11pt;\">Element</span></li></ul>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 2;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">simpleType</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 3;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">restriction, base</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 4;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">simpleType</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:1"
                        "1pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">facets</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">list</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">union</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font"
                        "-family:'Liberation Sans, sans-serif';\">complexType</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 3;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">simpleContent</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 4;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">restriction, base</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: "
                        "5;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">simpleType</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">facets</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">extension, base</span> </li></ul>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 5;\"><li style=\" font-"
                        "family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">attribute</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">attributeGroup</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">complexContent</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 4;\"><li style=\" font-family:'.Lucida Grande"
                        " UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">restriction, base</span> </li>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 5;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">group</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">all</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin"
                        "-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">choice</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">sequence</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">attribute</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans"
                        ", sans-serif';\">attributeGroup</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">anyAttribute</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">extension, base</span> </li></ul>\n"
"<ul type=\"circle\" style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 5;\"><li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif'"
                        ";\">group</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">all</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">choice</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">sequence</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">attribute</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">AttributeGroup</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">anyAttribute</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">all</span> </li>\n"
"<li style="
                        "\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">group</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">choice</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">sequence</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        "; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">attribute</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">attributeGroup</span> </li>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">anyAttribute</span> </li></ul>\n"
"<li style=\" font-family:'.Lucida Grande UI'; font-size:11pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%;\"><span style=\" font-family:'Liberation Sans, sans-serif';\">unique, key, keyref</span> </li></ul>\n"
"<p style=\"-qt-paragraph"
                        "-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI'; font-size:13pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDElementReferenceDialog: public Ui_XSDElementReferenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDELEMENTREFERENCEDIALOG_H
