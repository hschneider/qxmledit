/********************************************************************************
** Form generated from reading UI file 'xsltnavigatorwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSLTNAVIGATORWIDGET_H
#define UI_XSLTNAVIGATORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XSLTNavigatorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeNavigator;
    QHBoxLayout *horizontalLayout;
    QPushButton *showCmd;
    QPushButton *editCmd;

    void setupUi(QWidget *XSLTNavigatorWidget)
    {
        if (XSLTNavigatorWidget->objectName().isEmpty())
            XSLTNavigatorWidget->setObjectName("XSLTNavigatorWidget");
        XSLTNavigatorWidget->resize(186, 257);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XSLTNavigatorWidget->sizePolicy().hasHeightForWidth());
        XSLTNavigatorWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(XSLTNavigatorWidget);
        verticalLayout->setObjectName("verticalLayout");
        treeNavigator = new QTreeWidget(XSLTNavigatorWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeNavigator->setHeaderItem(__qtreewidgetitem);
        treeNavigator->setObjectName("treeNavigator");
        treeNavigator->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeNavigator->setAlternatingRowColors(true);
        treeNavigator->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeNavigator->setUniformRowHeights(true);
        treeNavigator->setAllColumnsShowFocus(true);
        treeNavigator->setHeaderHidden(true);

        verticalLayout->addWidget(treeNavigator);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        showCmd = new QPushButton(XSLTNavigatorWidget);
        showCmd->setObjectName("showCmd");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(showCmd->sizePolicy().hasHeightForWidth());
        showCmd->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(showCmd);

        editCmd = new QPushButton(XSLTNavigatorWidget);
        editCmd->setObjectName("editCmd");
        sizePolicy1.setHeightForWidth(editCmd->sizePolicy().hasHeightForWidth());
        editCmd->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(editCmd);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(XSLTNavigatorWidget);

        QMetaObject::connectSlotsByName(XSLTNavigatorWidget);
    } // setupUi

    void retranslateUi(QWidget *XSLTNavigatorWidget)
    {
        XSLTNavigatorWidget->setWindowTitle(QCoreApplication::translate("XSLTNavigatorWidget", "Form", nullptr));
        showCmd->setText(QCoreApplication::translate("XSLTNavigatorWidget", "Show", nullptr));
        editCmd->setText(QCoreApplication::translate("XSLTNavigatorWidget", "Edit...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSLTNavigatorWidget: public Ui_XSLTNavigatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSLTNAVIGATORWIDGET_H
