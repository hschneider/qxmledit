/********************************************************************************
** Form generated from reading UI file 'scxmlelseifdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLELSEIFDIALOG_H
#define UI_SCXMLELSEIFDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCXMLElseIfDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *cond;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLElseIfDialog)
    {
        if (SCXMLElseIfDialog->objectName().isEmpty())
            SCXMLElseIfDialog->setObjectName("SCXMLElseIfDialog");
        SCXMLElseIfDialog->resize(390, 93);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLElseIfDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLElseIfDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLElseIfDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        cond = new QLineEdit(SCXMLElseIfDialog);
        cond->setObjectName("cond");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, cond);

        label_3 = new QLabel(SCXMLElseIfDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLElseIfDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(cond);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLElseIfDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLElseIfDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLElseIfDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLElseIfDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLElseIfDialog)
    {
        SCXMLElseIfDialog->setWindowTitle(QCoreApplication::translate("SCXMLElseIfDialog", "ElseIF Property", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLElseIfDialog", "&Cond:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLElseIfDialog", "A boolean expression.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLElseIfDialog: public Ui_SCXMLElseIfDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLELSEIFDIALOG_H
