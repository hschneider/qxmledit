/********************************************************************************
** Form generated from reading UI file 'pasteattributesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASTEATTRIBUTESDIALOG_H
#define UI_PASTEATTRIBUTESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_PasteAttributesDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *sessions;
    QTableWidget *attributes;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdClearClipboard;
    QPushButton *cmdDeselectAll;
    QPushButton *cmdSelectAll;

    void setupUi(QDialog *PasteAttributesDialog)
    {
        if (PasteAttributesDialog->objectName().isEmpty())
            PasteAttributesDialog->setObjectName("PasteAttributesDialog");
        PasteAttributesDialog->resize(615, 664);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        PasteAttributesDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(PasteAttributesDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(PasteAttributesDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        sessions = new QComboBox(PasteAttributesDialog);
        sessions->setObjectName("sessions");

        horizontalLayout->addWidget(sessions);


        verticalLayout_2->addLayout(horizontalLayout);

        attributes = new QTableWidget(PasteAttributesDialog);
        attributes->setObjectName("attributes");
        attributes->setAlternatingRowColors(true);
        attributes->setSortingEnabled(true);

        verticalLayout_2->addWidget(attributes);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(PasteAttributesDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        cmdClearClipboard = new QPushButton(PasteAttributesDialog);
        cmdClearClipboard->setObjectName("cmdClearClipboard");

        verticalLayout->addWidget(cmdClearClipboard);

        cmdDeselectAll = new QPushButton(PasteAttributesDialog);
        cmdDeselectAll->setObjectName("cmdDeselectAll");

        verticalLayout->addWidget(cmdDeselectAll);

        cmdSelectAll = new QPushButton(PasteAttributesDialog);
        cmdSelectAll->setObjectName("cmdSelectAll");

        verticalLayout->addWidget(cmdSelectAll);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(PasteAttributesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PasteAttributesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PasteAttributesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PasteAttributesDialog);
    } // setupUi

    void retranslateUi(QDialog *PasteAttributesDialog)
    {
        PasteAttributesDialog->setWindowTitle(QCoreApplication::translate("PasteAttributesDialog", "Paste Attributes", nullptr));
        label->setText(QCoreApplication::translate("PasteAttributesDialog", "Other sessions", nullptr));
        cmdClearClipboard->setText(QCoreApplication::translate("PasteAttributesDialog", "Clear clipboard", nullptr));
        cmdDeselectAll->setText(QCoreApplication::translate("PasteAttributesDialog", "Deselect All", nullptr));
        cmdSelectAll->setText(QCoreApplication::translate("PasteAttributesDialog", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasteAttributesDialog: public Ui_PasteAttributesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASTEATTRIBUTESDIALOG_H
