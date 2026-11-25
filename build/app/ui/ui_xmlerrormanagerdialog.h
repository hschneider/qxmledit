/********************************************************************************
** Form generated from reading UI file 'xmlerrormanagerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMLERRORMANAGERDIALOG_H
#define UI_XMLERRORMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XMLErrorManagerDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *errorMessage;
    QGridLayout *gridLayout;
    QLabel *textBefore;
    QLabel *textError;
    QLabel *textAfter;
    QLabel *errorBefore;
    QLabel *errorError;
    QLabel *errorAfter;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyFilePath;
    QPushButton *showContainingFolder;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *XMLErrorManagerDialog)
    {
        if (XMLErrorManagerDialog->objectName().isEmpty())
            XMLErrorManagerDialog->setObjectName("XMLErrorManagerDialog");
        XMLErrorManagerDialog->resize(616, 250);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XMLErrorManagerDialog->setWindowIcon(icon);
        XMLErrorManagerDialog->setModal(true);
        horizontalLayout_2 = new QHBoxLayout(XMLErrorManagerDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        errorMessage = new QLabel(XMLErrorManagerDialog);
        errorMessage->setObjectName("errorMessage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errorMessage->sizePolicy().hasHeightForWidth());
        errorMessage->setSizePolicy(sizePolicy);
        errorMessage->setWordWrap(true);

        verticalLayout->addWidget(errorMessage);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        textBefore = new QLabel(XMLErrorManagerDialog);
        textBefore->setObjectName("textBefore");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBefore->sizePolicy().hasHeightForWidth());
        textBefore->setSizePolicy(sizePolicy1);
        textBefore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        textBefore->setTextFormat(Qt::PlainText);
        textBefore->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(textBefore, 0, 0, 1, 1);

        textError = new QLabel(XMLErrorManagerDialog);
        textError->setObjectName("textError");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textError->sizePolicy().hasHeightForWidth());
        textError->setSizePolicy(sizePolicy2);
        textError->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        textError->setTextFormat(Qt::PlainText);
        textError->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(textError, 0, 1, 1, 1);

        textAfter = new QLabel(XMLErrorManagerDialog);
        textAfter->setObjectName("textAfter");
        sizePolicy1.setHeightForWidth(textAfter->sizePolicy().hasHeightForWidth());
        textAfter->setSizePolicy(sizePolicy1);
        textAfter->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        textAfter->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(textAfter, 0, 2, 1, 1);

        errorBefore = new QLabel(XMLErrorManagerDialog);
        errorBefore->setObjectName("errorBefore");
        sizePolicy1.setHeightForWidth(errorBefore->sizePolicy().hasHeightForWidth());
        errorBefore->setSizePolicy(sizePolicy1);
        errorBefore->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(errorBefore, 1, 0, 1, 1);

        errorError = new QLabel(XMLErrorManagerDialog);
        errorError->setObjectName("errorError");
        sizePolicy2.setHeightForWidth(errorError->sizePolicy().hasHeightForWidth());
        errorError->setSizePolicy(sizePolicy2);
        errorError->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(errorError, 1, 1, 1, 1);

        errorAfter = new QLabel(XMLErrorManagerDialog);
        errorAfter->setObjectName("errorAfter");
        sizePolicy1.setHeightForWidth(errorAfter->sizePolicy().hasHeightForWidth());
        errorAfter->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(errorAfter, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_2 = new QLabel(XMLErrorManagerDialog);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        copyFilePath = new QPushButton(XMLErrorManagerDialog);
        copyFilePath->setObjectName("copyFilePath");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(copyFilePath->sizePolicy().hasHeightForWidth());
        copyFilePath->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(copyFilePath);

        showContainingFolder = new QPushButton(XMLErrorManagerDialog);
        showContainingFolder->setObjectName("showContainingFolder");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(showContainingFolder->sizePolicy().hasHeightForWidth());
        showContainingFolder->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(showContainingFolder);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(XMLErrorManagerDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        horizontalLayout_2->addWidget(buttonBox);


        retranslateUi(XMLErrorManagerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XMLErrorManagerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XMLErrorManagerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XMLErrorManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *XMLErrorManagerDialog)
    {
        XMLErrorManagerDialog->setWindowTitle(QCoreApplication::translate("XMLErrorManagerDialog", "Error Manager", nullptr));
        errorMessage->setText(QCoreApplication::translate("XMLErrorManagerDialog", "An error has occurred loading XML", nullptr));
        textBefore->setText(QCoreApplication::translate("XMLErrorManagerDialog", "xxxxxxx", nullptr));
        textError->setText(QCoreApplication::translate("XMLErrorManagerDialog", "V", nullptr));
        textAfter->setText(QCoreApplication::translate("XMLErrorManagerDialog", "yyyyyyyy", nullptr));
        errorBefore->setText(QCoreApplication::translate("XMLErrorManagerDialog", "Error ", nullptr));
        errorError->setText(QCoreApplication::translate("XMLErrorManagerDialog", "^", nullptr));
        errorAfter->setText(QCoreApplication::translate("XMLErrorManagerDialog", " Here", nullptr));
        label_2->setText(QCoreApplication::translate("XMLErrorManagerDialog", "<html><head/><body><p><br/></p><p>Do you want to load the incomplete file?</p><p><img src=\":/special/warning\"/><span style=\" font-weight:600;\">WARNING</span>: doing so can cause missing data or unexpected consequences. If unsure, just choose 'No'.</p><p><br/></p></body></html>", nullptr));
        copyFilePath->setText(QCoreApplication::translate("XMLErrorManagerDialog", "Copy File Path in Clipboard", nullptr));
        showContainingFolder->setText(QCoreApplication::translate("XMLErrorManagerDialog", "Show Containing Folder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XMLErrorManagerDialog: public Ui_XMLErrorManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMLERRORMANAGERDIALOG_H
