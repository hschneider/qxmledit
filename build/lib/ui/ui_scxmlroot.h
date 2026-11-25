/********************************************************************************
** Form generated from reading UI file 'scxmlroot.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCXMLROOT_H
#define UI_SCXMLROOT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_SCXMLRoot
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_3;
    QComboBox *initial;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *version;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *datamodel;
    QLabel *label_7;
    QCheckBox *binding;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SCXMLRoot)
    {
        if (SCXMLRoot->objectName().isEmpty())
            SCXMLRoot->setObjectName("SCXMLRoot");
        SCXMLRoot->resize(582, 305);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SCXMLRoot->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SCXMLRoot);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(SCXMLRoot);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        name = new QLineEdit(SCXMLRoot);
        name->setObjectName("name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, name);

        label_3 = new QLabel(SCXMLRoot);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, label_3);

        initial = new QComboBox(SCXMLRoot);
        initial->setObjectName("initial");
        initial->setEditable(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, initial);

        label = new QLabel(SCXMLRoot);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label);

        label_4 = new QLabel(SCXMLRoot);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_4);

        version = new QLineEdit(SCXMLRoot);
        version->setObjectName("version");
        version->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(version->sizePolicy().hasHeightForWidth());
        version->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, version);

        label_5 = new QLabel(SCXMLRoot);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        label_6 = new QLabel(SCXMLRoot);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, label_6);

        datamodel = new QComboBox(SCXMLRoot);
        datamodel->addItem(QString());
        datamodel->addItem(QString());
        datamodel->addItem(QString());
        datamodel->setObjectName("datamodel");
        datamodel->setEditable(true);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, datamodel);

        label_7 = new QLabel(SCXMLRoot);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_7);

        binding = new QCheckBox(SCXMLRoot);
        binding->setObjectName("binding");
        binding->setChecked(false);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, binding);

        label_9 = new QLabel(SCXMLRoot);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, label_9);

        label_8 = new QLabel(SCXMLRoot);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, label_8);

        label_10 = new QLabel(SCXMLRoot);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, label_10);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(SCXMLRoot);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(name);
        label->setBuddy(initial);
        label_5->setBuddy(version);
        label_7->setBuddy(datamodel);
        label_8->setBuddy(binding);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SCXMLRoot);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SCXMLRoot, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SCXMLRoot, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SCXMLRoot);
    } // setupUi

    void retranslateUi(QDialog *SCXMLRoot)
    {
        SCXMLRoot->setWindowTitle(QCoreApplication::translate("SCXMLRoot", "SCXML Root element", nullptr));
        label_2->setText(QCoreApplication::translate("SCXMLRoot", "&Name:", nullptr));
        label_3->setText(QCoreApplication::translate("SCXMLRoot", "Name of the state machine (only informational)", nullptr));
        label->setText(QCoreApplication::translate("SCXMLRoot", "&Initial:", nullptr));
        label_4->setText(QCoreApplication::translate("SCXMLRoot", "Id of the initial state, blank for default.", nullptr));
        version->setText(QCoreApplication::translate("SCXMLRoot", "1.0", nullptr));
        label_5->setText(QCoreApplication::translate("SCXMLRoot", "&Version:", nullptr));
        label_6->setText(QCoreApplication::translate("SCXMLRoot", "1.0 is the only supported by this editor.", nullptr));
        datamodel->setItemText(0, QCoreApplication::translate("SCXMLRoot", "null", nullptr));
        datamodel->setItemText(1, QCoreApplication::translate("SCXMLRoot", "ecmascript", nullptr));
        datamodel->setItemText(2, QCoreApplication::translate("SCXMLRoot", "xpath", nullptr));

        label_7->setText(QCoreApplication::translate("SCXMLRoot", "&Datamodel:", nullptr));
        binding->setText(QCoreApplication::translate("SCXMLRoot", "&Early", nullptr));
        label_9->setText(QCoreApplication::translate("SCXMLRoot", "The data binding: early or late. Default: early", nullptr));
        label_8->setText(QCoreApplication::translate("SCXMLRoot", "&Binding:", nullptr));
        label_10->setText(QCoreApplication::translate("SCXMLRoot", "The datamodel.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCXMLRoot: public Ui_SCXMLRoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCXMLROOT_H
