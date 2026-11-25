/********************************************************************************
** Form generated from reading UI file 'sessionsmanagementdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONSMANAGEMENTDIALOG_H
#define UI_SESSIONSMANAGEMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <widgets/sessiondetailwidget.h>

QT_BEGIN_NAMESPACE

class Ui_SessionsManagement
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *sessionList;
    QVBoxLayout *verticalLayout;
    QPushButton *activateCmd;
    QPushButton *newCmd;
    QPushButton *editCmd;
    QPushButton *deleteCmd;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *selectedName;
    QLabel *label_2;
    QLabel *selectedDescription;
    SessionDetailWidget *details;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadFileCmd;
    QPushButton *exportFilesCmd;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SessionsManagement)
    {
        if (SessionsManagement->objectName().isEmpty())
            SessionsManagement->setObjectName("SessionsManagement");
        SessionsManagement->resize(859, 594);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SessionsManagement->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(SessionsManagement);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(SessionsManagement);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sessionList = new QTableWidget(SessionsManagement);
        sessionList->setObjectName("sessionList");
        sessionList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        sessionList->setSelectionMode(QAbstractItemView::SingleSelection);
        sessionList->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(sessionList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        activateCmd = new QPushButton(SessionsManagement);
        activateCmd->setObjectName("activateCmd");
        activateCmd->setEnabled(false);

        verticalLayout->addWidget(activateCmd);

        newCmd = new QPushButton(SessionsManagement);
        newCmd->setObjectName("newCmd");

        verticalLayout->addWidget(newCmd);

        editCmd = new QPushButton(SessionsManagement);
        editCmd->setObjectName("editCmd");
        editCmd->setEnabled(false);

        verticalLayout->addWidget(editCmd);

        deleteCmd = new QPushButton(SessionsManagement);
        deleteCmd->setObjectName("deleteCmd");
        deleteCmd->setEnabled(false);

        verticalLayout->addWidget(deleteCmd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(SessionsManagement);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        selectedName = new QLabel(SessionsManagement);
        selectedName->setObjectName("selectedName");
        QFont font;
        font.setBold(true);
        selectedName->setFont(font);

        horizontalLayout_3->addWidget(selectedName);

        label_2 = new QLabel(SessionsManagement);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        selectedDescription = new QLabel(SessionsManagement);
        selectedDescription->setObjectName("selectedDescription");
        selectedDescription->setFont(font);

        horizontalLayout_3->addWidget(selectedDescription);


        verticalLayout_2->addLayout(horizontalLayout_3);

        details = new SessionDetailWidget(SessionsManagement);
        details->setObjectName("details");

        verticalLayout_2->addWidget(details);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        loadFileCmd = new QPushButton(SessionsManagement);
        loadFileCmd->setObjectName("loadFileCmd");
        loadFileCmd->setEnabled(false);

        horizontalLayout->addWidget(loadFileCmd);

        exportFilesCmd = new QPushButton(SessionsManagement);
        exportFilesCmd->setObjectName("exportFilesCmd");
        exportFilesCmd->setEnabled(false);

        horizontalLayout->addWidget(exportFilesCmd);

        horizontalSpacer = new QSpacerItem(848, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SessionsManagement);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SessionsManagement);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SessionsManagement, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SessionsManagement, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SessionsManagement);
    } // setupUi

    void retranslateUi(QDialog *SessionsManagement)
    {
        SessionsManagement->setWindowTitle(QCoreApplication::translate("SessionsManagement", "Session management", nullptr));
        label->setText(QCoreApplication::translate("SessionsManagement", "Session list", nullptr));
        activateCmd->setText(QCoreApplication::translate("SessionsManagement", "Activate", nullptr));
        newCmd->setText(QCoreApplication::translate("SessionsManagement", "New...", nullptr));
        editCmd->setText(QCoreApplication::translate("SessionsManagement", "Edit...", nullptr));
        deleteCmd->setText(QCoreApplication::translate("SessionsManagement", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("SessionsManagement", "Name:", nullptr));
        selectedName->setText(QCoreApplication::translate("SessionsManagement", "---", nullptr));
        label_2->setText(QCoreApplication::translate("SessionsManagement", "Description:", nullptr));
        selectedDescription->setText(QCoreApplication::translate("SessionsManagement", "----", nullptr));
        loadFileCmd->setText(QCoreApplication::translate("SessionsManagement", "Edit file", nullptr));
        exportFilesCmd->setText(QCoreApplication::translate("SessionsManagement", "Export file data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SessionsManagement: public Ui_SessionsManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONSMANAGEMENTDIALOG_H
