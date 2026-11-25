/********************************************************************************
** Form generated from reading UI file 'anonimyzebatchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONIMYZEBATCHDIALOG_H
#define UI_ANONIMYZEBATCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnonimyzeBatchDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *settings;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *cmdChooseProfile;
    QLabel *profileName;
    QLabel *label_5;
    QLabel *inputFile;
    QLabel *outputFile;
    QLabel *label;
    QToolButton *cmdInputFile;
    QToolButton *cmdOutputFile;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QWidget *oper;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *lblOperation;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *cmdCancel;

    void setupUi(QDialog *AnonimyzeBatchDialog)
    {
        if (AnonimyzeBatchDialog->objectName().isEmpty())
            AnonimyzeBatchDialog->setObjectName("AnonimyzeBatchDialog");
        AnonimyzeBatchDialog->setEnabled(true);
        AnonimyzeBatchDialog->resize(796, 233);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonimyzeBatchDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(AnonimyzeBatchDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stackedWidget = new QStackedWidget(AnonimyzeBatchDialog);
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
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cmdChooseProfile = new QPushButton(groupBox);
        cmdChooseProfile->setObjectName("cmdChooseProfile");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmdChooseProfile->sizePolicy().hasHeightForWidth());
        cmdChooseProfile->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdChooseProfile, 1, 2, 1, 1);

        profileName = new QLabel(groupBox);
        profileName->setObjectName("profileName");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(profileName->sizePolicy().hasHeightForWidth());
        profileName->setSizePolicy(sizePolicy4);
        profileName->setFrameShape(QFrame::Panel);
        profileName->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(profileName, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        inputFile = new QLabel(groupBox);
        inputFile->setObjectName("inputFile");
        sizePolicy4.setHeightForWidth(inputFile->sizePolicy().hasHeightForWidth());
        inputFile->setSizePolicy(sizePolicy4);
        inputFile->setFrameShape(QFrame::Panel);
        inputFile->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(inputFile, 0, 1, 1, 1);

        outputFile = new QLabel(groupBox);
        outputFile->setObjectName("outputFile");
        sizePolicy4.setHeightForWidth(outputFile->sizePolicy().hasHeightForWidth());
        outputFile->setSizePolicy(sizePolicy4);
        outputFile->setFrameShape(QFrame::StyledPanel);
        outputFile->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(outputFile, 2, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmdInputFile = new QToolButton(groupBox);
        cmdInputFile->setObjectName("cmdInputFile");
        sizePolicy3.setHeightForWidth(cmdInputFile->sizePolicy().hasHeightForWidth());
        cmdInputFile->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdInputFile, 0, 2, 1, 1);

        cmdOutputFile = new QToolButton(groupBox);
        cmdOutputFile->setObjectName("cmdOutputFile");
        sizePolicy3.setHeightForWidth(cmdOutputFile->sizePolicy().hasHeightForWidth());
        cmdOutputFile->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdOutputFile, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

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


        horizontalLayout->addLayout(verticalLayout);


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
        sizePolicy3.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy3);
        progressBar->setMaximum(0);
        progressBar->setValue(-1);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        cmdCancel = new QPushButton(groupBox_2);
        cmdCancel->setObjectName("cmdCancel");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cmdCancel->sizePolicy().hasHeightForWidth());
        cmdCancel->setSizePolicy(sizePolicy5);

        horizontalLayout_6->addWidget(cmdCancel);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_5->addWidget(groupBox_2);

        stackedWidget->addWidget(oper);

        horizontalLayout_2->addWidget(stackedWidget);


        retranslateUi(AnonimyzeBatchDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonimyzeBatchDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonimyzeBatchDialog, qOverload<>(&QDialog::reject));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AnonimyzeBatchDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonimyzeBatchDialog)
    {
        AnonimyzeBatchDialog->setWindowTitle(QCoreApplication::translate("AnonimyzeBatchDialog", "Anonymize a File", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Anonymized file:", nullptr));
        cmdChooseProfile->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Change...", nullptr));
        profileName->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "...", nullptr));
        label_5->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Profile:", nullptr));
        inputFile->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "...", nullptr));
        outputFile->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "...", nullptr));
        label->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Source file:", nullptr));
        cmdInputFile->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Browse...", nullptr));
        cmdOutputFile->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Browse...", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Operation:", nullptr));
        lblOperation->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "---", nullptr));
        cmdCancel->setText(QCoreApplication::translate("AnonimyzeBatchDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonimyzeBatchDialog: public Ui_AnonimyzeBatchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONIMYZEBATCHDIALOG_H
