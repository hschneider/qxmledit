/********************************************************************************
** Form generated from reading UI file 'xcomparesummary.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XCOMPARESUMMARY_H
#define UI_XCOMPARESUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XCompareSummary
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *referenceFile;
    QLabel *label_4;
    QLabel *targetPath;
    QStackedWidget *stackedWidget;
    QWidget *noDataPage;
    QLabel *label_3;
    QWidget *treePage;
    QVBoxLayout *verticalLayout_2;
    QTreeWidget *treeWidget;
    QLabel *label_5;

    void setupUi(QWidget *XCompareSummary)
    {
        if (XCompareSummary->objectName().isEmpty())
            XCompareSummary->setObjectName("XCompareSummary");
        XCompareSummary->resize(358, 361);
        verticalLayout = new QVBoxLayout(XCompareSummary);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(XCompareSummary);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(XCompareSummary);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        referenceFile = new QLabel(XCompareSummary);
        referenceFile->setObjectName("referenceFile");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(referenceFile->sizePolicy().hasHeightForWidth());
        referenceFile->setSizePolicy(sizePolicy1);
        referenceFile->setMinimumSize(QSize(200, 0));
        referenceFile->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, referenceFile);

        label_4 = new QLabel(XCompareSummary);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_4);

        targetPath = new QLabel(XCompareSummary);
        targetPath->setObjectName("targetPath");
        sizePolicy1.setHeightForWidth(targetPath->sizePolicy().hasHeightForWidth());
        targetPath->setSizePolicy(sizePolicy1);
        targetPath->setMinimumSize(QSize(200, 0));
        targetPath->setMaximumSize(QSize(16777215, 16777215));
        targetPath->setScaledContents(false);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, targetPath);


        verticalLayout->addLayout(formLayout);

        stackedWidget = new QStackedWidget(XCompareSummary);
        stackedWidget->setObjectName("stackedWidget");
        noDataPage = new QWidget();
        noDataPage->setObjectName("noDataPage");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(noDataPage->sizePolicy().hasHeightForWidth());
        noDataPage->setSizePolicy(sizePolicy2);
        label_3 = new QLabel(noDataPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 100, 161, 19));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(noDataPage);
        treePage = new QWidget();
        treePage->setObjectName("treePage");
        verticalLayout_2 = new QVBoxLayout(treePage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        treeWidget = new QTreeWidget(treePage);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        verticalLayout_2->addWidget(treeWidget);

        label_5 = new QLabel(treePage);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setItalic(true);
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        stackedWidget->addWidget(treePage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(XCompareSummary);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(XCompareSummary);
    } // setupUi

    void retranslateUi(QWidget *XCompareSummary)
    {
        XCompareSummary->setWindowTitle(QCoreApplication::translate("XCompareSummary", "Form", nullptr));
        label->setText(QCoreApplication::translate("XCompareSummary", "Compare Summary", nullptr));
        label_2->setText(QCoreApplication::translate("XCompareSummary", "Reference:", nullptr));
        referenceFile->setText(QCoreApplication::translate("XCompareSummary", "-----", nullptr));
        label_4->setText(QCoreApplication::translate("XCompareSummary", "Target:", nullptr));
        targetPath->setText(QCoreApplication::translate("XCompareSummary", "-------------------------------------------", nullptr));
        label_3->setText(QCoreApplication::translate("XCompareSummary", "There are no differences", nullptr));
        label_5->setText(QCoreApplication::translate("XCompareSummary", "Double click on an item to select it in the diagram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XCompareSummary: public Ui_XCompareSummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XCOMPARESUMMARY_H
