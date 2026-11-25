/********************************************************************************
** Form generated from reading UI file 'xsdbackgroundconfig.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDBACKGROUNDCONFIG_H
#define UI_XSDBACKGROUNDCONFIG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_XSDBackgroundConfig
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *gradientTypeCombo;
    QLabel *label_2;
    QPushButton *mainColor;
    QLabel *alternateColorLabel;
    QPushButton *alternateColor;
    QLabel *lblGradientDirectionCombo;
    QComboBox *gradientDirectionCombo;
    QLabel *repeatLbl;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *repetitionAt;
    QComboBox *gradientUnitsCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *XSDBackgroundConfig)
    {
        if (XSDBackgroundConfig->objectName().isEmpty())
            XSDBackgroundConfig->setObjectName("XSDBackgroundConfig");
        XSDBackgroundConfig->resize(434, 444);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDBackgroundConfig->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(XSDBackgroundConfig);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(XSDBackgroundConfig);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gradientTypeCombo = new QComboBox(XSDBackgroundConfig);
        gradientTypeCombo->setObjectName("gradientTypeCombo");

        horizontalLayout->addWidget(gradientTypeCombo);

        label_2 = new QLabel(XSDBackgroundConfig);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        mainColor = new QPushButton(XSDBackgroundConfig);
        mainColor->setObjectName("mainColor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainColor->sizePolicy().hasHeightForWidth());
        mainColor->setSizePolicy(sizePolicy);
        mainColor->setFlat(false);

        horizontalLayout->addWidget(mainColor);

        alternateColorLabel = new QLabel(XSDBackgroundConfig);
        alternateColorLabel->setObjectName("alternateColorLabel");
        alternateColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(alternateColorLabel);

        alternateColor = new QPushButton(XSDBackgroundConfig);
        alternateColor->setObjectName("alternateColor");
        sizePolicy.setHeightForWidth(alternateColor->sizePolicy().hasHeightForWidth());
        alternateColor->setSizePolicy(sizePolicy);
        alternateColor->setFlat(false);

        horizontalLayout->addWidget(alternateColor);


        formLayout->setLayout(0, QFormLayout::ItemRole::FieldRole, horizontalLayout);

        lblGradientDirectionCombo = new QLabel(XSDBackgroundConfig);
        lblGradientDirectionCombo->setObjectName("lblGradientDirectionCombo");
        lblGradientDirectionCombo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, lblGradientDirectionCombo);

        gradientDirectionCombo = new QComboBox(XSDBackgroundConfig);
        gradientDirectionCombo->setObjectName("gradientDirectionCombo");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, gradientDirectionCombo);

        repeatLbl = new QLabel(XSDBackgroundConfig);
        repeatLbl->setObjectName("repeatLbl");
        repeatLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, repeatLbl);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        repetitionAt = new QSpinBox(XSDBackgroundConfig);
        repetitionAt->setObjectName("repetitionAt");
        sizePolicy.setHeightForWidth(repetitionAt->sizePolicy().hasHeightForWidth());
        repetitionAt->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(repetitionAt);

        gradientUnitsCombo = new QComboBox(XSDBackgroundConfig);
        gradientUnitsCombo->setObjectName("gradientUnitsCombo");

        horizontalLayout_2->addWidget(gradientUnitsCombo);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, horizontalLayout_2);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(XSDBackgroundConfig);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(gradientTypeCombo);
        label_2->setBuddy(mainColor);
        alternateColorLabel->setBuddy(alternateColor);
        lblGradientDirectionCombo->setBuddy(gradientDirectionCombo);
        repeatLbl->setBuddy(repetitionAt);
#endif // QT_CONFIG(shortcut)

        retranslateUi(XSDBackgroundConfig);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDBackgroundConfig, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDBackgroundConfig, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(XSDBackgroundConfig);
    } // setupUi

    void retranslateUi(QDialog *XSDBackgroundConfig)
    {
        XSDBackgroundConfig->setWindowTitle(QCoreApplication::translate("XSDBackgroundConfig", "Diagram background settings", nullptr));
        label->setText(QCoreApplication::translate("XSDBackgroundConfig", "Gradient &type:", nullptr));
        label_2->setText(QCoreApplication::translate("XSDBackgroundConfig", "&color:", nullptr));
        mainColor->setText(QString());
        alternateColorLabel->setText(QCoreApplication::translate("XSDBackgroundConfig", "&alternate:", nullptr));
        alternateColor->setText(QString());
        lblGradientDirectionCombo->setText(QCoreApplication::translate("XSDBackgroundConfig", "&Direction:", nullptr));
        repeatLbl->setText(QCoreApplication::translate("XSDBackgroundConfig", "&Repeat each:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDBackgroundConfig: public Ui_XSDBackgroundConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDBACKGROUNDCONFIG_H
