/********************************************************************************
** Form generated from reading UI file 'schemareferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEMAREFERENCESDIALOG_H
#define UI_SCHEMAREFERENCESDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SchemaReferencesDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *enableNoNsSchemaLocation;
    QLineEdit *noNsSchemaLocation;
    QPushButton *cmdSelectNs;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *otherNs;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdAddNs;
    QPushButton *cmdModNs;
    QPushButton *cmdDelNs;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SchemaReferencesDialog)
    {
        if (SchemaReferencesDialog->objectName().isEmpty())
            SchemaReferencesDialog->setObjectName("SchemaReferencesDialog");
        SchemaReferencesDialog->resize(749, 403);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SchemaReferencesDialog->setWindowIcon(icon);
        horizontalLayout_3 = new QHBoxLayout(SchemaReferencesDialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        enableNoNsSchemaLocation = new QCheckBox(SchemaReferencesDialog);
        enableNoNsSchemaLocation->setObjectName("enableNoNsSchemaLocation");

        horizontalLayout->addWidget(enableNoNsSchemaLocation);

        noNsSchemaLocation = new QLineEdit(SchemaReferencesDialog);
        noNsSchemaLocation->setObjectName("noNsSchemaLocation");

        horizontalLayout->addWidget(noNsSchemaLocation);

        cmdSelectNs = new QPushButton(SchemaReferencesDialog);
        cmdSelectNs->setObjectName("cmdSelectNs");

        horizontalLayout->addWidget(cmdSelectNs);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(SchemaReferencesDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        otherNs = new QTableWidget(SchemaReferencesDialog);
        if (otherNs->columnCount() < 2)
            otherNs->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        otherNs->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        otherNs->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        otherNs->setObjectName("otherNs");
        otherNs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        otherNs->setAlternatingRowColors(true);
        otherNs->setSelectionMode(QAbstractItemView::SingleSelection);
        otherNs->setSelectionBehavior(QAbstractItemView::SelectRows);
        otherNs->setSortingEnabled(true);
        otherNs->setColumnCount(2);
        otherNs->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(otherNs);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdAddNs = new QPushButton(SchemaReferencesDialog);
        cmdAddNs->setObjectName("cmdAddNs");

        verticalLayout->addWidget(cmdAddNs);

        cmdModNs = new QPushButton(SchemaReferencesDialog);
        cmdModNs->setObjectName("cmdModNs");

        verticalLayout->addWidget(cmdModNs);

        cmdDelNs = new QPushButton(SchemaReferencesDialog);
        cmdDelNs->setObjectName("cmdDelNs");

        verticalLayout->addWidget(cmdDelNs);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        buttonBox = new QDialogButtonBox(SchemaReferencesDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

#if QT_CONFIG(shortcut)
        label->setBuddy(otherNs);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SchemaReferencesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SchemaReferencesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SchemaReferencesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SchemaReferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *SchemaReferencesDialog)
    {
        SchemaReferencesDialog->setWindowTitle(QCoreApplication::translate("SchemaReferencesDialog", "XML Schema References", nullptr));
        enableNoNsSchemaLocation->setText(QCoreApplication::translate("SchemaReferencesDialog", "Elements &without namespace:", nullptr));
        noNsSchemaLocation->setText(QString());
        cmdSelectNs->setText(QCoreApplication::translate("SchemaReferencesDialog", "Select...", nullptr));
        label->setText(QCoreApplication::translate("SchemaReferencesDialog", "&Namespaces:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = otherNs->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SchemaReferencesDialog", "Namespace Uri", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = otherNs->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SchemaReferencesDialog", "Schema Location", nullptr));
        cmdAddNs->setText(QCoreApplication::translate("SchemaReferencesDialog", "&Add", nullptr));
        cmdModNs->setText(QCoreApplication::translate("SchemaReferencesDialog", "&Modify", nullptr));
        cmdDelNs->setText(QCoreApplication::translate("SchemaReferencesDialog", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SchemaReferencesDialog: public Ui_SchemaReferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEMAREFERENCESDIALOG_H
