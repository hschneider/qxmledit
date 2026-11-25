/********************************************************************************
** Form generated from reading UI file 'EditElement.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITELEMENT_H
#define UI_EDITELEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QAction *actionEditItem;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *path;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *editTag;
    QLabel *lblWarnNs;
    QPushButton *cmdNamespaces;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *elementTable;
    QVBoxLayout *verticalLayout_4;
    QPushButton *textAdd;
    QPushButton *textDel;
    QPushButton *textEdit;
    QPushButton *textUp;
    QPushButton *textDown;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTableWidget *attrTable;
    QHBoxLayout *layBox1;
    QVBoxLayout *verticalLayout;
    QPushButton *newAttribute;
    QPushButton *delAttribute;
    QPushButton *cmdEditAttributeAdvanced;
    QPushButton *cmdToBase64;
    QPushButton *cmdFromBase64;
    QPushButton *cmdSaveFileBase64;
    QPushButton *cmdLoadFileBase64;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->resize(857, 701);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setSizeGripEnabled(true);
        Dialog->setModal(false);
        actionEditItem = new QAction(Dialog);
        actionEditItem->setObjectName("actionEditItem");
        horizontalLayout_5 = new QHBoxLayout(Dialog);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        path = new QLabel(Dialog);
        path->setObjectName("path");
        path->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(path);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        editTag = new QLineEdit(groupBox);
        editTag->setObjectName("editTag");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(editTag->sizePolicy().hasHeightForWidth());
        editTag->setSizePolicy(sizePolicy4);
        editTag->setMaxLength(-1);

        horizontalLayout_4->addWidget(editTag);

        lblWarnNs = new QLabel(groupBox);
        lblWarnNs->setObjectName("lblWarnNs");

        horizontalLayout_4->addWidget(lblWarnNs);

        cmdNamespaces = new QPushButton(groupBox);
        cmdNamespaces->setObjectName("cmdNamespaces");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cmdNamespaces->sizePolicy().hasHeightForWidth());
        cmdNamespaces->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(cmdNamespaces);


        verticalLayout_5->addLayout(horizontalLayout_4);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        elementTable = new QTableWidget(groupBox);
        if (elementTable->columnCount() < 3)
            elementTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        elementTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        elementTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        elementTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        elementTable->setObjectName("elementTable");
        sizePolicy2.setHeightForWidth(elementTable->sizePolicy().hasHeightForWidth());
        elementTable->setSizePolicy(sizePolicy2);
        elementTable->setMinimumSize(QSize(0, 0));
        elementTable->setCornerButtonEnabled(true);
        elementTable->setColumnCount(3);
        elementTable->horizontalHeader()->setVisible(true);
        elementTable->horizontalHeader()->setCascadingSectionResizes(false);
        elementTable->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(elementTable);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        textAdd = new QPushButton(groupBox);
        textAdd->setObjectName("textAdd");

        verticalLayout_4->addWidget(textAdd);

        textDel = new QPushButton(groupBox);
        textDel->setObjectName("textDel");
        textDel->setEnabled(false);

        verticalLayout_4->addWidget(textDel);

        textEdit = new QPushButton(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setEnabled(false);

        verticalLayout_4->addWidget(textEdit);

        textUp = new QPushButton(groupBox);
        textUp->setObjectName("textUp");
        textUp->setEnabled(false);

        verticalLayout_4->addWidget(textUp);

        textDown = new QPushButton(groupBox);
        textDown->setObjectName("textDown");
        textDown->setEnabled(false);

        verticalLayout_4->addWidget(textDown);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        attrTable = new QTableWidget(Dialog);
        if (attrTable->columnCount() < 3)
            attrTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attrTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        attrTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        attrTable->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        attrTable->setObjectName("attrTable");
        attrTable->setAlternatingRowColors(true);
        attrTable->setShowGrid(true);
        attrTable->setSortingEnabled(true);
        attrTable->setColumnCount(3);
        attrTable->horizontalHeader()->setCascadingSectionResizes(false);
        attrTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        attrTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(attrTable);

        layBox1 = new QHBoxLayout();
        layBox1->setObjectName("layBox1");

        verticalLayout_2->addLayout(layBox1);


        horizontalLayout_1->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        newAttribute = new QPushButton(Dialog);
        newAttribute->setObjectName("newAttribute");

        verticalLayout->addWidget(newAttribute);

        delAttribute = new QPushButton(Dialog);
        delAttribute->setObjectName("delAttribute");
        delAttribute->setEnabled(false);

        verticalLayout->addWidget(delAttribute);

        cmdEditAttributeAdvanced = new QPushButton(Dialog);
        cmdEditAttributeAdvanced->setObjectName("cmdEditAttributeAdvanced");
        cmdEditAttributeAdvanced->setEnabled(false);

        verticalLayout->addWidget(cmdEditAttributeAdvanced);

        cmdToBase64 = new QPushButton(Dialog);
        cmdToBase64->setObjectName("cmdToBase64");
        cmdToBase64->setEnabled(false);

        verticalLayout->addWidget(cmdToBase64);

        cmdFromBase64 = new QPushButton(Dialog);
        cmdFromBase64->setObjectName("cmdFromBase64");
        cmdFromBase64->setEnabled(false);

        verticalLayout->addWidget(cmdFromBase64);

        cmdSaveFileBase64 = new QPushButton(Dialog);
        cmdSaveFileBase64->setObjectName("cmdSaveFileBase64");
        cmdSaveFileBase64->setEnabled(false);

        verticalLayout->addWidget(cmdSaveFileBase64);

        cmdLoadFileBase64 = new QPushButton(Dialog);
        cmdLoadFileBase64->setObjectName("cmdLoadFileBase64");
        cmdLoadFileBase64->setEnabled(false);

        verticalLayout->addWidget(cmdLoadFileBase64);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_1->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_1);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        sizePolicy5.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy5);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_6->addWidget(buttonBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);


        horizontalLayout_5->addLayout(verticalLayout_6);

#if QT_CONFIG(shortcut)
        label->setBuddy(editTag);
        label_6->setBuddy(elementTable);
        label_3->setBuddy(attrTable);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(editTag, cmdNamespaces);
        QWidget::setTabOrder(cmdNamespaces, elementTable);
        QWidget::setTabOrder(elementTable, textAdd);
        QWidget::setTabOrder(textAdd, textDel);
        QWidget::setTabOrder(textDel, textEdit);
        QWidget::setTabOrder(textEdit, textUp);
        QWidget::setTabOrder(textUp, textDown);
        QWidget::setTabOrder(textDown, attrTable);
        QWidget::setTabOrder(attrTable, newAttribute);
        QWidget::setTabOrder(newAttribute, delAttribute);
        QWidget::setTabOrder(delAttribute, cmdEditAttributeAdvanced);
        QWidget::setTabOrder(cmdEditAttributeAdvanced, cmdToBase64);
        QWidget::setTabOrder(cmdToBase64, cmdFromBase64);
        QWidget::setTabOrder(cmdFromBase64, cmdSaveFileBase64);
        QWidget::setTabOrder(cmdSaveFileBase64, cmdLoadFileBase64);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Edit Element", nullptr));
        actionEditItem->setText(QCoreApplication::translate("Dialog", "editItem", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Path:", nullptr));
        path->setText(QCoreApplication::translate("Dialog", "------", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Dialog", "Ta&g:", nullptr));
        lblWarnNs->setText(QCoreApplication::translate("Dialog", "Warning: the namespace is not declared.", nullptr));
        cmdNamespaces->setText(QCoreApplication::translate("Dialog", "Namespaces", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "Text &Nodes:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = elementTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dialog", "CDATA Section", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = elementTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dialog", "Text Content", nullptr));
        textAdd->setText(QCoreApplication::translate("Dialog", "+ (&t)", nullptr));
        textDel->setText(QCoreApplication::translate("Dialog", "- (&r)", nullptr));
        textEdit->setText(QCoreApplication::translate("Dialog", "Mod...", nullptr));
        textUp->setText(QCoreApplication::translate("Dialog", "&Up", nullptr));
        textDown->setText(QCoreApplication::translate("Dialog", "&Down", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "&Attributes", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = attrTable->horizontalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = attrTable->horizontalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dialog", "Value", nullptr));
        newAttribute->setText(QCoreApplication::translate("Dialog", "+ (&b)", nullptr));
        delAttribute->setText(QCoreApplication::translate("Dialog", "- (&d)", nullptr));
        cmdEditAttributeAdvanced->setText(QCoreApplication::translate("Dialog", "&Edit Panel", nullptr));
        cmdToBase64->setText(QCoreApplication::translate("Dialog", "To Base64", nullptr));
        cmdFromBase64->setText(QCoreApplication::translate("Dialog", "From Base64", nullptr));
#if QT_CONFIG(tooltip)
        cmdSaveFileBase64->setToolTip(QCoreApplication::translate("Dialog", "s", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSaveFileBase64->setText(QCoreApplication::translate("Dialog", "Save Base64", nullptr));
#if QT_CONFIG(tooltip)
        cmdLoadFileBase64->setToolTip(QCoreApplication::translate("Dialog", "Load a binary file and insert it into the current attribute as base64 coded text.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdLoadFileBase64->setText(QCoreApplication::translate("Dialog", "Load Base64", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITELEMENT_H
