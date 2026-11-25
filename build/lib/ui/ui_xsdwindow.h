/********************************************************************************
** Form generated from reading UI file 'xsdwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDWINDOW_H
#define UI_XSDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "xsdeditor/navigationtree.h"
#include "xsdeditor/widgets/elementeditor.h"
#include "xsdeditor/widgets/xsdattributeeditor.h"
#include "xsdeditor/widgets/xsdchoiceeditor.h"
#include "xsdeditor/widgets/xsdsequenceeditor.h"
#include "xsdeditor/xcomparesummary.h"
#include "xsdeditor/xsdcomparetools.h"

QT_BEGIN_NAMESPACE

class Ui_XSDWindow
{
public:
    QAction *actionSwapReferenceAndTarget;
    QAction *actionConfigureAspect;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *searchHBox;
    QLineEdit *searchBox;
    QPushButton *clearSearch;
    NavigationTree *navigation;
    XCompareSummary *compareSummary;
    QWidget *verticalLayoutWidgetBox;
    QVBoxLayout *vlayout22;
    QLabel *targetNamespaceInfo;
    QGraphicsView *view;
    QVBoxLayout *verticalLayout;
    QPushButton *newCmd;
    QPushButton *cmdC;
    QPushButton *cmdE;
    QPushButton *cmdA;
    QPushButton *cmdS;
    QPushButton *newR;
    QPushButton *newExt;
    QPushButton *load;
    QPushButton *fromClipb;
    QPushButton *saveToClipbopard;
    QStackedWidget *properties;
    QWidget *emptyPage;
    QLabel *label;
    QLabel *label1;
    QWidget *sequencePage;
    XsdSequenceEditor *sequenceProperties;
    QWidget *elementPage;
    ElementEditor *elementProperties;
    QWidget *schemaPage;
    XsdSequenceEditor *schemaProperties;
    QWidget *choicePage;
    XsdChoiceEditor *choiceProperties;
    QWidget *attributePage;
    XsdAttributeEditor *attributeProperties;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *navigationCmd;
    QPushButton *cmdOutline;
    QPushButton *cmdShowDepend;
    QToolButton *backButton;
    QToolButton *forwardButton;
    QToolButton *cmdZoomIn;
    QToolButton *cmdZoomOut;
    QToolButton *cmdZoom1;
    QToolButton *cmdObjZoomIn;
    QToolButton *cmdObjZoomReset;
    QToolButton *cmdObjZoomOut;
    QPushButton *cmdShowBase;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QVBoxLayout *vert1;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *vert2;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *vert3;
    QLabel *label_10;
    QLabel *label_7;
    QVBoxLayout *vert4;
    QLabel *label_11;
    QLabel *label_8;
    QVBoxLayout *vert5;
    QLabel *label_12;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    XSDCompareTools *xsdCompareTools;
    QToolButton *toolMenu;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *cmdReport;
    QToolButton *htmlCmd;
    QToolButton *printCmd;
    QToolButton *svgCmd;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *closeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *XSDWindow)
    {
        if (XSDWindow->objectName().isEmpty())
            XSDWindow->setObjectName("XSDWindow");
        XSDWindow->setWindowModality(Qt::WindowModal);
        XSDWindow->resize(1599, 696);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XSDWindow->sizePolicy().hasHeightForWidth());
        XSDWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDWindow->setWindowIcon(icon);
        XSDWindow->setDocumentMode(false);
        XSDWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionSwapReferenceAndTarget = new QAction(XSDWindow);
        actionSwapReferenceAndTarget->setObjectName("actionSwapReferenceAndTarget");
        actionConfigureAspect = new QAction(XSDWindow);
        actionConfigureAspect->setObjectName("actionConfigureAspect");
        centralwidget = new QWidget(XSDWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        searchHBox = new QHBoxLayout();
        searchHBox->setObjectName("searchHBox");
        searchHBox->setSizeConstraint(QLayout::SetMinimumSize);
        searchBox = new QLineEdit(verticalLayoutWidget);
        searchBox->setObjectName("searchBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy2);

        searchHBox->addWidget(searchBox);

        clearSearch = new QPushButton(verticalLayoutWidget);
        clearSearch->setObjectName("clearSearch");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(clearSearch->sizePolicy().hasHeightForWidth());
        clearSearch->setSizePolicy(sizePolicy3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/editText/images/edit-clear-locationbar-rtl.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearSearch->setIcon(icon1);
        clearSearch->setFlat(true);

        searchHBox->addWidget(clearSearch);


        verticalLayout_3->addLayout(searchHBox);

        navigation = new NavigationTree(verticalLayoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        navigation->setHeaderItem(__qtreewidgetitem);
        navigation->setObjectName("navigation");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(navigation->sizePolicy().hasHeightForWidth());
        navigation->setSizePolicy(sizePolicy4);
        navigation->setMinimumSize(QSize(200, 0));
        navigation->setBaseSize(QSize(200, 0));
        navigation->setTextElideMode(Qt::ElideMiddle);
        navigation->setHeaderHidden(true);

        verticalLayout_3->addWidget(navigation);

        compareSummary = new XCompareSummary(verticalLayoutWidget);
        compareSummary->setObjectName("compareSummary");
        compareSummary->setMinimumSize(QSize(0, 20));

        verticalLayout_3->addWidget(compareSummary);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidgetBox = new QWidget(splitter);
        verticalLayoutWidgetBox->setObjectName("verticalLayoutWidgetBox");
        vlayout22 = new QVBoxLayout(verticalLayoutWidgetBox);
        vlayout22->setObjectName("vlayout22");
        vlayout22->setContentsMargins(0, 0, 0, 0);
        targetNamespaceInfo = new QLabel(verticalLayoutWidgetBox);
        targetNamespaceInfo->setObjectName("targetNamespaceInfo");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(targetNamespaceInfo->sizePolicy().hasHeightForWidth());
        targetNamespaceInfo->setSizePolicy(sizePolicy5);
        targetNamespaceInfo->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        vlayout22->addWidget(targetNamespaceInfo);

        view = new QGraphicsView(verticalLayoutWidgetBox);
        view->setObjectName("view");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(9);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy6);

        vlayout22->addWidget(view);

        splitter->addWidget(verticalLayoutWidgetBox);

        horizontalLayout->addWidget(splitter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        newCmd = new QPushButton(centralwidget);
        newCmd->setObjectName("newCmd");

        verticalLayout->addWidget(newCmd);

        cmdC = new QPushButton(centralwidget);
        cmdC->setObjectName("cmdC");

        verticalLayout->addWidget(cmdC);

        cmdE = new QPushButton(centralwidget);
        cmdE->setObjectName("cmdE");

        verticalLayout->addWidget(cmdE);

        cmdA = new QPushButton(centralwidget);
        cmdA->setObjectName("cmdA");

        verticalLayout->addWidget(cmdA);

        cmdS = new QPushButton(centralwidget);
        cmdS->setObjectName("cmdS");

        verticalLayout->addWidget(cmdS);

        newR = new QPushButton(centralwidget);
        newR->setObjectName("newR");

        verticalLayout->addWidget(newR);

        newExt = new QPushButton(centralwidget);
        newExt->setObjectName("newExt");

        verticalLayout->addWidget(newExt);

        load = new QPushButton(centralwidget);
        load->setObjectName("load");

        verticalLayout->addWidget(load);

        fromClipb = new QPushButton(centralwidget);
        fromClipb->setObjectName("fromClipb");

        verticalLayout->addWidget(fromClipb);

        saveToClipbopard = new QPushButton(centralwidget);
        saveToClipbopard->setObjectName("saveToClipbopard");
        saveToClipbopard->setEnabled(true);

        verticalLayout->addWidget(saveToClipbopard);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        properties = new QStackedWidget(centralwidget);
        properties->setObjectName("properties");
        properties->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(properties->sizePolicy().hasHeightForWidth());
        properties->setSizePolicy(sizePolicy7);
        properties->setMinimumSize(QSize(0, 150));
        properties->setMaximumSize(QSize(16777215, 150));
        properties->setBaseSize(QSize(0, 150));
        properties->setAutoFillBackground(false);
        properties->setFrameShape(QFrame::StyledPanel);
        emptyPage = new QWidget();
        emptyPage->setObjectName("emptyPage");
        label = new QLabel(emptyPage);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 46, 201));
        label1 = new QLabel(label);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(30, 20, 46, 201));
        properties->addWidget(emptyPage);
        sequencePage = new QWidget();
        sequencePage->setObjectName("sequencePage");
        sequenceProperties = new XsdSequenceEditor(sequencePage);
        sequenceProperties->setObjectName("sequenceProperties");
        sequenceProperties->setGeometry(QRect(50, 10, 711, 251));
        properties->addWidget(sequencePage);
        elementPage = new QWidget();
        elementPage->setObjectName("elementPage");
        elementProperties = new ElementEditor(elementPage);
        elementProperties->setObjectName("elementProperties");
        elementProperties->setGeometry(QRect(20, 20, 782, 161));
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(elementProperties->sizePolicy().hasHeightForWidth());
        elementProperties->setSizePolicy(sizePolicy8);
        properties->addWidget(elementPage);
        schemaPage = new QWidget();
        schemaPage->setObjectName("schemaPage");
        schemaProperties = new XsdSequenceEditor(schemaPage);
        schemaProperties->setObjectName("schemaProperties");
        schemaProperties->setGeometry(QRect(20, 20, 691, 231));
        properties->addWidget(schemaPage);
        choicePage = new QWidget();
        choicePage->setObjectName("choicePage");
        choiceProperties = new XsdChoiceEditor(choicePage);
        choiceProperties->setObjectName("choiceProperties");
        choiceProperties->setGeometry(QRect(20, 20, 701, 241));
        properties->addWidget(choicePage);
        attributePage = new QWidget();
        attributePage->setObjectName("attributePage");
        attributeProperties = new XsdAttributeEditor(attributePage);
        attributeProperties->setObjectName("attributeProperties");
        attributeProperties->setGeometry(QRect(10, 10, 661, 231));
        properties->addWidget(attributePage);

        verticalLayout_2->addWidget(properties);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        navigationCmd = new QPushButton(centralwidget);
        navigationCmd->setObjectName("navigationCmd");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/special/images/bookmark.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        navigationCmd->setIcon(icon2);
        navigationCmd->setCheckable(true);
        navigationCmd->setChecked(true);
        navigationCmd->setFlat(false);

        horizontalLayout_2->addWidget(navigationCmd);

        cmdOutline = new QPushButton(centralwidget);
        cmdOutline->setObjectName("cmdOutline");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/xsdimages/images/xsdOutline.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdOutline->setIcon(icon3);
        cmdOutline->setCheckable(true);

        horizontalLayout_2->addWidget(cmdOutline);

        cmdShowDepend = new QPushButton(centralwidget);
        cmdShowDepend->setObjectName("cmdShowDepend");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/xsdimages/images/deps.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdShowDepend->setIcon(icon4);
        cmdShowDepend->setCheckable(true);

        horizontalLayout_2->addWidget(cmdShowDepend);

        backButton = new QToolButton(centralwidget);
        backButton->setObjectName("backButton");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/arrows/images/go-previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        backButton->setIcon(icon5);

        horizontalLayout_2->addWidget(backButton);

        forwardButton = new QToolButton(centralwidget);
        forwardButton->setObjectName("forwardButton");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/arrows/images/go-next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        forwardButton->setIcon(icon6);

        horizontalLayout_2->addWidget(forwardButton);

        cmdZoomIn = new QToolButton(centralwidget);
        cmdZoomIn->setObjectName("cmdZoomIn");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/arrows/zoomin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoomIn->setIcon(icon7);

        horizontalLayout_2->addWidget(cmdZoomIn);

        cmdZoomOut = new QToolButton(centralwidget);
        cmdZoomOut->setObjectName("cmdZoomOut");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/arrows/zoomout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoomOut->setIcon(icon8);

        horizontalLayout_2->addWidget(cmdZoomOut);

        cmdZoom1 = new QToolButton(centralwidget);
        cmdZoom1->setObjectName("cmdZoom1");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/arrows/zoom1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoom1->setIcon(icon9);

        horizontalLayout_2->addWidget(cmdZoom1);

        cmdObjZoomIn = new QToolButton(centralwidget);
        cmdObjZoomIn->setObjectName("cmdObjZoomIn");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/xsdimages/images/zoom-in-xsd.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdObjZoomIn->setIcon(icon10);

        horizontalLayout_2->addWidget(cmdObjZoomIn);

        cmdObjZoomReset = new QToolButton(centralwidget);
        cmdObjZoomReset->setObjectName("cmdObjZoomReset");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/xsdimages/images/zoom-original-xsd.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdObjZoomReset->setIcon(icon11);

        horizontalLayout_2->addWidget(cmdObjZoomReset);

        cmdObjZoomOut = new QToolButton(centralwidget);
        cmdObjZoomOut->setObjectName("cmdObjZoomOut");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/xsdimages/images/zoom-out-xsd.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdObjZoomOut->setIcon(icon12);

        horizontalLayout_2->addWidget(cmdObjZoomOut);

        cmdShowBase = new QPushButton(centralwidget);
        cmdShowBase->setObjectName("cmdShowBase");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/xsdimages/images/show-base-xsd.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdShowBase->setIcon(icon13);
        cmdShowBase->setCheckable(true);
        cmdShowBase->setChecked(false);

        horizontalLayout_2->addWidget(cmdShowBase);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        vert1 = new QVBoxLayout();
        vert1->setObjectName("vert1");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/choice")));
        label_3->setAlignment(Qt::AlignCenter);

        vert1->addWidget(label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        vert1->addWidget(label_4);


        horizontalLayout_2->addLayout(vert1);

        vert2 = new QVBoxLayout();
        vert2->setObjectName("vert2");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/sequence")));
        label_5->setAlignment(Qt::AlignCenter);

        vert2->addWidget(label_5);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        vert2->addWidget(label_6);


        horizontalLayout_2->addLayout(vert2);

        vert3 = new QVBoxLayout();
        vert3->setObjectName("vert3");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/attrType")));
        label_10->setAlignment(Qt::AlignCenter);

        vert3->addWidget(label_10);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        vert3->addWidget(label_7);


        horizontalLayout_2->addLayout(vert3);

        vert4 = new QVBoxLayout();
        vert4->setObjectName("vert4");
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/attrElement")));
        label_11->setAlignment(Qt::AlignCenter);

        vert4->addWidget(label_11);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        vert4->addWidget(label_8);


        horizontalLayout_2->addLayout(vert4);

        vert5 = new QVBoxLayout();
        vert5->setObjectName("vert5");
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/attrIcon")));
        label_12->setAlignment(Qt::AlignCenter);

        vert5->addWidget(label_12);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        vert5->addWidget(label_9);


        horizontalLayout_2->addLayout(vert5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        xsdCompareTools = new XSDCompareTools(centralwidget);
        xsdCompareTools->setObjectName("xsdCompareTools");
        xsdCompareTools->setMinimumSize(QSize(20, 0));

        horizontalLayout_2->addWidget(xsdCompareTools);

        toolMenu = new QToolButton(centralwidget);
        toolMenu->setObjectName("toolMenu");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/configuration/general"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolMenu->setIcon(icon14);
        toolMenu->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_2->addWidget(toolMenu);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        cmdReport = new QToolButton(centralwidget);
        cmdReport->setObjectName("cmdReport");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/special/report"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdReport->setIcon(icon15);

        horizontalLayout_2->addWidget(cmdReport);

        htmlCmd = new QToolButton(centralwidget);
        htmlCmd->setObjectName("htmlCmd");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/devices/html"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        htmlCmd->setIcon(icon16);

        horizontalLayout_2->addWidget(htmlCmd);

        printCmd = new QToolButton(centralwidget);
        printCmd->setObjectName("printCmd");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/devices/pdf"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        printCmd->setIcon(icon17);

        horizontalLayout_2->addWidget(printCmd);

        svgCmd = new QToolButton(centralwidget);
        svgCmd->setObjectName("svgCmd");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/devices/svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        svgCmd->setIcon(icon18);

        horizontalLayout_2->addWidget(svgCmd);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setCheckable(false);
        closeButton->setChecked(false);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        XSDWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(XSDWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1599, 22));
        XSDWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(XSDWindow);
        statusbar->setObjectName("statusbar");
        XSDWindow->setStatusBar(statusbar);

        retranslateUi(XSDWindow);

        properties->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(XSDWindow);
    } // setupUi

    void retranslateUi(QMainWindow *XSDWindow)
    {
        XSDWindow->setWindowTitle(QCoreApplication::translate("XSDWindow", "XML Schema", nullptr));
        actionSwapReferenceAndTarget->setText(QCoreApplication::translate("XSDWindow", "Swap Reference and Target", nullptr));
#if QT_CONFIG(tooltip)
        actionSwapReferenceAndTarget->setToolTip(QCoreApplication::translate("XSDWindow", "Swap Reference and Target", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConfigureAspect->setText(QCoreApplication::translate("XSDWindow", "Configure aspect...", nullptr));
#if QT_CONFIG(tooltip)
        searchBox->setToolTip(QCoreApplication::translate("XSDWindow", "search into navigation items", nullptr));
#endif // QT_CONFIG(tooltip)
        searchBox->setPlaceholderText(QCoreApplication::translate("XSDWindow", "search...", nullptr));
#if QT_CONFIG(tooltip)
        clearSearch->setToolTip(QCoreApplication::translate("XSDWindow", "clears the search box", nullptr));
#endif // QT_CONFIG(tooltip)
        clearSearch->setText(QString());
        targetNamespaceInfo->setText(QCoreApplication::translate("XSDWindow", "namespace:", nullptr));
        newCmd->setText(QCoreApplication::translate("XSDWindow", "new root", nullptr));
        cmdC->setText(QCoreApplication::translate("XSDWindow", "+choice", nullptr));
        cmdE->setText(QCoreApplication::translate("XSDWindow", "+E", nullptr));
        cmdA->setText(QCoreApplication::translate("XSDWindow", "+A", nullptr));
        cmdS->setText(QCoreApplication::translate("XSDWindow", "+sequence", nullptr));
        newR->setText(QCoreApplication::translate("XSDWindow", "+restr", nullptr));
        newExt->setText(QCoreApplication::translate("XSDWindow", "+extens", nullptr));
        load->setText(QCoreApplication::translate("XSDWindow", "LOAD TEST", nullptr));
        fromClipb->setText(QCoreApplication::translate("XSDWindow", "FROM CLIPB", nullptr));
        saveToClipbopard->setText(QCoreApplication::translate("XSDWindow", "TO CLIPB.", nullptr));
        label->setText(QString());
        label1->setText(QString());
#if QT_CONFIG(tooltip)
        navigationCmd->setToolTip(QCoreApplication::translate("XSDWindow", "Shows or hides the navigation panel", nullptr));
#endif // QT_CONFIG(tooltip)
        navigationCmd->setText(QString());
#if QT_CONFIG(tooltip)
        cmdOutline->setToolTip(QCoreApplication::translate("XSDWindow", "Outline view", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdOutline->setText(QString());
#if QT_CONFIG(tooltip)
        cmdShowDepend->setToolTip(QCoreApplication::translate("XSDWindow", "Show the definitions of included schema", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdShowDepend->setText(QString());
#if QT_CONFIG(tooltip)
        backButton->setToolTip(QCoreApplication::translate("XSDWindow", "Go Back", nullptr));
#endif // QT_CONFIG(tooltip)
        backButton->setText(QString());
#if QT_CONFIG(tooltip)
        forwardButton->setToolTip(QCoreApplication::translate("XSDWindow", "Go Forward", nullptr));
#endif // QT_CONFIG(tooltip)
        forwardButton->setText(QString());
#if QT_CONFIG(tooltip)
        cmdZoomIn->setToolTip(QCoreApplication::translate("XSDWindow", "Zoom in", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdZoomIn->setText(QString());
#if QT_CONFIG(tooltip)
        cmdZoomOut->setToolTip(QCoreApplication::translate("XSDWindow", "Zoom out", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdZoomOut->setText(QString());
#if QT_CONFIG(tooltip)
        cmdZoom1->setToolTip(QCoreApplication::translate("XSDWindow", "Normal view", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdZoom1->setText(QString());
#if QT_CONFIG(tooltip)
        cmdObjZoomIn->setToolTip(QCoreApplication::translate("XSDWindow", "Zoom into selected object", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdObjZoomIn->setText(QString());
#if QT_CONFIG(tooltip)
        cmdObjZoomReset->setToolTip(QCoreApplication::translate("XSDWindow", "Reset the object view", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdObjZoomReset->setText(QString());
#if QT_CONFIG(tooltip)
        cmdObjZoomOut->setToolTip(QCoreApplication::translate("XSDWindow", "Zoom out from  the selected object", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdObjZoomOut->setText(QString());
#if QT_CONFIG(tooltip)
        cmdShowBase->setToolTip(QCoreApplication::translate("XSDWindow", "Shows all the base objects", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdShowBase->setText(QString());
        label_2->setText(QCoreApplication::translate("XSDWindow", "Legend:", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("XSDWindow", "Choice", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("XSDWindow", "Sequence", nullptr));
        label_10->setText(QString());
        label_7->setText(QCoreApplication::translate("XSDWindow", "Type", nullptr));
        label_11->setText(QString());
        label_8->setText(QCoreApplication::translate("XSDWindow", "Element", nullptr));
        label_12->setText(QString());
        label_9->setText(QCoreApplication::translate("XSDWindow", "Attribute", nullptr));
        toolMenu->setText(QCoreApplication::translate("XSDWindow", "...", nullptr));
#if QT_CONFIG(tooltip)
        cmdReport->setToolTip(QCoreApplication::translate("XSDWindow", "Show a HTML report.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdReport->setText(QCoreApplication::translate("XSDWindow", "Show Report", nullptr));
#if QT_CONFIG(tooltip)
        htmlCmd->setToolTip(QCoreApplication::translate("XSDWindow", "Export in HTML format.", nullptr));
#endif // QT_CONFIG(tooltip)
        htmlCmd->setText(QString());
#if QT_CONFIG(tooltip)
        printCmd->setToolTip(QCoreApplication::translate("XSDWindow", "Export the diagram in PDF format", nullptr));
#endif // QT_CONFIG(tooltip)
        printCmd->setText(QString());
#if QT_CONFIG(tooltip)
        svgCmd->setToolTip(QCoreApplication::translate("XSDWindow", "Export the diagram as SVG.", nullptr));
#endif // QT_CONFIG(tooltip)
        svgCmd->setText(QString());
        closeButton->setText(QCoreApplication::translate("XSDWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDWindow: public Ui_XSDWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDWINDOW_H
