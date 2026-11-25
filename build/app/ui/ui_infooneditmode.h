/********************************************************************************
** Form generated from reading UI file 'infooneditmode.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOONEDITMODE_H
#define UI_INFOONEDITMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoOnEditMode
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *info;
    QLabel *infoText;
    QVBoxLayout *verticalLayout_2;
    QLabel *infoText2;
    QLabel *label_2;
    QLabel *infoText3;

    void setupUi(QWidget *InfoOnEditMode)
    {
        if (InfoOnEditMode->objectName().isEmpty())
            InfoOnEditMode->setObjectName("InfoOnEditMode");
        InfoOnEditMode->resize(677, 127);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InfoOnEditMode->sizePolicy().hasHeightForWidth());
        InfoOnEditMode->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(InfoOnEditMode);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(InfoOnEditMode);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("border :1px solid;border-radius:20px;"));
        groupBox->setFlat(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        info = new QLabel(groupBox);
        info->setObjectName("info");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy1);
        info->setStyleSheet(QString::fromUtf8("border:none;"));
        info->setPixmap(QPixmap(QString::fromUtf8(":/special/info")));
        info->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(info);

        infoText = new QLabel(groupBox);
        infoText->setObjectName("infoText");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(infoText->sizePolicy().hasHeightForWidth());
        infoText->setSizePolicy(sizePolicy2);
        infoText->setStyleSheet(QString::fromUtf8("border: none"));

        horizontalLayout->addWidget(infoText);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        infoText2 = new QLabel(groupBox);
        infoText2->setObjectName("infoText2");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(infoText2->sizePolicy().hasHeightForWidth());
        infoText2->setSizePolicy(sizePolicy3);
        QFont font;
        font.setBold(true);
        infoText2->setFont(font);
        infoText2->setStyleSheet(QString::fromUtf8("border: 1px solid; border-radius:10px; background-color: #FFFFFF;border-color:#FFFFFF;padding:8px;margin-right:20px;margin-top:5px"));

        verticalLayout_2->addWidget(infoText2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("border:none;"));

        verticalLayout_2->addWidget(label_2);

        infoText3 = new QLabel(groupBox);
        infoText3->setObjectName("infoText3");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(infoText3->sizePolicy().hasHeightForWidth());
        infoText3->setSizePolicy(sizePolicy4);
        infoText3->setStyleSheet(QString::fromUtf8("border:none;"));

        verticalLayout_2->addWidget(infoText3);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(groupBox);


        retranslateUi(InfoOnEditMode);

        QMetaObject::connectSlotsByName(InfoOnEditMode);
    } // setupUi

    void retranslateUi(QWidget *InfoOnEditMode)
    {
        InfoOnEditMode->setWindowTitle(QCoreApplication::translate("InfoOnEditMode", "Form", nullptr));
        groupBox->setTitle(QString());
        info->setText(QString());
        infoText->setText(QCoreApplication::translate("InfoOnEditMode", "<html><head/><body>\n"
"<p><span style=\"font-size:12pt;font-weight:600;\">Use a Text Editor</span></p>\n"
"<p>\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\"><tr><td style=\" padding-left:40;padding-right:40;\"><p><span style=\" font-size:9pt;\">You can use a text editor to edit elements.</span></p><p><span style=\" font-size:9pt;\">You can change your choice using the &quot;</span><span style=\" font-size:9pt; font-weight:600;\">Task</span><span style=\" font-size:9pt;\">&quot; menu.</span></p></td></tr></table></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        infoText2->setToolTip(QCoreApplication::translate("InfoOnEditMode", "Open the edit configuration panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        infoText2->setText(QCoreApplication::translate("InfoOnEditMode", "<html><head/><body><p><a href=\"self:showPanel\"><span style=\" font-size:9pt; text-decoration: underline;;\">Open Configuration Panel</span></a></p></body></html>", nullptr));
        label_2->setText(QString());
#if QT_CONFIG(tooltip)
        infoText3->setToolTip(QCoreApplication::translate("InfoOnEditMode", "Close this panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        infoText3->setText(QCoreApplication::translate("InfoOnEditMode", "<html><head/><body><p align=\"right\"><a href=\"self:dismiss\"><span style=\" font-size:9pt; text-decoration: underline; color:#0057ae;\">Dismiss</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoOnEditMode: public Ui_InfoOnEditMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOONEDITMODE_H
