/********************************************************************************
** Form generated from reading UI file 'guidedoperationsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDEDOPERATIONSDIALOG_H
#define UI_GUIDEDOPERATIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GuidedOperationsDialog
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *v1Layout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *l1;
    QPushButton *cmdNew;
    QPushButton *cmdOpen;
    QPushButton *cmdValidate;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *l2;
    QPushButton *cmdCfgFormatting;
    QPushButton *cmdCfgVision;
    QPushButton *cmdCfgEditing;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *l3;
    QPushButton *cmdConfigure;
    QPushButton *cmdUserProfile;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *l4;
    QPushButton *cmdExtractFile;
    QPushButton *cmdViewXSD;
    QPushButton *cmdCompare;
    QPushButton *cmdBase64;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_6;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *l6;
    QPushButton *cmdViewDataMap;
    QPushButton *cmdAnon;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line_5;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *l5;
    QPushButton *cmdUserManual;
    QPushButton *cmdEditingShortcut;
    QCheckBox *cmdShowKeyboardInfo;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *cmdAbout;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacer1;
    QPushButton *cmdQuit;

    void setupUi(QDialog *GuidedOperationsDialog)
    {
        if (GuidedOperationsDialog->objectName().isEmpty())
            GuidedOperationsDialog->setObjectName("GuidedOperationsDialog");
        GuidedOperationsDialog->resize(751, 517);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GuidedOperationsDialog->setWindowIcon(icon);
        horizontalLayout_7 = new QHBoxLayout(GuidedOperationsDialog);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        v1Layout = new QVBoxLayout();
        v1Layout->setObjectName("v1Layout");
        label = new QLabel(GuidedOperationsDialog);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        v1Layout->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        l1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(l1);

        cmdNew = new QPushButton(GuidedOperationsDialog);
        cmdNew->setObjectName("cmdNew");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmdNew->sizePolicy().hasHeightForWidth());
        cmdNew->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/images/document-new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdNew->setIcon(icon1);
        cmdNew->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(cmdNew);

        cmdOpen = new QPushButton(GuidedOperationsDialog);
        cmdOpen->setObjectName("cmdOpen");
        sizePolicy.setHeightForWidth(cmdOpen->sizePolicy().hasHeightForWidth());
        cmdOpen->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        cmdOpen->setIcon(icon2);
        cmdOpen->setIconSize(QSize(16, 16));
        cmdOpen->setFlat(false);

        horizontalLayout_4->addWidget(cmdOpen);

        cmdValidate = new QPushButton(GuidedOperationsDialog);
        cmdValidate->setObjectName("cmdValidate");
        sizePolicy.setHeightForWidth(cmdValidate->sizePolicy().hasHeightForWidth());
        cmdValidate->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/configuration/validation"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        cmdValidate->setIcon(icon3);
        cmdValidate->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(cmdValidate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        v1Layout->addLayout(horizontalLayout_4);

        line_3 = new QFrame(GuidedOperationsDialog);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        v1Layout->addWidget(line_3);

        label_2 = new QLabel(GuidedOperationsDialog);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        v1Layout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        l2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(l2);

        cmdCfgFormatting = new QPushButton(GuidedOperationsDialog);
        cmdCfgFormatting->setObjectName("cmdCfgFormatting");
        sizePolicy.setHeightForWidth(cmdCfgFormatting->sizePolicy().hasHeightForWidth());
        cmdCfgFormatting->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/editText/indent"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdCfgFormatting->setIcon(icon4);
        cmdCfgFormatting->setIconSize(QSize(16, 16));
        cmdCfgFormatting->setAutoDefault(true);

        horizontalLayout->addWidget(cmdCfgFormatting);

        cmdCfgVision = new QPushButton(GuidedOperationsDialog);
        cmdCfgVision->setObjectName("cmdCfgVision");
        sizePolicy.setHeightForWidth(cmdCfgVision->sizePolicy().hasHeightForWidth());
        cmdCfgVision->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/special/style"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdCfgVision->setIcon(icon5);
        cmdCfgVision->setIconSize(QSize(16, 16));
        cmdCfgVision->setAutoDefault(true);

        horizontalLayout->addWidget(cmdCfgVision);

        cmdCfgEditing = new QPushButton(GuidedOperationsDialog);
        cmdCfgEditing->setObjectName("cmdCfgEditing");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/commands/modify"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        cmdCfgEditing->setIcon(icon6);

        horizontalLayout->addWidget(cmdCfgEditing);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        v1Layout->addLayout(horizontalLayout);

        line_2 = new QFrame(GuidedOperationsDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        v1Layout->addWidget(line_2);

        label_3 = new QLabel(GuidedOperationsDialog);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        v1Layout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        l3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(l3);

        cmdConfigure = new QPushButton(GuidedOperationsDialog);
        cmdConfigure->setObjectName("cmdConfigure");
        sizePolicy.setHeightForWidth(cmdConfigure->sizePolicy().hasHeightForWidth());
        cmdConfigure->setSizePolicy(sizePolicy);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/configuration/general"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdConfigure->setIcon(icon7);
        cmdConfigure->setIconSize(QSize(16, 16));

        horizontalLayout_3->addWidget(cmdConfigure);

        cmdUserProfile = new QPushButton(GuidedOperationsDialog);
        cmdUserProfile->setObjectName("cmdUserProfile");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/help/images/bookmark.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdUserProfile->setIcon(icon8);

        horizontalLayout_3->addWidget(cmdUserProfile);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        v1Layout->addLayout(horizontalLayout_3);

        line_4 = new QFrame(GuidedOperationsDialog);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        v1Layout->addWidget(line_4);

        label_4 = new QLabel(GuidedOperationsDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        v1Layout->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        l4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(l4);

        cmdExtractFile = new QPushButton(GuidedOperationsDialog);
        cmdExtractFile->setObjectName("cmdExtractFile");
        sizePolicy.setHeightForWidth(cmdExtractFile->sizePolicy().hasHeightForWidth());
        cmdExtractFile->setSizePolicy(sizePolicy);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/tools/images/split.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdExtractFile->setIcon(icon9);
        cmdExtractFile->setIconSize(QSize(16, 16));
        cmdExtractFile->setAutoDefault(true);

        horizontalLayout_2->addWidget(cmdExtractFile);

        cmdViewXSD = new QPushButton(GuidedOperationsDialog);
        cmdViewXSD->setObjectName("cmdViewXSD");
        sizePolicy.setHeightForWidth(cmdViewXSD->sizePolicy().hasHeightForWidth());
        cmdViewXSD->setSizePolicy(sizePolicy);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/status/explore-mode"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdViewXSD->setIcon(icon10);
        cmdViewXSD->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(cmdViewXSD);

        cmdCompare = new QPushButton(GuidedOperationsDialog);
        cmdCompare->setObjectName("cmdCompare");
        sizePolicy.setHeightForWidth(cmdCompare->sizePolicy().hasHeightForWidth());
        cmdCompare->setSizePolicy(sizePolicy);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/tools/images/compare.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdCompare->setIcon(icon11);
        cmdCompare->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(cmdCompare);

        cmdBase64 = new QPushButton(GuidedOperationsDialog);
        cmdBase64->setObjectName("cmdBase64");
        sizePolicy.setHeightForWidth(cmdBase64->sizePolicy().hasHeightForWidth());
        cmdBase64->setSizePolicy(sizePolicy);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/tools/images/base64.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdBase64->setIcon(icon12);
        cmdBase64->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(cmdBase64);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        v1Layout->addLayout(horizontalLayout_2);

        line_6 = new QFrame(GuidedOperationsDialog);
        line_6->setObjectName("line_6");
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        v1Layout->addWidget(line_6);

        label_6 = new QLabel(GuidedOperationsDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        v1Layout->addWidget(label_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        l6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(l6);

        cmdViewDataMap = new QPushButton(GuidedOperationsDialog);
        cmdViewDataMap->setObjectName("cmdViewDataMap");
        sizePolicy.setHeightForWidth(cmdViewDataMap->sizePolicy().hasHeightForWidth());
        cmdViewDataMap->setSizePolicy(sizePolicy);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/tools/images/view-structure-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdViewDataMap->setIcon(icon13);
        cmdViewDataMap->setIconSize(QSize(16, 16));

        horizontalLayout_6->addWidget(cmdViewDataMap);

        cmdAnon = new QPushButton(GuidedOperationsDialog);
        cmdAnon->setObjectName("cmdAnon");
        sizePolicy.setHeightForWidth(cmdAnon->sizePolicy().hasHeightForWidth());
        cmdAnon->setSizePolicy(sizePolicy);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/editText/images/mask.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdAnon->setIcon(icon14);
        cmdAnon->setIconSize(QSize(16, 16));

        horizontalLayout_6->addWidget(cmdAnon);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        v1Layout->addLayout(horizontalLayout_6);

        line_5 = new QFrame(GuidedOperationsDialog);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        v1Layout->addWidget(line_5);

        label_5 = new QLabel(GuidedOperationsDialog);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        v1Layout->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        l5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(l5);

        cmdUserManual = new QPushButton(GuidedOperationsDialog);
        cmdUserManual->setObjectName("cmdUserManual");
        sizePolicy.setHeightForWidth(cmdUserManual->sizePolicy().hasHeightForWidth());
        cmdUserManual->setSizePolicy(sizePolicy);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/commands/images/help-contents.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdUserManual->setIcon(icon15);
        cmdUserManual->setIconSize(QSize(16, 16));

        horizontalLayout_5->addWidget(cmdUserManual);

        cmdEditingShortcut = new QPushButton(GuidedOperationsDialog);
        cmdEditingShortcut->setObjectName("cmdEditingShortcut");
        sizePolicy.setHeightForWidth(cmdEditingShortcut->sizePolicy().hasHeightForWidth());
        cmdEditingShortcut->setSizePolicy(sizePolicy);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/configuration/editModes"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdEditingShortcut->setIcon(icon16);

        horizontalLayout_5->addWidget(cmdEditingShortcut);

        cmdShowKeyboardInfo = new QCheckBox(GuidedOperationsDialog);
        cmdShowKeyboardInfo->setObjectName("cmdShowKeyboardInfo");
        cmdShowKeyboardInfo->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_5->addWidget(cmdShowKeyboardInfo);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        cmdAbout = new QToolButton(GuidedOperationsDialog);
        cmdAbout->setObjectName("cmdAbout");
        cmdAbout->setIcon(icon);
        cmdAbout->setAutoRaise(true);

        horizontalLayout_5->addWidget(cmdAbout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        v1Layout->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(v1Layout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(GuidedOperationsDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        spacer1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacer1);

        cmdQuit = new QPushButton(GuidedOperationsDialog);
        cmdQuit->setObjectName("cmdQuit");
        sizePolicy.setHeightForWidth(cmdQuit->sizePolicy().hasHeightForWidth());
        cmdQuit->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(cmdQuit);


        horizontalLayout_7->addLayout(verticalLayout);


        retranslateUi(GuidedOperationsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GuidedOperationsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GuidedOperationsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GuidedOperationsDialog);
    } // setupUi

    void retranslateUi(QDialog *GuidedOperationsDialog)
    {
        GuidedOperationsDialog->setWindowTitle(QCoreApplication::translate("GuidedOperationsDialog", "QXmlEdit Guided Operations", nullptr));
        label->setText(QCoreApplication::translate("GuidedOperationsDialog", "Edit", nullptr));
#if QT_CONFIG(tooltip)
        cmdNew->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Create a new XML document.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdNew->setText(QCoreApplication::translate("GuidedOperationsDialog", "New", nullptr));
#if QT_CONFIG(tooltip)
        cmdOpen->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Open an existing XML document.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdOpen->setText(QCoreApplication::translate("GuidedOperationsDialog", "Open", nullptr));
#if QT_CONFIG(tooltip)
        cmdValidate->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Validate an XML document.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdValidate->setText(QCoreApplication::translate("GuidedOperationsDialog", "Validate", nullptr));
        label_2->setText(QCoreApplication::translate("GuidedOperationsDialog", "View and Formatting", nullptr));
#if QT_CONFIG(tooltip)
        cmdCfgFormatting->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Set formatting options.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdCfgFormatting->setText(QCoreApplication::translate("GuidedOperationsDialog", "Formatting", nullptr));
#if QT_CONFIG(tooltip)
        cmdCfgVision->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Set view options.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdCfgVision->setText(QCoreApplication::translate("GuidedOperationsDialog", "Vision", nullptr));
#if QT_CONFIG(tooltip)
        cmdCfgEditing->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Set edit options.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdCfgEditing->setText(QCoreApplication::translate("GuidedOperationsDialog", "Editing", nullptr));
        label_3->setText(QCoreApplication::translate("GuidedOperationsDialog", "Configuration", nullptr));
#if QT_CONFIG(tooltip)
        cmdConfigure->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Open the configuration panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdConfigure->setText(QCoreApplication::translate("GuidedOperationsDialog", "Configure", nullptr));
#if QT_CONFIG(tooltip)
        cmdUserProfile->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Change the user profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdUserProfile->setText(QCoreApplication::translate("GuidedOperationsDialog", "Change Profile", nullptr));
        label_4->setText(QCoreApplication::translate("GuidedOperationsDialog", "Tools", nullptr));
#if QT_CONFIG(tooltip)
        cmdExtractFile->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Extract fragments from XML file.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdExtractFile->setText(QCoreApplication::translate("GuidedOperationsDialog", "Extract File", nullptr));
#if QT_CONFIG(tooltip)
        cmdViewXSD->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "View an XSD diagram.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdViewXSD->setText(QCoreApplication::translate("GuidedOperationsDialog", "View XSD", nullptr));
#if QT_CONFIG(tooltip)
        cmdCompare->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Compare two XML documents.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdCompare->setText(QCoreApplication::translate("GuidedOperationsDialog", "Compare", nullptr));
#if QT_CONFIG(tooltip)
        cmdBase64->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Work with Base64 encoding.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdBase64->setText(QCoreApplication::translate("GuidedOperationsDialog", "Base 64", nullptr));
        label_6->setText(QCoreApplication::translate("GuidedOperationsDialog", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        cmdViewDataMap->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "View XML document statistics and elements distribution.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdViewDataMap->setText(QCoreApplication::translate("GuidedOperationsDialog", "Data Map", nullptr));
#if QT_CONFIG(tooltip)
        cmdAnon->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Anonymize an XML file using existing profiles.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdAnon->setText(QCoreApplication::translate("GuidedOperationsDialog", "Anonymize", nullptr));
        label_5->setText(QCoreApplication::translate("GuidedOperationsDialog", "Help", nullptr));
#if QT_CONFIG(tooltip)
        cmdUserManual->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Show the user manual.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdUserManual->setText(QCoreApplication::translate("GuidedOperationsDialog", "User Manual", nullptr));
#if QT_CONFIG(tooltip)
        cmdEditingShortcut->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Show the editing shortcuts.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdEditingShortcut->setText(QCoreApplication::translate("GuidedOperationsDialog", "Editing shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        cmdShowKeyboardInfo->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Show or hide the keyboard shortcuts information dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdShowKeyboardInfo->setText(QCoreApplication::translate("GuidedOperationsDialog", "Show keyboard shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        cmdAbout->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "About QXmlEdit", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdAbout->setText(QString());
#if QT_CONFIG(tooltip)
        buttonBox->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Close this window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cmdQuit->setToolTip(QCoreApplication::translate("GuidedOperationsDialog", "Quit application.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdQuit->setText(QCoreApplication::translate("GuidedOperationsDialog", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuidedOperationsDialog: public Ui_GuidedOperationsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDEDOPERATIONSDIALOG_H
