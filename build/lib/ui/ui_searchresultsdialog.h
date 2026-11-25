/********************************************************************************
** Form generated from reading UI file 'searchresultsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULTSDIALOG_H
#define UI_SEARCHRESULTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "modules/search/searchwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SearchResultsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    SearchWidget *searchWidget;
    QHBoxLayout *mainLayout;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SearchResultsDialog)
    {
        if (SearchResultsDialog->objectName().isEmpty())
            SearchResultsDialog->setObjectName("SearchResultsDialog");
        SearchResultsDialog->resize(1190, 665);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SearchResultsDialog->setWindowIcon(icon);
        SearchResultsDialog->setSizeGripEnabled(true);
        SearchResultsDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SearchResultsDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        searchWidget = new SearchWidget(SearchResultsDialog);
        searchWidget->setObjectName("searchWidget");

        verticalLayout_2->addWidget(searchWidget);

        mainLayout = new QHBoxLayout();
        mainLayout->setObjectName("mainLayout");
        treeWidget = new QTreeWidget(SearchResultsDialog);
        treeWidget->setObjectName("treeWidget");

        mainLayout->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SearchResultsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        mainLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(mainLayout);


        retranslateUi(SearchResultsDialog);

        QMetaObject::connectSlotsByName(SearchResultsDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchResultsDialog)
    {
        SearchResultsDialog->setWindowTitle(QCoreApplication::translate("SearchResultsDialog", "Search Results", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SearchResultsDialog", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchResultsDialog: public Ui_SearchResultsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULTSDIALOG_H
