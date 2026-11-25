/********************************************************************************
** Form generated from reading UI file 'codepagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEPAGEDIALOG_H
#define UI_CODEPAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CodePageDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QComboBox *cmbEncodings;
    QTableWidget *codepageWidget;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkUTF8;
    QCheckBox *chkValue;
    QCheckBox *chkName;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioSearchChar;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *searchChar;
    QRadioButton *radioSearchUnicode;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchUnicode;
    QLabel *label_4;
    QLabel *searchResults;

    void setupUi(QDialog *CodePageDialog)
    {
        if (CodePageDialog->objectName().isEmpty())
            CodePageDialog->setObjectName("CodePageDialog");
        CodePageDialog->resize(850, 644);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CodePageDialog->setWindowIcon(icon);
        CodePageDialog->setSizeGripEnabled(true);
        horizontalLayout_4 = new QHBoxLayout(CodePageDialog);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(CodePageDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cmbEncodings = new QComboBox(CodePageDialog);
        cmbEncodings->setObjectName("cmbEncodings");

        horizontalLayout->addWidget(cmbEncodings);


        verticalLayout->addLayout(horizontalLayout);

        codepageWidget = new QTableWidget(CodePageDialog);
        codepageWidget->setObjectName("codepageWidget");

        verticalLayout->addWidget(codepageWidget);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(CodePageDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(CodePageDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        chkUTF8 = new QCheckBox(groupBox);
        chkUTF8->setObjectName("chkUTF8");

        verticalLayout_3->addWidget(chkUTF8);

        chkValue = new QCheckBox(groupBox);
        chkValue->setObjectName("chkValue");

        verticalLayout_3->addWidget(chkValue);

        chkName = new QCheckBox(groupBox);
        chkName->setObjectName("chkName");

        verticalLayout_3->addWidget(chkName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CodePageDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        radioSearchChar = new QRadioButton(groupBox_2);
        radioSearchChar->setObjectName("radioSearchChar");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioSearchChar->sizePolicy().hasHeightForWidth());
        radioSearchChar->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(radioSearchChar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        searchChar = new QLineEdit(groupBox_2);
        searchChar->setObjectName("searchChar");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchChar->sizePolicy().hasHeightForWidth());
        searchChar->setSizePolicy(sizePolicy2);
        searchChar->setMaxLength(1);

        horizontalLayout_2->addWidget(searchChar);


        verticalLayout_4->addLayout(horizontalLayout_2);

        radioSearchUnicode = new QRadioButton(groupBox_2);
        radioSearchUnicode->setObjectName("radioSearchUnicode");
        sizePolicy1.setHeightForWidth(radioSearchUnicode->sizePolicy().hasHeightForWidth());
        radioSearchUnicode->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(radioSearchUnicode);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        searchUnicode = new QLineEdit(groupBox_2);
        searchUnicode->setObjectName("searchUnicode");
        sizePolicy1.setHeightForWidth(searchUnicode->sizePolicy().hasHeightForWidth());
        searchUnicode->setSizePolicy(sizePolicy1);
        searchUnicode->setMaxLength(8);
        searchUnicode->setCursorPosition(8);

        horizontalLayout_3->addWidget(searchUnicode);


        verticalLayout_4->addLayout(horizontalLayout_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(label_4);

        searchResults = new QLabel(groupBox_2);
        searchResults->setObjectName("searchResults");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(searchResults->sizePolicy().hasHeightForWidth());
        searchResults->setSizePolicy(sizePolicy4);
        searchResults->setFrameShape(QFrame::Box);
        searchResults->setTextFormat(Qt::RichText);
        searchResults->setWordWrap(true);
        searchResults->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(searchResults);


        verticalLayout_2->addWidget(groupBox_2);


        horizontalLayout_4->addLayout(verticalLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(cmbEncodings);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CodePageDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CodePageDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CodePageDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CodePageDialog);
    } // setupUi

    void retranslateUi(QDialog *CodePageDialog)
    {
        CodePageDialog->setWindowTitle(QCoreApplication::translate("CodePageDialog", "Code Pages", nullptr));
        label->setText(QCoreApplication::translate("CodePageDialog", "&Encoding:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CodePageDialog", "Options", nullptr));
        chkUTF8->setText(QCoreApplication::translate("CodePageDialog", "UTF-8", nullptr));
        chkValue->setText(QCoreApplication::translate("CodePageDialog", "Value", nullptr));
        chkName->setText(QCoreApplication::translate("CodePageDialog", "Name", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CodePageDialog", "Search a character", nullptr));
        radioSearchChar->setText(QCoreApplication::translate("CodePageDialog", " character", nullptr));
        searchChar->setInputMask(QCoreApplication::translate("CodePageDialog", "X", nullptr));
        radioSearchUnicode->setText(QCoreApplication::translate("CodePageDialog", "Unicode numeric code (hex)", nullptr));
        searchUnicode->setInputMask(QCoreApplication::translate("CodePageDialog", "hhhhhhhh", nullptr));
        searchUnicode->setText(QString());
        label_4->setText(QCoreApplication::translate("CodePageDialog", "Search result:", nullptr));
        searchResults->setText(QCoreApplication::translate("CodePageDialog", "---", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodePageDialog: public Ui_CodePageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEPAGEDIALOG_H
