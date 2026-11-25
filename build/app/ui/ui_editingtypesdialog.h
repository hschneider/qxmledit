/********************************************************************************
** Form generated from reading UI file 'editingtypesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINGTYPESDIALOG_H
#define UI_EDITINGTYPESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditingTypesDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_10;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QRadioButton *optionText;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_5;
    QRadioButton *optionForm;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_3;
    QPushButton *cmdPredefined;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *EditingTypesDialog)
    {
        if (EditingTypesDialog->objectName().isEmpty())
            EditingTypesDialog->setObjectName("EditingTypesDialog");
        EditingTypesDialog->resize(850, 373);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditingTypesDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(EditingTypesDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_7 = new QLabel(EditingTypesDialog);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        horizontalLayout_5->addItem(verticalSpacer_5);

        label_10 = new QLabel(EditingTypesDialog);
        label_10->setObjectName("label_10");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_10->setWordWrap(true);

        horizontalLayout_5->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        label_4 = new QLabel(EditingTypesDialog);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/special/images/sample.editor.png")));

        gridLayout->addWidget(label_4, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        optionText = new QRadioButton(EditingTypesDialog);
        optionText->setObjectName("optionText");

        gridLayout->addWidget(optionText, 3, 0, 1, 1);

        label = new QLabel(EditingTypesDialog);
        label->setObjectName("label");
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 1, 1, 1);

        label_6 = new QLabel(EditingTypesDialog);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/special/images/editor.form.png")));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        label_5 = new QLabel(EditingTypesDialog);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 3, 3, 1, 1);

        optionForm = new QRadioButton(EditingTypesDialog);
        optionForm->setObjectName("optionForm");

        gridLayout->addWidget(optionForm, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        buttonBox = new QDialogButtonBox(EditingTypesDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        cmdPredefined = new QPushButton(EditingTypesDialog);
        cmdPredefined->setObjectName("cmdPredefined");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmdPredefined->sizePolicy().hasHeightForWidth());
        cmdPredefined->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setBold(true);
        cmdPredefined->setFont(font1);

        verticalLayout_3->addWidget(cmdPredefined);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(EditingTypesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditingTypesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditingTypesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditingTypesDialog);
    } // setupUi

    void retranslateUi(QDialog *EditingTypesDialog)
    {
        EditingTypesDialog->setWindowTitle(QCoreApplication::translate("EditingTypesDialog", "Editing Style Configuration", nullptr));
        label_7->setText(QCoreApplication::translate("EditingTypesDialog", "Do you prefer edit elements using a text editor or a form editor?", nullptr));
        label_10->setText(QCoreApplication::translate("EditingTypesDialog", "\n"
"You can always use one or the other method by using menu or keyboard shortucts.\n"
"You can change your choice at any time using the preferences panel.", nullptr));
        label_4->setText(QString());
        optionText->setText(QCoreApplication::translate("EditingTypesDialog", "Text", nullptr));
        label->setText(QCoreApplication::translate("EditingTypesDialog", "More control on the input, more specialized features.\n"
"\n"
"Keyboard shortcut: Use Alt or Control with Return key to edit using assisted mode.", nullptr));
        label_6->setText(QString());
        label_5->setText(QCoreApplication::translate("EditingTypesDialog", "Faster for copying/pasting items, but no specific checks.\n"
"\n"
"Keyboard shortcut: 'e' (for edit) .", nullptr));
        optionForm->setText(QCoreApplication::translate("EditingTypesDialog", "Form", nullptr));
        cmdPredefined->setText(QCoreApplication::translate("EditingTypesDialog", "Predefined", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditingTypesDialog: public Ui_EditingTypesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINGTYPESDIALOG_H
