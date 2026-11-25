/********************************************************************************
** Form generated from reading UI file 'specificpropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFICPROPERTIESDIALOG_H
#define UI_SPECIFICPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpecificPropertiesDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SpecificPropertiesDialog)
    {
        if (SpecificPropertiesDialog->objectName().isEmpty())
            SpecificPropertiesDialog->setObjectName("SpecificPropertiesDialog");
        SpecificPropertiesDialog->resize(619, 458);
        horizontalLayout = new QHBoxLayout(SpecificPropertiesDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(SpecificPropertiesDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        treeWidget = new QTreeWidget(SpecificPropertiesDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        verticalLayout->addWidget(treeWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(SpecificPropertiesDialog);
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


        retranslateUi(SpecificPropertiesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SpecificPropertiesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SpecificPropertiesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SpecificPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *SpecificPropertiesDialog)
    {
        SpecificPropertiesDialog->setWindowTitle(QCoreApplication::translate("SpecificPropertiesDialog", "Special Properties", nullptr));
        label->setText(QCoreApplication::translate("SpecificPropertiesDialog", "Choose a XML language to specialize the element:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecificPropertiesDialog: public Ui_SpecificPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFICPROPERTIESDIALOG_H
