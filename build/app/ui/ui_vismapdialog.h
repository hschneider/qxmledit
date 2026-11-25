/********************************************************************************
** Form generated from reading UI file 'vismapdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISMAPDIALOG_H
#define UI_VISMAPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "visualization/datawidget.h"
#include "visualization/vismapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_VisMapDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *fileName;
    QPushButton *loadFile;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QComboBox *comboLoudness;
    QLabel *label_7;
    QComboBox *sliceLevel;
    QCheckBox *cumulative;
    QLabel *label_2;
    QComboBox *visType;
    QHBoxLayout *horizontalLayout_2;
    DataWidget *dataWidget;
    QScrollBar *verticalPosition;
    QTableWidget *numbers;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_5;
    QSlider *zoom;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *copyImageToClipboard;
    QPushButton *exportStatsCmd;
    QPushButton *extractFragment;
    QCheckBox *threeD;
    QCheckBox *cbGrid;
    QCheckBox *cbPoints;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkAnalyzeNodes;
    QPushButton *cmdViewGraph;
    QLabel *label_8;
    VisMapWidget *cmapWidget;
    QPushButton *changeColorMap;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VisMapDialog)
    {
        if (VisMapDialog->objectName().isEmpty())
            VisMapDialog->setObjectName("VisMapDialog");
        VisMapDialog->resize(1170, 562);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VisMapDialog->sizePolicy().hasHeightForWidth());
        VisMapDialog->setSizePolicy(sizePolicy);
        VisMapDialog->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        VisMapDialog->setWindowIcon(icon);
        VisMapDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(VisMapDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(VisMapDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        fileName = new QLabel(VisMapDialog);
        fileName->setObjectName("fileName");
        fileName->setFrameShape(QFrame::Panel);
        fileName->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(fileName);

        loadFile = new QPushButton(VisMapDialog);
        loadFile->setObjectName("loadFile");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loadFile->sizePolicy().hasHeightForWidth());
        loadFile->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(loadFile);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_4 = new QLabel(VisMapDialog);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        comboLoudness = new QComboBox(VisMapDialog);
        comboLoudness->setObjectName("comboLoudness");

        horizontalLayout->addWidget(comboLoudness);

        label_7 = new QLabel(VisMapDialog);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        sliceLevel = new QComboBox(VisMapDialog);
        sliceLevel->setObjectName("sliceLevel");

        horizontalLayout->addWidget(sliceLevel);

        cumulative = new QCheckBox(VisMapDialog);
        cumulative->setObjectName("cumulative");
        cumulative->setEnabled(true);

        horizontalLayout->addWidget(cumulative);

        label_2 = new QLabel(VisMapDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        visType = new QComboBox(VisMapDialog);
        visType->setObjectName("visType");
        visType->setEnabled(true);

        horizontalLayout->addWidget(visType);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dataWidget = new DataWidget(VisMapDialog);
        dataWidget->setObjectName("dataWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dataWidget->sizePolicy().hasHeightForWidth());
        dataWidget->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(dataWidget);

        verticalPosition = new QScrollBar(VisMapDialog);
        verticalPosition->setObjectName("verticalPosition");
        verticalPosition->setEnabled(true);
        verticalPosition->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalPosition);

        numbers = new QTableWidget(VisMapDialog);
        if (numbers->columnCount() < 2)
            numbers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        numbers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        numbers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        numbers->setObjectName("numbers");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(numbers->sizePolicy().hasHeightForWidth());
        numbers->setSizePolicy(sizePolicy4);
        numbers->setAlternatingRowColors(true);

        horizontalLayout_2->addWidget(numbers);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(VisMapDialog);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        label_5 = new QLabel(VisMapDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        zoom = new QSlider(VisMapDialog);
        zoom->setObjectName("zoom");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(zoom->sizePolicy().hasHeightForWidth());
        zoom->setSizePolicy(sizePolicy5);
        zoom->setMinimum(1);
        zoom->setMaximum(100);
        zoom->setOrientation(Qt::Horizontal);
        zoom->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_3->addWidget(zoom);

        label_6 = new QLabel(VisMapDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        copyImageToClipboard = new QPushButton(VisMapDialog);
        copyImageToClipboard->setObjectName("copyImageToClipboard");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/copy/images/edit-copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        copyImageToClipboard->setIcon(icon1);
        copyImageToClipboard->setFlat(true);

        horizontalLayout_4->addWidget(copyImageToClipboard);

        exportStatsCmd = new QPushButton(VisMapDialog);
        exportStatsCmd->setObjectName("exportStatsCmd");
        exportStatsCmd->setEnabled(false);

        horizontalLayout_4->addWidget(exportStatsCmd);

        extractFragment = new QPushButton(VisMapDialog);
        extractFragment->setObjectName("extractFragment");
        extractFragment->setEnabled(false);
        sizePolicy2.setHeightForWidth(extractFragment->sizePolicy().hasHeightForWidth());
        extractFragment->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(extractFragment);

        threeD = new QCheckBox(VisMapDialog);
        threeD->setObjectName("threeD");

        horizontalLayout_4->addWidget(threeD);

        cbGrid = new QCheckBox(VisMapDialog);
        cbGrid->setObjectName("cbGrid");

        horizontalLayout_4->addWidget(cbGrid);

        cbPoints = new QCheckBox(VisMapDialog);
        cbPoints->setObjectName("cbPoints");

        horizontalLayout_4->addWidget(cbPoints);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        checkAnalyzeNodes = new QCheckBox(VisMapDialog);
        checkAnalyzeNodes->setObjectName("checkAnalyzeNodes");

        horizontalLayout_4->addWidget(checkAnalyzeNodes);

        cmdViewGraph = new QPushButton(VisMapDialog);
        cmdViewGraph->setObjectName("cmdViewGraph");

        horizontalLayout_4->addWidget(cmdViewGraph);

        label_8 = new QLabel(VisMapDialog);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_8);

        cmapWidget = new VisMapWidget(VisMapDialog);
        cmapWidget->setObjectName("cmapWidget");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cmapWidget->sizePolicy().hasHeightForWidth());
        cmapWidget->setSizePolicy(sizePolicy6);

        horizontalLayout_4->addWidget(cmapWidget);

        changeColorMap = new QPushButton(VisMapDialog);
        changeColorMap->setObjectName("changeColorMap");
        changeColorMap->setEnabled(true);

        horizontalLayout_4->addWidget(changeColorMap);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(VisMapDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(VisMapDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VisMapDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VisMapDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VisMapDialog);
    } // setupUi

    void retranslateUi(QDialog *VisMapDialog)
    {
        VisMapDialog->setWindowTitle(QCoreApplication::translate("VisMapDialog", "XML Data visualization", nullptr));
        label_3->setText(QCoreApplication::translate("VisMapDialog", "File:", nullptr));
        fileName->setText(QCoreApplication::translate("VisMapDialog", "TextLabel", nullptr));
        loadFile->setText(QCoreApplication::translate("VisMapDialog", "Load...", nullptr));
        label_4->setText(QCoreApplication::translate("VisMapDialog", "Loudness:", nullptr));
        label_7->setText(QCoreApplication::translate("VisMapDialog", "Slice at level:", nullptr));
        cumulative->setText(QCoreApplication::translate("VisMapDialog", "Cumulative values", nullptr));
        label_2->setText(QCoreApplication::translate("VisMapDialog", "View as:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = numbers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("VisMapDialog", "Measure", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = numbers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("VisMapDialog", "Data", nullptr));
        label->setText(QCoreApplication::translate("VisMapDialog", "Zoom:", nullptr));
        label_5->setText(QCoreApplication::translate("VisMapDialog", "1", nullptr));
        label_6->setText(QCoreApplication::translate("VisMapDialog", "100", nullptr));
#if QT_CONFIG(tooltip)
        copyImageToClipboard->setToolTip(QCoreApplication::translate("VisMapDialog", "Copy image in clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyImageToClipboard->setText(QString());
        exportStatsCmd->setText(QCoreApplication::translate("VisMapDialog", "Export Stats...", nullptr));
        extractFragment->setText(QCoreApplication::translate("VisMapDialog", "Extract fragment...", nullptr));
        threeD->setText(QCoreApplication::translate("VisMapDialog", "3D", nullptr));
        cbGrid->setText(QCoreApplication::translate("VisMapDialog", "Grid", nullptr));
        cbPoints->setText(QCoreApplication::translate("VisMapDialog", "Points", nullptr));
        checkAnalyzeNodes->setText(QCoreApplication::translate("VisMapDialog", "Analyze relations", nullptr));
        cmdViewGraph->setText(QCoreApplication::translate("VisMapDialog", "View Relations...", nullptr));
        label_8->setText(QCoreApplication::translate("VisMapDialog", "Color map:", nullptr));
        changeColorMap->setText(QCoreApplication::translate("VisMapDialog", "Change...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisMapDialog: public Ui_VisMapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISMAPDIALOG_H
