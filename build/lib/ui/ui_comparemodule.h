/********************************************************************************
** Form generated from reading UI file 'comparemodule.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPAREMODULE_H
#define UI_COMPAREMODULE_H

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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "modules/compare/diffmapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CompareModule
{
public:
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelCompareFile1;
    QLabel *label;
    QGridLayout *gridLayout;
    QComboBox *comboFilesFile1;
    QLabel *infoLabelFile1;
    QPushButton *cmdBrowseFile1;
    QComboBox *comboFiles;
    QLabel *infoLabel;
    QPushButton *cmdBrowse;
    QHBoxLayout *horizontalLayout_5;
    DiffMapWidget *mapLeft;
    DiffMapWidget *mapRight;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *vl_tab1;
    QTextBrowser *textBrowser;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_4;
    QTreeWidget *treeLeft;
    QTreeWidget *treeRight;
    QWidget *tab_2;
    QVBoxLayout *vl_tab2;
    QTableView *differenceTable;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cmdCompare;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *statusLabel;
    QLabel *label_4;
    QLabel *optionsLabel;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *cmdZoomIn;
    QToolButton *cmdZoom1;
    QToolButton *cmdZoomOut;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_7;
    QToolButton *gotoFirst;
    QToolButton *gotoPrev;
    QToolButton *gotoNext;
    QToolButton *gotoLast;
    QVBoxLayout *verticalLayout_6;
    QPushButton *cmdCopyToClipboard;
    QToolButton *cmdDump;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *options;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkCompareText;
    QCheckBox *chkCompareComments;
    QCheckBox *chkDenormalizeEOL;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QWidget *colorEquals;
    QLabel *label_9;
    QWidget *colorDeleted;
    QLabel *label_8;
    QWidget *colorModified;
    QLabel *label_10;
    QWidget *colorAdded;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CompareModule)
    {
        if (CompareModule->objectName().isEmpty())
            CompareModule->setObjectName("CompareModule");
        CompareModule->setWindowModality(Qt::WindowModal);
        CompareModule->resize(1163, 623);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CompareModule->sizePolicy().hasHeightForWidth());
        CompareModule->setSizePolicy(sizePolicy);
        CompareModule->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CompareModule->setWindowIcon(icon);
        CompareModule->setSizeGripEnabled(true);
        verticalLayout_8 = new QVBoxLayout(CompareModule);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        labelCompareFile1 = new QLabel(CompareModule);
        labelCompareFile1->setObjectName("labelCompareFile1");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCompareFile1->sizePolicy().hasHeightForWidth());
        labelCompareFile1->setSizePolicy(sizePolicy1);
        labelCompareFile1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(labelCompareFile1);

        label = new QLabel(CompareModule);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        comboFilesFile1 = new QComboBox(CompareModule);
        comboFilesFile1->setObjectName("comboFilesFile1");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboFilesFile1->sizePolicy().hasHeightForWidth());
        comboFilesFile1->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboFilesFile1, 0, 0, 1, 1);

        infoLabelFile1 = new QLabel(CompareModule);
        infoLabelFile1->setObjectName("infoLabelFile1");
        infoLabelFile1->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/documentinfo")));

        gridLayout->addWidget(infoLabelFile1, 0, 1, 1, 1);

        cmdBrowseFile1 = new QPushButton(CompareModule);
        cmdBrowseFile1->setObjectName("cmdBrowseFile1");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmdBrowseFile1->sizePolicy().hasHeightForWidth());
        cmdBrowseFile1->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdBrowseFile1, 0, 2, 1, 1);

        comboFiles = new QComboBox(CompareModule);
        comboFiles->setObjectName("comboFiles");
        sizePolicy2.setHeightForWidth(comboFiles->sizePolicy().hasHeightForWidth());
        comboFiles->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboFiles, 1, 0, 1, 1);

        infoLabel = new QLabel(CompareModule);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/documentinfo")));

        gridLayout->addWidget(infoLabel, 1, 1, 1, 1);

        cmdBrowse = new QPushButton(CompareModule);
        cmdBrowse->setObjectName("cmdBrowse");
        sizePolicy3.setHeightForWidth(cmdBrowse->sizePolicy().hasHeightForWidth());
        cmdBrowse->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdBrowse, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        verticalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        mapLeft = new DiffMapWidget(CompareModule);
        mapLeft->setObjectName("mapLeft");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mapLeft->sizePolicy().hasHeightForWidth());
        mapLeft->setSizePolicy(sizePolicy4);
        mapLeft->setMinimumSize(QSize(32, 0));

        horizontalLayout_5->addWidget(mapLeft);

        mapRight = new DiffMapWidget(CompareModule);
        mapRight->setObjectName("mapRight");
        sizePolicy4.setHeightForWidth(mapRight->sizePolicy().hasHeightForWidth());
        mapRight->setSizePolicy(sizePolicy4);
        mapRight->setMinimumSize(QSize(32, 0));

        horizontalLayout_5->addWidget(mapRight);

        tabWidget = new QTabWidget(CompareModule);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        vl_tab1 = new QVBoxLayout(tab);
        vl_tab1->setObjectName("vl_tab1");
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName("textBrowser");

        vl_tab1->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        horizontalLayout_4 = new QHBoxLayout(tab_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        treeLeft = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeLeft->setHeaderItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeLeft);
        treeLeft->setObjectName("treeLeft");
        treeLeft->setColumnCount(3);
        treeLeft->header()->setCascadingSectionResizes(true);
        treeLeft->header()->setHighlightSections(true);
        treeLeft->header()->setProperty("showSortIndicator", QVariant(true));

        horizontalLayout_4->addWidget(treeLeft);

        treeRight = new QTreeWidget(tab_3);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("1"));
        treeRight->setHeaderItem(__qtreewidgetitem1);
        new QTreeWidgetItem(treeRight);
        treeRight->setObjectName("treeRight");
        treeRight->setColumnCount(3);
        treeRight->header()->setCascadingSectionResizes(true);
        treeRight->header()->setHighlightSections(true);
        treeRight->header()->setProperty("showSortIndicator", QVariant(true));

        horizontalLayout_4->addWidget(treeRight);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        vl_tab2 = new QVBoxLayout(tab_2);
        vl_tab2->setObjectName("vl_tab2");
        differenceTable = new QTableView(tab_2);
        differenceTable->setObjectName("differenceTable");
        differenceTable->setProperty("showDropIndicator", QVariant(false));
        differenceTable->setAlternatingRowColors(true);
        differenceTable->setSelectionMode(QAbstractItemView::SingleSelection);
        differenceTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        vl_tab2->addWidget(differenceTable);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_5->addWidget(tabWidget);


        verticalLayout_8->addLayout(horizontalLayout_5);

        frame = new QFrame(CompareModule);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        cmdCompare = new QPushButton(frame);
        cmdCompare->setObjectName("cmdCompare");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/images/view-refresh.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdCompare->setIcon(icon1);

        horizontalLayout_3->addWidget(cmdCompare);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        statusLabel = new QLabel(frame);
        statusLabel->setObjectName("statusLabel");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy5);
        QFont font;
        font.setBold(true);
        statusLabel->setFont(font);
        statusLabel->setFrameShape(QFrame::Box);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, statusLabel);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        optionsLabel = new QLabel(frame);
        optionsLabel->setObjectName("optionsLabel");
        sizePolicy5.setHeightForWidth(optionsLabel->sizePolicy().hasHeightForWidth());
        optionsLabel->setSizePolicy(sizePolicy5);
        optionsLabel->setFrameShape(QFrame::Box);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, optionsLabel);


        horizontalLayout_3->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(106, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        cmdZoomIn = new QToolButton(frame);
        cmdZoomIn->setObjectName("cmdZoomIn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arrows/zoomin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoomIn->setIcon(icon2);

        horizontalLayout_6->addWidget(cmdZoomIn);

        cmdZoom1 = new QToolButton(frame);
        cmdZoom1->setObjectName("cmdZoom1");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arrows/zoom1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoom1->setIcon(icon3);

        horizontalLayout_6->addWidget(cmdZoom1);

        cmdZoomOut = new QToolButton(frame);
        cmdZoomOut->setObjectName("cmdZoomOut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/arrows/zoomout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoomOut->setIcon(icon4);

        horizontalLayout_6->addWidget(cmdZoomOut);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");

        verticalLayout_4->addWidget(label_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        gotoFirst = new QToolButton(frame);
        gotoFirst->setObjectName("gotoFirst");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/arrows/first"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        gotoFirst->setIcon(icon5);

        horizontalLayout_7->addWidget(gotoFirst);

        gotoPrev = new QToolButton(frame);
        gotoPrev->setObjectName("gotoPrev");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/arrows/images/go-previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        gotoPrev->setIcon(icon6);

        horizontalLayout_7->addWidget(gotoPrev);

        gotoNext = new QToolButton(frame);
        gotoNext->setObjectName("gotoNext");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/arrows/images/go-next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        gotoNext->setIcon(icon7);

        horizontalLayout_7->addWidget(gotoNext);

        gotoLast = new QToolButton(frame);
        gotoLast->setObjectName("gotoLast");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/arrows/last"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        gotoLast->setIcon(icon8);

        horizontalLayout_7->addWidget(gotoLast);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        cmdCopyToClipboard = new QPushButton(frame);
        cmdCopyToClipboard->setObjectName("cmdCopyToClipboard");

        verticalLayout_6->addWidget(cmdCopyToClipboard);

        cmdDump = new QToolButton(frame);
        cmdDump->setObjectName("cmdDump");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cmdDump->sizePolicy().hasHeightForWidth());
        cmdDump->setSizePolicy(sizePolicy6);
        cmdDump->setToolButtonStyle(Qt::ToolButtonIconOnly);
        cmdDump->setAutoRaise(false);

        verticalLayout_6->addWidget(cmdDump);


        horizontalLayout_3->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(105, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        options = new QGroupBox(frame);
        options->setObjectName("options");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(options->sizePolicy().hasHeightForWidth());
        options->setSizePolicy(sizePolicy7);
        verticalLayout_2 = new QVBoxLayout(options);
        verticalLayout_2->setObjectName("verticalLayout_2");
        chkCompareText = new QCheckBox(options);
        chkCompareText->setObjectName("chkCompareText");

        verticalLayout_2->addWidget(chkCompareText);

        chkCompareComments = new QCheckBox(options);
        chkCompareComments->setObjectName("chkCompareComments");

        verticalLayout_2->addWidget(chkCompareComments);

        chkDenormalizeEOL = new QCheckBox(options);
        chkDenormalizeEOL->setObjectName("chkDenormalizeEOL");

        verticalLayout_2->addWidget(chkDenormalizeEOL);


        horizontalLayout_3->addWidget(options);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy8);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        colorEquals = new QWidget(groupBox);
        colorEquals->setObjectName("colorEquals");
        sizePolicy3.setHeightForWidth(colorEquals->sizePolicy().hasHeightForWidth());
        colorEquals->setSizePolicy(sizePolicy3);
        colorEquals->setMinimumSize(QSize(10, 10));
        colorEquals->setMaximumSize(QSize(10, 16777215));
        colorEquals->setAutoFillBackground(false);
        colorEquals->setStyleSheet(QString::fromUtf8("background-color:rgb(200, 200, 200);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, colorEquals);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, label_9);

        colorDeleted = new QWidget(groupBox);
        colorDeleted->setObjectName("colorDeleted");
        sizePolicy1.setHeightForWidth(colorDeleted->sizePolicy().hasHeightForWidth());
        colorDeleted->setSizePolicy(sizePolicy1);
        colorDeleted->setMinimumSize(QSize(10, 10));
        colorDeleted->setMaximumSize(QSize(10, 10));
        colorDeleted->setAutoFillBackground(false);
        colorDeleted->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 10, 0);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, colorDeleted);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, label_8);

        colorModified = new QWidget(groupBox);
        colorModified->setObjectName("colorModified");
        sizePolicy1.setHeightForWidth(colorModified->sizePolicy().hasHeightForWidth());
        colorModified->setSizePolicy(sizePolicy1);
        colorModified->setMinimumSize(QSize(10, 10));
        colorModified->setMaximumSize(QSize(10, 10));
        colorModified->setAutoFillBackground(false);
        colorModified->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 200, 0);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, colorModified);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, label_10);

        colorAdded = new QWidget(groupBox);
        colorAdded->setObjectName("colorAdded");
        colorAdded->setMinimumSize(QSize(10, 10));
        colorAdded->setMaximumSize(QSize(10, 10));
        colorAdded->setAutoFillBackground(false);
        colorAdded->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 170, 0);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        formLayout_2->setWidget(3, QFormLayout::ItemRole::LabelRole, colorAdded);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(3, QFormLayout::ItemRole::FieldRole, label_7);


        verticalLayout_3->addLayout(formLayout_2);


        horizontalLayout_3->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(frame);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy9);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_8->addWidget(frame);


        retranslateUi(CompareModule);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CompareModule, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CompareModule, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CompareModule);
    } // setupUi

    void retranslateUi(QDialog *CompareModule)
    {
        CompareModule->setWindowTitle(QCoreApplication::translate("CompareModule", "TEST WINDOW", nullptr));
        labelCompareFile1->setText(QCoreApplication::translate("CompareModule", "Compare:", nullptr));
        label->setText(QCoreApplication::translate("CompareModule", "Compare with:", nullptr));
#if QT_CONFIG(tooltip)
        infoLabelFile1->setToolTip(QCoreApplication::translate("CompareModule", "TODO", nullptr));
#endif // QT_CONFIG(tooltip)
        infoLabelFile1->setText(QString());
        cmdBrowseFile1->setText(QCoreApplication::translate("CompareModule", "...", nullptr));
#if QT_CONFIG(tooltip)
        infoLabel->setToolTip(QCoreApplication::translate("CompareModule", "TODO", nullptr));
#endif // QT_CONFIG(tooltip)
        infoLabel->setText(QString());
        cmdBrowse->setText(QCoreApplication::translate("CompareModule", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CompareModule", "Synthetic view", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeLeft->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("CompareModule", "New Column", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("CompareModule", "Line", nullptr));

        const bool __sortingEnabled = treeLeft->isSortingEnabled();
        treeLeft->setSortingEnabled(false);
        treeLeft->setSortingEnabled(__sortingEnabled);

        QTreeWidgetItem *___qtreewidgetitem1 = treeRight->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("CompareModule", "New Column", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("CompareModule", "Line", nullptr));

        const bool __sortingEnabled1 = treeRight->isSortingEnabled();
        treeRight->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem2 = treeRight->topLevelItem(0);
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("CompareModule", "sadads", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("CompareModule", "2", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("CompareModule", "asdasd", nullptr));
        treeRight->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("CompareModule", "Analytical view", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CompareModule", "Differences list", nullptr));
        cmdCompare->setText(QCoreApplication::translate("CompareModule", "Compare", nullptr));
        label_2->setText(QCoreApplication::translate("CompareModule", "Status:", nullptr));
        statusLabel->setText(QCoreApplication::translate("CompareModule", "-----", nullptr));
        label_4->setText(QCoreApplication::translate("CompareModule", "Options:", nullptr));
        optionsLabel->setText(QCoreApplication::translate("CompareModule", "----", nullptr));
        label_5->setText(QCoreApplication::translate("CompareModule", "Zoom:", nullptr));
        cmdZoomIn->setText(QString());
        cmdZoom1->setText(QString());
        cmdZoomOut->setText(QString());
        label_11->setText(QCoreApplication::translate("CompareModule", "Go to difference:", nullptr));
        gotoFirst->setText(QCoreApplication::translate("CompareModule", "...", nullptr));
        gotoPrev->setText(QCoreApplication::translate("CompareModule", "...", nullptr));
        gotoNext->setText(QCoreApplication::translate("CompareModule", "...", nullptr));
        gotoLast->setText(QCoreApplication::translate("CompareModule", "...", nullptr));
        cmdCopyToClipboard->setText(QCoreApplication::translate("CompareModule", "Copy Text to Clipboard", nullptr));
        cmdDump->setText(QCoreApplication::translate("CompareModule", "Dump on stdout", nullptr));
        options->setTitle(QCoreApplication::translate("CompareModule", "Options", nullptr));
        chkCompareText->setText(QCoreApplication::translate("CompareModule", "Compare text", nullptr));
        chkCompareComments->setText(QCoreApplication::translate("CompareModule", "Compare comments", nullptr));
        chkDenormalizeEOL->setText(QCoreApplication::translate("CompareModule", "Denormalize EOL", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CompareModule", "Legend", nullptr));
        label_9->setText(QCoreApplication::translate("CompareModule", "Equals", nullptr));
        label_8->setText(QCoreApplication::translate("CompareModule", "Deleted", nullptr));
        label_10->setText(QCoreApplication::translate("CompareModule", "Different", nullptr));
        label_7->setText(QCoreApplication::translate("CompareModule", "Added", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompareModule: public Ui_CompareModule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPAREMODULE_H
