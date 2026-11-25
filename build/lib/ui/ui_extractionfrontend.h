/********************************************************************************
** Form generated from reading UI file 'extractionfrontend.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACTIONFRONTEND_H
#define UI_EXTRACTIONFRONTEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtractionFrontEnd
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *inputFile;
    QProgressBar *progressBar;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *operationCount;
    QLabel *label_3;
    QLabel *documentsNumber;
    QLabel *label_4;
    QLabel *numFoldersCreated;
    QLabel *label_5;
    QLabel *currentSubfolder;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdCancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ExtractionFrontEnd)
    {
        if (ExtractionFrontEnd->objectName().isEmpty())
            ExtractionFrontEnd->setObjectName("ExtractionFrontEnd");
        ExtractionFrontEnd->resize(527, 343);
        verticalLayout = new QVBoxLayout(ExtractionFrontEnd);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(20, -1, 20, -1);
        label = new QLabel(ExtractionFrontEnd);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 10, -1, 10);
        label_6 = new QLabel(ExtractionFrontEnd);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        inputFile = new QLabel(ExtractionFrontEnd);
        inputFile->setObjectName("inputFile");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(inputFile->sizePolicy().hasHeightForWidth());
        inputFile->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(inputFile);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(ExtractionFrontEnd);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setInvertedAppearance(true);

        verticalLayout->addWidget(progressBar);

        formLayout = new QFormLayout();
        formLayout->setContentsMargins(10, 10, 10, 10);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_2 = new QLabel(ExtractionFrontEnd);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        operationCount = new QLabel(ExtractionFrontEnd);
        operationCount->setObjectName("operationCount");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(operationCount->sizePolicy().hasHeightForWidth());
        operationCount->setSizePolicy(sizePolicy3);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, operationCount);

        label_3 = new QLabel(ExtractionFrontEnd);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        documentsNumber = new QLabel(ExtractionFrontEnd);
        documentsNumber->setObjectName("documentsNumber");
        sizePolicy3.setHeightForWidth(documentsNumber->sizePolicy().hasHeightForWidth());
        documentsNumber->setSizePolicy(sizePolicy3);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, documentsNumber);

        label_4 = new QLabel(ExtractionFrontEnd);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_4);

        numFoldersCreated = new QLabel(ExtractionFrontEnd);
        numFoldersCreated->setObjectName("numFoldersCreated");
        sizePolicy3.setHeightForWidth(numFoldersCreated->sizePolicy().hasHeightForWidth());
        numFoldersCreated->setSizePolicy(sizePolicy3);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, numFoldersCreated);

        label_5 = new QLabel(ExtractionFrontEnd);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_5);

        currentSubfolder = new QLabel(ExtractionFrontEnd);
        currentSubfolder->setObjectName("currentSubfolder");
        sizePolicy3.setHeightForWidth(currentSubfolder->sizePolicy().hasHeightForWidth());
        currentSubfolder->setSizePolicy(sizePolicy3);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, currentSubfolder);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cmdCancel = new QPushButton(ExtractionFrontEnd);
        cmdCancel->setObjectName("cmdCancel");
        sizePolicy.setHeightForWidth(cmdCancel->sizePolicy().hasHeightForWidth());
        cmdCancel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmdCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ExtractionFrontEnd);

        QMetaObject::connectSlotsByName(ExtractionFrontEnd);
    } // setupUi

    void retranslateUi(QDialog *ExtractionFrontEnd)
    {
        ExtractionFrontEnd->setWindowTitle(QCoreApplication::translate("ExtractionFrontEnd", "Extraction", nullptr));
        label->setText(QCoreApplication::translate("ExtractionFrontEnd", "Extraction in progress...", nullptr));
        label_6->setText(QCoreApplication::translate("ExtractionFrontEnd", "Input file:", nullptr));
        inputFile->setText(QCoreApplication::translate("ExtractionFrontEnd", "---", nullptr));
        label_2->setText(QCoreApplication::translate("ExtractionFrontEnd", "Input file read operation count:", nullptr));
        operationCount->setText(QCoreApplication::translate("ExtractionFrontEnd", "-----", nullptr));
        label_3->setText(QCoreApplication::translate("ExtractionFrontEnd", "Documents found:", nullptr));
        documentsNumber->setText(QCoreApplication::translate("ExtractionFrontEnd", "----", nullptr));
        label_4->setText(QCoreApplication::translate("ExtractionFrontEnd", "Folders created:", nullptr));
        numFoldersCreated->setText(QCoreApplication::translate("ExtractionFrontEnd", "----", nullptr));
        label_5->setText(QCoreApplication::translate("ExtractionFrontEnd", "Current subfolder:", nullptr));
        currentSubfolder->setText(QCoreApplication::translate("ExtractionFrontEnd", "---", nullptr));
        cmdCancel->setText(QCoreApplication::translate("ExtractionFrontEnd", "Cancel Extraction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtractionFrontEnd: public Ui_ExtractionFrontEnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACTIONFRONTEND_H
