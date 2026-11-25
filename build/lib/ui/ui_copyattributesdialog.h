/********************************************************************************
** Form generated from reading UI file 'copyattributesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYATTRIBUTESDIALOG_H
#define UI_COPYATTRIBUTESDIALOG_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyAttributesDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *attributes;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdDeselectAll;
    QSpacerItem *verticalSpacer_2;
    QPushButton *cmdSelectAll;

    void setupUi(QDialog *CopyAttributesDialog)
    {
        if (CopyAttributesDialog->objectName().isEmpty())
            CopyAttributesDialog->setObjectName("CopyAttributesDialog");
        CopyAttributesDialog->resize(813, 619);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CopyAttributesDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(CopyAttributesDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        attributes = new QTableWidget(CopyAttributesDialog);
        attributes->setObjectName("attributes");
        attributes->setAlternatingRowColors(true);
        attributes->setSortingEnabled(true);

        horizontalLayout->addWidget(attributes);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(CopyAttributesDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        cmdDeselectAll = new QPushButton(CopyAttributesDialog);
        cmdDeselectAll->setObjectName("cmdDeselectAll");

        verticalLayout->addWidget(cmdDeselectAll);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        cmdSelectAll = new QPushButton(CopyAttributesDialog);
        cmdSelectAll->setObjectName("cmdSelectAll");

        verticalLayout->addWidget(cmdSelectAll);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(CopyAttributesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CopyAttributesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CopyAttributesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CopyAttributesDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyAttributesDialog)
    {
        CopyAttributesDialog->setWindowTitle(QCoreApplication::translate("CopyAttributesDialog", "Copy Attributes", nullptr));
        cmdDeselectAll->setText(QCoreApplication::translate("CopyAttributesDialog", "Deselect All", nullptr));
        cmdSelectAll->setText(QCoreApplication::translate("CopyAttributesDialog", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CopyAttributesDialog: public Ui_CopyAttributesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYATTRIBUTESDIALOG_H
