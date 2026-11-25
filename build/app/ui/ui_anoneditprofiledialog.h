/********************************************************************************
** Form generated from reading UI file 'anoneditprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONEDITPROFILEDIALOG_H
#define UI_ANONEDITPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnonEditProfileDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *name;
    QLabel *label_8;
    QLineEdit *description;
    QLabel *label_9;
    QLineEdit *tags;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLabel *creationDate;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QLabel *updateDate;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AnonEditProfileDialog)
    {
        if (AnonEditProfileDialog->objectName().isEmpty())
            AnonEditProfileDialog->setObjectName("AnonEditProfileDialog");
        AnonEditProfileDialog->resize(548, 220);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonEditProfileDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AnonEditProfileDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_7 = new QLabel(AnonEditProfileDialog);
        label_7->setObjectName("label_7");

        verticalLayout_6->addWidget(label_7);

        name = new QLineEdit(AnonEditProfileDialog);
        name->setObjectName("name");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMaxLength(40);

        verticalLayout_6->addWidget(name);

        label_8 = new QLabel(AnonEditProfileDialog);
        label_8->setObjectName("label_8");

        verticalLayout_6->addWidget(label_8);

        description = new QLineEdit(AnonEditProfileDialog);
        description->setObjectName("description");

        verticalLayout_6->addWidget(description);

        label_9 = new QLabel(AnonEditProfileDialog);
        label_9->setObjectName("label_9");

        verticalLayout_6->addWidget(label_9);

        tags = new QLineEdit(AnonEditProfileDialog);
        tags->setObjectName("tags");

        verticalLayout_6->addWidget(tags);


        verticalLayout_5->addLayout(verticalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_10 = new QLabel(AnonEditProfileDialog);
        label_10->setObjectName("label_10");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_10);

        creationDate = new QLabel(AnonEditProfileDialog);
        creationDate->setObjectName("creationDate");
        sizePolicy1.setHeightForWidth(creationDate->sizePolicy().hasHeightForWidth());
        creationDate->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(creationDate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_11 = new QLabel(AnonEditProfileDialog);
        label_11->setObjectName("label_11");
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_11);

        updateDate = new QLabel(AnonEditProfileDialog);
        updateDate->setObjectName("updateDate");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateDate->sizePolicy().hasHeightForWidth());
        updateDate->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(updateDate);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(AnonEditProfileDialog);
        buttonBox->setObjectName("buttonBox");
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(name);
        label_8->setBuddy(description);
        label_9->setBuddy(tags);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AnonEditProfileDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonEditProfileDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonEditProfileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnonEditProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonEditProfileDialog)
    {
        AnonEditProfileDialog->setWindowTitle(QCoreApplication::translate("AnonEditProfileDialog", "Edit Profile", nullptr));
        label_7->setText(QCoreApplication::translate("AnonEditProfileDialog", "&Name:", nullptr));
        label_8->setText(QCoreApplication::translate("AnonEditProfileDialog", "&Description:", nullptr));
        label_9->setText(QCoreApplication::translate("AnonEditProfileDialog", "&Tags (comma separed:)", nullptr));
        label_10->setText(QCoreApplication::translate("AnonEditProfileDialog", "created on:", nullptr));
        creationDate->setText(QCoreApplication::translate("AnonEditProfileDialog", "------", nullptr));
        label_11->setText(QCoreApplication::translate("AnonEditProfileDialog", "last modified on:", nullptr));
        updateDate->setText(QCoreApplication::translate("AnonEditProfileDialog", "---", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonEditProfileDialog: public Ui_AnonEditProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONEDITPROFILEDIALOG_H
