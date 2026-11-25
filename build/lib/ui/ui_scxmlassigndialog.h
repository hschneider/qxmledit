/********************************************************************************
** Form generated from reading UI file 'scxmlassigndialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLASSIGNDIALOG_H
#define UI_SCXMLASSIGNDIALOG_H

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

class Ui_SCXMLAssignDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *location;
    QLabel *label_3;
    QLabel *label1;
    QLineEdit *expr;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLAssignDialog)
    {
        if (SCXMLAssignDialog->objectName().isEmpty())
            SCXMLAssignDialog->setObjectName("SCXMLAssignDialog");
        SCXMLAssignDialog->resize(546, 130);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLAssignDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLAssignDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLAssignDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        location = new QLineEdit(SCXMLAssignDialog);
        location->setObjectName("location");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, location);

        label_3 = new QLabel(SCXMLAssignDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        label1 = new QLabel(SCXMLAssignDialog);
        label1->setObjectName("label1");
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label1);

        expr = new QLineEdit(SCXMLAssignDialog);
        expr->setObjectName("expr");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, expr);

        label_4 = new QLabel(SCXMLAssignDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_4);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLAssignDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(location);
        label1->setBuddy(expr);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLAssignDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLAssignDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLAssignDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLAssignDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLAssignDialog)
    {
        SCXMLAssignDialog->setWindowTitle(QCoreApplication::translate("SCXMLAssignDialog", "Assign Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLAssignDialog", "&Location:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLAssignDialog", "Assign location in the data model.", nullptr));
        label1->setText(QCoreApplication::translate("SCXMLAssignDialog", "&Expr:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLAssignDialog", "Value to be assigned.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLAssignDialog: public Ui_SCXMLAssignDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLASSIGNDIALOG_H
