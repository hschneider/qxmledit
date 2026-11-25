/********************************************************************************
** Form generated from reading UI file 'scxmlraisedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLRAISEDIALOG_H
#define UI_SCXMLRAISEDIALOG_H

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

class Ui_SCXMLRaiseDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *event;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLRaiseDialog)
    {
        if (SCXMLRaiseDialog->objectName().isEmpty())
            SCXMLRaiseDialog->setObjectName("SCXMLRaiseDialog");
        SCXMLRaiseDialog->resize(590, 93);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLRaiseDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLRaiseDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLRaiseDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        event = new QLineEdit(SCXMLRaiseDialog);
        event->setObjectName("event");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, event);

        label_3 = new QLabel(SCXMLRaiseDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLRaiseDialog);
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
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLRaiseDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLRaiseDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLRaiseDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLRaiseDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLRaiseDialog)
    {
        SCXMLRaiseDialog->setWindowTitle(QCoreApplication::translate("SCXMLRaiseDialog", "Raise Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLRaiseDialog", "&Event:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLRaiseDialog", "The name of the event.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLRaiseDialog: public Ui_SCXMLRaiseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLRAISEDIALOG_H
