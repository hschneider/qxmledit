/********************************************************************************
** Form generated from reading UI file 'xsdfullannotationsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDFULLANNOTATIONSDIALOG_H
#define UI_XSDFULLANNOTATIONSDIALOG_H

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

class Ui_XSDFullAnnotationsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *annotations;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdNew;
    QPushButton *cmdModify;
    QPushButton *cmdDelete;
    QSpacerItem *verticalSpacer_2;
    QPushButton *cmdMoveUp;
    QPushButton *cmdMoveDown;

    void setupUi(QDialog *XSDFullAnnotationsDialog)
    {
        if (XSDFullAnnotationsDialog->objectName().isEmpty())
            XSDFullAnnotationsDialog->setObjectName("XSDFullAnnotationsDialog");
        XSDFullAnnotationsDialog->resize(833, 391);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDFullAnnotationsDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(XSDFullAnnotationsDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        annotations = new QTableWidget(XSDFullAnnotationsDialog);
        if (annotations->columnCount() < 4)
            annotations->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        annotations->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        annotations->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        annotations->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        annotations->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        annotations->setObjectName("annotations");
        annotations->setEditTriggers(QAbstractItemView::NoEditTriggers);
        annotations->setDragEnabled(true);
        annotations->setDragDropMode(QAbstractItemView::NoDragDrop);
        annotations->setAlternatingRowColors(true);
        annotations->setSelectionMode(QAbstractItemView::SingleSelection);
        annotations->setSelectionBehavior(QAbstractItemView::SelectRows);
        annotations->setSortingEnabled(true);
        annotations->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(annotations);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(XSDFullAnnotationsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdNew = new QPushButton(XSDFullAnnotationsDialog);
        cmdNew->setObjectName("cmdNew");

        verticalLayout->addWidget(cmdNew);

        cmdModify = new QPushButton(XSDFullAnnotationsDialog);
        cmdModify->setObjectName("cmdModify");

        verticalLayout->addWidget(cmdModify);

        cmdDelete = new QPushButton(XSDFullAnnotationsDialog);
        cmdDelete->setObjectName("cmdDelete");

        verticalLayout->addWidget(cmdDelete);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        cmdMoveUp = new QPushButton(XSDFullAnnotationsDialog);
        cmdMoveUp->setObjectName("cmdMoveUp");

        verticalLayout->addWidget(cmdMoveUp);

        cmdMoveDown = new QPushButton(XSDFullAnnotationsDialog);
        cmdMoveDown->setObjectName("cmdMoveDown");

        verticalLayout->addWidget(cmdMoveDown);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(XSDFullAnnotationsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDFullAnnotationsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDFullAnnotationsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XSDFullAnnotationsDialog);
    } // setupUi

    void retranslateUi(QDialog *XSDFullAnnotationsDialog)
    {
        XSDFullAnnotationsDialog->setWindowTitle(QCoreApplication::translate("XSDFullAnnotationsDialog", "Annotations", nullptr));
        QTableWidgetItem *___qtablewidgetitem = annotations->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = annotations->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "Language", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = annotations->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "Source", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = annotations->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "Annotation", nullptr));
        cmdNew->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "&New", nullptr));
        cmdModify->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "&Modify", nullptr));
        cmdDelete->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "&Delete", nullptr));
        cmdMoveUp->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "Move &up", nullptr));
        cmdMoveDown->setText(QCoreApplication::translate("XSDFullAnnotationsDialog", "Move do&wn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDFullAnnotationsDialog: public Ui_XSDFullAnnotationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDFULLANNOTATIONSDIALOG_H
