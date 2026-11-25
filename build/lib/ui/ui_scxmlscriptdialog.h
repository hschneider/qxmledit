/********************************************************************************
** Form generated from reading UI file 'scxmlscriptdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLSCRIPTDIALOG_H
#define UI_SCXMLSCRIPTDIALOG_H

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

class Ui_SCXMLScriptDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *src;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLScriptDialog)
    {
        if (SCXMLScriptDialog->objectName().isEmpty())
            SCXMLScriptDialog->setObjectName("SCXMLScriptDialog");
        SCXMLScriptDialog->resize(388, 97);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLScriptDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLScriptDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLScriptDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        src = new QLineEdit(SCXMLScriptDialog);
        src->setObjectName("src");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, src);

        label_3 = new QLabel(SCXMLScriptDialog);
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
        buttonBox = new QDialogButtonBox(SCXMLScriptDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
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
        label_2->setBuddy(src);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLScriptDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLScriptDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLScriptDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLScriptDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLScriptDialog)
    {
        SCXMLScriptDialog->setWindowTitle(QCoreApplication::translate("SCXMLScriptDialog", "Script Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLScriptDialog", "&Src:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLScriptDialog", "Location of the script.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLScriptDialog: public Ui_SCXMLScriptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLSCRIPTDIALOG_H
