/********************************************************************************
** Form generated from reading UI file 'firstaccessdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTACCESSDIALOG_H
#define UI_FIRSTACCESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirstAccessDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_5;
    QPushButton *cmdGuided;
    QFrame *line_2;
    QLabel *label_6;
    QLabel *label_4;
    QPushButton *cmdExpert;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *FirstAccessDialog)
    {
        if (FirstAccessDialog->objectName().isEmpty())
            FirstAccessDialog->setObjectName("FirstAccessDialog");
        FirstAccessDialog->resize(696, 407);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        FirstAccessDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(FirstAccessDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FirstAccessDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(FirstAccessDialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setWordWrap(true);

        verticalLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(20, -1, -1, -1);
        label_8 = new QLabel(FirstAccessDialog);
        label_8->setObjectName("label_8");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        label_5 = new QLabel(FirstAccessDialog);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        cmdGuided = new QPushButton(FirstAccessDialog);
        cmdGuided->setObjectName("cmdGuided");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmdGuided->sizePolicy().hasHeightForWidth());
        cmdGuided->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdGuided, 1, 1, 1, 1);

        line_2 = new QFrame(FirstAccessDialog);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 2);

        label_6 = new QLabel(FirstAccessDialog);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_4 = new QLabel(FirstAccessDialog);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        cmdExpert = new QPushButton(FirstAccessDialog);
        cmdExpert->setObjectName("cmdExpert");
        sizePolicy3.setHeightForWidth(cmdExpert->sizePolicy().hasHeightForWidth());
        cmdExpert->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cmdExpert, 4, 1, 1, 1);

        line = new QFrame(FirstAccessDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_7 = new QLabel(FirstAccessDialog);
        label_7->setObjectName("label_7");
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/help/info")));

        horizontalLayout->addWidget(label_7);

        label_2 = new QLabel(FirstAccessDialog);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setItalic(true);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(FirstAccessDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy4);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(FirstAccessDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FirstAccessDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FirstAccessDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FirstAccessDialog);
    } // setupUi

    void retranslateUi(QDialog *FirstAccessDialog)
    {
        FirstAccessDialog->setWindowTitle(QCoreApplication::translate("FirstAccessDialog", "QXMLEdit Preferences", nullptr));
        label->setText(QCoreApplication::translate("FirstAccessDialog", "Guided or Expert?", nullptr));
        label_3->setText(QCoreApplication::translate("FirstAccessDialog", "How do you prefer using QXMLEdit?", nullptr));
        label_8->setText(QCoreApplication::translate("FirstAccessDialog", "Guided User", nullptr));
        label_5->setText(QCoreApplication::translate("FirstAccessDialog", "You will be guided through the main features until you familiarize with QXMLEdit.\n"
"The most important operations will be reached in no time.\n"
"", nullptr));
        cmdGuided->setText(QCoreApplication::translate("FirstAccessDialog", "Guided User", nullptr));
        label_6->setText(QCoreApplication::translate("FirstAccessDialog", "\n"
"Expert User", nullptr));
        label_4->setText(QCoreApplication::translate("FirstAccessDialog", "Browse through all the commands.\n"
"After some time you will prefer it. This is the fastest mode to use the program, but requires some experience given the number of options.\n"
"", nullptr));
        cmdExpert->setText(QCoreApplication::translate("FirstAccessDialog", "Expert User", nullptr));
        label_7->setText(QString());
        label_2->setText(QCoreApplication::translate("FirstAccessDialog", "\n"
"If unsure, close this panel or press escape. You can always change your choice later.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstAccessDialog: public Ui_FirstAccessDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTACCESSDIALOG_H
