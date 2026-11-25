/********************************************************************************
** Form generated from reading UI file 'binaryviewerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYVIEWERDIALOG_H
#define UI_BINARYVIEWERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BinaryViewerDialog
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *fileComboBox;
    QPushButton *cmdBrowse;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QLabel *lblFileSize;
    QLabel *label_12;
    QLabel *lblFileUpdatedOn;
    QLabel *label_9;
    QComboBox *cmbEncodings;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblPage;
    QPushButton *cmdPagePrev;
    QPushButton *cmdPageNext;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *searchBox;
    QPushButton *cmdSearchPrev;
    QPushButton *cmdSearchNext;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *gotoAddress;
    QCheckBox *chkHexOption;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdGoToAddress;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *BinaryViewerDialog)
    {
        if (BinaryViewerDialog->objectName().isEmpty())
            BinaryViewerDialog->setObjectName("BinaryViewerDialog");
        BinaryViewerDialog->resize(1039, 731);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BinaryViewerDialog->setWindowIcon(icon);
        horizontalLayout_7 = new QHBoxLayout(BinaryViewerDialog);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        fileComboBox = new QComboBox(BinaryViewerDialog);
        fileComboBox->setObjectName("fileComboBox");

        horizontalLayout_2->addWidget(fileComboBox);

        cmdBrowse = new QPushButton(BinaryViewerDialog);
        cmdBrowse->setObjectName("cmdBrowse");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmdBrowse->sizePolicy().hasHeightForWidth());
        cmdBrowse->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdBrowse->setIcon(icon1);

        horizontalLayout_2->addWidget(cmdBrowse);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(BinaryViewerDialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_13);

        lblFileSize = new QLabel(groupBox);
        lblFileSize->setObjectName("lblFileSize");

        horizontalLayout->addWidget(lblFileSize);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        lblFileUpdatedOn = new QLabel(groupBox);
        lblFileUpdatedOn->setObjectName("lblFileUpdatedOn");

        horizontalLayout->addWidget(lblFileUpdatedOn);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        cmbEncodings = new QComboBox(groupBox);
        cmbEncodings->setObjectName("cmbEncodings");

        horizontalLayout->addWidget(cmbEncodings);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblPage = new QLabel(BinaryViewerDialog);
        lblPage->setObjectName("lblPage");

        horizontalLayout_4->addWidget(lblPage);

        cmdPagePrev = new QPushButton(BinaryViewerDialog);
        cmdPagePrev->setObjectName("cmdPagePrev");
        sizePolicy.setHeightForWidth(cmdPagePrev->sizePolicy().hasHeightForWidth());
        cmdPagePrev->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arrows/images/go-previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdPagePrev->setIcon(icon2);

        horizontalLayout_4->addWidget(cmdPagePrev);

        cmdPageNext = new QPushButton(BinaryViewerDialog);
        cmdPageNext->setObjectName("cmdPageNext");
        sizePolicy.setHeightForWidth(cmdPageNext->sizePolicy().hasHeightForWidth());
        cmdPageNext->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arrows/images/go-next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdPageNext->setIcon(icon3);

        horizontalLayout_4->addWidget(cmdPageNext);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(BinaryViewerDialog);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        searchBox = new QLineEdit(BinaryViewerDialog);
        searchBox->setObjectName("searchBox");

        horizontalLayout_5->addWidget(searchBox);

        cmdSearchPrev = new QPushButton(BinaryViewerDialog);
        cmdSearchPrev->setObjectName("cmdSearchPrev");

        horizontalLayout_5->addWidget(cmdSearchPrev);

        cmdSearchNext = new QPushButton(BinaryViewerDialog);
        cmdSearchNext->setObjectName("cmdSearchNext");

        horizontalLayout_5->addWidget(cmdSearchNext);


        verticalLayout->addLayout(horizontalLayout_5);

        tableView = new QTableView(BinaryViewerDialog);
        tableView->setObjectName("tableView");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(8);
        tableView->setFont(font1);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setWordWrap(false);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(BinaryViewerDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/special/warning")));

        horizontalLayout_6->addWidget(label_3);

        label = new QLabel(BinaryViewerDialog);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(BinaryViewerDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        gotoAddress = new QLineEdit(BinaryViewerDialog);
        gotoAddress->setObjectName("gotoAddress");

        horizontalLayout_3->addWidget(gotoAddress);

        chkHexOption = new QCheckBox(BinaryViewerDialog);
        chkHexOption->setObjectName("chkHexOption");

        horizontalLayout_3->addWidget(chkHexOption);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        cmdGoToAddress = new QPushButton(BinaryViewerDialog);
        cmdGoToAddress->setObjectName("cmdGoToAddress");

        horizontalLayout_3->addWidget(cmdGoToAddress);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(BinaryViewerDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_2);

#if QT_CONFIG(shortcut)
        label_9->setBuddy(cmbEncodings);
        label_8->setBuddy(searchBox);
        label_2->setBuddy(gotoAddress);
#endif // QT_CONFIG(shortcut)

        retranslateUi(BinaryViewerDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BinaryViewerDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BinaryViewerDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BinaryViewerDialog);
    } // setupUi

    void retranslateUi(QDialog *BinaryViewerDialog)
    {
        BinaryViewerDialog->setWindowTitle(QCoreApplication::translate("BinaryViewerDialog", "Binary files viewer", nullptr));
        cmdBrowse->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("BinaryViewerDialog", "File information", nullptr));
        label_13->setText(QCoreApplication::translate("BinaryViewerDialog", "Size:", nullptr));
        lblFileSize->setText(QCoreApplication::translate("BinaryViewerDialog", "---", nullptr));
        label_12->setText(QCoreApplication::translate("BinaryViewerDialog", "Last updated on:", nullptr));
        lblFileUpdatedOn->setText(QCoreApplication::translate("BinaryViewerDialog", "---", nullptr));
#if QT_CONFIG(tooltip)
        label_9->setToolTip(QCoreApplication::translate("BinaryViewerDialog", "Browse the file system.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_9->setText(QCoreApplication::translate("BinaryViewerDialog", "&Encoding:", nullptr));
        lblPage->setText(QCoreApplication::translate("BinaryViewerDialog", "Page -- of --", nullptr));
        cmdPagePrev->setText(QString());
        cmdPageNext->setText(QString());
        label_8->setText(QCoreApplication::translate("BinaryViewerDialog", "&Search:", nullptr));
        cmdSearchPrev->setText(QCoreApplication::translate("BinaryViewerDialog", "&Previous", nullptr));
        cmdSearchNext->setText(QCoreApplication::translate("BinaryViewerDialog", "&Next", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("BinaryViewerDialog", "Warning: the character representation can be misleading if the selected encoding is not 8 bit.", nullptr));
        label_2->setText(QCoreApplication::translate("BinaryViewerDialog", "Go to &address:", nullptr));
        gotoAddress->setText(QString());
        chkHexOption->setText(QCoreApplication::translate("BinaryViewerDialog", "&Hexadecimal value", nullptr));
        cmdGoToAddress->setText(QCoreApplication::translate("BinaryViewerDialog", "&Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BinaryViewerDialog: public Ui_BinaryViewerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYVIEWERDIALOG_H
