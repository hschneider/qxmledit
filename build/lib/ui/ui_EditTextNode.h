/********************************************************************************
** Form generated from reading UI file 'EditTextNode.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEXTNODE_H
#define UI_EDITTEXTNODE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditTN
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *searchButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *searchGroup;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *searchText;
    QCheckBox *searchOptionWholeWords;
    QCheckBox *searchCaseSensitive;
    QPushButton *cmdSearchPrev;
    QPushButton *cmdSearchNext;
    QPushButton *cmdSearchClose;
    QLabel *searchStatus;
    QPlainTextEdit *editor;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *wrapText;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QPushButton *fromBase64;
    QPushButton *toBase64;
    QLabel *label_2;
    QPushButton *loadFromBinaryFile;
    QPushButton *saveBase64IntoFile;

    void setupUi(QDialog *EditTN)
    {
        if (EditTN->objectName().isEmpty())
            EditTN->setObjectName("EditTN");
        EditTN->resize(915, 629);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditTN->sizePolicy().hasHeightForWidth());
        EditTN->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditTN->setWindowIcon(icon);
        EditTN->setSizeGripEnabled(false);
        horizontalLayout_3 = new QHBoxLayout(EditTN);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchButton = new QToolButton(EditTN);
        searchButton->setObjectName("searchButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/editText/edit-find"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        searchButton->setIcon(icon1);

        horizontalLayout->addWidget(searchButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        searchGroup = new QGroupBox(EditTN);
        searchGroup->setObjectName("searchGroup");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchGroup->sizePolicy().hasHeightForWidth());
        searchGroup->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(searchGroup);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(searchGroup);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        searchText = new QLineEdit(searchGroup);
        searchText->setObjectName("searchText");

        horizontalLayout_2->addWidget(searchText);

        searchOptionWholeWords = new QCheckBox(searchGroup);
        searchOptionWholeWords->setObjectName("searchOptionWholeWords");

        horizontalLayout_2->addWidget(searchOptionWholeWords);

        searchCaseSensitive = new QCheckBox(searchGroup);
        searchCaseSensitive->setObjectName("searchCaseSensitive");
        searchCaseSensitive->setStyleSheet(QString::fromUtf8("Search case snsitive."));

        horizontalLayout_2->addWidget(searchCaseSensitive);

        cmdSearchPrev = new QPushButton(searchGroup);
        cmdSearchPrev->setObjectName("cmdSearchPrev");

        horizontalLayout_2->addWidget(cmdSearchPrev);

        cmdSearchNext = new QPushButton(searchGroup);
        cmdSearchNext->setObjectName("cmdSearchNext");
        cmdSearchNext->setFlat(false);

        horizontalLayout_2->addWidget(cmdSearchNext);

        cmdSearchClose = new QPushButton(searchGroup);
        cmdSearchClose->setObjectName("cmdSearchClose");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/quit/images/window-close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdSearchClose->setIcon(icon2);
        cmdSearchClose->setFlat(true);

        horizontalLayout_2->addWidget(cmdSearchClose);


        verticalLayout_2->addLayout(horizontalLayout_2);

        searchStatus = new QLabel(searchGroup);
        searchStatus->setObjectName("searchStatus");

        verticalLayout_2->addWidget(searchStatus);


        verticalLayout_3->addWidget(searchGroup);

        editor = new QPlainTextEdit(EditTN);
        editor->setObjectName("editor");
        editor->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        editor->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        editor->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout_3->addWidget(editor);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(EditTN);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        wrapText = new QCheckBox(EditTN);
        wrapText->setObjectName("wrapText");

        verticalLayout->addWidget(wrapText);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(EditTN);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        fromBase64 = new QPushButton(EditTN);
        fromBase64->setObjectName("fromBase64");

        verticalLayout->addWidget(fromBase64);

        toBase64 = new QPushButton(EditTN);
        toBase64->setObjectName("toBase64");

        verticalLayout->addWidget(toBase64);

        label_2 = new QLabel(EditTN);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        loadFromBinaryFile = new QPushButton(EditTN);
        loadFromBinaryFile->setObjectName("loadFromBinaryFile");

        verticalLayout->addWidget(loadFromBinaryFile);

        saveBase64IntoFile = new QPushButton(EditTN);
        saveBase64IntoFile->setObjectName("saveBase64IntoFile");

        verticalLayout->addWidget(saveBase64IntoFile);


        horizontalLayout_3->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(searchText);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editor, wrapText);
        QWidget::setTabOrder(wrapText, fromBase64);
        QWidget::setTabOrder(fromBase64, toBase64);
        QWidget::setTabOrder(toBase64, loadFromBinaryFile);
        QWidget::setTabOrder(loadFromBinaryFile, saveBase64IntoFile);
        QWidget::setTabOrder(saveBase64IntoFile, searchButton);
        QWidget::setTabOrder(searchButton, searchText);
        QWidget::setTabOrder(searchText, searchOptionWholeWords);
        QWidget::setTabOrder(searchOptionWholeWords, searchCaseSensitive);
        QWidget::setTabOrder(searchCaseSensitive, cmdSearchPrev);
        QWidget::setTabOrder(cmdSearchPrev, cmdSearchNext);
        QWidget::setTabOrder(cmdSearchNext, cmdSearchClose);

        retranslateUi(EditTN);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditTN, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditTN, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditTN);
    } // setupUi

    void retranslateUi(QDialog *EditTN)
    {
        EditTN->setWindowTitle(QCoreApplication::translate("EditTN", "Edit Text Node", nullptr));
#if QT_CONFIG(tooltip)
        searchButton->setToolTip(QCoreApplication::translate("EditTN", "Find Text", nullptr));
#endif // QT_CONFIG(tooltip)
        searchButton->setText(QCoreApplication::translate("EditTN", "...", nullptr));
        searchGroup->setTitle(QString());
        label_3->setText(QCoreApplication::translate("EditTN", "&Search:", nullptr));
#if QT_CONFIG(tooltip)
        searchOptionWholeWords->setToolTip(QCoreApplication::translate("EditTN", "Search only whole words.", nullptr));
#endif // QT_CONFIG(tooltip)
        searchOptionWholeWords->setText(QCoreApplication::translate("EditTN", "&Whole words", nullptr));
#if QT_CONFIG(tooltip)
        searchCaseSensitive->setToolTip(QCoreApplication::translate("EditTN", "Match the case of the characters.", nullptr));
#endif // QT_CONFIG(tooltip)
        searchCaseSensitive->setText(QCoreApplication::translate("EditTN", "&Case sensitive", nullptr));
#if QT_CONFIG(tooltip)
        cmdSearchPrev->setToolTip(QCoreApplication::translate("EditTN", "Find previous", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSearchPrev->setText(QCoreApplication::translate("EditTN", "Prev", nullptr));
#if QT_CONFIG(tooltip)
        cmdSearchNext->setToolTip(QCoreApplication::translate("EditTN", "Find Next", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSearchNext->setText(QCoreApplication::translate("EditTN", "Next", nullptr));
#if QT_CONFIG(tooltip)
        cmdSearchClose->setToolTip(QCoreApplication::translate("EditTN", "Close search panel", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSearchClose->setText(QString());
        searchStatus->setText(QCoreApplication::translate("EditTN", ".", nullptr));
        wrapText->setText(QCoreApplication::translate("EditTN", "Wra&p text", nullptr));
        label->setText(QCoreApplication::translate("EditTN", "Base 64 Text", nullptr));
        fromBase64->setText(QCoreApplication::translate("EditTN", "From Base 64", nullptr));
#if QT_CONFIG(shortcut)
        fromBase64->setShortcut(QCoreApplication::translate("EditTN", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        toBase64->setText(QCoreApplication::translate("EditTN", "To Base 64", nullptr));
        label_2->setText(QCoreApplication::translate("EditTN", "Binary to Base 64", nullptr));
        loadFromBinaryFile->setText(QCoreApplication::translate("EditTN", "Load from file...", nullptr));
        saveBase64IntoFile->setText(QCoreApplication::translate("EditTN", "Save to file...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditTN: public Ui_EditTN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEXTNODE_H
