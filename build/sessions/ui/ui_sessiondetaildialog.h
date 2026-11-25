/********************************************************************************
** Form generated from reading UI file 'sessiondetaildialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONDETAILDIALOG_H
#define UI_SESSIONDETAILDIALOG_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <widgets/sessiondetailwidget.h>

QT_BEGIN_NAMESPACE

class Ui_SessionDetailDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *name;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QPlainTextEdit *description;
    QLabel *label_4;
    QLabel *lastAccess;
    SessionDetailWidget *details;
    QHBoxLayout *horizontalLayout;
    QPushButton *editFileCmd;
    QPushButton *exportFilesCmd;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SessionDetailDialog)
    {
        if (SessionDetailDialog->objectName().isEmpty())
            SessionDetailDialog->setObjectName("SessionDetailDialog");
        SessionDetailDialog->resize(696, 531);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SessionDetailDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SessionDetailDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SessionDetailDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        name = new QLineEdit(SessionDetailDialog);
        name->setObjectName("name");
        name->setMaxLength(64);

        horizontalLayout_2->addWidget(name);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(SessionDetailDialog);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        description = new QPlainTextEdit(SessionDetailDialog);
        description->setObjectName("description");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, description);

        label_4 = new QLabel(SessionDetailDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_4);

        lastAccess = new QLabel(SessionDetailDialog);
        lastAccess->setObjectName("lastAccess");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lastAccess);


        verticalLayout->addLayout(formLayout);

        details = new SessionDetailWidget(SessionDetailDialog);
        details->setObjectName("details");

        verticalLayout->addWidget(details);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        editFileCmd = new QPushButton(SessionDetailDialog);
        editFileCmd->setObjectName("editFileCmd");
        editFileCmd->setEnabled(false);

        horizontalLayout->addWidget(editFileCmd);

        exportFilesCmd = new QPushButton(SessionDetailDialog);
        exportFilesCmd->setObjectName("exportFilesCmd");
        exportFilesCmd->setEnabled(true);

        horizontalLayout->addWidget(exportFilesCmd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SessionDetailDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SessionDetailDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SessionDetailDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SessionDetailDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SessionDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *SessionDetailDialog)
    {
        SessionDetailDialog->setWindowTitle(QCoreApplication::translate("SessionDetailDialog", "Session Detail", nullptr));
        label_2->setText(QCoreApplication::translate("SessionDetailDialog", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("SessionDetailDialog", "Description:", nullptr));
        label_4->setText(QCoreApplication::translate("SessionDetailDialog", "Last access:", nullptr));
        lastAccess->setText(QCoreApplication::translate("SessionDetailDialog", "---", nullptr));
        editFileCmd->setText(QCoreApplication::translate("SessionDetailDialog", "Edit file", nullptr));
        exportFilesCmd->setText(QCoreApplication::translate("SessionDetailDialog", "Export file data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SessionDetailDialog: public Ui_SessionDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONDETAILDIALOG_H
