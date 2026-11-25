/********************************************************************************
** Form generated from reading UI file 'balsamiqui.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALSAMIQUI_H
#define UI_BALSAMIQUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BalsamiqUI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdChooseFiles;
    QListWidget *files;
    QCheckBox *overwriteFiles;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *outputDir;
    QPushButton *cmdOutputDir;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cmdOpenDestinationDir;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BalsamiqUI)
    {
        if (BalsamiqUI->objectName().isEmpty())
            BalsamiqUI->setObjectName("BalsamiqUI");
        BalsamiqUI->resize(438, 541);
        BalsamiqUI->setModal(true);
        verticalLayout = new QVBoxLayout(BalsamiqUI);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(BalsamiqUI);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(BalsamiqUI);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cmdChooseFiles = new QPushButton(BalsamiqUI);
        cmdChooseFiles->setObjectName("cmdChooseFiles");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdChooseFiles->setIcon(icon);

        horizontalLayout_2->addWidget(cmdChooseFiles);


        verticalLayout->addLayout(horizontalLayout_2);

        files = new QListWidget(BalsamiqUI);
        files->setObjectName("files");

        verticalLayout->addWidget(files);

        overwriteFiles = new QCheckBox(BalsamiqUI);
        overwriteFiles->setObjectName("overwriteFiles");

        verticalLayout->addWidget(overwriteFiles);

        label_3 = new QLabel(BalsamiqUI);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        outputDir = new QLineEdit(BalsamiqUI);
        outputDir->setObjectName("outputDir");

        horizontalLayout->addWidget(outputDir);

        cmdOutputDir = new QPushButton(BalsamiqUI);
        cmdOutputDir->setObjectName("cmdOutputDir");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmdOutputDir->sizePolicy().hasHeightForWidth());
        cmdOutputDir->setSizePolicy(sizePolicy);
        cmdOutputDir->setMinimumSize(QSize(0, 0));
        cmdOutputDir->setIcon(icon);
        cmdOutputDir->setFlat(false);

        horizontalLayout->addWidget(cmdOutputDir);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cmdOpenDestinationDir = new QPushButton(BalsamiqUI);
        cmdOpenDestinationDir->setObjectName("cmdOpenDestinationDir");

        horizontalLayout_3->addWidget(cmdOpenDestinationDir);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(BalsamiqUI);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(files);
        label_3->setBuddy(outputDir);
#endif // QT_CONFIG(shortcut)

        retranslateUi(BalsamiqUI);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BalsamiqUI, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BalsamiqUI, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(BalsamiqUI);
    } // setupUi

    void retranslateUi(QDialog *BalsamiqUI)
    {
        BalsamiqUI->setWindowTitle(QCoreApplication::translate("BalsamiqUI", "Balsamiq Translator", nullptr));
        label->setText(QCoreApplication::translate("BalsamiqUI", "Warning: only a subset of Balsamiq objects is supported", nullptr));
        label_2->setText(QCoreApplication::translate("BalsamiqUI", "&Files to translate", nullptr));
        cmdChooseFiles->setText(QString());
        overwriteFiles->setText(QCoreApplication::translate("BalsamiqUI", "&Overwrite files", nullptr));
        label_3->setText(QCoreApplication::translate("BalsamiqUI", "Output &directory:", nullptr));
        cmdOutputDir->setText(QString());
        cmdOpenDestinationDir->setText(QCoreApplication::translate("BalsamiqUI", "Open destination directory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BalsamiqUI: public Ui_BalsamiqUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALSAMIQUI_H
