/********************************************************************************
** Form generated from reading UI file 'base64dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE64DIALOG_H
#define UI_BASE64DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Base64Dialog
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *fontEncoding;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *cbType;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *formLayout;
    QVBoxLayout *verticalLayout_5z;
    QPushButton *cmdLoadFromFile;
    QPushButton *cmdSaveBinaryData;
    QVBoxLayout *verticalLayout_5;
    QPushButton *cmdSaveBase64CodedData;
    QPushButton *cmdLoadBase64CodedData;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_7;
    QPushButton *cmdLoadFromTextFile;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *cbLimitColumns;
    QSpinBox *colLimit;
    QLabel *label_5;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *base64Edit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPlainTextEdit *textEdit;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Base64Dialog)
    {
        if (Base64Dialog->objectName().isEmpty())
            Base64Dialog->setObjectName("Base64Dialog");
        Base64Dialog->resize(1009, 649);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Base64Dialog->sizePolicy().hasHeightForWidth());
        Base64Dialog->setSizePolicy(sizePolicy);
        Base64Dialog->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Base64Dialog->setWindowIcon(icon);
        horizontalLayout_5 = new QHBoxLayout(Base64Dialog);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(Base64Dialog);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        fontEncoding = new QComboBox(Base64Dialog);
        fontEncoding->setObjectName("fontEncoding");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fontEncoding->sizePolicy().hasHeightForWidth());
        fontEncoding->setSizePolicy(sizePolicy2);
        fontEncoding->setMaxVisibleItems(20);
        fontEncoding->setInsertPolicy(QComboBox::InsertAlphabetically);
        fontEncoding->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(fontEncoding);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(Base64Dialog);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        cbType = new QComboBox(Base64Dialog);
        cbType->setObjectName("cbType");
        sizePolicy2.setHeightForWidth(cbType->sizePolicy().hasHeightForWidth());
        cbType->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(cbType);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout = new QHBoxLayout();
        formLayout->setObjectName("formLayout");
        verticalLayout_5z = new QVBoxLayout();
        verticalLayout_5z->setObjectName("verticalLayout_5z");
        cmdLoadFromFile = new QPushButton(Base64Dialog);
        cmdLoadFromFile->setObjectName("cmdLoadFromFile");

        verticalLayout_5z->addWidget(cmdLoadFromFile);

        cmdSaveBinaryData = new QPushButton(Base64Dialog);
        cmdSaveBinaryData->setObjectName("cmdSaveBinaryData");

        verticalLayout_5z->addWidget(cmdSaveBinaryData);


        formLayout->addLayout(verticalLayout_5z);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        cmdSaveBase64CodedData = new QPushButton(Base64Dialog);
        cmdSaveBase64CodedData->setObjectName("cmdSaveBase64CodedData");

        verticalLayout_5->addWidget(cmdSaveBase64CodedData);

        cmdLoadBase64CodedData = new QPushButton(Base64Dialog);
        cmdLoadBase64CodedData->setObjectName("cmdLoadBase64CodedData");

        verticalLayout_5->addWidget(cmdLoadBase64CodedData);


        formLayout->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        cmdLoadFromTextFile = new QPushButton(Base64Dialog);
        cmdLoadFromTextFile->setObjectName("cmdLoadFromTextFile");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cmdLoadFromTextFile->sizePolicy().hasHeightForWidth());
        cmdLoadFromTextFile->setSizePolicy(sizePolicy3);

        verticalLayout_7->addWidget(cmdLoadFromTextFile);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        cbLimitColumns = new QCheckBox(Base64Dialog);
        cbLimitColumns->setObjectName("cbLimitColumns");

        horizontalLayout_4->addWidget(cbLimitColumns);

        colLimit = new QSpinBox(Base64Dialog);
        colLimit->setObjectName("colLimit");
        colLimit->setValue(80);

        horizontalLayout_4->addWidget(colLimit);

        label_5 = new QLabel(Base64Dialog);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_5);


        verticalLayout_7->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_3->addLayout(horizontalLayout_3);

        splitter = new QSplitter(Base64Dialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        base64Edit = new QPlainTextEdit(layoutWidget);
        base64Edit->setObjectName("base64Edit");
        base64Edit->setAcceptDrops(false);

        verticalLayout->addWidget(base64Edit);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        textEdit = new QPlainTextEdit(layoutWidget1);
        textEdit->setObjectName("textEdit");
        textEdit->setAcceptDrops(false);

        verticalLayout_2->addWidget(textEdit);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        buttonBox = new QDialogButtonBox(Base64Dialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy4);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout_4->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_4);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(fontEncoding);
        label_4->setBuddy(cbType);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(fontEncoding, base64Edit);
        QWidget::setTabOrder(base64Edit, textEdit);
        QWidget::setTabOrder(textEdit, buttonBox);

        retranslateUi(Base64Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Base64Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Base64Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Base64Dialog);
    } // setupUi

    void retranslateUi(QDialog *Base64Dialog)
    {
        Base64Dialog->setWindowTitle(QCoreApplication::translate("Base64Dialog", "Base 64 Encoding/Decoding", nullptr));
        label_3->setText(QCoreApplication::translate("Base64Dialog", "&Encoding:", nullptr));
        label_4->setText(QCoreApplication::translate("Base64Dialog", "&Type:", nullptr));
        cmdLoadFromFile->setText(QCoreApplication::translate("Base64Dialog", "Load binary data from file...", nullptr));
        cmdSaveBinaryData->setText(QCoreApplication::translate("Base64Dialog", "Save binary data to file...", nullptr));
        cmdSaveBase64CodedData->setText(QCoreApplication::translate("Base64Dialog", "Save Base 64 coded data...", nullptr));
        cmdLoadBase64CodedData->setText(QCoreApplication::translate("Base64Dialog", "Load Base 64 coded data...", nullptr));
        cmdLoadFromTextFile->setText(QCoreApplication::translate("Base64Dialog", "Load text from file...", nullptr));
        cbLimitColumns->setText(QCoreApplication::translate("Base64Dialog", "Limit columns to", nullptr));
        label_5->setText(QCoreApplication::translate("Base64Dialog", "characters", nullptr));
        label->setText(QCoreApplication::translate("Base64Dialog", "Base 64:", nullptr));
        label_2->setText(QCoreApplication::translate("Base64Dialog", "Text:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base64Dialog: public Ui_Base64Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE64DIALOG_H
