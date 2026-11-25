/********************************************************************************
** Form generated from reading UI file 'infoonkeyboardshortcutsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOONKEYBOARDSHORTCUTSDIALOG_H
#define UI_INFOONKEYBOARDSHORTCUTSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoOnKeyboardShortcutsDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QPushButton *cmdOpenInfo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InfoOnKeyboardShortcutsDialog)
    {
        if (InfoOnKeyboardShortcutsDialog->objectName().isEmpty())
            InfoOnKeyboardShortcutsDialog->setObjectName("InfoOnKeyboardShortcutsDialog");
        InfoOnKeyboardShortcutsDialog->resize(705, 369);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        InfoOnKeyboardShortcutsDialog->setWindowIcon(icon);
        horizontalLayout_4 = new QHBoxLayout(InfoOnKeyboardShortcutsDialog);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(InfoOnKeyboardShortcutsDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_7 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_7->setObjectName("label_7");
        QFont font;
        font.setBold(true);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        label_2 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/special/images/sample.editor.png")));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_6 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/special/images/editor.form.png")));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(InfoOnKeyboardShortcutsDialog);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(InfoOnKeyboardShortcutsDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        cmdOpenInfo = new QPushButton(InfoOnKeyboardShortcutsDialog);
        cmdOpenInfo->setObjectName("cmdOpenInfo");

        horizontalLayout_3->addWidget(cmdOpenInfo);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(InfoOnKeyboardShortcutsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        retranslateUi(InfoOnKeyboardShortcutsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, InfoOnKeyboardShortcutsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, InfoOnKeyboardShortcutsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(InfoOnKeyboardShortcutsDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoOnKeyboardShortcutsDialog)
    {
        InfoOnKeyboardShortcutsDialog->setWindowTitle(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "Keyboard Shortcuts Available", nullptr));
        label->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "You can use keyboard shortcuts to edit elements:\n"
"", nullptr));
        label_7->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">i </span>or <span style=\" font-size:14pt;\">Ins </span><span style=\" color:#ff0000;\">insert</span> a child</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">a </span><span style=\" color:#ff0000;\">append</span> a sibling</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">e </span><span style=\" color:#ff0000;\">edit</span> in text mode:</p></body></html>", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "<html><head/><body><p><span style=\" font-size:14pt;\">Alt </span><span style=\" font-weight:400;\">or </span><span style=\" font-size:14pt;\">Control </span><span style=\" font-weight:400;\">with </span><span style=\" font-size:14pt;\">Return </span><span style=\" color:#ff0000;\">edit</span> using assisted mode (form)</p></body></html>", nullptr));
        label_6->setText(QString());
        label_5->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "Details are available using the menu Help/Principal Shortcuts", nullptr));
        cmdOpenInfo->setText(QCoreApplication::translate("InfoOnKeyboardShortcutsDialog", "Open Info Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoOnKeyboardShortcutsDialog: public Ui_InfoOnKeyboardShortcutsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOONKEYBOARDSHORTCUTSDIALOG_H
