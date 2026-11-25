/********************************************************************************
** Form generated from reading UI file 'editsearchletdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSEARCHLETDIALOG_H
#define UI_EDITSEARCHLETDIALOG_H

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

class Ui_EditSearchletDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *description;
    QLabel *label_3;
    QLineEdit *tags;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *creationDate;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLabel *updateDate;
    QLabel *label_4;
    QLineEdit *payload;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *EditSearchletDialog)
    {
        if (EditSearchletDialog->objectName().isEmpty())
            EditSearchletDialog->setObjectName("EditSearchletDialog");
        EditSearchletDialog->resize(507, 285);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditSearchletDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(EditSearchletDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(EditSearchletDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        name = new QLineEdit(EditSearchletDialog);
        name->setObjectName("name");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMaxLength(40);

        verticalLayout->addWidget(name);

        label_2 = new QLabel(EditSearchletDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        description = new QLineEdit(EditSearchletDialog);
        description->setObjectName("description");

        verticalLayout->addWidget(description);

        label_3 = new QLabel(EditSearchletDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        tags = new QLineEdit(EditSearchletDialog);
        tags->setObjectName("tags");

        verticalLayout->addWidget(tags);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(EditSearchletDialog);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_5);

        creationDate = new QLabel(EditSearchletDialog);
        creationDate->setObjectName("creationDate");
        sizePolicy1.setHeightForWidth(creationDate->sizePolicy().hasHeightForWidth());
        creationDate->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(creationDate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_6 = new QLabel(EditSearchletDialog);
        label_6->setObjectName("label_6");
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_6);

        updateDate = new QLabel(EditSearchletDialog);
        updateDate->setObjectName("updateDate");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(updateDate->sizePolicy().hasHeightForWidth());
        updateDate->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(updateDate);


        verticalLayout_2->addLayout(horizontalLayout);

        label_4 = new QLabel(EditSearchletDialog);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(label_4);

        payload = new QLineEdit(EditSearchletDialog);
        payload->setObjectName("payload");

        verticalLayout_2->addWidget(payload);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        buttonBox = new QDialogButtonBox(EditSearchletDialog);
        buttonBox->setObjectName("buttonBox");
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_3->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);

#if QT_CONFIG(shortcut)
        label->setBuddy(name);
        label_2->setBuddy(description);
        label_3->setBuddy(tags);
        label_4->setBuddy(payload);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditSearchletDialog);

        QMetaObject::connectSlotsByName(EditSearchletDialog);
    } // setupUi

    void retranslateUi(QDialog *EditSearchletDialog)
    {
        EditSearchletDialog->setWindowTitle(QCoreApplication::translate("EditSearchletDialog", "Edit Searchlet", nullptr));
        label->setText(QCoreApplication::translate("EditSearchletDialog", "&Name:", nullptr));
        label_2->setText(QCoreApplication::translate("EditSearchletDialog", "&Description:", nullptr));
        label_3->setText(QCoreApplication::translate("EditSearchletDialog", "&Tags (comma separed:)", nullptr));
        label_5->setText(QCoreApplication::translate("EditSearchletDialog", "created on:", nullptr));
        creationDate->setText(QCoreApplication::translate("EditSearchletDialog", "------", nullptr));
        label_6->setText(QCoreApplication::translate("EditSearchletDialog", "last modified on:", nullptr));
        updateDate->setText(QCoreApplication::translate("EditSearchletDialog", "---", nullptr));
        label_4->setText(QCoreApplication::translate("EditSearchletDialog", "&Searchlet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditSearchletDialog: public Ui_EditSearchletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSEARCHLETDIALOG_H
