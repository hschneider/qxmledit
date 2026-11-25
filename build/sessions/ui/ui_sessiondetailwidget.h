/********************************************************************************
** Form generated from reading UI file 'sessiondetailwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONDETAILWIDGET_H
#define UI_SESSIONDETAILWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionDetailWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *container;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableView *files;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *accesses;

    void setupUi(QWidget *SessionDetailWidget)
    {
        if (SessionDetailWidget->objectName().isEmpty())
            SessionDetailWidget->setObjectName("SessionDetailWidget");
        SessionDetailWidget->resize(670, 386);
        verticalLayout = new QVBoxLayout(SessionDetailWidget);
        verticalLayout->setObjectName("verticalLayout");
        container = new QTabWidget(SessionDetailWidget);
        container->setObjectName("container");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        files = new QTableView(tab);
        files->setObjectName("files");
        files->setEditTriggers(QAbstractItemView::NoEditTriggers);
        files->setAlternatingRowColors(true);
        files->setSelectionMode(QAbstractItemView::SingleSelection);
        files->setSelectionBehavior(QAbstractItemView::SelectRows);
        files->setSortingEnabled(true);

        verticalLayout_2->addWidget(files);

        container->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        accesses = new QTableView(tab_2);
        accesses->setObjectName("accesses");
        accesses->setEditTriggers(QAbstractItemView::NoEditTriggers);
        accesses->setAlternatingRowColors(true);
        accesses->setSelectionMode(QAbstractItemView::SingleSelection);
        accesses->setSelectionBehavior(QAbstractItemView::SelectRows);
        accesses->setSortingEnabled(true);

        horizontalLayout_2->addWidget(accesses);

        container->addTab(tab_2, QString());

        verticalLayout->addWidget(container);


        retranslateUi(SessionDetailWidget);

        container->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SessionDetailWidget);
    } // setupUi

    void retranslateUi(QWidget *SessionDetailWidget)
    {
        SessionDetailWidget->setWindowTitle(QCoreApplication::translate("SessionDetailWidget", "Form", nullptr));
        container->setTabText(container->indexOf(tab), QCoreApplication::translate("SessionDetailWidget", "Files", nullptr));
        container->setTabText(container->indexOf(tab_2), QCoreApplication::translate("SessionDetailWidget", "Accesses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SessionDetailWidget: public Ui_SessionDetailWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONDETAILWIDGET_H
