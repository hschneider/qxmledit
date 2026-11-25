/********************************************************************************
** Form generated from reading UI file 'extractfragmentsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACTFRAGMENTSDIALOG_H
#define UI_EXTRACTFRAGMENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtractFragmentsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkExtractFiles;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout;
    QLineEdit *sourceFile;
    QPushButton *sourceFIleSearch;
    QFormLayout *formLayout_2;
    QRadioButton *splitByPath;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *splitPath;
    QLabel *label_11;
    QRadioButton *splitByDepth;
    QSpinBox *depth;
    QFrame *line;
    QRadioButton *extractAll;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *extractRange;
    QLabel *label_9;
    QSpinBox *rangeMin;
    QLabel *label_10;
    QSpinBox *rangeMax;
    QCheckBox *reverseRange;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *extractWithCfr;
    QLineEdit *attrName;
    QComboBox *cfrOperator;
    QLineEdit *compTerm;
    QLabel *label;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QComboBox *cbOperationType;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *chkDeleteUsingPath;
    QLineEdit *pathToDeleteText;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lblAdvancedOptions;
    QPushButton *cmdAdvanced;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *extractDir;
    QPushButton *cmdDirScan;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdViewInBrowser;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *makeSubfolders;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpinBox *eachNFiles;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *sfp1;
    QComboBox *sfp2;
    QComboBox *sfp3;
    QComboBox *sfp4;
    QComboBox *sfp5;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *sfn1;
    QComboBox *sfn2;
    QComboBox *sfn3;
    QComboBox *sfn4;
    QComboBox *sfn5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_12;
    QLabel *lblLike;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtractFragmentsDialog)
    {
        if (ExtractFragmentsDialog->objectName().isEmpty())
            ExtractFragmentsDialog->setObjectName("ExtractFragmentsDialog");
        ExtractFragmentsDialog->resize(832, 774);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ExtractFragmentsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ExtractFragmentsDialog);
        verticalLayout->setObjectName("verticalLayout");
        chkExtractFiles = new QCheckBox(ExtractFragmentsDialog);
        chkExtractFiles->setObjectName("chkExtractFiles");

        verticalLayout->addWidget(chkExtractFiles);

        label_6 = new QLabel(ExtractFragmentsDialog);
        label_6->setObjectName("label_6");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_14 = new QLabel(ExtractFragmentsDialog);
        label_14->setObjectName("label_14");

        horizontalLayout_13->addWidget(label_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        sourceFile = new QLineEdit(ExtractFragmentsDialog);
        sourceFile->setObjectName("sourceFile");

        horizontalLayout->addWidget(sourceFile);

        sourceFIleSearch = new QPushButton(ExtractFragmentsDialog);
        sourceFIleSearch->setObjectName("sourceFIleSearch");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sourceFIleSearch->setIcon(icon1);

        horizontalLayout->addWidget(sourceFIleSearch);


        horizontalLayout_13->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_13);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        splitByPath = new QRadioButton(ExtractFragmentsDialog);
        splitByPath->setObjectName("splitByPath");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, splitByPath);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        splitPath = new QComboBox(ExtractFragmentsDialog);
        splitPath->setObjectName("splitPath");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitPath->sizePolicy().hasHeightForWidth());
        splitPath->setSizePolicy(sizePolicy);
        splitPath->setEditable(true);

        horizontalLayout_7->addWidget(splitPath);

        label_11 = new QLabel(ExtractFragmentsDialog);
        label_11->setObjectName("label_11");

        horizontalLayout_7->addWidget(label_11);


        formLayout_2->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_7);

        splitByDepth = new QRadioButton(ExtractFragmentsDialog);
        splitByDepth->setObjectName("splitByDepth");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, splitByDepth);

        depth = new QSpinBox(ExtractFragmentsDialog);
        depth->setObjectName("depth");
        depth->setMaximum(1000);
        depth->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, depth);


        verticalLayout->addLayout(formLayout_2);

        line = new QFrame(ExtractFragmentsDialog);
        line->setObjectName("line");
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        extractAll = new QRadioButton(ExtractFragmentsDialog);
        extractAll->setObjectName("extractAll");

        verticalLayout->addWidget(extractAll);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        extractRange = new QRadioButton(ExtractFragmentsDialog);
        extractRange->setObjectName("extractRange");

        horizontalLayout_2->addWidget(extractRange);

        label_9 = new QLabel(ExtractFragmentsDialog);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        rangeMin = new QSpinBox(ExtractFragmentsDialog);
        rangeMin->setObjectName("rangeMin");
        rangeMin->setMinimum(1);
        rangeMin->setMaximum(9999999);

        horizontalLayout_2->addWidget(rangeMin);

        label_10 = new QLabel(ExtractFragmentsDialog);
        label_10->setObjectName("label_10");

        horizontalLayout_2->addWidget(label_10);

        rangeMax = new QSpinBox(ExtractFragmentsDialog);
        rangeMax->setObjectName("rangeMax");
        rangeMax->setMinimum(1);
        rangeMax->setMaximum(9999999);

        horizontalLayout_2->addWidget(rangeMax);

        reverseRange = new QCheckBox(ExtractFragmentsDialog);
        reverseRange->setObjectName("reverseRange");

        horizontalLayout_2->addWidget(reverseRange);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        extractWithCfr = new QRadioButton(ExtractFragmentsDialog);
        extractWithCfr->setObjectName("extractWithCfr");

        horizontalLayout_11->addWidget(extractWithCfr);

        attrName = new QLineEdit(ExtractFragmentsDialog);
        attrName->setObjectName("attrName");

        horizontalLayout_11->addWidget(attrName);

        cfrOperator = new QComboBox(ExtractFragmentsDialog);
        cfrOperator->setObjectName("cfrOperator");

        horizontalLayout_11->addWidget(cfrOperator);

        compTerm = new QLineEdit(ExtractFragmentsDialog);
        compTerm->setObjectName("compTerm");

        horizontalLayout_11->addWidget(compTerm);

        label = new QLabel(ExtractFragmentsDialog);
        label->setObjectName("label");

        horizontalLayout_11->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_11);

        label_16 = new QLabel(ExtractFragmentsDialog);
        label_16->setObjectName("label_16");
        label_16->setFont(font);

        verticalLayout->addWidget(label_16);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_15 = new QLabel(ExtractFragmentsDialog);
        label_15->setObjectName("label_15");

        horizontalLayout_12->addWidget(label_15);

        cbOperationType = new QComboBox(ExtractFragmentsDialog);
        cbOperationType->addItem(QString());
        cbOperationType->addItem(QString());
        cbOperationType->addItem(QString());
        cbOperationType->addItem(QString());
        cbOperationType->setObjectName("cbOperationType");

        horizontalLayout_12->addWidget(cbOperationType);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_12);

        label_8 = new QLabel(ExtractFragmentsDialog);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);

        chkDeleteUsingPath = new QCheckBox(ExtractFragmentsDialog);
        chkDeleteUsingPath->setObjectName("chkDeleteUsingPath");

        horizontalLayout_14->addWidget(chkDeleteUsingPath);

        pathToDeleteText = new QLineEdit(ExtractFragmentsDialog);
        pathToDeleteText->setObjectName("pathToDeleteText");

        horizontalLayout_14->addWidget(pathToDeleteText);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        lblAdvancedOptions = new QLabel(ExtractFragmentsDialog);
        lblAdvancedOptions->setObjectName("lblAdvancedOptions");

        horizontalLayout_10->addWidget(lblAdvancedOptions);

        cmdAdvanced = new QPushButton(ExtractFragmentsDialog);
        cmdAdvanced->setObjectName("cmdAdvanced");

        horizontalLayout_10->addWidget(cmdAdvanced);


        verticalLayout->addLayout(horizontalLayout_10);

        label_7 = new QLabel(ExtractFragmentsDialog);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(ExtractFragmentsDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        extractDir = new QLineEdit(ExtractFragmentsDialog);
        extractDir->setObjectName("extractDir");

        horizontalLayout_3->addWidget(extractDir);

        cmdDirScan = new QPushButton(ExtractFragmentsDialog);
        cmdDirScan->setObjectName("cmdDirScan");
        cmdDirScan->setIcon(icon1);

        horizontalLayout_3->addWidget(cmdDirScan);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        cmdViewInBrowser = new QPushButton(ExtractFragmentsDialog);
        cmdViewInBrowser->setObjectName("cmdViewInBrowser");

        horizontalLayout_6->addWidget(cmdViewInBrowser);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        makeSubfolders = new QCheckBox(ExtractFragmentsDialog);
        makeSubfolders->setObjectName("makeSubfolders");

        horizontalLayout_4->addWidget(makeSubfolders);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_3 = new QLabel(ExtractFragmentsDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_3);

        eachNFiles = new QSpinBox(ExtractFragmentsDialog);
        eachNFiles->setObjectName("eachNFiles");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(eachNFiles->sizePolicy().hasHeightForWidth());
        eachNFiles->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(eachNFiles);

        label_4 = new QLabel(ExtractFragmentsDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(ExtractFragmentsDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        sfp1 = new QComboBox(ExtractFragmentsDialog);
        sfp1->setObjectName("sfp1");
        sizePolicy.setHeightForWidth(sfp1->sizePolicy().hasHeightForWidth());
        sfp1->setSizePolicy(sizePolicy);
        sfp1->setEditable(true);

        horizontalLayout_5->addWidget(sfp1);

        sfp2 = new QComboBox(ExtractFragmentsDialog);
        sfp2->setObjectName("sfp2");
        sizePolicy.setHeightForWidth(sfp2->sizePolicy().hasHeightForWidth());
        sfp2->setSizePolicy(sizePolicy);
        sfp2->setEditable(true);

        horizontalLayout_5->addWidget(sfp2);

        sfp3 = new QComboBox(ExtractFragmentsDialog);
        sfp3->setObjectName("sfp3");
        sizePolicy.setHeightForWidth(sfp3->sizePolicy().hasHeightForWidth());
        sfp3->setSizePolicy(sizePolicy);
        sfp3->setEditable(true);

        horizontalLayout_5->addWidget(sfp3);

        sfp4 = new QComboBox(ExtractFragmentsDialog);
        sfp4->setObjectName("sfp4");
        sizePolicy.setHeightForWidth(sfp4->sizePolicy().hasHeightForWidth());
        sfp4->setSizePolicy(sizePolicy);
        sfp4->setEditable(true);

        horizontalLayout_5->addWidget(sfp4);

        sfp5 = new QComboBox(ExtractFragmentsDialog);
        sfp5->setObjectName("sfp5");
        sizePolicy.setHeightForWidth(sfp5->sizePolicy().hasHeightForWidth());
        sfp5->setSizePolicy(sizePolicy);
        sfp5->setEditable(true);

        horizontalLayout_5->addWidget(sfp5);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout_5);

        label_13 = new QLabel(ExtractFragmentsDialog);
        label_13->setObjectName("label_13");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_13);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        sfn1 = new QComboBox(ExtractFragmentsDialog);
        sfn1->setObjectName("sfn1");
        sizePolicy.setHeightForWidth(sfn1->sizePolicy().hasHeightForWidth());
        sfn1->setSizePolicy(sizePolicy);
        sfn1->setEditable(true);

        horizontalLayout_9->addWidget(sfn1);

        sfn2 = new QComboBox(ExtractFragmentsDialog);
        sfn2->setObjectName("sfn2");
        sizePolicy.setHeightForWidth(sfn2->sizePolicy().hasHeightForWidth());
        sfn2->setSizePolicy(sizePolicy);
        sfn2->setEditable(true);

        horizontalLayout_9->addWidget(sfn2);

        sfn3 = new QComboBox(ExtractFragmentsDialog);
        sfn3->setObjectName("sfn3");
        sizePolicy.setHeightForWidth(sfn3->sizePolicy().hasHeightForWidth());
        sfn3->setSizePolicy(sizePolicy);
        sfn3->setEditable(true);

        horizontalLayout_9->addWidget(sfn3);

        sfn4 = new QComboBox(ExtractFragmentsDialog);
        sfn4->setObjectName("sfn4");
        sizePolicy.setHeightForWidth(sfn4->sizePolicy().hasHeightForWidth());
        sfn4->setSizePolicy(sizePolicy);
        sfn4->setEditable(true);

        horizontalLayout_9->addWidget(sfn4);

        sfn5 = new QComboBox(ExtractFragmentsDialog);
        sfn5->setObjectName("sfn5");
        sizePolicy.setHeightForWidth(sfn5->sizePolicy().hasHeightForWidth());
        sfn5->setSizePolicy(sizePolicy);
        sfn5->setEditable(true);

        horizontalLayout_9->addWidget(sfn5);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, horizontalLayout_9);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        label_12 = new QLabel(ExtractFragmentsDialog);
        label_12->setObjectName("label_12");

        horizontalLayout_8->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_8);

        lblLike = new QLabel(ExtractFragmentsDialog);
        lblLike->setObjectName("lblLike");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblLike->sizePolicy().hasHeightForWidth());
        lblLike->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setItalic(true);
        lblLike->setFont(font1);
        lblLike->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblLike);

        buttonBox = new QDialogButtonBox(ExtractFragmentsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(sourceFile, sourceFIleSearch);
        QWidget::setTabOrder(sourceFIleSearch, splitByPath);
        QWidget::setTabOrder(splitByPath, splitPath);
        QWidget::setTabOrder(splitPath, splitByDepth);
        QWidget::setTabOrder(splitByDepth, depth);
        QWidget::setTabOrder(depth, extractAll);
        QWidget::setTabOrder(extractAll, extractRange);
        QWidget::setTabOrder(extractRange, rangeMin);
        QWidget::setTabOrder(rangeMin, rangeMax);
        QWidget::setTabOrder(rangeMax, reverseRange);
        QWidget::setTabOrder(reverseRange, extractWithCfr);
        QWidget::setTabOrder(extractWithCfr, attrName);
        QWidget::setTabOrder(attrName, cfrOperator);
        QWidget::setTabOrder(cfrOperator, compTerm);
        QWidget::setTabOrder(compTerm, cbOperationType);
        QWidget::setTabOrder(cbOperationType, chkDeleteUsingPath);
        QWidget::setTabOrder(chkDeleteUsingPath, pathToDeleteText);
        QWidget::setTabOrder(pathToDeleteText, extractDir);
        QWidget::setTabOrder(extractDir, cmdDirScan);
        QWidget::setTabOrder(cmdDirScan, cmdViewInBrowser);
        QWidget::setTabOrder(cmdViewInBrowser, makeSubfolders);
        QWidget::setTabOrder(makeSubfolders, eachNFiles);
        QWidget::setTabOrder(eachNFiles, sfp1);
        QWidget::setTabOrder(sfp1, sfp2);
        QWidget::setTabOrder(sfp2, sfp3);
        QWidget::setTabOrder(sfp3, sfp4);
        QWidget::setTabOrder(sfp4, sfp5);
        QWidget::setTabOrder(sfp5, sfn1);
        QWidget::setTabOrder(sfn1, sfn2);
        QWidget::setTabOrder(sfn2, sfn3);
        QWidget::setTabOrder(sfn3, sfn4);
        QWidget::setTabOrder(sfn4, sfn5);
        QWidget::setTabOrder(sfn5, chkExtractFiles);

        retranslateUi(ExtractFragmentsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExtractFragmentsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExtractFragmentsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExtractFragmentsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtractFragmentsDialog)
    {
        ExtractFragmentsDialog->setWindowTitle(QCoreApplication::translate("ExtractFragmentsDialog", "Extract Fragments from a XML File", nullptr));
#if QT_CONFIG(tooltip)
        chkExtractFiles->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Check this if you want put the fragments into real files, else the informations will be collected to scan the file contents in the user interface.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkExtractFiles->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Extract documents (or scan the file and browse the single documents)", nullptr));
        label_6->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Parameters", nullptr));
        label_14->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Source file path:", nullptr));
#if QT_CONFIG(tooltip)
        sourceFile->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Input file to examine", nullptr));
#endif // QT_CONFIG(tooltip)
        sourceFile->setText(QString());
#if QT_CONFIG(tooltip)
        sourceFIleSearch->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Choose the input file.", nullptr));
#endif // QT_CONFIG(tooltip)
        sourceFIleSearch->setText(QString());
        splitByPath->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Split documents using this path:", nullptr));
#if QT_CONFIG(tooltip)
        splitPath->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "A XML path used to find the fragments inside the source file", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("ExtractFragmentsDialog", "e.g.: /element/child", nullptr));
        splitByDepth->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Split using the depth", nullptr));
#if QT_CONFIG(tooltip)
        extractAll->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Select this to extract all the fragments present in the input file.", nullptr));
#endif // QT_CONFIG(tooltip)
        extractAll->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Extract all the fragments", nullptr));
#if QT_CONFIG(tooltip)
        extractRange->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Select this to extract only a range of fragments from the input file.", nullptr));
#endif // QT_CONFIG(tooltip)
        extractRange->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Extract a range", nullptr));
        label_9->setText(QCoreApplication::translate("ExtractFragmentsDialog", "from:", nullptr));
#if QT_CONFIG(tooltip)
        rangeMin->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "The range of fragments to extract starts from 1.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(QCoreApplication::translate("ExtractFragmentsDialog", "to:", nullptr));
#if QT_CONFIG(tooltip)
        reverseRange->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Reverse the range, that is if 1 to2 range is specified on a total of 5 fragments:\n"
"without this option the extracted fragments will be: 1, 2.\n"
"with this option the extracted fragments will be: 3, 4, 5.", nullptr));
#endif // QT_CONFIG(tooltip)
        reverseRange->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Reverse the range meaning", nullptr));
        extractWithCfr->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Extract a range evaluating the attribute", nullptr));
        label->setText(QCoreApplication::translate("ExtractFragmentsDialog", "(comparison term)", nullptr));
        label_16->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Operation", nullptr));
        label_15->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Operation type:", nullptr));
        cbOperationType->setItemText(0, QCoreApplication::translate("ExtractFragmentsDialog", "Split", nullptr));
        cbOperationType->setItemText(1, QCoreApplication::translate("ExtractFragmentsDialog", "Act as a filter producing only 1 (one) file", nullptr));
        cbOperationType->setItemText(2, QCoreApplication::translate("ExtractFragmentsDialog", "Extract and group. Only the split element will be selected", nullptr));
        cbOperationType->setItemText(3, QCoreApplication::translate("ExtractFragmentsDialog", "Extract anc export in CSV the path element", nullptr));

        label_8->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Transformation", nullptr));
#if QT_CONFIG(tooltip)
        chkDeleteUsingPath->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Discard text in the operation based on the path specified.", nullptr));
#endif // QT_CONFIG(tooltip)
        chkDeleteUsingPath->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Delete the text of the following path", nullptr));
#if QT_CONFIG(tooltip)
        pathToDeleteText->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Use a relative or absolute path to select the element from which discard the test.", nullptr));
#endif // QT_CONFIG(tooltip)
        lblAdvancedOptions->setText(QString());
        cmdAdvanced->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Advanced", nullptr));
        label_7->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Extraction", nullptr));
        label_2->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Extract in the following directory:", nullptr));
#if QT_CONFIG(tooltip)
        extractDir->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "The etracted fragments will be written as files in theis directory.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cmdDirScan->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Choose the extraction folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdViewInBrowser->setText(QCoreApplication::translate("ExtractFragmentsDialog", "View in browser", nullptr));
#if QT_CONFIG(tooltip)
        makeSubfolders->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Check this if you want put the fragments into subfolders avoiding to fill one dicrectory with all the extracted files.", nullptr));
#endif // QT_CONFIG(tooltip)
        makeSubfolders->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Make subfolders", nullptr));
        label_3->setText(QCoreApplication::translate("ExtractFragmentsDialog", "each:", nullptr));
#if QT_CONFIG(tooltip)
        eachNFiles->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "Insert the number of files that will be put in a single subfolder.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("ExtractFragmentsDialog", "files", nullptr));
        label_5->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Subfolder name pattern:", nullptr));
#if QT_CONFIG(tooltip)
        sfp1->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the folder naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder<br /></span><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:'Arial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfp2->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the folder naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:"
                        "'Arial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfp3->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the folder naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:"
                        "'Arial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfp4->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the folder naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:"
                        "'Arial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfp5->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the folder naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:"
                        "'Arial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:"
                        "0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("ExtractFragmentsDialog", "File name pattern:", nullptr));
#if QT_CONFIG(tooltip)
        sfn1->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the file naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:'A"
                        "rial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfn2->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the file naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:'A"
                        "rial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfn3->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the file naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:'A"
                        "rial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfn4->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the file naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:'A"
                        "rial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        sfn5->setToolTip(QCoreApplication::translate("ExtractFragmentsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can choose a predefined symbol or enter a character sequence to form the file naming.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">You can use the following symbols:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; ma"
                        "rgin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%counter%</span><span style=\" font-family:'Arial';\"> is a unique numeric sequence for each folder</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%sequence%</span><span style=\" font-family:'Arial';\"> is the ordinal position of the current fragment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%date%</span><span style=\" font-family:'A"
                        "rial';\"> is the operation date</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%time%</span><span style=\" font-family:'Arial';\"> is the operation time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%timestamp%</span><span style=\" font-family:'Arial';\"> is a numeric representation of the time</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-weight:600; text-decoration: underline;\">%space%</span><span style=\" font-family:'Arial';\"> is a space</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial';\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">it is better to put some separator between tokens.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Elements enclosed between '%' characters are system fields", nullptr));
        lblLike->setText(QCoreApplication::translate("ExtractFragmentsDialog", "Subfolders names will be like:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtractFragmentsDialog: public Ui_ExtractFragmentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACTFRAGMENTSDIALOG_H
