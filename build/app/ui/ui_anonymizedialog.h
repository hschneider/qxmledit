/********************************************************************************
** Form generated from reading UI file 'anonymizedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONYMIZEDIALOG_H
#define UI_ANONYMIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnonymizeDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *allChk;
    QHBoxLayout *horizontalLayout;
    QRadioButton *codeChk;
    QSpinBox *threshold;
    QLabel *label_3;
    QCheckBox *chkFixedPattern;

    void setupUi(QDialog *AnonymizeDialog)
    {
        if (AnonymizeDialog->objectName().isEmpty())
            AnonymizeDialog->setObjectName("AnonymizeDialog");
        AnonymizeDialog->resize(618, 179);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/editText/images/mask.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonymizeDialog->setWindowIcon(icon);
        AnonymizeDialog->setModal(true);
        buttonBox = new QDialogButtonBox(AnonymizeDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(510, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AnonymizeDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 120, 41, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/special/warning")));
        label_2 = new QLabel(AnonymizeDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 130, 371, 16));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        widget = new QWidget(AnonymizeDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 383, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        allChk = new QRadioButton(widget);
        allChk->setObjectName("allChk");

        verticalLayout->addWidget(allChk);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        codeChk = new QRadioButton(widget);
        codeChk->setObjectName("codeChk");
        codeChk->setChecked(true);

        horizontalLayout->addWidget(codeChk);

        threshold = new QSpinBox(widget);
        threshold->setObjectName("threshold");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(threshold->sizePolicy().hasHeightForWidth());
        threshold->setSizePolicy(sizePolicy);
        threshold->setMaximum(1000);
        threshold->setValue(3);

        horizontalLayout->addWidget(threshold);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        chkFixedPattern = new QCheckBox(widget);
        chkFixedPattern->setObjectName("chkFixedPattern");

        verticalLayout->addWidget(chkFixedPattern);


        retranslateUi(AnonymizeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonymizeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonymizeDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AnonymizeDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonymizeDialog)
    {
        AnonymizeDialog->setWindowTitle(QCoreApplication::translate("AnonymizeDialog", "Anonymize", nullptr));
#if QT_CONFIG(tooltip)
        AnonymizeDialog->setToolTip(QCoreApplication::translate("AnonymizeDialog", "<html><head/><body><p>Using a fixed pattern all the text will be replaced by a single character, like 'XXXX'.</p><p>Using a variable pattern the text will be replaced by each of the letters, like 'abcd'.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("AnonymizeDialog", "This feature will destroy your data", nullptr));
        allChk->setText(QCoreApplication::translate("AnonymizeDialog", "All text", nullptr));
        codeChk->setText(QCoreApplication::translate("AnonymizeDialog", "All text with more than", nullptr));
        label_3->setText(QCoreApplication::translate("AnonymizeDialog", "letters or numbers", nullptr));
        chkFixedPattern->setText(QCoreApplication::translate("AnonymizeDialog", "Mask the text using a fixed pattern", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonymizeDialog: public Ui_AnonymizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONYMIZEDIALOG_H
