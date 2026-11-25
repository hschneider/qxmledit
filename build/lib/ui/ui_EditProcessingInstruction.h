/********************************************************************************
** Form generated from reading UI file 'EditProcessingInstruction.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROCESSINGINSTRUCTION_H
#define UI_EDITPROCESSINGINSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditProcessing
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *editTarget;
    QLabel *label_2;
    QLineEdit *editData;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditProcessing)
    {
        if (EditProcessing->objectName().isEmpty())
            EditProcessing->setObjectName("EditProcessing");
        EditProcessing->setWindowModality(Qt::WindowModal);
        EditProcessing->resize(610, 174);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditProcessing->sizePolicy().hasHeightForWidth());
        EditProcessing->setSizePolicy(sizePolicy);
        EditProcessing->setAutoFillBackground(false);
        EditProcessing->setModal(true);
        verticalLayout_2 = new QVBoxLayout(EditProcessing);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(EditProcessing);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        editTarget = new QLineEdit(EditProcessing);
        editTarget->setObjectName("editTarget");

        verticalLayout->addWidget(editTarget);

        label_2 = new QLabel(EditProcessing);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        editData = new QLineEdit(EditProcessing);
        editData->setObjectName("editData");

        verticalLayout->addWidget(editData);

        buttonBox = new QDialogButtonBox(EditProcessing);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(editTarget);
        label_2->setBuddy(editData);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditProcessing);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditProcessing, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditProcessing, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditProcessing);
    } // setupUi

    void retranslateUi(QDialog *EditProcessing)
    {
        EditProcessing->setWindowTitle(QCoreApplication::translate("EditProcessing", "Edit Processing Instruction", nullptr));
        label->setText(QCoreApplication::translate("EditProcessing", "&Target", nullptr));
        label_2->setText(QCoreApplication::translate("EditProcessing", "&Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProcessing: public Ui_EditProcessing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROCESSINGINSTRUCTION_H
