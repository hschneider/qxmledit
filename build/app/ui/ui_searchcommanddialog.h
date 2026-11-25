/********************************************************************************
** Form generated from reading UI file 'searchcommanddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCOMMANDDIALOG_H
#define UI_SEARCHCOMMANDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchCommandDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *search;
    QCheckBox *allWords;
    QTreeWidget *commands;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SearchCommandDialog)
    {
        if (SearchCommandDialog->objectName().isEmpty())
            SearchCommandDialog->setObjectName("SearchCommandDialog");
        SearchCommandDialog->resize(893, 518);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SearchCommandDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SearchCommandDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(SearchCommandDialog);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(SearchCommandDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        search = new QLineEdit(SearchCommandDialog);
        search->setObjectName("search");

        horizontalLayout_2->addWidget(search);

        allWords = new QCheckBox(SearchCommandDialog);
        allWords->setObjectName("allWords");

        horizontalLayout_2->addWidget(allWords);


        verticalLayout->addLayout(horizontalLayout_2);

        commands = new QTreeWidget(SearchCommandDialog);
        commands->setObjectName("commands");
        commands->setEditTriggers(QAbstractItemView::NoEditTriggers);
        commands->setProperty("showDropIndicator", QVariant(false));
        commands->setAlternatingRowColors(true);
        commands->setUniformRowHeights(true);
        commands->setSortingEnabled(true);
        commands->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(commands);

        label_3 = new QLabel(SearchCommandDialog);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setItalic(true);
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(SearchCommandDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(search);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(search, commands);
        QWidget::setTabOrder(commands, allWords);

        retranslateUi(SearchCommandDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SearchCommandDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SearchCommandDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SearchCommandDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchCommandDialog)
    {
        SearchCommandDialog->setWindowTitle(QCoreApplication::translate("SearchCommandDialog", "Search Command", nullptr));
        label_2->setText(QCoreApplication::translate("SearchCommandDialog", "\n"
"Search a command by name or feature\n"
"", nullptr));
        label->setText(QCoreApplication::translate("SearchCommandDialog", "&Search command:", nullptr));
#if QT_CONFIG(tooltip)
        allWords->setToolTip(QCoreApplication::translate("SearchCommandDialog", "Search items that match all the words.", nullptr));
#endif // QT_CONFIG(tooltip)
        allWords->setText(QCoreApplication::translate("SearchCommandDialog", "&All the Words", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = commands->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("SearchCommandDialog", "Description", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("SearchCommandDialog", "Command", nullptr));
        label_3->setText(QCoreApplication::translate("SearchCommandDialog", "Double click on command or press OK to execute it.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchCommandDialog: public Ui_SearchCommandDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCOMMANDDIALOG_H
