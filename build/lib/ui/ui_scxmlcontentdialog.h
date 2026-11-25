/********************************************************************************
** Form generated from reading UI file 'scxmlcontentdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLCONTENTDIALOG_H
#define UI_SCXMLCONTENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCXMLContentDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label1;
    QLineEdit *expr;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLContentDialog)
    {
        if (SCXMLContentDialog->objectName().isEmpty())
            SCXMLContentDialog->setObjectName("SCXMLContentDialog");
        SCXMLContentDialog->resize(418, 97);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLContentDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLContentDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label1 = new QLabel(SCXMLContentDialog);
        label1->setObjectName("label1");
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label1);

        expr = new QLineEdit(SCXMLContentDialog);
        expr->setObjectName("expr");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, expr);

        label_4 = new QLabel(SCXMLContentDialog);
        label_4->setObjectName("label_4");
        QFont font;
        font.setItalic(true);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_4);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLContentDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label1->setBuddy(expr);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLContentDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLContentDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLContentDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLContentDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLContentDialog)
    {
        SCXMLContentDialog->setWindowTitle(QCoreApplication::translate("SCXMLContentDialog", "Content Properties", nullptr));
        label1->setText(QCoreApplication::translate("SCXMLContentDialog", "&Expr:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLContentDialog", "An expression", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLContentDialog: public Ui_SCXMLContentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLCONTENTDIALOG_H
