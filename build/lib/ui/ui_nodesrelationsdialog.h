/********************************************************************************
** Form generated from reading UI file 'nodesrelationsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODESRELATIONSDIALOG_H
#define UI_NODESRELATIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NodesRelationsDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *lblFileName;
    QGridLayout *gridLayout;
    QLabel *infoLabelFile;
    QPushButton *cmdBrowseFile;
    QLabel *labelFile;
    QTabWidget *tabWidget;
    QWidget *tabGraph;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *cmdReset;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *forceSlider;
    QLabel *label_4;
    QSlider *radiusSlider;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblStiffness;
    QSlider *stiffnessSlider;
    QLabel *lblDamping;
    QSlider *dampingSlider;
    QLabel *lblLength;
    QSlider *springLengthSlider;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QToolButton *cmdZoomIn;
    QToolButton *cmdZoom1;
    QToolButton *cmdZoomOut;
    QCheckBox *chkViewOnlySelected;
    QWidget *tabDataView;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *dataTable;
    QWidget *attributes;
    QVBoxLayout *vertLayout_11;
    QTextBrowser *textAttributes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *cmdLoadBlack;
    QPushButton *cmdLoadWhitelist;
    QPushButton *cmdResetLists;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportCSV;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NodesRelationsDialog)
    {
        if (NodesRelationsDialog->objectName().isEmpty())
            NodesRelationsDialog->setObjectName("NodesRelationsDialog");
        NodesRelationsDialog->resize(1012, 725);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        NodesRelationsDialog->setWindowIcon(icon);
        NodesRelationsDialog->setSizeGripEnabled(true);
        verticalLayout_5 = new QVBoxLayout(NodesRelationsDialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        lblFileName = new QLabel(NodesRelationsDialog);
        lblFileName->setObjectName("lblFileName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblFileName->sizePolicy().hasHeightForWidth());
        lblFileName->setSizePolicy(sizePolicy);
        lblFileName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_7->addWidget(lblFileName);


        horizontalLayout_4->addLayout(verticalLayout_7);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        infoLabelFile = new QLabel(NodesRelationsDialog);
        infoLabelFile->setObjectName("infoLabelFile");
        infoLabelFile->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/documentinfo")));

        gridLayout->addWidget(infoLabelFile, 0, 1, 1, 1);

        cmdBrowseFile = new QPushButton(NodesRelationsDialog);
        cmdBrowseFile->setObjectName("cmdBrowseFile");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cmdBrowseFile->sizePolicy().hasHeightForWidth());
        cmdBrowseFile->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(cmdBrowseFile, 0, 2, 1, 1);

        labelFile = new QLabel(NodesRelationsDialog);
        labelFile->setObjectName("labelFile");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelFile->sizePolicy().hasHeightForWidth());
        labelFile->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(labelFile, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);


        verticalLayout_5->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(NodesRelationsDialog);
        tabWidget->setObjectName("tabWidget");
        tabGraph = new QWidget();
        tabGraph->setObjectName("tabGraph");
        horizontalLayout_2 = new QHBoxLayout(tabGraph);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        graphicsView = new QGraphicsView(tabGraph);
        graphicsView->setObjectName("graphicsView");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(graphicsView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        cmdReset = new QPushButton(tabGraph);
        cmdReset->setObjectName("cmdReset");
        cmdReset->setEnabled(true);
        sizePolicy1.setHeightForWidth(cmdReset->sizePolicy().hasHeightForWidth());
        cmdReset->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(cmdReset);

        groupBox = new QGroupBox(tabGraph);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setEnabled(true);

        verticalLayout->addWidget(label);

        forceSlider = new QSlider(groupBox);
        forceSlider->setObjectName("forceSlider");
        forceSlider->setEnabled(true);
        sizePolicy1.setHeightForWidth(forceSlider->sizePolicy().hasHeightForWidth());
        forceSlider->setSizePolicy(sizePolicy1);
        forceSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(forceSlider);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setEnabled(true);

        verticalLayout->addWidget(label_4);

        radiusSlider = new QSlider(groupBox);
        radiusSlider->setObjectName("radiusSlider");
        radiusSlider->setEnabled(true);
        sizePolicy1.setHeightForWidth(radiusSlider->sizePolicy().hasHeightForWidth());
        radiusSlider->setSizePolicy(sizePolicy1);
        radiusSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(radiusSlider);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tabGraph);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setEnabled(true);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblStiffness = new QLabel(groupBox_2);
        lblStiffness->setObjectName("lblStiffness");
        lblStiffness->setEnabled(true);

        verticalLayout_2->addWidget(lblStiffness);

        stiffnessSlider = new QSlider(groupBox_2);
        stiffnessSlider->setObjectName("stiffnessSlider");
        stiffnessSlider->setEnabled(true);
        sizePolicy1.setHeightForWidth(stiffnessSlider->sizePolicy().hasHeightForWidth());
        stiffnessSlider->setSizePolicy(sizePolicy1);
        stiffnessSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(stiffnessSlider);

        lblDamping = new QLabel(groupBox_2);
        lblDamping->setObjectName("lblDamping");
        lblDamping->setEnabled(true);

        verticalLayout_2->addWidget(lblDamping);

        dampingSlider = new QSlider(groupBox_2);
        dampingSlider->setObjectName("dampingSlider");
        dampingSlider->setEnabled(true);
        sizePolicy1.setHeightForWidth(dampingSlider->sizePolicy().hasHeightForWidth());
        dampingSlider->setSizePolicy(sizePolicy1);
        dampingSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(dampingSlider);

        lblLength = new QLabel(groupBox_2);
        lblLength->setObjectName("lblLength");
        lblLength->setEnabled(true);

        verticalLayout_2->addWidget(lblLength);

        springLengthSlider = new QSlider(groupBox_2);
        springLengthSlider->setObjectName("springLengthSlider");
        springLengthSlider->setEnabled(true);
        sizePolicy1.setHeightForWidth(springLengthSlider->sizePolicy().hasHeightForWidth());
        springLengthSlider->setSizePolicy(sizePolicy1);
        springLengthSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(springLengthSlider);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tabGraph);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        cmdZoomIn = new QToolButton(groupBox_3);
        cmdZoomIn->setObjectName("cmdZoomIn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arrows/zoomin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoomIn->setIcon(icon1);
        cmdZoomIn->setPopupMode(QToolButton::InstantPopup);

        gridLayout_2->addWidget(cmdZoomIn, 0, 0, 1, 1);

        cmdZoom1 = new QToolButton(groupBox_3);
        cmdZoom1->setObjectName("cmdZoom1");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arrows/zoom1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoom1->setIcon(icon2);

        gridLayout_2->addWidget(cmdZoom1, 1, 0, 1, 1);

        cmdZoomOut = new QToolButton(groupBox_3);
        cmdZoomOut->setObjectName("cmdZoomOut");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arrows/zoomout.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdZoomOut->setIcon(icon3);

        gridLayout_2->addWidget(cmdZoomOut, 2, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_3);

        chkViewOnlySelected = new QCheckBox(tabGraph);
        chkViewOnlySelected->setObjectName("chkViewOnlySelected");

        verticalLayout_4->addWidget(chkViewOnlySelected);


        horizontalLayout->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tabGraph, QString());
        tabDataView = new QWidget();
        tabDataView->setObjectName("tabDataView");
        horizontalLayout_3 = new QHBoxLayout(tabDataView);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        dataTable = new QTableWidget(tabDataView);
        dataTable->setObjectName("dataTable");
        dataTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dataTable->setSortingEnabled(true);

        horizontalLayout_3->addWidget(dataTable);

        tabWidget->addTab(tabDataView, QString());
        attributes = new QWidget();
        attributes->setObjectName("attributes");
        vertLayout_11 = new QVBoxLayout(attributes);
        vertLayout_11->setObjectName("vertLayout_11");
        textAttributes = new QTextBrowser(attributes);
        textAttributes->setObjectName("textAttributes");

        vertLayout_11->addWidget(textAttributes);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        cmdLoadBlack = new QPushButton(attributes);
        cmdLoadBlack->setObjectName("cmdLoadBlack");

        horizontalLayout_5->addWidget(cmdLoadBlack);

        cmdLoadWhitelist = new QPushButton(attributes);
        cmdLoadWhitelist->setObjectName("cmdLoadWhitelist");

        horizontalLayout_5->addWidget(cmdLoadWhitelist);

        cmdResetLists = new QPushButton(attributes);
        cmdResetLists->setObjectName("cmdResetLists");

        horizontalLayout_5->addWidget(cmdResetLists);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        exportCSV = new QPushButton(attributes);
        exportCSV->setObjectName("exportCSV");

        horizontalLayout_5->addWidget(exportCSV);


        vertLayout_11->addLayout(horizontalLayout_5);

        tabWidget->addTab(attributes, QString());

        verticalLayout_5->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(NodesRelationsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(NodesRelationsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NodesRelationsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NodesRelationsDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NodesRelationsDialog);
    } // setupUi

    void retranslateUi(QDialog *NodesRelationsDialog)
    {
        NodesRelationsDialog->setWindowTitle(QCoreApplication::translate("NodesRelationsDialog", "Relations", nullptr));
        lblFileName->setText(QCoreApplication::translate("NodesRelationsDialog", "File:", nullptr));
#if QT_CONFIG(tooltip)
        infoLabelFile->setToolTip(QCoreApplication::translate("NodesRelationsDialog", "TODO", nullptr));
#endif // QT_CONFIG(tooltip)
        infoLabelFile->setText(QString());
        cmdBrowseFile->setText(QCoreApplication::translate("NodesRelationsDialog", "...", nullptr));
        labelFile->setText(QCoreApplication::translate("NodesRelationsDialog", "----", nullptr));
        cmdReset->setText(QCoreApplication::translate("NodesRelationsDialog", "Reset", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NodesRelationsDialog", "Force", nullptr));
        label->setText(QCoreApplication::translate("NodesRelationsDialog", "Force", nullptr));
        label_4->setText(QCoreApplication::translate("NodesRelationsDialog", "Radius", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("NodesRelationsDialog", "Springs", nullptr));
        lblStiffness->setText(QCoreApplication::translate("NodesRelationsDialog", "Stiffness", nullptr));
        lblDamping->setText(QCoreApplication::translate("NodesRelationsDialog", "Damping", nullptr));
        lblLength->setText(QCoreApplication::translate("NodesRelationsDialog", "Length", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("NodesRelationsDialog", "Zoom", nullptr));
        cmdZoomIn->setText(QString());
        cmdZoom1->setText(QCoreApplication::translate("NodesRelationsDialog", "...", nullptr));
        cmdZoomOut->setText(QCoreApplication::translate("NodesRelationsDialog", "...", nullptr));
        chkViewOnlySelected->setText(QCoreApplication::translate("NodesRelationsDialog", "Center selected", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGraph), QCoreApplication::translate("NodesRelationsDialog", "Graphic view", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabDataView), QCoreApplication::translate("NodesRelationsDialog", "Data view", nullptr));
#if QT_CONFIG(tooltip)
        cmdLoadBlack->setToolTip(QCoreApplication::translate("NodesRelationsDialog", "Load a list of attributes that will be marked as NOT used", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdLoadBlack->setText(QCoreApplication::translate("NodesRelationsDialog", "Load Blacklist", nullptr));
#if QT_CONFIG(tooltip)
        cmdLoadWhitelist->setToolTip(QCoreApplication::translate("NodesRelationsDialog", "<html><head/><body><p>Load a list of attributes that will be marked as used.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdLoadWhitelist->setText(QCoreApplication::translate("NodesRelationsDialog", "Load Whitelist", nullptr));
#if QT_CONFIG(tooltip)
        cmdResetLists->setToolTip(QCoreApplication::translate("NodesRelationsDialog", "Clear whitelist and blacklist", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdResetLists->setText(QCoreApplication::translate("NodesRelationsDialog", "Reset Lists", nullptr));
#if QT_CONFIG(tooltip)
        exportCSV->setToolTip(QCoreApplication::translate("NodesRelationsDialog", "Export attributes data as CSV.", nullptr));
#endif // QT_CONFIG(tooltip)
        exportCSV->setText(QCoreApplication::translate("NodesRelationsDialog", "Export CSV", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(attributes), QCoreApplication::translate("NodesRelationsDialog", "AttributesView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NodesRelationsDialog: public Ui_NodesRelationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODESRELATIONSDIALOG_H
