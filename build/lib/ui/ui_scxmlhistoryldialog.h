/********************************************************************************
** Form generated from reading UI file 'scxmlhistoryldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLHISTORYLDIALOG_H
#define UI_SCXMLHISTORYLDIALOG_H

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

class Ui_SCXMLHistoryDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *id;
    QLabel *label_3;
    QLabel *label_7;
    QComboBox *type;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLHistoryDialog)
    {
        if (SCXMLHistoryDialog->objectName().isEmpty())
            SCXMLHistoryDialog->setObjectName("SCXMLHistoryDialog");
        SCXMLHistoryDialog->resize(509, 137);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLHistoryDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLHistoryDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLHistoryDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        id = new QLineEdit(SCXMLHistoryDialog);
        id->setObjectName("id");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, id);

        label_3 = new QLabel(SCXMLHistoryDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        label_7 = new QLabel(SCXMLHistoryDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_7);

        type = new QComboBox(SCXMLHistoryDialog);
        type->setObjectName("type");
        type->setEditable(false);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, type);

        label_10 = new QLabel(SCXMLHistoryDialog);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_10);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLHistoryDialog);
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
        label_7->setBuddy(type);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLHistoryDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLHistoryDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLHistoryDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLHistoryDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLHistoryDialog)
    {
        SCXMLHistoryDialog->setWindowTitle(QCoreApplication::translate("SCXMLHistoryDialog", "History Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLHistoryDialog", "&Id:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLHistoryDialog", "Identifier.", nullptr));
        label_7->setText(QCoreApplication::translate("SCXMLHistoryDialog", "T&ype:", nullptr));
        label_10->setText(QCoreApplication::translate("SCXMLHistoryDialog", "Deep or shallow copy of the state.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLHistoryDialog: public Ui_SCXMLHistoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLHISTORYLDIALOG_H
