/********************************************************************************
** Form generated from reading UI file 'choosefacetdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFACETDIALOG_H
#define UI_CHOOSEFACETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseFacetDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *typeGroup;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *Enumeration;
    QRadioButton *MinExclusive;
    QRadioButton *MinInclusive;
    QRadioButton *MaxExclusive;
    QRadioButton *MaxInclusive;
    QRadioButton *TotalDigits;
    QRadioButton *FractionDigits;
    QRadioButton *Length;
    QRadioButton *MinLength;
    QRadioButton *MaxLength;
    QRadioButton *WhiteSpace;
    QRadioButton *Pattern;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *value;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblFixed;
    QComboBox *fixed;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ChooseFacetDialog)
    {
        if (ChooseFacetDialog->objectName().isEmpty())
            ChooseFacetDialog->setObjectName("ChooseFacetDialog");
        ChooseFacetDialog->resize(933, 454);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ChooseFacetDialog->setWindowIcon(icon);
        horizontalLayout_3 = new QHBoxLayout(ChooseFacetDialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        typeGroup = new QGroupBox(ChooseFacetDialog);
        typeGroup->setObjectName("typeGroup");
        verticalLayout_3 = new QVBoxLayout(typeGroup);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Enumeration = new QRadioButton(typeGroup);
        Enumeration->setObjectName("Enumeration");

        verticalLayout_3->addWidget(Enumeration);

        MinExclusive = new QRadioButton(typeGroup);
        MinExclusive->setObjectName("MinExclusive");

        verticalLayout_3->addWidget(MinExclusive);

        MinInclusive = new QRadioButton(typeGroup);
        MinInclusive->setObjectName("MinInclusive");

        verticalLayout_3->addWidget(MinInclusive);

        MaxExclusive = new QRadioButton(typeGroup);
        MaxExclusive->setObjectName("MaxExclusive");

        verticalLayout_3->addWidget(MaxExclusive);

        MaxInclusive = new QRadioButton(typeGroup);
        MaxInclusive->setObjectName("MaxInclusive");

        verticalLayout_3->addWidget(MaxInclusive);

        TotalDigits = new QRadioButton(typeGroup);
        TotalDigits->setObjectName("TotalDigits");

        verticalLayout_3->addWidget(TotalDigits);

        FractionDigits = new QRadioButton(typeGroup);
        FractionDigits->setObjectName("FractionDigits");

        verticalLayout_3->addWidget(FractionDigits);

        Length = new QRadioButton(typeGroup);
        Length->setObjectName("Length");

        verticalLayout_3->addWidget(Length);

        MinLength = new QRadioButton(typeGroup);
        MinLength->setObjectName("MinLength");

        verticalLayout_3->addWidget(MinLength);

        MaxLength = new QRadioButton(typeGroup);
        MaxLength->setObjectName("MaxLength");

        verticalLayout_3->addWidget(MaxLength);

        WhiteSpace = new QRadioButton(typeGroup);
        WhiteSpace->setObjectName("WhiteSpace");

        verticalLayout_3->addWidget(WhiteSpace);

        Pattern = new QRadioButton(typeGroup);
        Pattern->setObjectName("Pattern");

        verticalLayout_3->addWidget(Pattern);


        horizontalLayout_3->addWidget(typeGroup);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ChooseFacetDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        value = new QLineEdit(ChooseFacetDialog);
        value->setObjectName("value");

        horizontalLayout->addWidget(value);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblFixed = new QLabel(ChooseFacetDialog);
        lblFixed->setObjectName("lblFixed");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblFixed->sizePolicy().hasHeightForWidth());
        lblFixed->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lblFixed);

        fixed = new QComboBox(ChooseFacetDialog);
        fixed->addItem(QString());
        fixed->addItem(QString());
        fixed->addItem(QString());
        fixed->setObjectName("fixed");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fixed->sizePolicy().hasHeightForWidth());
        fixed->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(fixed);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ChooseFacetDialog);
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


        horizontalLayout_3->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(value);
        lblFixed->setBuddy(fixed);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(value, fixed);
        QWidget::setTabOrder(fixed, Enumeration);
        QWidget::setTabOrder(Enumeration, MinExclusive);
        QWidget::setTabOrder(MinExclusive, MinInclusive);
        QWidget::setTabOrder(MinInclusive, MaxExclusive);
        QWidget::setTabOrder(MaxExclusive, MaxInclusive);
        QWidget::setTabOrder(MaxInclusive, TotalDigits);
        QWidget::setTabOrder(TotalDigits, FractionDigits);
        QWidget::setTabOrder(FractionDigits, Length);
        QWidget::setTabOrder(Length, MinLength);
        QWidget::setTabOrder(MinLength, MaxLength);
        QWidget::setTabOrder(MaxLength, WhiteSpace);
        QWidget::setTabOrder(WhiteSpace, Pattern);

        retranslateUi(ChooseFacetDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChooseFacetDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChooseFacetDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChooseFacetDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseFacetDialog)
    {
        ChooseFacetDialog->setWindowTitle(QCoreApplication::translate("ChooseFacetDialog", "Facet", nullptr));
        typeGroup->setTitle(QCoreApplication::translate("ChooseFacetDialog", "Type", nullptr));
        Enumeration->setText(QCoreApplication::translate("ChooseFacetDialog", "enumeration", nullptr));
        MinExclusive->setText(QCoreApplication::translate("ChooseFacetDialog", "minExclusive", nullptr));
        MinInclusive->setText(QCoreApplication::translate("ChooseFacetDialog", "minInclusive", nullptr));
        MaxExclusive->setText(QCoreApplication::translate("ChooseFacetDialog", "maxExclusive", nullptr));
        MaxInclusive->setText(QCoreApplication::translate("ChooseFacetDialog", "maxInclusive", nullptr));
        TotalDigits->setText(QCoreApplication::translate("ChooseFacetDialog", "totalDigits", nullptr));
        FractionDigits->setText(QCoreApplication::translate("ChooseFacetDialog", "fractionDigits", nullptr));
        Length->setText(QCoreApplication::translate("ChooseFacetDialog", "length", nullptr));
        MinLength->setText(QCoreApplication::translate("ChooseFacetDialog", "minLength", nullptr));
        MaxLength->setText(QCoreApplication::translate("ChooseFacetDialog", "maxLength", nullptr));
        WhiteSpace->setText(QCoreApplication::translate("ChooseFacetDialog", "whiteSpace", nullptr));
        Pattern->setText(QCoreApplication::translate("ChooseFacetDialog", "pattern", nullptr));
        label->setText(QCoreApplication::translate("ChooseFacetDialog", "&Value:", nullptr));
        lblFixed->setText(QCoreApplication::translate("ChooseFacetDialog", "Fixed:", nullptr));
        fixed->setItemText(0, QCoreApplication::translate("ChooseFacetDialog", "Yes", nullptr));
        fixed->setItemText(1, QCoreApplication::translate("ChooseFacetDialog", "No", nullptr));
        fixed->setItemText(2, QCoreApplication::translate("ChooseFacetDialog", "<Not used>", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ChooseFacetDialog: public Ui_ChooseFacetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFACETDIALOG_H
