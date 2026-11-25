/********************************************************************************
** Form generated from reading UI file 'metadatainfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATAINFODIALOG_H
#define UI_METADATAINFODIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MetaDataInfoDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *lblCreationDate;
    QLabel *label_2;
    QLabel *lblCreationUser;
    QLabel *label_3;
    QLabel *lblUpdateDate;
    QLabel *label_4;
    QLabel *lblUpdateUser;
    QLabel *label_5;
    QLabel *lblRevision;
    QLabel *label_6;
    QLabel *lblMetaModelInfo;
    QGroupBox *groupEditable;
    QGridLayout *gridLayout;
    QCheckBox *chkName;
    QCheckBox *chkVersion;
    QLineEdit *editCopy;
    QLineEdit *editVersion;
    QCheckBox *chkProject;
    QLineEdit *editPrject;
    QLineEdit *editDomain;
    QCheckBox *chkCopy;
    QCheckBox *chkDomain;
    QLineEdit *editName;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *MetaDataInfoDialog)
    {
        if (MetaDataInfoDialog->objectName().isEmpty())
            MetaDataInfoDialog->setObjectName("MetaDataInfoDialog");
        MetaDataInfoDialog->resize(784, 521);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MetaDataInfoDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(MetaDataInfoDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(MetaDataInfoDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setVerticalSpacing(20);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        lblCreationDate = new QLabel(groupBox);
        lblCreationDate->setObjectName("lblCreationDate");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lblCreationDate);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        lblCreationUser = new QLabel(groupBox);
        lblCreationUser->setObjectName("lblCreationUser");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lblCreationUser);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        lblUpdateDate = new QLabel(groupBox);
        lblUpdateDate->setObjectName("lblUpdateDate");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lblUpdateDate);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        lblUpdateUser = new QLabel(groupBox);
        lblUpdateUser->setObjectName("lblUpdateUser");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, lblUpdateUser);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_5);

        lblRevision = new QLabel(groupBox);
        lblRevision->setObjectName("lblRevision");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, lblRevision);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_6);

        lblMetaModelInfo = new QLabel(groupBox);
        lblMetaModelInfo->setObjectName("lblMetaModelInfo");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, lblMetaModelInfo);


        verticalLayout->addWidget(groupBox);

        groupEditable = new QGroupBox(frame);
        groupEditable->setObjectName("groupEditable");
        groupEditable->setEnabled(true);
        gridLayout = new QGridLayout(groupEditable);
        gridLayout->setObjectName("gridLayout");
        chkName = new QCheckBox(groupEditable);
        chkName->setObjectName("chkName");

        gridLayout->addWidget(chkName, 1, 0, 1, 1);

        chkVersion = new QCheckBox(groupEditable);
        chkVersion->setObjectName("chkVersion");

        gridLayout->addWidget(chkVersion, 3, 0, 1, 1);

        editCopy = new QLineEdit(groupEditable);
        editCopy->setObjectName("editCopy");

        gridLayout->addWidget(editCopy, 2, 2, 1, 1);

        editVersion = new QLineEdit(groupEditable);
        editVersion->setObjectName("editVersion");

        gridLayout->addWidget(editVersion, 3, 2, 1, 1);

        chkProject = new QCheckBox(groupEditable);
        chkProject->setObjectName("chkProject");

        gridLayout->addWidget(chkProject, 0, 0, 1, 1);

        editPrject = new QLineEdit(groupEditable);
        editPrject->setObjectName("editPrject");

        gridLayout->addWidget(editPrject, 0, 2, 1, 1);

        editDomain = new QLineEdit(groupEditable);
        editDomain->setObjectName("editDomain");

        gridLayout->addWidget(editDomain, 4, 2, 1, 1);

        chkCopy = new QCheckBox(groupEditable);
        chkCopy->setObjectName("chkCopy");

        gridLayout->addWidget(chkCopy, 2, 0, 1, 1);

        chkDomain = new QCheckBox(groupEditable);
        chkDomain->setObjectName("chkDomain");

        gridLayout->addWidget(chkDomain, 4, 0, 1, 1);

        editName = new QLineEdit(groupEditable);
        editName->setObjectName("editName");

        gridLayout->addWidget(editName, 1, 2, 1, 1);


        verticalLayout->addWidget(groupEditable);


        horizontalLayout->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(MetaDataInfoDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        QWidget::setTabOrder(chkProject, editPrject);
        QWidget::setTabOrder(editPrject, chkName);
        QWidget::setTabOrder(chkName, editName);
        QWidget::setTabOrder(editName, chkCopy);
        QWidget::setTabOrder(chkCopy, editCopy);
        QWidget::setTabOrder(editCopy, chkVersion);
        QWidget::setTabOrder(chkVersion, editVersion);
        QWidget::setTabOrder(editVersion, chkDomain);
        QWidget::setTabOrder(chkDomain, editDomain);
        QWidget::setTabOrder(editDomain, buttonBox);

        retranslateUi(MetaDataInfoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MetaDataInfoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MetaDataInfoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MetaDataInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *MetaDataInfoDialog)
    {
        MetaDataInfoDialog->setWindowTitle(QCoreApplication::translate("MetaDataInfoDialog", "Descriptive Metadata", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MetaDataInfoDialog", "Updatable Metadata", nullptr));
        label->setText(QCoreApplication::translate("MetaDataInfoDialog", "Creation date:", nullptr));
        lblCreationDate->setText(QCoreApplication::translate("MetaDataInfoDialog", "----", nullptr));
        label_2->setText(QCoreApplication::translate("MetaDataInfoDialog", "Creation user:", nullptr));
        lblCreationUser->setText(QCoreApplication::translate("MetaDataInfoDialog", "-----", nullptr));
        label_3->setText(QCoreApplication::translate("MetaDataInfoDialog", "Update date:", nullptr));
        lblUpdateDate->setText(QCoreApplication::translate("MetaDataInfoDialog", "-----", nullptr));
        label_4->setText(QCoreApplication::translate("MetaDataInfoDialog", "Update user:", nullptr));
        lblUpdateUser->setText(QCoreApplication::translate("MetaDataInfoDialog", "----", nullptr));
        label_5->setText(QCoreApplication::translate("MetaDataInfoDialog", "Revision:", nullptr));
        lblRevision->setText(QCoreApplication::translate("MetaDataInfoDialog", "----", nullptr));
        label_6->setText(QCoreApplication::translate("MetaDataInfoDialog", "Metadata model:", nullptr));
        lblMetaModelInfo->setText(QCoreApplication::translate("MetaDataInfoDialog", "----", nullptr));
        groupEditable->setTitle(QCoreApplication::translate("MetaDataInfoDialog", "Other", nullptr));
        chkName->setText(QCoreApplication::translate("MetaDataInfoDialog", "&Name", nullptr));
        chkVersion->setText(QCoreApplication::translate("MetaDataInfoDialog", "&Version:", nullptr));
        chkProject->setText(QCoreApplication::translate("MetaDataInfoDialog", "&Project:", nullptr));
        chkCopy->setText(QCoreApplication::translate("MetaDataInfoDialog", "&Copyright:", nullptr));
        chkDomain->setText(QCoreApplication::translate("MetaDataInfoDialog", "&Domain:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MetaDataInfoDialog: public Ui_MetaDataInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATAINFODIALOG_H
