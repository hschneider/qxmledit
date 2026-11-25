/********************************************************************************
** Form generated from reading UI file 'scxmlnavigatorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLNAVIGATORWIDGET_H
#define UI_SCXMLNAVIGATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SCXMLNavigatorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *flat;
    QTreeWidget *states;
    QHBoxLayout *horizontalLayout;
    QPushButton *showCmd;
    QPushButton *editCmd;

    void setupUi(QWidget *SCXMLNavigatorWidget)
    {
        if (SCXMLNavigatorWidget->objectName().isEmpty())
            SCXMLNavigatorWidget->setObjectName("SCXMLNavigatorWidget");
        SCXMLNavigatorWidget->resize(186, 256);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SCXMLNavigatorWidget->sizePolicy().hasHeightForWidth());
        SCXMLNavigatorWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SCXMLNavigatorWidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(SCXMLNavigatorWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        flat = new QCheckBox(SCXMLNavigatorWidget);
        flat->setObjectName("flat");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(flat->sizePolicy().hasHeightForWidth());
        flat->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(flat);


        verticalLayout->addLayout(horizontalLayout_2);

        states = new QTreeWidget(SCXMLNavigatorWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        states->setHeaderItem(__qtreewidgetitem);
        states->setObjectName("states");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(states->sizePolicy().hasHeightForWidth());
        states->setSizePolicy(sizePolicy3);
        states->setAlternatingRowColors(true);

        verticalLayout->addWidget(states);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        showCmd = new QPushButton(SCXMLNavigatorWidget);
        showCmd->setObjectName("showCmd");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(showCmd->sizePolicy().hasHeightForWidth());
        showCmd->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(showCmd);

        editCmd = new QPushButton(SCXMLNavigatorWidget);
        editCmd->setObjectName("editCmd");
        sizePolicy4.setHeightForWidth(editCmd->sizePolicy().hasHeightForWidth());
        editCmd->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(editCmd);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SCXMLNavigatorWidget);

        QMetaObject::connectSlotsByName(SCXMLNavigatorWidget);
    } // setupUi

    void retranslateUi(QWidget *SCXMLNavigatorWidget)
    {
        SCXMLNavigatorWidget->setWindowTitle(QCoreApplication::translate("SCXMLNavigatorWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("SCXMLNavigatorWidget", "States", nullptr));
        flat->setText(QCoreApplication::translate("SCXMLNavigatorWidget", "Flat", nullptr));
        showCmd->setText(QCoreApplication::translate("SCXMLNavigatorWidget", "Show", nullptr));
        editCmd->setText(QCoreApplication::translate("SCXMLNavigatorWidget", "Edit...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLNavigatorWidget: public Ui_SCXMLNavigatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLNAVIGATORWIDGET_H
