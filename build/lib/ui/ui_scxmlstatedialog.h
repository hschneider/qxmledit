/********************************************************************************
** Form generated from reading UI file 'scxmlstatedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLSTATEDIALOG_H
#define UI_SCXMLSTATEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SCXMLStateDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *id;
    QLabel *label_3;
    QLabel *label;
    QComboBox *initial;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLStateDialog)
    {
        if (SCXMLStateDialog->objectName().isEmpty())
            SCXMLStateDialog->setObjectName("SCXMLStateDialog");
        SCXMLStateDialog->resize(524, 134);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLStateDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLStateDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLStateDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        id = new QLineEdit(SCXMLStateDialog);
        id->setObjectName("id");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, id);

        label_3 = new QLabel(SCXMLStateDialog);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        label = new QLabel(SCXMLStateDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        initial = new QComboBox(SCXMLStateDialog);
        initial->setObjectName("initial");
        initial->setEditable(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, initial);

        label_4 = new QLabel(SCXMLStateDialog);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_4);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLStateDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(id);
        label->setBuddy(initial);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLStateDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLStateDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLStateDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLStateDialog);
    } // setupUi

    void retranslateUi(QDialog *SCXMLStateDialog)
    {
        SCXMLStateDialog->setWindowTitle(QCoreApplication::translate("SCXMLStateDialog", "SCXML State Properties", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLStateDialog", "Id:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLStateDialog", "The identifier for this state. ", nullptr));
        label->setText(QCoreApplication::translate("SCXMLStateDialog", "&Initial:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLStateDialog", "Id of the initial state or states, blank for default.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLStateDialog: public Ui_SCXMLStateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLSTATEDIALOG_H
