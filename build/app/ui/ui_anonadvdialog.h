/********************************************************************************
** Form generated from reading UI file 'anonadvdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANONADVDIALOG_H
#define UI_ANONADVDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <xmleditwidget.h>

QT_BEGIN_NAMESPACE

class Ui_AnonAdvDialog
{
public:
    QAction *actionExceptionElement;
    QAction *actionExceptionAttributes;
    QAction *actionExceptionText;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *profileName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *allChk;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *codeChk;
    QSpinBox *threshold;
    QLabel *label_5;
    QCheckBox *chkFixedPattern;
    QTabWidget *tabWidget;
    QWidget *tabPreview;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    XmlEditWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *cmdExcElement;
    QPushButton *cmdExcAttribute;
    QPushButton *cmdExcText;
    QWidget *tabExceptions;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *exceptions;
    QPushButton *cmdDeleteException;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *cmdSaveProfile;
    QSpacerItem *verticalSpacer_2;
    QPushButton *cmdEditProfile;
    QSpacerItem *verticalSpacer_3;
    QPushButton *cmdManageProfiles;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdImportException;
    QPushButton *cmdExportExceptions;

    void setupUi(QDialog *AnonAdvDialog)
    {
        if (AnonAdvDialog->objectName().isEmpty())
            AnonAdvDialog->setObjectName("AnonAdvDialog");
        AnonAdvDialog->setWindowModality(Qt::WindowModal);
        AnonAdvDialog->setEnabled(true);
        AnonAdvDialog->resize(758, 625);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AnonAdvDialog->setWindowIcon(icon);
        AnonAdvDialog->setSizeGripEnabled(true);
        AnonAdvDialog->setModal(true);
        actionExceptionElement = new QAction(AnonAdvDialog);
        actionExceptionElement->setObjectName("actionExceptionElement");
        actionExceptionAttributes = new QAction(AnonAdvDialog);
        actionExceptionAttributes->setObjectName("actionExceptionAttributes");
        actionExceptionText = new QAction(AnonAdvDialog);
        actionExceptionText->setObjectName("actionExceptionText");
        horizontalLayout_4 = new QHBoxLayout(AnonAdvDialog);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(AnonAdvDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        profileName = new QLineEdit(AnonAdvDialog);
        profileName->setObjectName("profileName");
        profileName->setReadOnly(true);

        horizontalLayout_3->addWidget(profileName);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(AnonAdvDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/special/warning")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(AnonAdvDialog);
        label_3->setObjectName("label_3");
        QFont font;
        font.setBold(true);
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(AnonAdvDialog);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        allChk = new QRadioButton(groupBox_3);
        allChk->setObjectName("allChk");

        verticalLayout_6->addWidget(allChk);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        codeChk = new QRadioButton(groupBox_3);
        codeChk->setObjectName("codeChk");
        codeChk->setChecked(true);

        horizontalLayout_5->addWidget(codeChk);

        threshold = new QSpinBox(groupBox_3);
        threshold->setObjectName("threshold");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(threshold->sizePolicy().hasHeightForWidth());
        threshold->setSizePolicy(sizePolicy1);
        threshold->setMaximum(1000);
        threshold->setValue(3);

        horizontalLayout_5->addWidget(threshold);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_6->addLayout(horizontalLayout_5);

        chkFixedPattern = new QCheckBox(groupBox_3);
        chkFixedPattern->setObjectName("chkFixedPattern");

        verticalLayout_6->addWidget(chkFixedPattern);

        tabWidget = new QTabWidget(groupBox_3);
        tabWidget->setObjectName("tabWidget");
        tabPreview = new QWidget();
        tabPreview->setObjectName("tabPreview");
        verticalLayout_7 = new QVBoxLayout(tabPreview);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox_2 = new QGroupBox(tabPreview);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        treeWidget = new XmlEditWidget(groupBox_2);
        treeWidget->setObjectName("treeWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        cmdExcElement = new QPushButton(groupBox_2);
        cmdExcElement->setObjectName("cmdExcElement");
        sizePolicy.setHeightForWidth(cmdExcElement->sizePolicy().hasHeightForWidth());
        cmdExcElement->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmdExcElement);

        cmdExcAttribute = new QPushButton(groupBox_2);
        cmdExcAttribute->setObjectName("cmdExcAttribute");
        sizePolicy.setHeightForWidth(cmdExcAttribute->sizePolicy().hasHeightForWidth());
        cmdExcAttribute->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmdExcAttribute);

        cmdExcText = new QPushButton(groupBox_2);
        cmdExcText->setObjectName("cmdExcText");
        sizePolicy.setHeightForWidth(cmdExcText->sizePolicy().hasHeightForWidth());
        cmdExcText->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cmdExcText);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_7->addWidget(groupBox_2);

        tabWidget->addTab(tabPreview, QString());
        tabExceptions = new QWidget();
        tabExceptions->setObjectName("tabExceptions");
        verticalLayout_8 = new QVBoxLayout(tabExceptions);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupBox = new QGroupBox(tabExceptions);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        exceptions = new QTableWidget(groupBox);
        exceptions->setObjectName("exceptions");
        exceptions->setSortingEnabled(true);

        verticalLayout_2->addWidget(exceptions);

        cmdDeleteException = new QPushButton(groupBox);
        cmdDeleteException->setObjectName("cmdDeleteException");
        cmdDeleteException->setEnabled(false);
        sizePolicy.setHeightForWidth(cmdDeleteException->sizePolicy().hasHeightForWidth());
        cmdDeleteException->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(cmdDeleteException);


        verticalLayout_8->addWidget(groupBox);

        tabWidget->addTab(tabExceptions, QString());

        verticalLayout_6->addWidget(tabWidget);


        verticalLayout_5->addWidget(groupBox_3);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        buttonBox = new QDialogButtonBox(AnonAdvDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy4);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        cmdSaveProfile = new QPushButton(AnonAdvDialog);
        cmdSaveProfile->setObjectName("cmdSaveProfile");
        cmdSaveProfile->setEnabled(true);
        sizePolicy.setHeightForWidth(cmdSaveProfile->sizePolicy().hasHeightForWidth());
        cmdSaveProfile->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(cmdSaveProfile);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        cmdEditProfile = new QPushButton(AnonAdvDialog);
        cmdEditProfile->setObjectName("cmdEditProfile");
        sizePolicy.setHeightForWidth(cmdEditProfile->sizePolicy().hasHeightForWidth());
        cmdEditProfile->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(cmdEditProfile);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        cmdManageProfiles = new QPushButton(AnonAdvDialog);
        cmdManageProfiles->setObjectName("cmdManageProfiles");
        cmdManageProfiles->setEnabled(true);
        sizePolicy.setHeightForWidth(cmdManageProfiles->sizePolicy().hasHeightForWidth());
        cmdManageProfiles->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(cmdManageProfiles);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        cmdImportException = new QPushButton(AnonAdvDialog);
        cmdImportException->setObjectName("cmdImportException");

        verticalLayout_3->addWidget(cmdImportException);

        cmdExportExceptions = new QPushButton(AnonAdvDialog);
        cmdExportExceptions->setObjectName("cmdExportExceptions");
        sizePolicy.setHeightForWidth(cmdExportExceptions->sizePolicy().hasHeightForWidth());
        cmdExportExceptions->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(cmdExportExceptions);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(profileName);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AnonAdvDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AnonAdvDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AnonAdvDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AnonAdvDialog);
    } // setupUi

    void retranslateUi(QDialog *AnonAdvDialog)
    {
        AnonAdvDialog->setWindowTitle(QCoreApplication::translate("AnonAdvDialog", "Anonymize", nullptr));
        actionExceptionElement->setText(QCoreApplication::translate("AnonAdvDialog", "Add Exception for Element", nullptr));
        actionExceptionAttributes->setText(QCoreApplication::translate("AnonAdvDialog", "Add Exception for Attributes", nullptr));
        actionExceptionText->setText(QCoreApplication::translate("AnonAdvDialog", "Add Exception for Text", nullptr));
        label_4->setText(QCoreApplication::translate("AnonAdvDialog", "Profile &Name:", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("AnonAdvDialog", "This feature will modify your data", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AnonAdvDialog", "Options", nullptr));
        allChk->setText(QCoreApplication::translate("AnonAdvDialog", "All text", nullptr));
        codeChk->setText(QCoreApplication::translate("AnonAdvDialog", "All text with more than", nullptr));
        label_5->setText(QCoreApplication::translate("AnonAdvDialog", " letters or numbers", nullptr));
        chkFixedPattern->setText(QCoreApplication::translate("AnonAdvDialog", "Mask the text using a fixed pattern", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AnonAdvDialog", "Preview", nullptr));
        label->setText(QCoreApplication::translate("AnonAdvDialog", "Add Exception:", nullptr));
        cmdExcElement->setText(QCoreApplication::translate("AnonAdvDialog", "Element...", nullptr));
        cmdExcAttribute->setText(QCoreApplication::translate("AnonAdvDialog", "Attribute...", nullptr));
        cmdExcText->setText(QCoreApplication::translate("AnonAdvDialog", "Text...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPreview), QCoreApplication::translate("AnonAdvDialog", "Preview", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AnonAdvDialog", "Exceptions", nullptr));
        cmdDeleteException->setText(QCoreApplication::translate("AnonAdvDialog", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabExceptions), QCoreApplication::translate("AnonAdvDialog", "Exceptions", nullptr));
        cmdSaveProfile->setText(QCoreApplication::translate("AnonAdvDialog", "Save Profile", nullptr));
        cmdEditProfile->setText(QCoreApplication::translate("AnonAdvDialog", "Edit Profile", nullptr));
        cmdManageProfiles->setText(QCoreApplication::translate("AnonAdvDialog", "Profiles...", nullptr));
        cmdImportException->setText(QCoreApplication::translate("AnonAdvDialog", "Import...", nullptr));
        cmdExportExceptions->setText(QCoreApplication::translate("AnonAdvDialog", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnonAdvDialog: public Ui_AnonAdvDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANONADVDIALOG_H
