/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblEncoding;
    QLabel *fileInfo;
    QLabel *dtdLabel;
    QPlainTextEdit *dtdEdit;
    QLabel *label_3;
    QLabel *lblNoSchemaReferences;
    QTableWidget *tableReferences;
    QLabel *label_4;
    QTableWidget *tableNamespaces;
    QLabel *lblNoNamespace;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName("InfoDialog");
        InfoDialog->resize(843, 454);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        InfoDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(InfoDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(InfoDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lblEncoding = new QLabel(InfoDialog);
        lblEncoding->setObjectName("lblEncoding");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblEncoding->sizePolicy().hasHeightForWidth());
        lblEncoding->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lblEncoding);


        verticalLayout->addLayout(horizontalLayout);

        fileInfo = new QLabel(InfoDialog);
        fileInfo->setObjectName("fileInfo");
        fileInfo->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(fileInfo);

        dtdLabel = new QLabel(InfoDialog);
        dtdLabel->setObjectName("dtdLabel");
        dtdLabel->setFont(font);

        verticalLayout->addWidget(dtdLabel);

        dtdEdit = new QPlainTextEdit(InfoDialog);
        dtdEdit->setObjectName("dtdEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dtdEdit->sizePolicy().hasHeightForWidth());
        dtdEdit->setSizePolicy(sizePolicy2);
        dtdEdit->setReadOnly(true);

        verticalLayout->addWidget(dtdEdit);

        label_3 = new QLabel(InfoDialog);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        lblNoSchemaReferences = new QLabel(InfoDialog);
        lblNoSchemaReferences->setObjectName("lblNoSchemaReferences");

        verticalLayout->addWidget(lblNoSchemaReferences);

        tableReferences = new QTableWidget(InfoDialog);
        tableReferences->setObjectName("tableReferences");
        tableReferences->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableReferences->setAlternatingRowColors(true);
        tableReferences->setGridStyle(Qt::SolidLine);
        tableReferences->setSortingEnabled(true);
        tableReferences->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableReferences->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableReferences);

        label_4 = new QLabel(InfoDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        tableNamespaces = new QTableWidget(InfoDialog);
        tableNamespaces->setObjectName("tableNamespaces");
        tableNamespaces->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableNamespaces->setAlternatingRowColors(true);
        tableNamespaces->setGridStyle(Qt::SolidLine);
        tableNamespaces->setSortingEnabled(true);
        tableNamespaces->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableNamespaces->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableNamespaces);

        lblNoNamespace = new QLabel(InfoDialog);
        lblNoNamespace->setObjectName("lblNoNamespace");

        verticalLayout->addWidget(lblNoNamespace);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(InfoDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Information", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Encoding:", nullptr));
        lblEncoding->setText(QCoreApplication::translate("InfoDialog", "TextLabel", nullptr));
        fileInfo->setText(QCoreApplication::translate("InfoDialog", "---", nullptr));
        dtdLabel->setText(QCoreApplication::translate("InfoDialog", "DTD", nullptr));
        label_3->setText(QCoreApplication::translate("InfoDialog", "XML Schema references", nullptr));
        lblNoSchemaReferences->setText(QCoreApplication::translate("InfoDialog", "There are no XML Schema references", nullptr));
        label_4->setText(QCoreApplication::translate("InfoDialog", "Namespaces", nullptr));
        lblNoNamespace->setText(QCoreApplication::translate("InfoDialog", "There are no declared namespaces.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
