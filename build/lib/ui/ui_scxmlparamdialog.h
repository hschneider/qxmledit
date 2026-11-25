/********************************************************************************
** Form generated from reading UI file 'scxmlparamdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLPARAMDIALOG_H
#define UI_SCXMLPARAMDIALOG_H

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

class Ui_SCXMLParamDialog
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
    QLineEdit *name;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLParamDialog)
    {
        if (SCXMLParamDialog->objectName().isEmpty())
            SCXMLParamDialog->setObjectName("SCXMLParamDialog");
        SCXMLParamDialog->resize(555, 187);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLParamDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLParamDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLParamDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        location = new QLineEdit(SCXMLParamDialog);
        location->setObjectName("location");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, location);

        label_3 = new QLabel(SCXMLParamDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_3);

        label1 = new QLabel(SCXMLParamDialog);
        label1->setObjectName("label1");
        label1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label1);

        expr = new QLineEdit(SCXMLParamDialog);
        expr->setObjectName("expr");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, expr);

        label_4 = new QLabel(SCXMLParamDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_4);

        name = new QLineEdit(SCXMLParamDialog);
        name->setObjectName("name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, name);

        label_5 = new QLabel(SCXMLParamDialog);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(SCXMLParamDialog);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_6);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLParamDialog);
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
        label_5->setBuddy(name);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(name, location);
        QWidget::setTabOrder(location, expr);

        retranslateUi(SCXMLParamDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLParamDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLParamDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLParamDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLParamDialog)
    {
        SCXMLParamDialog->setWindowTitle(QCoreApplication::translate("SCXMLParamDialog", "Param Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLParamDialog", "&Location:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLParamDialog", "Location of the value in the data model.", nullptr));
        label1->setText(QCoreApplication::translate("SCXMLParamDialog", "&Expr:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLParamDialog", "Value to be assigned; alternative to 'location'.", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLParamDialog", "&Name:", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLParamDialog", "Name of the parameter; required.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLParamDialog: public Ui_SCXMLParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLPARAMDIALOG_H
