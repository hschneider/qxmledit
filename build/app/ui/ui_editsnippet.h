/********************************************************************************
** Form generated from reading UI file 'editsnippet.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSNIPPET_H
#define UI_EDITSNIPPET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditSnippet
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
    QPlainTextEdit *payload;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *EditSnippet)
    {
        if (EditSnippet->objectName().isEmpty())
            EditSnippet->setObjectName("EditSnippet");
        EditSnippet->resize(562, 528);
        horizontalLayout_2 = new QHBoxLayout(EditSnippet);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(EditSnippet);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        name = new QLineEdit(EditSnippet);
        name->setObjectName("name");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setMaxLength(40);

        verticalLayout->addWidget(name);

        label_2 = new QLabel(EditSnippet);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        description = new QLineEdit(EditSnippet);
        description->setObjectName("description");

        verticalLayout->addWidget(description);

        label_3 = new QLabel(EditSnippet);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        tags = new QLineEdit(EditSnippet);
        tags->setObjectName("tags");

        verticalLayout->addWidget(tags);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(EditSnippet);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        creationDate = new QLabel(EditSnippet);
        creationDate->setObjectName("creationDate");

        horizontalLayout->addWidget(creationDate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_6 = new QLabel(EditSnippet);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        updateDate = new QLabel(EditSnippet);
        updateDate->setObjectName("updateDate");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateDate->sizePolicy().hasHeightForWidth());
        updateDate->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(updateDate);


        verticalLayout_2->addLayout(horizontalLayout);

        label_4 = new QLabel(EditSnippet);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        payload = new QPlainTextEdit(EditSnippet);
        payload->setObjectName("payload");

        verticalLayout_2->addWidget(payload);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        buttonBox = new QDialogButtonBox(EditSnippet);
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

        retranslateUi(EditSnippet);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditSnippet, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditSnippet, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditSnippet);
    } // setupUi

    void retranslateUi(QDialog *EditSnippet)
    {
        EditSnippet->setWindowTitle(QCoreApplication::translate("EditSnippet", "Edit XML Snippet", nullptr));
        label->setText(QCoreApplication::translate("EditSnippet", "&Name:", nullptr));
        label_2->setText(QCoreApplication::translate("EditSnippet", "&Description:", nullptr));
        label_3->setText(QCoreApplication::translate("EditSnippet", "&Tags (comma separed:)", nullptr));
        label_5->setText(QCoreApplication::translate("EditSnippet", "created on:", nullptr));
        creationDate->setText(QCoreApplication::translate("EditSnippet", "------", nullptr));
        label_6->setText(QCoreApplication::translate("EditSnippet", "last modified on:", nullptr));
        updateDate->setText(QCoreApplication::translate("EditSnippet", "---", nullptr));
        label_4->setText(QCoreApplication::translate("EditSnippet", "&Snippet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditSnippet: public Ui_EditSnippet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSNIPPET_H
