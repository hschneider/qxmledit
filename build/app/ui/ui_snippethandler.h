/********************************************************************************
** Form generated from reading UI file 'snippethandler.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNIPPETHANDLER_H
#define UI_SNIPPETHANDLER_H

#include <QtCore/QVariant>
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

class Ui_SnippetHandler
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

    void setupUi(QDialog *SnippetHandler)
    {
        if (SnippetHandler->objectName().isEmpty())
            SnippetHandler->setObjectName("SnippetHandler");
        SnippetHandler->resize(616, 512);
        horizontalLayout = new QHBoxLayout(SnippetHandler);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        snippets = new QTreeWidget(SnippetHandler);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        snippets->setHeaderItem(__qtreewidgetitem);
        snippets->setObjectName("snippets");

        verticalLayout->addWidget(snippets);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(SnippetHandler);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        newCmd = new QPushButton(SnippetHandler);
        newCmd->setObjectName("newCmd");

        verticalLayout_2->addWidget(newCmd);

        modifyCmd = new QPushButton(SnippetHandler);
        modifyCmd->setObjectName("modifyCmd");

        verticalLayout_2->addWidget(modifyCmd);

        deleteCmd = new QPushButton(SnippetHandler);
        deleteCmd->setObjectName("deleteCmd");

        verticalLayout_2->addWidget(deleteCmd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SnippetHandler);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SnippetHandler, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SnippetHandler, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SnippetHandler);
    } // setupUi

    void retranslateUi(QDialog *SnippetHandler)
    {
        SnippetHandler->setWindowTitle(QCoreApplication::translate("SnippetHandler", "Snippets", nullptr));
        newCmd->setText(QCoreApplication::translate("SnippetHandler", "&New", nullptr));
        modifyCmd->setText(QCoreApplication::translate("SnippetHandler", "&Modify", nullptr));
        deleteCmd->setText(QCoreApplication::translate("SnippetHandler", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SnippetHandler: public Ui_SnippetHandler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNIPPETHANDLER_H
