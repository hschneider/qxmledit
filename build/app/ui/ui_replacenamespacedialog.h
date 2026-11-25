/********************************************************************************
** Form generated from reading UI file 'replacenamespacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACENAMESPACEDIALOG_H
#define UI_REPLACENAMESPACEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplaceNamespaceDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QComboBox *namespaceToReplace;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QLabel *label;
    QComboBox *namespaces;
    QLabel *label_3;
    QComboBox *prefix;
    QPushButton *select;
    QVBoxLayout *layoutOfPlaceholder;
    QLabel *label_2;
    QWidget *placeholder;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ReplaceNamespaceDialog)
    {
        if (ReplaceNamespaceDialog->objectName().isEmpty())
            ReplaceNamespaceDialog->setObjectName("ReplaceNamespaceDialog");
        ReplaceNamespaceDialog->setWindowModality(Qt::WindowModal);
        ReplaceNamespaceDialog->resize(612, 255);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReplaceNamespaceDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ReplaceNamespaceDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(ReplaceNamespaceDialog);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        namespaceToReplace = new QComboBox(ReplaceNamespaceDialog);
        namespaceToReplace->setObjectName("namespaceToReplace");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(namespaceToReplace->sizePolicy().hasHeightForWidth());
        namespaceToReplace->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(namespaceToReplace);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_5 = new QLabel(ReplaceNamespaceDialog);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        label = new QLabel(ReplaceNamespaceDialog);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        namespaces = new QComboBox(ReplaceNamespaceDialog);
        namespaces->setObjectName("namespaces");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(namespaces->sizePolicy().hasHeightForWidth());
        namespaces->setSizePolicy(sizePolicy2);
        namespaces->setEditable(true);

        verticalLayout_2->addWidget(namespaces);

        label_3 = new QLabel(ReplaceNamespaceDialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        prefix = new QComboBox(ReplaceNamespaceDialog);
        prefix->setObjectName("prefix");
        sizePolicy2.setHeightForWidth(prefix->sizePolicy().hasHeightForWidth());
        prefix->setSizePolicy(sizePolicy2);
        prefix->setEditable(true);

        verticalLayout_2->addWidget(prefix);

        select = new QPushButton(ReplaceNamespaceDialog);
        select->setObjectName("select");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(select->sizePolicy().hasHeightForWidth());
        select->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(select);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutOfPlaceholder = new QVBoxLayout();
        layoutOfPlaceholder->setObjectName("layoutOfPlaceholder");
        label_2 = new QLabel(ReplaceNamespaceDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        layoutOfPlaceholder->addWidget(label_2);

        placeholder = new QWidget(ReplaceNamespaceDialog);
        placeholder->setObjectName("placeholder");
        sizePolicy3.setHeightForWidth(placeholder->sizePolicy().hasHeightForWidth());
        placeholder->setSizePolicy(sizePolicy3);
        placeholder->setMinimumSize(QSize(50, 50));
        placeholder->setMaximumSize(QSize(50, 50));
        placeholder->setSizeIncrement(QSize(50, 50));
        placeholder->setAutoFillBackground(false);
        placeholder->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 98, 89);"));

        layoutOfPlaceholder->addWidget(placeholder);


        horizontalLayout->addLayout(layoutOfPlaceholder);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ReplaceNamespaceDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ReplaceNamespaceDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReplaceNamespaceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReplaceNamespaceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReplaceNamespaceDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplaceNamespaceDialog)
    {
        ReplaceNamespaceDialog->setWindowTitle(QCoreApplication::translate("ReplaceNamespaceDialog", "Replace Namespace", nullptr));
        label_4->setText(QCoreApplication::translate("ReplaceNamespaceDialog", "Namespace to replace:", nullptr));
        label_5->setText(QCoreApplication::translate("ReplaceNamespaceDialog", "Replacement:", nullptr));
        label->setText(QCoreApplication::translate("ReplaceNamespaceDialog", "Namespace:", nullptr));
        label_3->setText(QCoreApplication::translate("ReplaceNamespaceDialog", "Prefix:", nullptr));
        select->setText(QCoreApplication::translate("ReplaceNamespaceDialog", "Select...", nullptr));
        label_2->setText(QCoreApplication::translate("ReplaceNamespaceDialog", "Apply to:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplaceNamespaceDialog: public Ui_ReplaceNamespaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACENAMESPACEDIALOG_H
