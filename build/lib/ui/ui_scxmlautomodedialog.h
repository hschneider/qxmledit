/********************************************************************************
** Form generated from reading UI file 'scxmlautomodedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLAUTOMODEDIALOG_H
#define UI_SCXMLAUTOMODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCXMLAutoModeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *questionIcon;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *cmdYes;
    QLabel *label_4;
    QPushButton *cmdNo;
    QLabel *label_5;
    QPushButton *cmdAlways;
    QLabel *label_3;
    QCheckBox *cbDoNotShow;
    QLabel *label_2;

    void setupUi(QDialog *SCXMLAutoModeDialog)
    {
        if (SCXMLAutoModeDialog->objectName().isEmpty())
            SCXMLAutoModeDialog->setObjectName("SCXMLAutoModeDialog");
        SCXMLAutoModeDialog->resize(623, 294);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SCXMLAutoModeDialog->sizePolicy().hasHeightForWidth());
        SCXMLAutoModeDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLAutoModeDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SCXMLAutoModeDialog);
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(SCXMLAutoModeDialog);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        questionIcon = new QLabel(SCXMLAutoModeDialog);
        questionIcon->setObjectName("questionIcon");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(questionIcon->sizePolicy().hasHeightForWidth());
        questionIcon->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(questionIcon);

        label = new QLabel(SCXMLAutoModeDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        cmdYes = new QPushButton(SCXMLAutoModeDialog);
        cmdYes->setObjectName("cmdYes");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(cmdYes->sizePolicy().hasHeightForWidth());
        cmdYes->setSizePolicy(sizePolicy4);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, cmdYes);

        label_4 = new QLabel(SCXMLAutoModeDialog);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setTextFormat(Qt::RichText);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, label_4);

        cmdNo = new QPushButton(SCXMLAutoModeDialog);
        cmdNo->setObjectName("cmdNo");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cmdNo->sizePolicy().hasHeightForWidth());
        cmdNo->setSizePolicy(sizePolicy5);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, cmdNo);

        label_5 = new QLabel(SCXMLAutoModeDialog);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(false);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_5);

        cmdAlways = new QPushButton(SCXMLAutoModeDialog);
        cmdAlways->setObjectName("cmdAlways");
        sizePolicy4.setHeightForWidth(cmdAlways->sizePolicy().hasHeightForWidth());
        cmdAlways->setSizePolicy(sizePolicy4);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, cmdAlways);

        label_3 = new QLabel(SCXMLAutoModeDialog);
        label_3->setObjectName("label_3");
        sizePolicy6.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy6);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(false);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, label_3);


        verticalLayout->addLayout(formLayout);

        cbDoNotShow = new QCheckBox(SCXMLAutoModeDialog);
        cbDoNotShow->setObjectName("cbDoNotShow");

        verticalLayout->addWidget(cbDoNotShow);

        label_2 = new QLabel(SCXMLAutoModeDialog);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);


        retranslateUi(SCXMLAutoModeDialog);

        QMetaObject::connectSlotsByName(SCXMLAutoModeDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLAutoModeDialog)
    {
        SCXMLAutoModeDialog->setWindowTitle(QCoreApplication::translate("SCXMLAutoModeDialog", "SCXML Mode", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "SCXML mode", nullptr));
        questionIcon->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "--", nullptr));
        label->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "It seems that you loaded a SCXML document. Do you want to switch to SCXML edit mode?", nullptr));
        cmdYes->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "&Yes", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "<html><head/><body><p>Using the SCXML edit mode you will:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Use a specialized panel to edit elements.</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Use an enriched context menu.</li></ul></body></html>", nullptr));
        cmdNo->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "&No", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "Use standard XML edit mode", nullptr));
        cmdAlways->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "&Always", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "Automatically enter SCXML mode when loading a SCXML document.", nullptr));
        cbDoNotShow->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "Do not ask any more this question", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLAutoModeDialog", "Use the configuration panel to change the value of the options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLAutoModeDialog: public Ui_SCXMLAutoModeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLAUTOMODEDIALOG_H
