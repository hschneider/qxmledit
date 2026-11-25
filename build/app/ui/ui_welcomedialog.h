/********************************************************************************
** Form generated from reading UI file 'welcomedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEDIALOG_H
#define UI_WELCOMEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WelcomeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QLabel *title1;
    QLabel *title2;
    QLabel *title3_2;
    QLabel *title3;
    QLabel *title3_3;
    QPushButton *examineSchema;
    QPushButton *splitFile;
    QPushButton *cmdViewData;
    QPushButton *compareFiles;
    QPushButton *chooseRecent;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *labelRecentFiles;
    QListView *recentFiles;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QPushButton *cmdManageSessions;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *showNextTime;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WelcomeDialog)
    {
        if (WelcomeDialog->objectName().isEmpty())
            WelcomeDialog->setObjectName("WelcomeDialog");
        WelcomeDialog->setWindowModality(Qt::WindowModal);
        WelcomeDialog->resize(1025, 636);
        WelcomeDialog->setModal(true);
        verticalLayout = new QVBoxLayout(WelcomeDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(WelcomeDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(WelcomeDialog);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setItalic(true);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        title1 = new QLabel(WelcomeDialog);
        title1->setObjectName("title1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(title1->sizePolicy().hasHeightForWidth());
        title1->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(true);
        title1->setFont(font2);
        title1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title1, 0, 0, 1, 1);

        title2 = new QLabel(WelcomeDialog);
        title2->setObjectName("title2");
        sizePolicy.setHeightForWidth(title2->sizePolicy().hasHeightForWidth());
        title2->setSizePolicy(sizePolicy);
        title2->setFont(font2);
        title2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title2, 0, 1, 1, 1);

        title3_2 = new QLabel(WelcomeDialog);
        title3_2->setObjectName("title3_2");
        sizePolicy.setHeightForWidth(title3_2->sizePolicy().hasHeightForWidth());
        title3_2->setSizePolicy(sizePolicy);
        title3_2->setFont(font2);
        title3_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title3_2, 0, 2, 1, 1);

        title3 = new QLabel(WelcomeDialog);
        title3->setObjectName("title3");
        sizePolicy.setHeightForWidth(title3->sizePolicy().hasHeightForWidth());
        title3->setSizePolicy(sizePolicy);
        title3->setFont(font2);
        title3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title3, 0, 3, 1, 1);

        title3_3 = new QLabel(WelcomeDialog);
        title3_3->setObjectName("title3_3");
        sizePolicy.setHeightForWidth(title3_3->sizePolicy().hasHeightForWidth());
        title3_3->setSizePolicy(sizePolicy);
        title3_3->setFont(font2);
        title3_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title3_3, 0, 4, 1, 1);

        examineSchema = new QPushButton(WelcomeDialog);
        examineSchema->setObjectName("examineSchema");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(examineSchema->sizePolicy().hasHeightForWidth());
        examineSchema->setSizePolicy(sizePolicy1);
        examineSchema->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/welcome/images/welcome_schema.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        examineSchema->setIcon(icon);
        examineSchema->setIconSize(QSize(128, 128));
        examineSchema->setFlat(false);

        gridLayout->addWidget(examineSchema, 1, 0, 1, 1);

        splitFile = new QPushButton(WelcomeDialog);
        splitFile->setObjectName("splitFile");
        sizePolicy1.setHeightForWidth(splitFile->sizePolicy().hasHeightForWidth());
        splitFile->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/welcome/images/welcome_split.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        splitFile->setIcon(icon1);
        splitFile->setIconSize(QSize(128, 128));

        gridLayout->addWidget(splitFile, 1, 1, 1, 1);

        cmdViewData = new QPushButton(WelcomeDialog);
        cmdViewData->setObjectName("cmdViewData");
        sizePolicy1.setHeightForWidth(cmdViewData->sizePolicy().hasHeightForWidth());
        cmdViewData->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/welcome/images/view-structure.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdViewData->setIcon(icon2);
        cmdViewData->setIconSize(QSize(128, 128));

        gridLayout->addWidget(cmdViewData, 1, 2, 1, 1);

        compareFiles = new QPushButton(WelcomeDialog);
        compareFiles->setObjectName("compareFiles");
        sizePolicy1.setHeightForWidth(compareFiles->sizePolicy().hasHeightForWidth());
        compareFiles->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/welcome/images/compare-big.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        compareFiles->setIcon(icon3);
        compareFiles->setIconSize(QSize(128, 128));

        gridLayout->addWidget(compareFiles, 1, 3, 1, 1);

        chooseRecent = new QPushButton(WelcomeDialog);
        chooseRecent->setObjectName("chooseRecent");
        sizePolicy1.setHeightForWidth(chooseRecent->sizePolicy().hasHeightForWidth());
        chooseRecent->setSizePolicy(sizePolicy1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/welcome/images/welcome_xml.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        chooseRecent->setIcon(icon4);
        chooseRecent->setIconSize(QSize(128, 128));

        gridLayout->addWidget(chooseRecent, 1, 4, 1, 1);

        label_3 = new QLabel(WelcomeDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3->setWordWrap(true);
        label_3->setMargin(4);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(WelcomeDialog);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(9);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_6->setWordWrap(true);
        label_6->setMargin(4);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_10 = new QLabel(WelcomeDialog);
        label_10->setObjectName("label_10");
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_10->setWordWrap(true);
        label_10->setMargin(4);

        gridLayout->addWidget(label_10, 2, 2, 1, 1);

        label_8 = new QLabel(WelcomeDialog);
        label_8->setObjectName("label_8");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_8->setWordWrap(true);
        label_8->setMargin(4);

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        label_11 = new QLabel(WelcomeDialog);
        label_11->setObjectName("label_11");
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_11->setWordWrap(true);
        label_11->setMargin(4);

        gridLayout->addWidget(label_11, 2, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        labelRecentFiles = new QLabel(WelcomeDialog);
        labelRecentFiles->setObjectName("labelRecentFiles");

        verticalLayout->addWidget(labelRecentFiles);

        recentFiles = new QListView(WelcomeDialog);
        recentFiles->setObjectName("recentFiles");
        recentFiles->setEditTriggers(QAbstractItemView::NoEditTriggers);
        recentFiles->setAlternatingRowColors(true);
        recentFiles->setSelectionBehavior(QAbstractItemView::SelectItems);
        recentFiles->setModelColumn(0);
        recentFiles->setUniformItemSizes(true);
        recentFiles->setSelectionRectVisible(true);

        verticalLayout->addWidget(recentFiles);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(WelcomeDialog);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/sessions/sessionOpen")));

        horizontalLayout_5->addWidget(label_4);

        cmdManageSessions = new QPushButton(WelcomeDialog);
        cmdManageSessions->setObjectName("cmdManageSessions");

        horizontalLayout_5->addWidget(cmdManageSessions);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);

        showNextTime = new QCheckBox(WelcomeDialog);
        showNextTime->setObjectName("showNextTime");

        verticalLayout->addWidget(showNextTime);

        buttonBox = new QDialogButtonBox(WelcomeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(recentFiles, buttonBox);
        QWidget::setTabOrder(buttonBox, splitFile);
        QWidget::setTabOrder(splitFile, showNextTime);
        QWidget::setTabOrder(showNextTime, cmdManageSessions);

        retranslateUi(WelcomeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, WelcomeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, WelcomeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(WelcomeDialog);
    } // setupUi

    void retranslateUi(QDialog *WelcomeDialog)
    {
        WelcomeDialog->setWindowTitle(QCoreApplication::translate("WelcomeDialog", "Welcome to QXmlEdit", nullptr));
        label->setText(QCoreApplication::translate("WelcomeDialog", "Welcome to QXmlEdit", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomeDialog", "You can choose a task clicking the icon:", nullptr));
        title1->setText(QCoreApplication::translate("WelcomeDialog", "View a XSD schema", nullptr));
        title2->setText(QCoreApplication::translate("WelcomeDialog", "Split a XML file", nullptr));
        title3_2->setText(QCoreApplication::translate("WelcomeDialog", "View structure", nullptr));
        title3->setText(QCoreApplication::translate("WelcomeDialog", "Compare files", nullptr));
        title3_3->setText(QCoreApplication::translate("WelcomeDialog", "Choose a recent file", nullptr));
        examineSchema->setText(QString());
        splitFile->setText(QString());
        cmdViewData->setText(QString());
        compareFiles->setText(QString());
        chooseRecent->setText(QString());
        label_3->setText(QCoreApplication::translate("WelcomeDialog", "Examine a XML Schema file in a graphical editor. ", nullptr));
        label_6->setText(QCoreApplication::translate("WelcomeDialog", "Split a XML file in smaller fragments.", nullptr));
        label_10->setText(QCoreApplication::translate("WelcomeDialog", "View graphically the structure of a XML file.", nullptr));
        label_8->setText(QCoreApplication::translate("WelcomeDialog", "Compare two XML files side by side", nullptr));
        label_11->setText(QCoreApplication::translate("WelcomeDialog", "Select one of the recent files shown in the list.", nullptr));
        labelRecentFiles->setText(QCoreApplication::translate("WelcomeDialog", "Recent files list:", nullptr));
        label_4->setText(QString());
        cmdManageSessions->setText(QCoreApplication::translate("WelcomeDialog", "Sessions...", nullptr));
        showNextTime->setText(QCoreApplication::translate("WelcomeDialog", "Show this window next time ( you can reactivate this option using the preferences dialog).", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeDialog: public Ui_WelcomeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEDIALOG_H
