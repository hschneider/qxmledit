/********************************************************************************
** Form generated from reading UI file 'searchletdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHLETDIALOG_H
#define UI_SEARCHLETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchletDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *snippets;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *newCmd;
    QPushButton *modifyCmd;
    QPushButton *deleteCmd;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SearchletDialog)
    {
        if (SearchletDialog->objectName().isEmpty())
            SearchletDialog->setObjectName("SearchletDialog");
        SearchletDialog->setWindowModality(Qt::NonModal);
        SearchletDialog->resize(706, 572);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SearchletDialog->setWindowIcon(icon);
        SearchletDialog->setModal(true);
        horizontalLayout = new QHBoxLayout(SearchletDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        snippets = new QTreeWidget(SearchletDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        snippets->setHeaderItem(__qtreewidgetitem);
        snippets->setObjectName("snippets");

        verticalLayout->addWidget(snippets);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(SearchletDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        newCmd = new QPushButton(SearchletDialog);
        newCmd->setObjectName("newCmd");

        verticalLayout_2->addWidget(newCmd);

        modifyCmd = new QPushButton(SearchletDialog);
        modifyCmd->setObjectName("modifyCmd");

        verticalLayout_2->addWidget(modifyCmd);

        deleteCmd = new QPushButton(SearchletDialog);
        deleteCmd->setObjectName("deleteCmd");

        verticalLayout_2->addWidget(deleteCmd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SearchletDialog);

        QMetaObject::connectSlotsByName(SearchletDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchletDialog)
    {
        SearchletDialog->setWindowTitle(QCoreApplication::translate("SearchletDialog", "Searchlets", nullptr));
        newCmd->setText(QCoreApplication::translate("SearchletDialog", "&New", nullptr));
        modifyCmd->setText(QCoreApplication::translate("SearchletDialog", "&Modify", nullptr));
        deleteCmd->setText(QCoreApplication::translate("SearchletDialog", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchletDialog: public Ui_SearchletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHLETDIALOG_H
