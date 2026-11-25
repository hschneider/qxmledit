/********************************************************************************
** Form generated from reading UI file 'EditComment.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCOMMENT_H
#define UI_EDITCOMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditComment
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *commentText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditComment)
    {
        if (EditComment->objectName().isEmpty())
            EditComment->setObjectName("EditComment");
        EditComment->setWindowModality(Qt::WindowModal);
        EditComment->resize(751, 509);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditComment->sizePolicy().hasHeightForWidth());
        EditComment->setSizePolicy(sizePolicy);
        EditComment->setAutoFillBackground(false);
        EditComment->setModal(true);
        verticalLayout_2 = new QVBoxLayout(EditComment);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        commentText = new QPlainTextEdit(EditComment);
        commentText->setObjectName("commentText");

        verticalLayout->addWidget(commentText);

        buttonBox = new QDialogButtonBox(EditComment);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EditComment);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditComment, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditComment, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditComment);
    } // setupUi

    void retranslateUi(QDialog *EditComment)
    {
        EditComment->setWindowTitle(QCoreApplication::translate("EditComment", "Edit Comment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditComment: public Ui_EditComment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCOMMENT_H
