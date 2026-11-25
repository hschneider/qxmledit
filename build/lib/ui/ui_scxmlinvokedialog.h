/********************************************************************************
** Form generated from reading UI file 'scxmlinvokedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLINVOKEDIALOG_H
#define UI_SCXMLINVOKEDIALOG_H

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

class Ui_SCXMLInvokeDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *typeexpr;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *src;
    QComboBox *type;
    QLineEdit *srcexpr;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *id;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *idlocation;
    QLabel *label_12;
    QLineEdit *namelist;
    QLabel *label_13;
    QLabel *label_14;
    QCheckBox *autoforward;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLInvokeDialog)
    {
        if (SCXMLInvokeDialog->objectName().isEmpty())
            SCXMLInvokeDialog->setObjectName("SCXMLInvokeDialog");
        SCXMLInvokeDialog->resize(516, 412);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLInvokeDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLInvokeDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLInvokeDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        label_3 = new QLabel(SCXMLInvokeDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, label_3);

        label = new QLabel(SCXMLInvokeDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label);

        typeexpr = new QLineEdit(SCXMLInvokeDialog);
        typeexpr->setObjectName("typeexpr");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, typeexpr);

        label_4 = new QLabel(SCXMLInvokeDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, label_4);

        label_5 = new QLabel(SCXMLInvokeDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(SCXMLInvokeDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, label_6);

        src = new QLineEdit(SCXMLInvokeDialog);
        src->setObjectName("src");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, src);

        type = new QComboBox(SCXMLInvokeDialog);
        type->setObjectName("type");
        type->setEditable(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, type);

        srcexpr = new QLineEdit(SCXMLInvokeDialog);
        srcexpr->setObjectName("srcexpr");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, srcexpr);

        label_7 = new QLabel(SCXMLInvokeDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_7);

        label_8 = new QLabel(SCXMLInvokeDialog);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, label_8);

        id = new QLineEdit(SCXMLInvokeDialog);
        id->setObjectName("id");

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, id);

        label_9 = new QLabel(SCXMLInvokeDialog);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, label_9);

        label_10 = new QLabel(SCXMLInvokeDialog);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(12, QFormLayout::ItemRole::FieldRole, label_10);

        label_11 = new QLabel(SCXMLInvokeDialog);
        label_11->setObjectName("label_11");
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(10, QFormLayout::ItemRole::FieldRole, label_11);

        idlocation = new QLineEdit(SCXMLInvokeDialog);
        idlocation->setObjectName("idlocation");

        formLayout->setWidget(11, QFormLayout::ItemRole::FieldRole, idlocation);

        label_12 = new QLabel(SCXMLInvokeDialog);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(11, QFormLayout::ItemRole::LabelRole, label_12);

        namelist = new QLineEdit(SCXMLInvokeDialog);
        namelist->setObjectName("namelist");

        formLayout->setWidget(13, QFormLayout::ItemRole::FieldRole, namelist);

        label_13 = new QLabel(SCXMLInvokeDialog);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(13, QFormLayout::ItemRole::LabelRole, label_13);

        label_14 = new QLabel(SCXMLInvokeDialog);
        label_14->setObjectName("label_14");
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(14, QFormLayout::ItemRole::FieldRole, label_14);

        autoforward = new QCheckBox(SCXMLInvokeDialog);
        autoforward->setObjectName("autoforward");

        formLayout->setWidget(15, QFormLayout::ItemRole::FieldRole, autoforward);


        horizontalLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLInvokeDialog);
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
        label_2->setBuddy(type);
        label->setBuddy(typeexpr);
        label_5->setBuddy(src);
        label_7->setBuddy(srcexpr);
        label_9->setBuddy(id);
        label_12->setBuddy(idlocation);
        label_13->setBuddy(namelist);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(type, typeexpr);
        QWidget::setTabOrder(typeexpr, src);
        QWidget::setTabOrder(src, srcexpr);
        QWidget::setTabOrder(srcexpr, id);
        QWidget::setTabOrder(id, idlocation);
        QWidget::setTabOrder(idlocation, namelist);
        QWidget::setTabOrder(namelist, autoforward);

        retranslateUi(SCXMLInvokeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLInvokeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLInvokeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLInvokeDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLInvokeDialog)
    {
        SCXMLInvokeDialog->setWindowTitle(QCoreApplication::translate("SCXMLInvokeDialog", "Invoke Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Type:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLInvokeDialog", "URI for the type of the external service", nullptr));
        label->setText(QCoreApplication::translate("SCXMLInvokeDialog", "TypeExpr:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Expression alternative to 'type'.", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLInvokeDialog", "&Src:", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLInvokeDialog", "URI for external service", nullptr));
        label_7->setText(QCoreApplication::translate("SCXMLInvokeDialog", "&SrcExpr:", nullptr));
        label_8->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Alternative to 'src'.", nullptr));
        label_9->setText(QCoreApplication::translate("SCXMLInvokeDialog", "&Id:", nullptr));
        label_10->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Dynamic altrenative for Identifier", nullptr));
        label_11->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Identifier.", nullptr));
        label_12->setText(QCoreApplication::translate("SCXMLInvokeDialog", "&Id Location:", nullptr));
        label_13->setText(QCoreApplication::translate("SCXMLInvokeDialog", "&Name List:", nullptr));
        label_14->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Space separed list of data model location passed as parameters.", nullptr));
        autoforward->setText(QCoreApplication::translate("SCXMLInvokeDialog", "Autoforward", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLInvokeDialog: public Ui_SCXMLInvokeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLINVOKEDIALOG_H
