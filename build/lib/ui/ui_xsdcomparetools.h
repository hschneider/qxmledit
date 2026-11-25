/********************************************************************************
** Form generated from reading UI file 'xsdcomparetools.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDCOMPARETOOLS_H
#define UI_XSDCOMPARETOOLS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XSDCompareTools
{
public:
    QAction *compareCommentsAction;
    QAction *compareShowOnlyDifferencesAction;
    QAction *compareSwapReferenceAction;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *colorEquals;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *colorDeleted;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QWidget *colorModified;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QWidget *colorAdded;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *compareAnnotationOption;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *XSDCompareTools)
    {
        if (XSDCompareTools->objectName().isEmpty())
            XSDCompareTools->setObjectName("XSDCompareTools");
        XSDCompareTools->resize(297, 131);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XSDCompareTools->sizePolicy().hasHeightForWidth());
        XSDCompareTools->setSizePolicy(sizePolicy);
        compareCommentsAction = new QAction(XSDCompareTools);
        compareCommentsAction->setObjectName("compareCommentsAction");
        compareCommentsAction->setCheckable(true);
        compareShowOnlyDifferencesAction = new QAction(XSDCompareTools);
        compareShowOnlyDifferencesAction->setObjectName("compareShowOnlyDifferencesAction");
        compareSwapReferenceAction = new QAction(XSDCompareTools);
        compareSwapReferenceAction->setObjectName("compareSwapReferenceAction");
        verticalLayout_2 = new QVBoxLayout(XSDCompareTools);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(XSDCompareTools);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        colorEquals = new QWidget(groupBox);
        colorEquals->setObjectName("colorEquals");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(colorEquals->sizePolicy().hasHeightForWidth());
        colorEquals->setSizePolicy(sizePolicy2);
        colorEquals->setMinimumSize(QSize(10, 10));
        colorEquals->setMaximumSize(QSize(10, 10));
        colorEquals->setAutoFillBackground(false);
        colorEquals->setStyleSheet(QString::fromUtf8("background-color:rgb(200, 200, 200);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        horizontalLayout->addWidget(colorEquals);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_4);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        colorDeleted = new QWidget(groupBox);
        colorDeleted->setObjectName("colorDeleted");
        sizePolicy2.setHeightForWidth(colorDeleted->sizePolicy().hasHeightForWidth());
        colorDeleted->setSizePolicy(sizePolicy2);
        colorDeleted->setMinimumSize(QSize(10, 0));
        colorDeleted->setMaximumSize(QSize(10, 10));
        colorDeleted->setAutoFillBackground(false);
        colorDeleted->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 10, 0);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        horizontalLayout_3->addWidget(colorDeleted);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        colorModified = new QWidget(groupBox);
        colorModified->setObjectName("colorModified");
        sizePolicy2.setHeightForWidth(colorModified->sizePolicy().hasHeightForWidth());
        colorModified->setSizePolicy(sizePolicy2);
        colorModified->setMinimumSize(QSize(10, 0));
        colorModified->setMaximumSize(QSize(10, 10));
        colorModified->setAutoFillBackground(false);
        colorModified->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 200, 0);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        horizontalLayout_4->addWidget(colorModified);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_6);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        colorAdded = new QWidget(groupBox);
        colorAdded->setObjectName("colorAdded");
        colorAdded->setMinimumSize(QSize(10, 0));
        colorAdded->setMaximumSize(QSize(10, 10));
        colorAdded->setAutoFillBackground(false);
        colorAdded->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 170, 0);\n"
"padding:2px;\n"
"border: 1px solid black;"));

        horizontalLayout_5->addWidget(colorAdded);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(label_7);


        gridLayout->addLayout(horizontalLayout_5, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        compareAnnotationOption = new QCheckBox(groupBox);
        compareAnnotationOption->setObjectName("compareAnnotationOption");

        horizontalLayout_2->addWidget(compareAnnotationOption);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(XSDCompareTools);

        QMetaObject::connectSlotsByName(XSDCompareTools);
    } // setupUi

    void retranslateUi(QWidget *XSDCompareTools)
    {
        XSDCompareTools->setWindowTitle(QCoreApplication::translate("XSDCompareTools", "Form", nullptr));
        compareCommentsAction->setText(QCoreApplication::translate("XSDCompareTools", "Compare Comments Too", nullptr));
        compareShowOnlyDifferencesAction->setText(QCoreApplication::translate("XSDCompareTools", "Show Only Differences", nullptr));
        compareSwapReferenceAction->setText(QCoreApplication::translate("XSDCompareTools", "Swap Reference and Target", nullptr));
#if QT_CONFIG(tooltip)
        compareSwapReferenceAction->setToolTip(QCoreApplication::translate("XSDCompareTools", "Swap Reference and Target", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("XSDCompareTools", "Compare", nullptr));
        label->setText(QCoreApplication::translate("XSDCompareTools", "Legend:", nullptr));
        label_4->setText(QCoreApplication::translate("XSDCompareTools", "Equals", nullptr));
        label_5->setText(QCoreApplication::translate("XSDCompareTools", "Deleted", nullptr));
        label_6->setText(QCoreApplication::translate("XSDCompareTools", "Different", nullptr));
        label_7->setText(QCoreApplication::translate("XSDCompareTools", "Added", nullptr));
        compareAnnotationOption->setText(QCoreApplication::translate("XSDCompareTools", "Compare annotations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDCompareTools: public Ui_XSDCompareTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDCOMPARETOOLS_H
