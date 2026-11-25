/********************************************************************************
** Form generated from reading UI file 'configuresessionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURESESSIONSWIDGET_H
#define UI_CONFIGURESESSIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureSessionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QCheckBox *enableSessions;
    QLabel *label;
    QFormLayout *formLayout;
    QRadioButton *delOlderOneMonth;
    QRadioButton *delOlderSixMonth;
    QRadioButton *deleteSpecifiedDate;
    QDateEdit *dateLimit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *deleteFilesInfo;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *deleteData;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *deleteAllData;
    QSpacerItem *horizontalSpacer_3;
    QButtonGroup *dateGroup;

    void setupUi(QWidget *ConfigureSessionsWidget)
    {
        if (ConfigureSessionsWidget->objectName().isEmpty())
            ConfigureSessionsWidget->setObjectName("ConfigureSessionsWidget");
        ConfigureSessionsWidget->resize(482, 290);
        verticalLayout = new QVBoxLayout(ConfigureSessionsWidget);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(ConfigureSessionsWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        enableSessions = new QCheckBox(ConfigureSessionsWidget);
        enableSessions->setObjectName("enableSessions");
        enableSessions->setEnabled(true);

        verticalLayout->addWidget(enableSessions);

        label = new QLabel(ConfigureSessionsWidget);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        delOlderOneMonth = new QRadioButton(ConfigureSessionsWidget);
        dateGroup = new QButtonGroup(ConfigureSessionsWidget);
        dateGroup->setObjectName("dateGroup");
        dateGroup->addButton(delOlderOneMonth);
        delOlderOneMonth->setObjectName("delOlderOneMonth");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, delOlderOneMonth);

        delOlderSixMonth = new QRadioButton(ConfigureSessionsWidget);
        dateGroup->addButton(delOlderSixMonth);
        delOlderSixMonth->setObjectName("delOlderSixMonth");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, delOlderSixMonth);

        deleteSpecifiedDate = new QRadioButton(ConfigureSessionsWidget);
        dateGroup->addButton(deleteSpecifiedDate);
        deleteSpecifiedDate->setObjectName("deleteSpecifiedDate");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, deleteSpecifiedDate);

        dateLimit = new QDateEdit(ConfigureSessionsWidget);
        dateLimit->setObjectName("dateLimit");
        dateLimit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, dateLimit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        deleteFilesInfo = new QCheckBox(ConfigureSessionsWidget);
        deleteFilesInfo->setObjectName("deleteFilesInfo");

        horizontalLayout->addWidget(deleteFilesInfo);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        deleteData = new QPushButton(ConfigureSessionsWidget);
        deleteData->setObjectName("deleteData");

        horizontalLayout_2->addWidget(deleteData);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(ConfigureSessionsWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        deleteAllData = new QPushButton(ConfigureSessionsWidget);
        deleteAllData->setObjectName("deleteAllData");

        horizontalLayout_3->addWidget(deleteAllData);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        label->raise();
        deleteAllData->raise();
        enableSessions->raise();
        line->raise();
        label_2->raise();

        retranslateUi(ConfigureSessionsWidget);

        QMetaObject::connectSlotsByName(ConfigureSessionsWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigureSessionsWidget)
    {
        ConfigureSessionsWidget->setWindowTitle(QCoreApplication::translate("ConfigureSessionsWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Administraton", nullptr));
        enableSessions->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Enable session management", nullptr));
        label->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete sessions data", nullptr));
        delOlderOneMonth->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete data older than one month", nullptr));
        delOlderSixMonth->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete data older than six months", nullptr));
        deleteSpecifiedDate->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete data older than the specified date", nullptr));
        deleteFilesInfo->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete information on files (the files will not be touched)", nullptr));
        deleteData->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete sessions data", nullptr));
        deleteAllData->setText(QCoreApplication::translate("ConfigureSessionsWidget", "Delete all sessions data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureSessionsWidget: public Ui_ConfigureSessionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURESESSIONSWIDGET_H
