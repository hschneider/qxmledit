/********************************************************************************
** Form generated from reading UI file 'xsdenumdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDENUMDIALOG_H
#define UI_XSDENUMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XSDEnumDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableWidget *facets;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdAdd;
    QPushButton *cmdMod;
    QPushButton *cmdAnnot;
    QPushButton *cmdDel;
    QPushButton *cmdMoveUp;
    QPushButton *cmdMoveDown;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *XSDEnumDialog)
    {
        if (XSDEnumDialog->objectName().isEmpty())
            XSDEnumDialog->setObjectName("XSDEnumDialog");
        XSDEnumDialog->resize(784, 532);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDEnumDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(XSDEnumDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(XSDEnumDialog);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        facets = new QTableWidget(XSDEnumDialog);
        facets->setObjectName("facets");

        horizontalLayout->addWidget(facets);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdAdd = new QPushButton(XSDEnumDialog);
        cmdAdd->setObjectName("cmdAdd");

        verticalLayout->addWidget(cmdAdd);

        cmdMod = new QPushButton(XSDEnumDialog);
        cmdMod->setObjectName("cmdMod");

        verticalLayout->addWidget(cmdMod);

        cmdAnnot = new QPushButton(XSDEnumDialog);
        cmdAnnot->setObjectName("cmdAnnot");

        verticalLayout->addWidget(cmdAnnot);

        cmdDel = new QPushButton(XSDEnumDialog);
        cmdDel->setObjectName("cmdDel");

        verticalLayout->addWidget(cmdDel);

        cmdMoveUp = new QPushButton(XSDEnumDialog);
        cmdMoveUp->setObjectName("cmdMoveUp");

        verticalLayout->addWidget(cmdMoveUp);

        cmdMoveDown = new QPushButton(XSDEnumDialog);
        cmdMoveDown->setObjectName("cmdMoveDown");

        verticalLayout->addWidget(cmdMoveDown);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(XSDEnumDialog);
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


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(XSDEnumDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDEnumDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDEnumDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XSDEnumDialog);
    } // setupUi

    void retranslateUi(QDialog *XSDEnumDialog)
    {
        XSDEnumDialog->setWindowTitle(QCoreApplication::translate("XSDEnumDialog", "Edit XSD Enumeration", nullptr));
        label->setText(QCoreApplication::translate("XSDEnumDialog", "Facets (enumerations/restrictions)", nullptr));
        cmdAdd->setText(QCoreApplication::translate("XSDEnumDialog", "Add...", nullptr));
        cmdMod->setText(QCoreApplication::translate("XSDEnumDialog", "Modify", nullptr));
        cmdAnnot->setText(QCoreApplication::translate("XSDEnumDialog", "Annotation", nullptr));
        cmdDel->setText(QCoreApplication::translate("XSDEnumDialog", "Delete", nullptr));
        cmdMoveUp->setText(QCoreApplication::translate("XSDEnumDialog", "Move Up", nullptr));
        cmdMoveDown->setText(QCoreApplication::translate("XSDEnumDialog", "Move Down", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDEnumDialog: public Ui_XSDEnumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDENUMDIALOG_H
