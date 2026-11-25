/********************************************************************************
** Form generated from reading UI file 'infoonkeyboardshoertcuts.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOONKEYBOARDSHOERTCUTS_H
#define UI_INFOONKEYBOARDSHOERTCUTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoOnKeyboardShortcuts
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *info;
    QLabel *infoText;
    QVBoxLayout *verticalLayout;
    QLabel *infoText2;
    QLabel *label;
    QLabel *infoText3;

    void setupUi(QWidget *InfoOnKeyboardShortcuts)
    {
        if (InfoOnKeyboardShortcuts->objectName().isEmpty())
            InfoOnKeyboardShortcuts->setObjectName("InfoOnKeyboardShortcuts");
        InfoOnKeyboardShortcuts->resize(577, 127);
        horizontalLayout_2 = new QHBoxLayout(InfoOnKeyboardShortcuts);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(InfoOnKeyboardShortcuts);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border :1px solid;border-radius:20px;"));
        groupBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        info = new QLabel(groupBox);
        info->setObjectName("info");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setStyleSheet(QString::fromUtf8("border:none;"));
        info->setPixmap(QPixmap(QString::fromUtf8(":/special/info")));
        info->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(info);

        infoText = new QLabel(groupBox);
        infoText->setObjectName("infoText");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoText->sizePolicy().hasHeightForWidth());
        infoText->setSizePolicy(sizePolicy1);
        infoText->setStyleSheet(QString::fromUtf8("border: none"));

        horizontalLayout->addWidget(infoText);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        infoText2 = new QLabel(groupBox);
        infoText2->setObjectName("infoText2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(infoText2->sizePolicy().hasHeightForWidth());
        infoText2->setSizePolicy(sizePolicy2);
        QFont font;
        font.setBold(true);
        infoText2->setFont(font);
        infoText2->setStyleSheet(QString::fromUtf8("border: 1px solid; border-radius:10px; background-color: #FFFFFF;border-color:#FFFFFF;padding:8px;margin-right:20px;margin-top:5px"));

        verticalLayout->addWidget(infoText2);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("border:none;"));

        verticalLayout->addWidget(label);

        infoText3 = new QLabel(groupBox);
        infoText3->setObjectName("infoText3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(infoText3->sizePolicy().hasHeightForWidth());
        infoText3->setSizePolicy(sizePolicy3);
        infoText3->setStyleSheet(QString::fromUtf8("border:none;"));

        verticalLayout->addWidget(infoText3);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addWidget(groupBox);


        retranslateUi(InfoOnKeyboardShortcuts);

        QMetaObject::connectSlotsByName(InfoOnKeyboardShortcuts);
    } // setupUi

    void retranslateUi(QWidget *InfoOnKeyboardShortcuts)
    {
        InfoOnKeyboardShortcuts->setWindowTitle(QCoreApplication::translate("InfoOnKeyboardShortcuts", "Form", nullptr));
        groupBox->setTitle(QString());
        info->setText(QString());
        infoText->setText(QCoreApplication::translate("InfoOnKeyboardShortcuts", "<html><head/><body>\n"
"<p><span style=\"font-size:12pt;font-weight:600;\">Keyboard shortcuts available </span></p>\n"
"<p>\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:40;padding-right:40;\"><p><span style=\" font-size:9pt;\">Using keyboard can be faster.</span></p><p><span style=\" font-size:9pt;\">View the shortcuts using the &quot;</span><span style=\" font-size:9pt; font-weight:600;\">Help</span><span style=\" font-size:9pt;\">&quot; menu.</span></p></td></tr></table></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        infoText2->setToolTip(QCoreApplication::translate("InfoOnKeyboardShortcuts", "Show the list of shortcuts.", nullptr));
#endif // QT_CONFIG(tooltip)
        infoText2->setText(QCoreApplication::translate("InfoOnKeyboardShortcuts", "<html><head/><body><p><a href=\"self:showPanel\"><span style=\" font-size:9pt; text-decoration: underline;;\">Show Shortcut List</span></a></p></body></html>", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        infoText3->setToolTip(QCoreApplication::translate("InfoOnKeyboardShortcuts", "Close this panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        infoText3->setText(QCoreApplication::translate("InfoOnKeyboardShortcuts", "<html><head/><body><p align=\"right\"><a href=\"self:dismiss\"><span style=\" font-size:9pt; text-decoration: underline; color:#0057ae;\">Dismiss</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoOnKeyboardShortcuts: public Ui_InfoOnKeyboardShortcuts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOONKEYBOARDSHOERTCUTS_H
