/********************************************************************************
** Form generated from reading UI file 'sourcerelatedmessages.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCERELATEDMESSAGES_H
#define UI_SOURCERELATEDMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceRelatedMessages
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *messages;
    QVBoxLayout *verticalLayout;
    QPushButton *go;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SourceRelatedMessages)
    {
        if (SourceRelatedMessages->objectName().isEmpty())
            SourceRelatedMessages->setObjectName("SourceRelatedMessages");
        SourceRelatedMessages->resize(651, 102);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SourceRelatedMessages->sizePolicy().hasHeightForWidth());
        SourceRelatedMessages->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SourceRelatedMessages);
        horizontalLayout->setObjectName("horizontalLayout");
        messages = new QListWidget(SourceRelatedMessages);
        messages->setObjectName("messages");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messages->sizePolicy().hasHeightForWidth());
        messages->setSizePolicy(sizePolicy1);
        messages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        messages->setProperty("showDropIndicator", QVariant(false));
        messages->setAlternatingRowColors(true);
        messages->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout->addWidget(messages);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        go = new QPushButton(SourceRelatedMessages);
        go->setObjectName("go");

        verticalLayout->addWidget(go);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(SourceRelatedMessages);

        QMetaObject::connectSlotsByName(SourceRelatedMessages);
    } // setupUi

    void retranslateUi(QWidget *SourceRelatedMessages)
    {
        SourceRelatedMessages->setWindowTitle(QCoreApplication::translate("SourceRelatedMessages", "Form", nullptr));
        go->setText(QCoreApplication::translate("SourceRelatedMessages", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SourceRelatedMessages: public Ui_SourceRelatedMessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCERELATEDMESSAGES_H
