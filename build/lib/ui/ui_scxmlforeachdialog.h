/********************************************************************************
** Form generated from reading UI file 'scxmlforeachdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLFOREACHDIALOG_H
#define UI_SCXMLFOREACHDIALOG_H

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

class Ui_SCXMLForeachDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *array;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *item;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *index;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLForeachDialog)
    {
        if (SCXMLForeachDialog->objectName().isEmpty())
            SCXMLForeachDialog->setObjectName("SCXMLForeachDialog");
        SCXMLForeachDialog->resize(705, 187);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLForeachDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLForeachDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLForeachDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        array = new QLineEdit(SCXMLForeachDialog);
        array->setObjectName("array");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, array);

        label_3 = new QLabel(SCXMLForeachDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        label = new QLabel(SCXMLForeachDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        item = new QLineEdit(SCXMLForeachDialog);
        item->setObjectName("item");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, item);

        label_4 = new QLabel(SCXMLForeachDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_4);

        label_5 = new QLabel(SCXMLForeachDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(SCXMLForeachDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_6);

        index = new QLineEdit(SCXMLForeachDialog);
        index->setObjectName("index");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, index);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLForeachDialog);
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
        label_2->setBuddy(array);
        label->setBuddy(item);
        label_5->setBuddy(index);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLForeachDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLForeachDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLForeachDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLForeachDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLForeachDialog)
    {
        SCXMLForeachDialog->setWindowTitle(QCoreApplication::translate("SCXMLForeachDialog", "Foreach Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLForeachDialog", "&Array:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLForeachDialog", "Shallow copy of the collection to iterate over.", nullptr));
        label->setText(QCoreApplication::translate("SCXMLForeachDialog", "&Item:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLForeachDialog", "Variable that is the current item of the collection in each iteration.", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLForeachDialog", "&Index:", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLForeachDialog", "Current iteration index upon each iteration.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLForeachDialog: public Ui_SCXMLForeachDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLFOREACHDIALOG_H
