/********************************************************************************
** Form generated from reading UI file 'xsdreport.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDREPORT_H
#define UI_XSDREPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XSDReport
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *copyCmd;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *XSDReport)
    {
        if (XSDReport->objectName().isEmpty())
            XSDReport->setObjectName("XSDReport");
        XSDReport->resize(1112, 626);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDReport->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(XSDReport);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(XSDReport);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(XSDReport);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        copyCmd = new QPushButton(XSDReport);
        copyCmd->setObjectName("copyCmd");

        verticalLayout->addWidget(copyCmd);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(XSDReport);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDReport, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDReport, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XSDReport);
    } // setupUi

    void retranslateUi(QDialog *XSDReport)
    {
        XSDReport->setWindowTitle(QCoreApplication::translate("XSDReport", "XSD Report", nullptr));
        copyCmd->setText(QCoreApplication::translate("XSDReport", "&Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDReport: public Ui_XSDReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDREPORT_H
