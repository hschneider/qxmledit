/********************************************************************************
** Form generated from reading UI file 'preferreddirs.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERREDDIRS_H
#define UI_PREFERREDDIRS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferredDirs
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListView *dirList;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *add;
    QPushButton *remove;

    void setupUi(QDialog *PreferredDirs)
    {
        if (PreferredDirs->objectName().isEmpty())
            PreferredDirs->setObjectName("PreferredDirs");
        PreferredDirs->resize(510, 318);
        horizontalLayout = new QHBoxLayout(PreferredDirs);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(PreferredDirs);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        dirList = new QListView(PreferredDirs);
        dirList->setObjectName("dirList");
        dirList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dirList->setAlternatingRowColors(true);
        dirList->setSelectionBehavior(QAbstractItemView::SelectRows);
        dirList->setTextElideMode(Qt::ElideMiddle);
        dirList->setModelColumn(0);
        dirList->setUniformItemSizes(false);

        verticalLayout_2->addWidget(dirList);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(PreferredDirs);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        add = new QPushButton(PreferredDirs);
        add->setObjectName("add");

        verticalLayout->addWidget(add);

        remove = new QPushButton(PreferredDirs);
        remove->setObjectName("remove");

        verticalLayout->addWidget(remove);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(PreferredDirs);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PreferredDirs, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PreferredDirs, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PreferredDirs);
    } // setupUi

    void retranslateUi(QDialog *PreferredDirs)
    {
        PreferredDirs->setWindowTitle(QCoreApplication::translate("PreferredDirs", "Preferred directories", nullptr));
        label->setText(QCoreApplication::translate("PreferredDirs", "Preferred directories", nullptr));
        add->setText(QCoreApplication::translate("PreferredDirs", "Add...", nullptr));
        remove->setText(QCoreApplication::translate("PreferredDirs", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferredDirs: public Ui_PreferredDirs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERREDDIRS_H
