/********************************************************************************
** Form generated from reading UI file 'xsdtypedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSDTYPEDIALOG_H
#define UI_XSDTYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XSDTypeDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *ename;
    QGroupBox *groupType;
    QFormLayout *formLayout;
    QRadioButton *typeRef;
    QComboBox *reftype;
    QRadioButton *typeComplex;
    QRadioButton *typeSimple;
    QGroupBox *groupContent;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *contentSimple;
    QRadioButton *contentComplex;
    QRadioButton *contentNone;
    QStackedWidget *childrenStack;
    QWidget *simpleTPage;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupSimpleType;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *simpleTypeBase;
    QRadioButton *simpleTypeNone;
    QRadioButton *simpleTypeUnion;
    QRadioButton *simpleTypeRestriction;
    QRadioButton *simpleTypeList;
    QSpacerItem *verticalSpacer_2;
    QWidget *complexTPage;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupOContent;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *cNone;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *cBaseType;
    QRadioButton *cExtension;
    QRadioButton *cRestriction;
    QLabel *label;
    QRadioButton *cAll;
    QRadioButton *cSeq;
    QRadioButton *cChoice;
    QRadioButton *cGroup;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *XSDTypeDialog)
    {
        if (XSDTypeDialog->objectName().isEmpty())
            XSDTypeDialog->setObjectName("XSDTypeDialog");
        XSDTypeDialog->resize(632, 583);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        XSDTypeDialog->setWindowIcon(icon);
        XSDTypeDialog->setModal(true);
        horizontalLayout_4 = new QHBoxLayout(XSDTypeDialog);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(XSDTypeDialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        ename = new QLineEdit(XSDTypeDialog);
        ename->setObjectName("ename");

        horizontalLayout_3->addWidget(ename);


        verticalLayout_4->addLayout(horizontalLayout_3);

        groupType = new QGroupBox(XSDTypeDialog);
        groupType->setObjectName("groupType");
        groupType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout = new QFormLayout(groupType);
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        typeRef = new QRadioButton(groupType);
        typeRef->setObjectName("typeRef");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, typeRef);

        reftype = new QComboBox(groupType);
        reftype->setObjectName("reftype");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(reftype->sizePolicy().hasHeightForWidth());
        reftype->setSizePolicy(sizePolicy1);
        reftype->setEditable(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, reftype);

        typeComplex = new QRadioButton(groupType);
        typeComplex->setObjectName("typeComplex");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, typeComplex);

        typeSimple = new QRadioButton(groupType);
        typeSimple->setObjectName("typeSimple");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, typeSimple);


        verticalLayout_4->addWidget(groupType);

        groupContent = new QGroupBox(XSDTypeDialog);
        groupContent->setObjectName("groupContent");
        verticalLayout_3 = new QVBoxLayout(groupContent);
        verticalLayout_3->setObjectName("verticalLayout_3");
        contentSimple = new QRadioButton(groupContent);
        contentSimple->setObjectName("contentSimple");

        verticalLayout_3->addWidget(contentSimple);

        contentComplex = new QRadioButton(groupContent);
        contentComplex->setObjectName("contentComplex");

        verticalLayout_3->addWidget(contentComplex);

        contentNone = new QRadioButton(groupContent);
        contentNone->setObjectName("contentNone");

        verticalLayout_3->addWidget(contentNone);


        verticalLayout_4->addWidget(groupContent);

        childrenStack = new QStackedWidget(XSDTypeDialog);
        childrenStack->setObjectName("childrenStack");
        childrenStack->setFrameShape(QFrame::NoFrame);
        simpleTPage = new QWidget();
        simpleTPage->setObjectName("simpleTPage");
        verticalLayout_8 = new QVBoxLayout(simpleTPage);
        verticalLayout_8->setObjectName("verticalLayout_8");
        groupSimpleType = new QGroupBox(simpleTPage);
        groupSimpleType->setObjectName("groupSimpleType");
        verticalLayout_7 = new QVBoxLayout(groupSimpleType);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(groupSimpleType);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_4);

        simpleTypeBase = new QComboBox(groupSimpleType);
        simpleTypeBase->setObjectName("simpleTypeBase");
        sizePolicy1.setHeightForWidth(simpleTypeBase->sizePolicy().hasHeightForWidth());
        simpleTypeBase->setSizePolicy(sizePolicy1);
        simpleTypeBase->setEditable(true);

        horizontalLayout_5->addWidget(simpleTypeBase);


        verticalLayout_7->addLayout(horizontalLayout_5);

        simpleTypeNone = new QRadioButton(groupSimpleType);
        simpleTypeNone->setObjectName("simpleTypeNone");

        verticalLayout_7->addWidget(simpleTypeNone);

        simpleTypeUnion = new QRadioButton(groupSimpleType);
        simpleTypeUnion->setObjectName("simpleTypeUnion");

        verticalLayout_7->addWidget(simpleTypeUnion);

        simpleTypeRestriction = new QRadioButton(groupSimpleType);
        simpleTypeRestriction->setObjectName("simpleTypeRestriction");

        verticalLayout_7->addWidget(simpleTypeRestriction);

        simpleTypeList = new QRadioButton(groupSimpleType);
        simpleTypeList->setObjectName("simpleTypeList");

        verticalLayout_7->addWidget(simpleTypeList);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout_8->addWidget(groupSimpleType);

        childrenStack->addWidget(simpleTPage);
        complexTPage = new QWidget();
        complexTPage->setObjectName("complexTPage");
        verticalLayout_9 = new QVBoxLayout(complexTPage);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupOContent = new QGroupBox(complexTPage);
        groupOContent->setObjectName("groupOContent");
        groupOContent->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupOContent);
        verticalLayout_2->setObjectName("verticalLayout_2");
        cNone = new QRadioButton(groupOContent);
        cNone->setObjectName("cNone");

        verticalLayout_2->addWidget(cNone);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(groupOContent);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        cBaseType = new QComboBox(groupOContent);
        cBaseType->setObjectName("cBaseType");
        sizePolicy1.setHeightForWidth(cBaseType->sizePolicy().hasHeightForWidth());
        cBaseType->setSizePolicy(sizePolicy1);
        cBaseType->setEditable(true);

        horizontalLayout->addWidget(cBaseType);


        verticalLayout_2->addLayout(horizontalLayout);

        cExtension = new QRadioButton(groupOContent);
        cExtension->setObjectName("cExtension");

        verticalLayout_2->addWidget(cExtension);

        cRestriction = new QRadioButton(groupOContent);
        cRestriction->setObjectName("cRestriction");

        verticalLayout_2->addWidget(cRestriction);

        label = new QLabel(groupOContent);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        cAll = new QRadioButton(groupOContent);
        cAll->setObjectName("cAll");

        verticalLayout_2->addWidget(cAll);

        cSeq = new QRadioButton(groupOContent);
        cSeq->setObjectName("cSeq");

        verticalLayout_2->addWidget(cSeq);

        cChoice = new QRadioButton(groupOContent);
        cChoice->setObjectName("cChoice");

        verticalLayout_2->addWidget(cChoice);

        cGroup = new QRadioButton(groupOContent);
        cGroup->setObjectName("cGroup");

        verticalLayout_2->addWidget(cGroup);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_9->addWidget(groupOContent);

        childrenStack->addWidget(complexTPage);

        verticalLayout_4->addWidget(childrenStack);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        buttonBox = new QDialogButtonBox(XSDTypeDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_6->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_6);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(ename);
        label_4->setBuddy(cBaseType);
        label_3->setBuddy(cBaseType);
#endif // QT_CONFIG(shortcut)

        retranslateUi(XSDTypeDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, XSDTypeDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, XSDTypeDialog, qOverload<>(&QDialog::reject));

        childrenStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XSDTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *XSDTypeDialog)
    {
        XSDTypeDialog->setWindowTitle(QCoreApplication::translate("XSDTypeDialog", "Type", nullptr));
        label_2->setText(QCoreApplication::translate("XSDTypeDialog", "&Name:", nullptr));
        groupType->setTitle(QCoreApplication::translate("XSDTypeDialog", "Type", nullptr));
        typeRef->setText(QCoreApplication::translate("XSDTypeDialog", "&Reference", nullptr));
        typeComplex->setText(QCoreApplication::translate("XSDTypeDialog", "&Complex", nullptr));
        typeSimple->setText(QCoreApplication::translate("XSDTypeDialog", "&Simple", nullptr));
        groupContent->setTitle(QCoreApplication::translate("XSDTypeDialog", "Complex type content", nullptr));
        contentSimple->setText(QCoreApplication::translate("XSDTypeDialog", "Simple content", nullptr));
        contentComplex->setText(QCoreApplication::translate("XSDTypeDialog", "Complex content", nullptr));
        contentNone->setText(QCoreApplication::translate("XSDTypeDialog", "Other", nullptr));
        groupSimpleType->setTitle(QCoreApplication::translate("XSDTypeDialog", "Children", nullptr));
        label_4->setText(QCoreApplication::translate("XSDTypeDialog", "&Base", nullptr));
        simpleTypeNone->setText(QCoreApplication::translate("XSDTypeDialog", "none", nullptr));
        simpleTypeUnion->setText(QCoreApplication::translate("XSDTypeDialog", "union", nullptr));
        simpleTypeRestriction->setText(QCoreApplication::translate("XSDTypeDialog", "restriction", nullptr));
        simpleTypeList->setText(QCoreApplication::translate("XSDTypeDialog", "list", nullptr));
        groupOContent->setTitle(QCoreApplication::translate("XSDTypeDialog", "Children", nullptr));
        cNone->setText(QCoreApplication::translate("XSDTypeDialog", "none", nullptr));
        label_3->setText(QCoreApplication::translate("XSDTypeDialog", "&Base", nullptr));
        cExtension->setText(QCoreApplication::translate("XSDTypeDialog", "extension", nullptr));
        cRestriction->setText(QCoreApplication::translate("XSDTypeDialog", "restriction", nullptr));
        label->setText(QCoreApplication::translate("XSDTypeDialog", "Other content", nullptr));
        cAll->setText(QCoreApplication::translate("XSDTypeDialog", "all", nullptr));
        cSeq->setText(QCoreApplication::translate("XSDTypeDialog", "sequence", nullptr));
        cChoice->setText(QCoreApplication::translate("XSDTypeDialog", "choice", nullptr));
        cGroup->setText(QCoreApplication::translate("XSDTypeDialog", "group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XSDTypeDialog: public Ui_XSDTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSDTYPEDIALOG_H
