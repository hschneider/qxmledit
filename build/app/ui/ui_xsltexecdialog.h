/********************************************************************************
** Form generated from reading UI file 'xsltexecdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSLTEXECDIALOG_H
#define UI_XSLTEXECDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XSLTExecDialog
{
public:
    QHBoxLayout *horizontalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *settings;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *xslName;
    QLabel *label_5;
    QLabel *outputName;
    QLabel *inputFile;
    QToolButton *cmdOutputFile;
    QToolButton *cmdChooseXSL;
    QToolButton *cmdInputFile;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QTableWidget *params;
    QVBoxLayout *verticalLayout_3;
    QPushButton *cmdInsParam;
    QPushButton *cmdModParam;
    QPushButton *cmdDelParam;
    QSpacerItem *verticalSpacer_2;
    QPushButton *cmdResetParam;
    QWidget *oper;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *lblOperation;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_6;

    void setupUi(QDialog *XSLTExecDialog)
    {
        if (XSLTExecDialog->objectName().isEmpty())
            XSLTExecDialog->setObjectName("XSLTExecDialog");
        XSLTExecDialog->resize(1042, 526);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSLTExecDialog->setWindowIcon(icon);
        horizontalLayout_7 = new QHBoxLayout(XSLTExecDialog);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        stackedWidget = new QStackedWidget(XSLTExecDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setLineWidth(1);
        settings = new QWidget();
        settings->setObjectName("settings");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(settings);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(settings);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        xslName = new QLabel(groupBox);
        xslName->setObjectName("xslName");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(xslName->sizePolicy().hasHeightForWidth());
        xslName->setSizePolicy(sizePolicy3);
        xslName->setFrameShape(QFrame::Panel);
        xslName->setFrameShadow(QFrame::Sunken);
        xslName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(xslName, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        outputName = new QLabel(groupBox);
        outputName->setObjectName("outputName");
        sizePolicy3.setHeightForWidth(outputName->sizePolicy().hasHeightForWidth());
        outputName->setSizePolicy(sizePolicy3);
        outputName->setFrameShape(QFrame::StyledPanel);
        outputName->setFrameShadow(QFrame::Sunken);
        outputName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(outputName, 2, 1, 1, 1);

        inputFile = new QLabel(groupBox);
        inputFile->setObjectName("inputFile");
        sizePolicy3.setHeightForWidth(inputFile->sizePolicy().hasHeightForWidth());
        inputFile->setSizePolicy(sizePolicy3);
        inputFile->setFrameShape(QFrame::Panel);
        inputFile->setFrameShadow(QFrame::Sunken);
        inputFile->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(inputFile, 0, 1, 1, 1);

        cmdOutputFile = new QToolButton(groupBox);
        cmdOutputFile->setObjectName("cmdOutputFile");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cmdOutputFile->sizePolicy().hasHeightForWidth());
        cmdOutputFile->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(cmdOutputFile, 2, 2, 1, 1);

        cmdChooseXSL = new QToolButton(groupBox);
        cmdChooseXSL->setObjectName("cmdChooseXSL");
        sizePolicy4.setHeightForWidth(cmdChooseXSL->sizePolicy().hasHeightForWidth());
        cmdChooseXSL->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(cmdChooseXSL, 1, 2, 1, 1);

        cmdInputFile = new QToolButton(groupBox);
        cmdInputFile->setObjectName("cmdInputFile");
        sizePolicy4.setHeightForWidth(cmdInputFile->sizePolicy().hasHeightForWidth());
        cmdInputFile->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(cmdInputFile, 0, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName("horizontalLayout");
        params = new QTableWidget(groupBox_3);
        params->setObjectName("params");
        params->setAlternatingRowColors(true);
        params->setSelectionMode(QAbstractItemView::SingleSelection);
        params->setSortingEnabled(true);

        horizontalLayout->addWidget(params);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        cmdInsParam = new QPushButton(groupBox_3);
        cmdInsParam->setObjectName("cmdInsParam");

        verticalLayout_3->addWidget(cmdInsParam);

        cmdModParam = new QPushButton(groupBox_3);
        cmdModParam->setObjectName("cmdModParam");

        verticalLayout_3->addWidget(cmdModParam);

        cmdDelParam = new QPushButton(groupBox_3);
        cmdDelParam->setObjectName("cmdDelParam");

        verticalLayout_3->addWidget(cmdDelParam);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        cmdResetParam = new QPushButton(groupBox_3);
        cmdResetParam->setObjectName("cmdResetParam");

        verticalLayout_3->addWidget(cmdResetParam);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addWidget(groupBox_3);


        horizontalLayout_4->addWidget(groupBox);

        stackedWidget->addWidget(settings);
        oper = new QWidget();
        oper->setObjectName("oper");
        horizontalLayout_5 = new QHBoxLayout(oper);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        groupBox_2 = new QGroupBox(oper);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setFlat(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lblOperation = new QLabel(groupBox_2);
        lblOperation->setObjectName("lblOperation");

        horizontalLayout_3->addWidget(lblOperation);


        verticalLayout_2->addLayout(horizontalLayout_3);

        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        sizePolicy4.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy4);
        progressBar->setMaximum(0);
        progressBar->setValue(-1);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");

        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_5->addWidget(groupBox_2);

        stackedWidget->addWidget(oper);

        horizontalLayout_7->addWidget(stackedWidget);


        retranslateUi(XSLTExecDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSLTExecDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSLTExecDialog, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XSLTExecDialog);
    } // setupUi

    void retranslateUi(QDialog *XSLTExecDialog)
    {
        XSLTExecDialog->setWindowTitle(QCoreApplication::translate("XSLTExecDialog", "XSLT Execution", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("XSLTExecDialog", "Source:", nullptr));
        label_2->setText(QCoreApplication::translate("XSLTExecDialog", "Output:", nullptr));
        xslName->setText(QCoreApplication::translate("XSLTExecDialog", "...", nullptr));
        label_5->setText(QCoreApplication::translate("XSLTExecDialog", "XSL:", nullptr));
        outputName->setText(QCoreApplication::translate("XSLTExecDialog", "...", nullptr));
        inputFile->setText(QCoreApplication::translate("XSLTExecDialog", "...", nullptr));
        cmdOutputFile->setText(QCoreApplication::translate("XSLTExecDialog", "Browse...", nullptr));
        cmdChooseXSL->setText(QCoreApplication::translate("XSLTExecDialog", "Browse...", nullptr));
        cmdInputFile->setText(QCoreApplication::translate("XSLTExecDialog", "Browse...", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("XSLTExecDialog", "Parameters:", nullptr));
        cmdInsParam->setText(QCoreApplication::translate("XSLTExecDialog", "&Add", nullptr));
        cmdModParam->setText(QCoreApplication::translate("XSLTExecDialog", "&Mod", nullptr));
        cmdDelParam->setText(QCoreApplication::translate("XSLTExecDialog", "&Delete", nullptr));
        cmdResetParam->setText(QCoreApplication::translate("XSLTExecDialog", "&Reset", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("XSLTExecDialog", "Operation:", nullptr));
        lblOperation->setText(QCoreApplication::translate("XSLTExecDialog", "---", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSLTExecDialog: public Ui_XSLTExecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSLTEXECDIALOG_H
