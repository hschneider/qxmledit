/********************************************************************************
** Form generated from reading UI file 'xincludedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XINCLUDEDIALOG_H
#define UI_XINCLUDEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XIncludeDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *href;
    QLabel *label_2;
    QComboBox *parse;
    QLabel *label_3;
    QLineEdit *xpointer;
    QLabel *label_4;
    QLineEdit *fragid;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *setxmlid;
    QCheckBox *useSetXMLId;
    QLabel *label_6;
    QLineEdit *encoding;
    QLabel *label_7;
    QLineEdit *accept;
    QLabel *label_8;
    QLineEdit *language;
    QCheckBox *declareLocalA;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *XIncludeDialog)
    {
        if (XIncludeDialog->objectName().isEmpty())
            XIncludeDialog->setObjectName("XIncludeDialog");
        XIncludeDialog->resize(685, 295);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XIncludeDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(XIncludeDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(XIncludeDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        href = new QLineEdit(XIncludeDialog);
        href->setObjectName("href");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, href);

        label_2 = new QLabel(XIncludeDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        parse = new QComboBox(XIncludeDialog);
        parse->addItem(QString());
        parse->addItem(QString());
        parse->addItem(QString());
        parse->addItem(QString());
        parse->setObjectName("parse");
        parse->setEditable(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, parse);

        label_3 = new QLabel(XIncludeDialog);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        xpointer = new QLineEdit(XIncludeDialog);
        xpointer->setObjectName("xpointer");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, xpointer);

        label_4 = new QLabel(XIncludeDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        fragid = new QLineEdit(XIncludeDialog);
        fragid->setObjectName("fragid");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, fragid);

        label_5 = new QLabel(XIncludeDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        setxmlid = new QLineEdit(XIncludeDialog);
        setxmlid->setObjectName("setxmlid");

        horizontalLayout->addWidget(setxmlid);

        useSetXMLId = new QCheckBox(XIncludeDialog);
        useSetXMLId->setObjectName("useSetXMLId");

        horizontalLayout->addWidget(useSetXMLId);


        formLayout->setLayout(4, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        label_6 = new QLabel(XIncludeDialog);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        encoding = new QLineEdit(XIncludeDialog);
        encoding->setObjectName("encoding");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, encoding);

        label_7 = new QLabel(XIncludeDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_7);

        accept = new QLineEdit(XIncludeDialog);
        accept->setObjectName("accept");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, accept);

        label_8 = new QLabel(XIncludeDialog);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_8);

        language = new QLineEdit(XIncludeDialog);
        language->setObjectName("language");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, language);

        declareLocalA = new QCheckBox(XIncludeDialog);
        declareLocalA->setObjectName("declareLocalA");

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, declareLocalA);


        horizontalLayout_2->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(XIncludeDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(XIncludeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XIncludeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XIncludeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XIncludeDialog);
    } // setupUi

    void retranslateUi(QDialog *XIncludeDialog)
    {
        XIncludeDialog->setWindowTitle(QCoreApplication::translate("XIncludeDialog", "XInclude Properties", nullptr));
        label->setText(QCoreApplication::translate("XIncludeDialog", "href:", nullptr));
        label_2->setText(QCoreApplication::translate("XIncludeDialog", "parse:", nullptr));
        parse->setItemText(0, QCoreApplication::translate("XIncludeDialog", "xml", nullptr));
        parse->setItemText(1, QCoreApplication::translate("XIncludeDialog", "text", nullptr));
        parse->setItemText(2, QCoreApplication::translate("XIncludeDialog", "application/xml", nullptr));
        parse->setItemText(3, QCoreApplication::translate("XIncludeDialog", "text/plain", nullptr));

        label_3->setText(QCoreApplication::translate("XIncludeDialog", "xpointer:", nullptr));
        label_4->setText(QCoreApplication::translate("XIncludeDialog", "fragid:", nullptr));
        label_5->setText(QCoreApplication::translate("XIncludeDialog", "set-xml-id:", nullptr));
        useSetXMLId->setText(QCoreApplication::translate("XIncludeDialog", "Use set-xml-id even empty", nullptr));
        label_6->setText(QCoreApplication::translate("XIncludeDialog", "encoding:", nullptr));
        label_7->setText(QCoreApplication::translate("XIncludeDialog", "accept:", nullptr));
        label_8->setText(QCoreApplication::translate("XIncludeDialog", "accept-language:", nullptr));
        declareLocalA->setText(QCoreApplication::translate("XIncludeDialog", "Declare local attributes namespace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XIncludeDialog: public Ui_XIncludeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XINCLUDEDIALOG_H
