/********************************************************************************
** Form generated from reading UI file 'configurestyle.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURESTYLE_H
#define UI_CONFIGURESTYLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureStyle
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *pgmLocation;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *pgmDirValue;
    QRadioButton *pgmDefault;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *stdDirValue;
    QRadioButton *pgmThisDirectory;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *aDirectory;
    QPushButton *browseFolderCmd;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *openLocation;
    QLabel *label_4;

    void setupUi(QWidget *ConfigureStyle)
    {
        if (ConfigureStyle->objectName().isEmpty())
            ConfigureStyle->setObjectName("ConfigureStyle");
        ConfigureStyle->resize(584, 427);
        verticalLayout = new QVBoxLayout(ConfigureStyle);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ConfigureStyle);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pgmLocation = new QRadioButton(ConfigureStyle);
        pgmLocation->setObjectName("pgmLocation");

        verticalLayout->addWidget(pgmLocation);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(ConfigureStyle);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        pgmDirValue = new QLabel(ConfigureStyle);
        pgmDirValue->setObjectName("pgmDirValue");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pgmDirValue->sizePolicy().hasHeightForWidth());
        pgmDirValue->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(false);
        font1.setItalic(true);
        pgmDirValue->setFont(font1);
        pgmDirValue->setMouseTracking(false);
        pgmDirValue->setFrameShape(QFrame::NoFrame);
        pgmDirValue->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(pgmDirValue);


        verticalLayout->addLayout(horizontalLayout);

        pgmDefault = new QRadioButton(ConfigureStyle);
        pgmDefault->setObjectName("pgmDefault");

        verticalLayout->addWidget(pgmDefault);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(ConfigureStyle);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        stdDirValue = new QLabel(ConfigureStyle);
        stdDirValue->setObjectName("stdDirValue");
        sizePolicy1.setHeightForWidth(stdDirValue->sizePolicy().hasHeightForWidth());
        stdDirValue->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setItalic(true);
        stdDirValue->setFont(font2);
        stdDirValue->setFrameShape(QFrame::NoFrame);
        stdDirValue->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(stdDirValue);


        verticalLayout->addLayout(horizontalLayout_2);

        pgmThisDirectory = new QRadioButton(ConfigureStyle);
        pgmThisDirectory->setObjectName("pgmThisDirectory");

        verticalLayout->addWidget(pgmThisDirectory);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        aDirectory = new QLineEdit(ConfigureStyle);
        aDirectory->setObjectName("aDirectory");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(aDirectory->sizePolicy().hasHeightForWidth());
        aDirectory->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(aDirectory);

        browseFolderCmd = new QPushButton(ConfigureStyle);
        browseFolderCmd->setObjectName("browseFolderCmd");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mime/folder"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        browseFolderCmd->setIcon(icon);

        horizontalLayout_3->addWidget(browseFolderCmd);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(ConfigureStyle);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        openLocation = new QPushButton(ConfigureStyle);
        openLocation->setObjectName("openLocation");

        horizontalLayout_4->addWidget(openLocation);


        verticalLayout->addLayout(horizontalLayout_4);

        label_4 = new QLabel(ConfigureStyle);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label_4);


        retranslateUi(ConfigureStyle);

        QMetaObject::connectSlotsByName(ConfigureStyle);
    } // setupUi

    void retranslateUi(QWidget *ConfigureStyle)
    {
        ConfigureStyle->setWindowTitle(QCoreApplication::translate("ConfigureStyle", "Form", nullptr));
        label->setText(QCoreApplication::translate("ConfigureStyle", "Style Files Location", nullptr));
        pgmLocation->setText(QCoreApplication::translate("ConfigureStyle", "Use the &program directory", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureStyle", "value:", nullptr));
        pgmDirValue->setText(QCoreApplication::translate("ConfigureStyle", "-", nullptr));
        pgmDefault->setText(QCoreApplication::translate("ConfigureStyle", "Use the &standard Operating System location", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureStyle", "value:", nullptr));
        stdDirValue->setText(QCoreApplication::translate("ConfigureStyle", "-", nullptr));
        pgmThisDirectory->setText(QCoreApplication::translate("ConfigureStyle", "Use the &following directory:", nullptr));
#if QT_CONFIG(tooltip)
        browseFolderCmd->setToolTip(QCoreApplication::translate("ConfigureStyle", "Browse the filesystem.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseFolderCmd->setText(QString());
        openLocation->setText(QCoreApplication::translate("ConfigureStyle", "&Open Location in the Browser", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigureStyle", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">Warning</span><span style=\" font-size:9pt;\">: changes will be applied only after a program restart.</span></p></td></tr></table></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureStyle: public Ui_ConfigureStyle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURESTYLE_H
