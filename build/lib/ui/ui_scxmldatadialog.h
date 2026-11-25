/********************************************************************************
** Form generated from reading UI file 'scxmldatadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLDATADIALOG_H
#define UI_SCXMLDATADIALOG_H

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

class Ui_SCXMLDataDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *id;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *src;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *expr;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLDataDialog)
    {
        if (SCXMLDataDialog->objectName().isEmpty())
            SCXMLDataDialog->setObjectName("SCXMLDataDialog");
        SCXMLDataDialog->resize(536, 187);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLDataDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLDataDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLDataDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        id = new QLineEdit(SCXMLDataDialog);
        id->setObjectName("id");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, id);

        label_3 = new QLabel(SCXMLDataDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        label = new QLabel(SCXMLDataDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        src = new QLineEdit(SCXMLDataDialog);
        src->setObjectName("src");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, src);

        label_4 = new QLabel(SCXMLDataDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_4);

        label_5 = new QLabel(SCXMLDataDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(SCXMLDataDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_6);

        expr = new QLineEdit(SCXMLDataDialog);
        expr->setObjectName("expr");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, expr);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLDataDialog);
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
        label_2->setBuddy(id);
        label->setBuddy(src);
        label_5->setBuddy(expr);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLDataDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLDataDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLDataDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLDataDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLDataDialog)
    {
        SCXMLDataDialog->setWindowTitle(QCoreApplication::translate("SCXMLDataDialog", "Data Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLDataDialog", "&Id:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLDataDialog", "The name of the data item.", nullptr));
        label->setText(QCoreApplication::translate("SCXMLDataDialog", "&Src:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLDataDialog", "Location from which the data object will be fetched.", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLDataDialog", "&Expr:", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLDataDialog", "The value of the data item.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLDataDialog: public Ui_SCXMLDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLDATADIALOG_H
