/********************************************************************************
** Form generated from reading UI file 'alloweditemsinsert.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLOWEDITEMSINSERT_H
#define UI_ALLOWEDITEMSINSERT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AllowedItemsInsert
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *allowedItems;
    QLabel *label_2;
    QTableWidget *attributes;
    QHBoxLayout *horizontalLayout;
    QToolButton *undo;
    QToolButton *redo;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AllowedItemsInsert)
    {
        if (AllowedItemsInsert->objectName().isEmpty())
            AllowedItemsInsert->setObjectName("AllowedItemsInsert");
        AllowedItemsInsert->resize(766, 579);
        AllowedItemsInsert->setSizeGripEnabled(false);
        AllowedItemsInsert->setModal(true);
        verticalLayout = new QVBoxLayout(AllowedItemsInsert);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AllowedItemsInsert);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        allowedItems = new QTreeWidget(AllowedItemsInsert);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tree/el_icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon);
        allowedItems->setHeaderItem(__qtreewidgetitem);
        allowedItems->setObjectName("allowedItems");
        allowedItems->setAlternatingRowColors(true);

        verticalLayout->addWidget(allowedItems);

        label_2 = new QLabel(AllowedItemsInsert);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        attributes = new QTableWidget(AllowedItemsInsert);
        attributes->setObjectName("attributes");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(attributes->sizePolicy().hasHeightForWidth());
        attributes->setSizePolicy(sizePolicy);
        attributes->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        attributes->setAlternatingRowColors(true);
        attributes->setSelectionMode(QAbstractItemView::SingleSelection);
        attributes->setSelectionBehavior(QAbstractItemView::SelectItems);
        attributes->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        attributes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(attributes);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        undo = new QToolButton(AllowedItemsInsert);
        undo->setObjectName("undo");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit/undo"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        undo->setIcon(icon1);

        horizontalLayout->addWidget(undo);

        redo = new QToolButton(AllowedItemsInsert);
        redo->setObjectName("redo");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit/redo"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        redo->setIcon(icon2);

        horizontalLayout->addWidget(redo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(AllowedItemsInsert);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AllowedItemsInsert);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AllowedItemsInsert, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AllowedItemsInsert, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AllowedItemsInsert);
    } // setupUi

    void retranslateUi(QDialog *AllowedItemsInsert)
    {
        AllowedItemsInsert->setWindowTitle(QCoreApplication::translate("AllowedItemsInsert", "Allowed Elements", nullptr));
        label->setText(QCoreApplication::translate("AllowedItemsInsert", "Choose elements to insert coherent with the schema", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = allowedItems->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("AllowedItemsInsert", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("AllowedItemsInsert", "Elements", nullptr));
        label_2->setText(QCoreApplication::translate("AllowedItemsInsert", "Attributes", nullptr));
        undo->setText(QCoreApplication::translate("AllowedItemsInsert", "undo", nullptr));
        redo->setText(QCoreApplication::translate("AllowedItemsInsert", "redo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllowedItemsInsert: public Ui_AllowedItemsInsert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLOWEDITEMSINSERT_H
