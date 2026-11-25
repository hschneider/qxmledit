/********************************************************************************
** Form generated from reading UI file 'scxmlparalleldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLPARALLELDIALOG_H
#define UI_SCXMLPARALLELDIALOG_H

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

class Ui_SCXMLParallelDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *id;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLParallelDialog)
    {
        if (SCXMLParallelDialog->objectName().isEmpty())
            SCXMLParallelDialog->setObjectName("SCXMLParallelDialog");
        SCXMLParallelDialog->resize(425, 97);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLParallelDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLParallelDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLParallelDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        id = new QLineEdit(SCXMLParallelDialog);
        id->setObjectName("id");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, id);

        label_3 = new QLabel(SCXMLParallelDialog);
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
        buttonBox = new QDialogButtonBox(SCXMLParallelDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(id);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLParallelDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLParallelDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLParallelDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLParallelDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLParallelDialog)
    {
        SCXMLParallelDialog->setWindowTitle(QCoreApplication::translate("SCXMLParallelDialog", "SCXML Parallel Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLParallelDialog", "Id:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLParallelDialog", "The identifier for this state.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLParallelDialog: public Ui_SCXMLParallelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLPARALLELDIALOG_H
