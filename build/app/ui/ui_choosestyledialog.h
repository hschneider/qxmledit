/********************************************************************************
** Form generated from reading UI file 'choosestyledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSESTYLEDIALOG_H
#define UI_CHOOSESTYLEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseStyleDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QTabWidget *tabStyle;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QLabel *preview0;
    QWidget *tab_2;
    QVBoxLayout *horizontalLayout;
    QLabel *preview1;
    QWidget *tab_3;
    QVBoxLayout *horizontalLayout_2;
    QLabel *preview2;
    QWidget *tab_4;
    QVBoxLayout *horizontalLayout_3;
    QLabel *preview3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *cmdUseThis;
    QPushButton *cmdUsePredefined;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QLabel *details;

    void setupUi(QDialog *ChooseStyleDialog)
    {
        if (ChooseStyleDialog->objectName().isEmpty())
            ChooseStyleDialog->setObjectName("ChooseStyleDialog");
        ChooseStyleDialog->resize(794, 553);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ChooseStyleDialog->setWindowIcon(icon);
        ChooseStyleDialog->setSizeGripEnabled(true);
        ChooseStyleDialog->setModal(true);
        horizontalLayout_4 = new QHBoxLayout(ChooseStyleDialog);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(ChooseStyleDialog);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        label = new QLabel(ChooseStyleDialog);
        label->setObjectName("label");
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        label_3 = new QLabel(ChooseStyleDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFrameShape(QFrame::NoFrame);

        verticalLayout_4->addWidget(label_3);

        tabStyle = new QTabWidget(ChooseStyleDialog);
        tabStyle->setObjectName("tabStyle");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabStyle->sizePolicy().hasHeightForWidth());
        tabStyle->setSizePolicy(sizePolicy1);
        tabStyle->setTabShape(QTabWidget::Rounded);
        tabStyle->setUsesScrollButtons(false);
        tabStyle->setDocumentMode(false);
        tabStyle->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy2);
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(4, 4, 4, 4);
        preview0 = new QLabel(tab);
        preview0->setObjectName("preview0");
        sizePolicy.setHeightForWidth(preview0->sizePolicy().hasHeightForWidth());
        preview0->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(preview0);

        tabStyle->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        sizePolicy2.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy2);
        horizontalLayout = new QVBoxLayout(tab_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        preview1 = new QLabel(tab_2);
        preview1->setObjectName("preview1");
        sizePolicy.setHeightForWidth(preview1->sizePolicy().hasHeightForWidth());
        preview1->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(preview1);

        tabStyle->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        sizePolicy2.setHeightForWidth(tab_3->sizePolicy().hasHeightForWidth());
        tab_3->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QVBoxLayout(tab_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(4, 4, 4, 4);
        preview2 = new QLabel(tab_3);
        preview2->setObjectName("preview2");
        sizePolicy.setHeightForWidth(preview2->sizePolicy().hasHeightForWidth());
        preview2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(preview2);

        tabStyle->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        sizePolicy2.setHeightForWidth(tab_4->sizePolicy().hasHeightForWidth());
        tab_4->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QVBoxLayout(tab_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        preview3 = new QLabel(tab_4);
        preview3->setObjectName("preview3");
        sizePolicy.setHeightForWidth(preview3->sizePolicy().hasHeightForWidth());
        preview3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(preview3);

        tabStyle->addTab(tab_4, QString());

        verticalLayout_4->addWidget(tabStyle);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        cmdUseThis = new QPushButton(ChooseStyleDialog);
        cmdUseThis->setObjectName("cmdUseThis");

        verticalLayout_2->addWidget(cmdUseThis);

        cmdUsePredefined = new QPushButton(ChooseStyleDialog);
        cmdUsePredefined->setObjectName("cmdUsePredefined");

        verticalLayout_2->addWidget(cmdUsePredefined);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(ChooseStyleDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        details = new QLabel(ChooseStyleDialog);
        details->setObjectName("details");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(details->sizePolicy().hasHeightForWidth());
        details->setSizePolicy(sizePolicy4);
        details->setMinimumSize(QSize(130, 0));
        details->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(details);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(ChooseStyleDialog);

        tabStyle->setCurrentIndex(1);
        cmdUsePredefined->setDefault(true);


        QMetaObject::connectSlotsByName(ChooseStyleDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseStyleDialog)
    {
        ChooseStyleDialog->setWindowTitle(QCoreApplication::translate("ChooseStyleDialog", "Adjust editor's visualization", nullptr));
        label_2->setText(QCoreApplication::translate("ChooseStyleDialog", "Choose the level of detail to suit your preferences", nullptr));
        label->setText(QCoreApplication::translate("ChooseStyleDialog", "If unsure, just choose \"Use Predefined\" or press enter.", nullptr));
        label_3->setText(QCoreApplication::translate("ChooseStyleDialog", "The settings are available as separate options using the menu View.\n"
"This dialog can be recalled at any time using the menu \"Preferences\".", nullptr));
        preview0->setText(QCoreApplication::translate("ChooseStyleDialog", "Preview:", nullptr));
        tabStyle->setTabText(tabStyle->indexOf(tab), QCoreApplication::translate("ChooseStyleDialog", "Essential", nullptr));
#if QT_CONFIG(tooltip)
        tabStyle->setTabToolTip(tabStyle->indexOf(tab), QCoreApplication::translate("ChooseStyleDialog", "dddddddddd", nullptr));
#endif // QT_CONFIG(tooltip)
        preview1->setText(QCoreApplication::translate("ChooseStyleDialog", "Preview:", nullptr));
        tabStyle->setTabText(tabStyle->indexOf(tab_2), QCoreApplication::translate("ChooseStyleDialog", "Compact", nullptr));
#if QT_CONFIG(tooltip)
        tabStyle->setTabToolTip(tabStyle->indexOf(tab_2), QCoreApplication::translate("ChooseStyleDialog", "cccccccccc", nullptr));
#endif // QT_CONFIG(tooltip)
        preview2->setText(QCoreApplication::translate("ChooseStyleDialog", "Preview:", nullptr));
        tabStyle->setTabText(tabStyle->indexOf(tab_3), QCoreApplication::translate("ChooseStyleDialog", "Extended", nullptr));
#if QT_CONFIG(tooltip)
        tabStyle->setTabToolTip(tabStyle->indexOf(tab_3), QCoreApplication::translate("ChooseStyleDialog", "bbbbbbbbbbb", nullptr));
#endif // QT_CONFIG(tooltip)
        preview3->setText(QCoreApplication::translate("ChooseStyleDialog", "Preview:", nullptr));
        tabStyle->setTabText(tabStyle->indexOf(tab_4), QCoreApplication::translate("ChooseStyleDialog", "Full Details", nullptr));
#if QT_CONFIG(tooltip)
        tabStyle->setTabToolTip(tabStyle->indexOf(tab_4), QCoreApplication::translate("ChooseStyleDialog", "aaaaaaaaaa", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdUseThis->setText(QCoreApplication::translate("ChooseStyleDialog", "Use XXX", nullptr));
        cmdUsePredefined->setText(QCoreApplication::translate("ChooseStyleDialog", "Use Predefined", nullptr));
        details->setText(QCoreApplication::translate("ChooseStyleDialog", "AAAAAAAAAAAAAA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseStyleDialog: public Ui_ChooseStyleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESTYLEDIALOG_H
