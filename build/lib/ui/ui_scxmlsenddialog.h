/********************************************************************************
** Form generated from reading UI file 'scxmlsenddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLSENDDIALOG_H
#define UI_SCXMLSENDDIALOG_H

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

class Ui_SCXMLSendDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *event;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *eventexpr;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *target;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *targetexpr;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *type;
    QLabel *label_10;
    QLabel *label_13;
    QLineEdit *id;
    QLabel *label_14;
    QLineEdit *idlocation;
    QLabel *label_16;
    QLabel *label_15;
    QLineEdit *delay;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *delayexpr;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *namelist;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *typeexpr;
    QLabel *label_23;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLSendDialog)
    {
        if (SCXMLSendDialog->objectName().isEmpty())
            SCXMLSendDialog->setObjectName("SCXMLSendDialog");
        SCXMLSendDialog->resize(823, 653);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLSendDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLSendDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(SCXMLSendDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        event = new QLineEdit(SCXMLSendDialog);
        event->setObjectName("event");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, event);

        label_4 = new QLabel(SCXMLSendDialog);
        label_4->setObjectName("label_4");
        QFont font;
        font.setItalic(true);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, label_4);

        label_5 = new QLabel(SCXMLSendDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_5);

        eventexpr = new QLineEdit(SCXMLSendDialog);
        eventexpr->setObjectName("eventexpr");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, eventexpr);

        label_6 = new QLabel(SCXMLSendDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, label_6);

        label_7 = new QLabel(SCXMLSendDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_7);

        target = new QLineEdit(SCXMLSendDialog);
        target->setObjectName("target");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, target);

        label_8 = new QLabel(SCXMLSendDialog);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, label_8);

        label_9 = new QLabel(SCXMLSendDialog);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_9);

        targetexpr = new QLineEdit(SCXMLSendDialog);
        targetexpr->setObjectName("targetexpr");

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, targetexpr);

        label_11 = new QLabel(SCXMLSendDialog);
        label_11->setObjectName("label_11");
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, label_11);

        label_12 = new QLabel(SCXMLSendDialog);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::ItemRole::LabelRole, label_12);

        type = new QLineEdit(SCXMLSendDialog);
        type->setObjectName("type");

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, type);

        label_10 = new QLabel(SCXMLSendDialog);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(10, QFormLayout::ItemRole::FieldRole, label_10);

        label_13 = new QLabel(SCXMLSendDialog);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(13, QFormLayout::ItemRole::LabelRole, label_13);

        id = new QLineEdit(SCXMLSendDialog);
        id->setObjectName("id");

        formLayout->setWidget(13, QFormLayout::ItemRole::FieldRole, id);

        label_14 = new QLabel(SCXMLSendDialog);
        label_14->setObjectName("label_14");
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(14, QFormLayout::ItemRole::FieldRole, label_14);

        idlocation = new QLineEdit(SCXMLSendDialog);
        idlocation->setObjectName("idlocation");

        formLayout->setWidget(15, QFormLayout::ItemRole::FieldRole, idlocation);

        label_16 = new QLabel(SCXMLSendDialog);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(15, QFormLayout::ItemRole::LabelRole, label_16);

        label_15 = new QLabel(SCXMLSendDialog);
        label_15->setObjectName("label_15");
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(16, QFormLayout::ItemRole::FieldRole, label_15);

        delay = new QLineEdit(SCXMLSendDialog);
        delay->setObjectName("delay");

        formLayout->setWidget(17, QFormLayout::ItemRole::FieldRole, delay);

        label_17 = new QLabel(SCXMLSendDialog);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(17, QFormLayout::ItemRole::LabelRole, label_17);

        label_18 = new QLabel(SCXMLSendDialog);
        label_18->setObjectName("label_18");
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(18, QFormLayout::ItemRole::FieldRole, label_18);

        delayexpr = new QLineEdit(SCXMLSendDialog);
        delayexpr->setObjectName("delayexpr");

        formLayout->setWidget(19, QFormLayout::ItemRole::FieldRole, delayexpr);

        label_19 = new QLabel(SCXMLSendDialog);
        label_19->setObjectName("label_19");
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(19, QFormLayout::ItemRole::LabelRole, label_19);

        label_20 = new QLabel(SCXMLSendDialog);
        label_20->setObjectName("label_20");
        label_20->setFont(font);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(20, QFormLayout::ItemRole::FieldRole, label_20);

        namelist = new QLineEdit(SCXMLSendDialog);
        namelist->setObjectName("namelist");

        formLayout->setWidget(21, QFormLayout::ItemRole::FieldRole, namelist);

        label_21 = new QLabel(SCXMLSendDialog);
        label_21->setObjectName("label_21");
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(21, QFormLayout::ItemRole::LabelRole, label_21);

        label_22 = new QLabel(SCXMLSendDialog);
        label_22->setObjectName("label_22");
        label_22->setFont(font);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(22, QFormLayout::ItemRole::FieldRole, label_22);

        typeexpr = new QLineEdit(SCXMLSendDialog);
        typeexpr->setObjectName("typeexpr");

        formLayout->setWidget(11, QFormLayout::ItemRole::FieldRole, typeexpr);

        label_23 = new QLabel(SCXMLSendDialog);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(11, QFormLayout::ItemRole::LabelRole, label_23);

        label_24 = new QLabel(SCXMLSendDialog);
        label_24->setObjectName("label_24");
        label_24->setFont(font);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(12, QFormLayout::ItemRole::FieldRole, label_24);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLSendDialog);
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
        label->setBuddy(event);
        label_5->setBuddy(eventexpr);
        label_7->setBuddy(target);
        label_9->setBuddy(targetexpr);
        label_12->setBuddy(type);
        label_13->setBuddy(id);
        label_16->setBuddy(idlocation);
        label_17->setBuddy(delay);
        label_19->setBuddy(delayexpr);
        label_21->setBuddy(namelist);
        label_23->setBuddy(typeexpr);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(event, eventexpr);
        QWidget::setTabOrder(eventexpr, target);
        QWidget::setTabOrder(target, targetexpr);
        QWidget::setTabOrder(targetexpr, type);
        QWidget::setTabOrder(type, typeexpr);
        QWidget::setTabOrder(typeexpr, id);
        QWidget::setTabOrder(id, idlocation);
        QWidget::setTabOrder(idlocation, delay);
        QWidget::setTabOrder(delay, delayexpr);
        QWidget::setTabOrder(delayexpr, namelist);

        retranslateUi(SCXMLSendDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLSendDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLSendDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLSendDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLSendDialog)
    {
        SCXMLSendDialog->setWindowTitle(QCoreApplication::translate("SCXMLSendDialog", "Send Properties", nullptr));
        label->setText(QCoreApplication::translate("SCXMLSendDialog", "&Event:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLSendDialog", "Name of the message.", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLSendDialog", "&Eventexpr:", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLSendDialog", "Dynamic alternative to 'event'.", nullptr));
        label_7->setText(QCoreApplication::translate("SCXMLSendDialog", "&Target:", nullptr));
        label_8->setText(QCoreApplication::translate("SCXMLSendDialog", "Identifier of the message target.", nullptr));
        label_9->setText(QCoreApplication::translate("SCXMLSendDialog", "&Target Expr:", nullptr));
        label_11->setText(QCoreApplication::translate("SCXMLSendDialog", "Dynamic alternative to 'target'.", nullptr));
        label_12->setText(QCoreApplication::translate("SCXMLSendDialog", "Type:", nullptr));
        label_10->setText(QCoreApplication::translate("SCXMLSendDialog", "URI of the transport mechanism for the message.", nullptr));
        label_13->setText(QCoreApplication::translate("SCXMLSendDialog", "&Id:", nullptr));
        label_14->setText(QCoreApplication::translate("SCXMLSendDialog", "Identifier.", nullptr));
        label_16->setText(QCoreApplication::translate("SCXMLSendDialog", "Id Location:", nullptr));
        label_15->setText(QCoreApplication::translate("SCXMLSendDialog", "Expression evaluating to a data model location for identifier.", nullptr));
        label_17->setText(QCoreApplication::translate("SCXMLSendDialog", "Delay:", nullptr));
        label_18->setText(QCoreApplication::translate("SCXMLSendDialog", "Time in CSS2 format to wait for dispatch.", nullptr));
        label_19->setText(QCoreApplication::translate("SCXMLSendDialog", "Delay Expr:", nullptr));
        label_20->setText(QCoreApplication::translate("SCXMLSendDialog", "Dynamic alternative to delay.", nullptr));
        label_21->setText(QCoreApplication::translate("SCXMLSendDialog", "Namelist:", nullptr));
        label_22->setText(QCoreApplication::translate("SCXMLSendDialog", "List of locations included as attribute/value pairs in message. ", nullptr));
        label_23->setText(QCoreApplication::translate("SCXMLSendDialog", "Type Expr:", nullptr));
        label_24->setText(QCoreApplication::translate("SCXMLSendDialog", "Dynamic alternative to 'type'.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLSendDialog: public Ui_SCXMLSendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLSENDDIALOG_H
