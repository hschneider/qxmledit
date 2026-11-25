/********************************************************************************
** Form generated from reading UI file 'choosexsdreporttypedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEXSDREPORTTYPEDIALOG_H
#define UI_CHOOSEXSDREPORTTYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseXSDReportTypeDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QRadioButton *optSimple;
    QRadioButton *optComplete;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ChooseXSDReportTypeDialog)
    {
        if (ChooseXSDReportTypeDialog->objectName().isEmpty())
            ChooseXSDReportTypeDialog->setObjectName("ChooseXSDReportTypeDialog");
        ChooseXSDReportTypeDialog->resize(383, 119);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ChooseXSDReportTypeDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ChooseXSDReportTypeDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ChooseXSDReportTypeDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        optSimple = new QRadioButton(ChooseXSDReportTypeDialog);
        optSimple->setObjectName("optSimple");

        verticalLayout_2->addWidget(optSimple);

        optComplete = new QRadioButton(ChooseXSDReportTypeDialog);
        optComplete->setObjectName("optComplete");

        verticalLayout_2->addWidget(optComplete);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ChooseXSDReportTypeDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ChooseXSDReportTypeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChooseXSDReportTypeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChooseXSDReportTypeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChooseXSDReportTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseXSDReportTypeDialog)
    {
        ChooseXSDReportTypeDialog->setWindowTitle(QCoreApplication::translate("ChooseXSDReportTypeDialog", "Choose XSD Report Type", nullptr));
        label->setText(QCoreApplication::translate("ChooseXSDReportTypeDialog", "Choose the type of report", nullptr));
#if QT_CONFIG(tooltip)
        optSimple->setToolTip(QCoreApplication::translate("ChooseXSDReportTypeDialog", "The references to types and elements are expanded inline.", nullptr));
#endif // QT_CONFIG(tooltip)
        optSimple->setText(QCoreApplication::translate("ChooseXSDReportTypeDialog", "Extended (references expanded inline)", nullptr));
        optComplete->setText(QCoreApplication::translate("ChooseXSDReportTypeDialog", "Compact (references not expanded)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseXSDReportTypeDialog: public Ui_ChooseXSDReportTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEXSDREPORTTYPEDIALOG_H
