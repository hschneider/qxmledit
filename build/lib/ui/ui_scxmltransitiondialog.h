/********************************************************************************
** Form generated from reading UI file 'scxmltransitiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLTRANSITIONDIALOG_H
#define UI_SCXMLTRANSITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
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

class Ui_SCXMLTransitionDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *event;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_10;
    QLineEdit *cond;
    QComboBox *type;
    QComboBox *target;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLTransitionDialog)
    {
        if (SCXMLTransitionDialog->objectName().isEmpty())
            SCXMLTransitionDialog->setObjectName("SCXMLTransitionDialog");
        SCXMLTransitionDialog->resize(740, 245);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLTransitionDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLTransitionDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLTransitionDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        event = new QLineEdit(SCXMLTransitionDialog);
        event->setObjectName("event");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, event);

        label_3 = new QLabel(SCXMLTransitionDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        label = new QLabel(SCXMLTransitionDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        label_4 = new QLabel(SCXMLTransitionDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_4);

        label_5 = new QLabel(SCXMLTransitionDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(SCXMLTransitionDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_6);

        label_7 = new QLabel(SCXMLTransitionDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_7);

        label_10 = new QLabel(SCXMLTransitionDialog);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, label_10);

        cond = new QLineEdit(SCXMLTransitionDialog);
        cond->setObjectName("cond");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, cond);

        type = new QComboBox(SCXMLTransitionDialog);
        type->setObjectName("type");
        type->setEditable(false);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, type);

        target = new QComboBox(SCXMLTransitionDialog);
        target->setObjectName("target");
        target->setEditable(true);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, target);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLTransitionDialog);
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
        label_2->setBuddy(event);
        label->setBuddy(cond);
        label_5->setBuddy(target);
        label_7->setBuddy(type);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLTransitionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLTransitionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLTransitionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLTransitionDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLTransitionDialog)
    {
        SCXMLTransitionDialog->setWindowTitle(QCoreApplication::translate("SCXMLTransitionDialog", "Transition Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLTransitionDialog", "&Event:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLTransitionDialog", "Space separated list of events descriptors that trigger the transition.", nullptr));
        label->setText(QCoreApplication::translate("SCXMLTransitionDialog", "&Condition:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLTransitionDialog", "Guard condition for this transition, if present enables the transition.", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLTransitionDialog", "&Target", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLTransitionDialog", "Identifier of the state or parallel region to transition to.", nullptr));
        label_7->setText(QCoreApplication::translate("SCXMLTransitionDialog", "T&ype:", nullptr));
        label_10->setText(QCoreApplication::translate("SCXMLTransitionDialog", "External if the source state is exited when the target is a descendant of the source.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLTransitionDialog: public Ui_SCXMLTransitionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLTRANSITIONDIALOG_H
