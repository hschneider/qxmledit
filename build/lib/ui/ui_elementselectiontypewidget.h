/********************************************************************************
** Form generated from reading UI file 'elementselectiontypewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEMENTSELECTIONTYPEWIDGET_H
#define UI_ELEMENTSELECTIONTYPEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ElementSelectionTypeWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *all;
    QRadioButton *sel;
    QRadioButton *bookmarks;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *cbChildren;
    QButtonGroup *group;

    void setupUi(QWidget *ElementSelectionTypeWidget)
    {
        if (ElementSelectionTypeWidget->objectName().isEmpty())
            ElementSelectionTypeWidget->setObjectName("ElementSelectionTypeWidget");
        ElementSelectionTypeWidget->resize(190, 169);
        horizontalLayout_2 = new QHBoxLayout(ElementSelectionTypeWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBox = new QGroupBox(ElementSelectionTypeWidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setTitle(QString::fromUtf8(""));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        all = new QRadioButton(groupBox);
        group = new QButtonGroup(ElementSelectionTypeWidget);
        group->setObjectName("group");
        group->addButton(all);
        all->setObjectName("all");

        verticalLayout->addWidget(all);

        sel = new QRadioButton(groupBox);
        group->addButton(sel);
        sel->setObjectName("sel");

        verticalLayout->addWidget(sel);

        bookmarks = new QRadioButton(groupBox);
        group->addButton(bookmarks);
        bookmarks->setObjectName("bookmarks");

        verticalLayout->addWidget(bookmarks);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        cbChildren = new QCheckBox(groupBox);
        cbChildren->setObjectName("cbChildren");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbChildren->sizePolicy().hasHeightForWidth());
        cbChildren->setSizePolicy(sizePolicy2);
        cbChildren->setChecked(true);

        horizontalLayout->addWidget(cbChildren);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(groupBox);

        QWidget::setTabOrder(all, sel);
        QWidget::setTabOrder(sel, bookmarks);

        retranslateUi(ElementSelectionTypeWidget);

        QMetaObject::connectSlotsByName(ElementSelectionTypeWidget);
    } // setupUi

    void retranslateUi(QWidget *ElementSelectionTypeWidget)
    {
        ElementSelectionTypeWidget->setWindowTitle(QCoreApplication::translate("ElementSelectionTypeWidget", "Form", nullptr));
        all->setText(QCoreApplication::translate("ElementSelectionTypeWidget", "All", nullptr));
        sel->setText(QCoreApplication::translate("ElementSelectionTypeWidget", "Selection", nullptr));
        bookmarks->setText(QCoreApplication::translate("ElementSelectionTypeWidget", "Bookmarks", nullptr));
        label->setText(QString());
        cbChildren->setText(QCoreApplication::translate("ElementSelectionTypeWidget", "Include children", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElementSelectionTypeWidget: public Ui_ElementSelectionTypeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEMENTSELECTIONTYPEWIDGET_H
