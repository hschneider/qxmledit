/********************************************************************************
** Form generated from reading UI file 'editelementwithtexteditor.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITELEMENTWITHTEXTEDITOR_H
#define UI_EDITELEMENTWITHTEXTEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditElementWithTextEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *editor;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *EditElementWithTextEditor)
    {
        if (EditElementWithTextEditor->objectName().isEmpty())
            EditElementWithTextEditor->setObjectName("EditElementWithTextEditor");
        EditElementWithTextEditor->resize(771, 255);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditElementWithTextEditor->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(EditElementWithTextEditor);
        horizontalLayout->setObjectName("horizontalLayout");
        editor = new QPlainTextEdit(EditElementWithTextEditor);
        editor->setObjectName("editor");
        editor->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        editor->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        editor->setLineWrapMode(QPlainTextEdit::NoWrap);
        editor->setBackgroundVisible(false);

        horizontalLayout->addWidget(editor);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(EditElementWithTextEditor);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(EditElementWithTextEditor);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditElementWithTextEditor, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditElementWithTextEditor, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditElementWithTextEditor);
    } // setupUi

    void retranslateUi(QDialog *EditElementWithTextEditor)
    {
        EditElementWithTextEditor->setWindowTitle(QCoreApplication::translate("EditElementWithTextEditor", "Edit Element", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditElementWithTextEditor: public Ui_EditElementWithTextEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITELEMENTWITHTEXTEDITOR_H
