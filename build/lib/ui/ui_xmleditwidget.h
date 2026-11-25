/********************************************************************************
** Form generated from reading UI file 'xmleditwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMLEDITWIDGET_H
#define UI_XMLEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "modules/search/searchwidget.h"
#include "navigationbox.h"

QT_BEGIN_NAMESPACE

class Ui_XmlEditWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    SearchWidget *searchWidget;
    QCheckBox *cdataElement;
    QHBoxLayout *mainLayout;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QLabel *docTypeLabel;
    QLabel *encoding;
    QPushButton *ok;
    QPushButton *cancel;
    QPushButton *addChild;
    QPushButton *addBrother;
    QPushButton *editItem;
    QPushButton *deleteItem;
    QPushButton *moveUp;
    QPushButton *moveDown;
    QPushButton *viewAsXsdCmd;
    QPushButton *testPrev;
    QPushButton *testNext;
    QHBoxLayout *parentNav;
    NavigationBox *navigation;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLowLayout;
    QToolButton *styleButton;
    QToolButton *copySpecial;
    QToolButton *indent;
    QToolButton *settingsButton;

    void setupUi(QWidget *XmlEditWidget)
    {
        if (XmlEditWidget->objectName().isEmpty())
            XmlEditWidget->setObjectName("XmlEditWidget");
        XmlEditWidget->resize(1001, 799);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XmlEditWidget->sizePolicy().hasHeightForWidth());
        XmlEditWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(XmlEditWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        searchWidget = new SearchWidget(XmlEditWidget);
        searchWidget->setObjectName("searchWidget");

        verticalLayout_2->addWidget(searchWidget);

        cdataElement = new QCheckBox(XmlEditWidget);
        cdataElement->setObjectName("cdataElement");

        verticalLayout_2->addWidget(cdataElement);

        mainLayout = new QHBoxLayout();
        mainLayout->setObjectName("mainLayout");
        treeWidget = new QTreeWidget(XmlEditWidget);
        treeWidget->setObjectName("treeWidget");

        mainLayout->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        docTypeLabel = new QLabel(XmlEditWidget);
        docTypeLabel->setObjectName("docTypeLabel");

        verticalLayout->addWidget(docTypeLabel);

        encoding = new QLabel(XmlEditWidget);
        encoding->setObjectName("encoding");
        encoding->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(encoding);

        ok = new QPushButton(XmlEditWidget);
        ok->setObjectName("ok");

        verticalLayout->addWidget(ok);

        cancel = new QPushButton(XmlEditWidget);
        cancel->setObjectName("cancel");

        verticalLayout->addWidget(cancel);

        addChild = new QPushButton(XmlEditWidget);
        addChild->setObjectName("addChild");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addChild->sizePolicy().hasHeightForWidth());
        addChild->setSizePolicy(sizePolicy1);
        addChild->setStyleSheet(QString::fromUtf8("text-align:left;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/addchild"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addChild->setIcon(icon);

        verticalLayout->addWidget(addChild);

        addBrother = new QPushButton(XmlEditWidget);
        addBrother->setObjectName("addBrother");
        sizePolicy1.setHeightForWidth(addBrother->sizePolicy().hasHeightForWidth());
        addBrother->setSizePolicy(sizePolicy1);
        addBrother->setStyleSheet(QString::fromUtf8("text-align:left;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/addbrother"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addBrother->setIcon(icon1);

        verticalLayout->addWidget(addBrother);

        editItem = new QPushButton(XmlEditWidget);
        editItem->setObjectName("editItem");
        sizePolicy1.setHeightForWidth(editItem->sizePolicy().hasHeightForWidth());
        editItem->setSizePolicy(sizePolicy1);
        editItem->setStyleSheet(QString::fromUtf8("text-align:left;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/commands/modify"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        editItem->setIcon(icon2);

        verticalLayout->addWidget(editItem);

        deleteItem = new QPushButton(XmlEditWidget);
        deleteItem->setObjectName("deleteItem");
        sizePolicy1.setHeightForWidth(deleteItem->sizePolicy().hasHeightForWidth());
        deleteItem->setSizePolicy(sizePolicy1);
        deleteItem->setStyleSheet(QString::fromUtf8("text-align:left;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/edit-delete"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteItem->setIcon(icon3);

        verticalLayout->addWidget(deleteItem);

        moveUp = new QPushButton(XmlEditWidget);
        moveUp->setObjectName("moveUp");
        sizePolicy1.setHeightForWidth(moveUp->sizePolicy().hasHeightForWidth());
        moveUp->setSizePolicy(sizePolicy1);
        moveUp->setStyleSheet(QString::fromUtf8("text-align:left;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/arrows/images/go-up.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        moveUp->setIcon(icon4);

        verticalLayout->addWidget(moveUp);

        moveDown = new QPushButton(XmlEditWidget);
        moveDown->setObjectName("moveDown");
        sizePolicy1.setHeightForWidth(moveDown->sizePolicy().hasHeightForWidth());
        moveDown->setSizePolicy(sizePolicy1);
        moveDown->setStyleSheet(QString::fromUtf8("text-align:left;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/arrows/images/go-down.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        moveDown->setIcon(icon5);

        verticalLayout->addWidget(moveDown);

        viewAsXsdCmd = new QPushButton(XmlEditWidget);
        viewAsXsdCmd->setObjectName("viewAsXsdCmd");
        sizePolicy1.setHeightForWidth(viewAsXsdCmd->sizePolicy().hasHeightForWidth());
        viewAsXsdCmd->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewAsXsdCmd);

        testPrev = new QPushButton(XmlEditWidget);
        testPrev->setObjectName("testPrev");
        testPrev->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(testPrev->sizePolicy().hasHeightForWidth());
        testPrev->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(testPrev);

        testNext = new QPushButton(XmlEditWidget);
        testNext->setObjectName("testNext");
        testNext->setEnabled(false);
        sizePolicy1.setHeightForWidth(testNext->sizePolicy().hasHeightForWidth());
        testNext->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(testNext);

        parentNav = new QHBoxLayout();
        parentNav->setObjectName("parentNav");
        parentNav->setSizeConstraint(QLayout::SetDefaultConstraint);
        parentNav->setContentsMargins(0, 0, -1, -1);
        navigation = new NavigationBox(XmlEditWidget);
        navigation->setObjectName("navigation");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(navigation->sizePolicy().hasHeightForWidth());
        navigation->setSizePolicy(sizePolicy3);

        parentNav->addWidget(navigation);


        verticalLayout->addLayout(parentNav);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLowLayout = new QHBoxLayout();
        horizontalLowLayout->setObjectName("horizontalLowLayout");
        horizontalLowLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        styleButton = new QToolButton(XmlEditWidget);
        styleButton->setObjectName("styleButton");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/special/style"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        styleButton->setIcon(icon6);
        styleButton->setPopupMode(QToolButton::InstantPopup);
        styleButton->setArrowType(Qt::NoArrow);

        horizontalLowLayout->addWidget(styleButton);

        copySpecial = new QToolButton(XmlEditWidget);
        copySpecial->setObjectName("copySpecial");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/copy/images/edit-copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        copySpecial->setIcon(icon7);
        copySpecial->setPopupMode(QToolButton::InstantPopup);
        copySpecial->setArrowType(Qt::NoArrow);

        horizontalLowLayout->addWidget(copySpecial);

        indent = new QToolButton(XmlEditWidget);
        indent->setObjectName("indent");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/editText/indent"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        indent->setIcon(icon8);
        indent->setPopupMode(QToolButton::DelayedPopup);

        horizontalLowLayout->addWidget(indent);

        settingsButton = new QToolButton(XmlEditWidget);
        settingsButton->setObjectName("settingsButton");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/configuration/configure"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        settingsButton->setIcon(icon9);

        horizontalLowLayout->addWidget(settingsButton);


        verticalLayout->addLayout(horizontalLowLayout);


        mainLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(mainLayout);


        retranslateUi(XmlEditWidget);

        QMetaObject::connectSlotsByName(XmlEditWidget);
    } // setupUi

    void retranslateUi(QWidget *XmlEditWidget)
    {
        XmlEditWidget->setWindowTitle(QCoreApplication::translate("XmlEditWidget", "Form", nullptr));
        cdataElement->setText(QCoreApplication::translate("XmlEditWidget", "CDATA", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("XmlEditWidget", "1", nullptr));
        docTypeLabel->setText(QCoreApplication::translate("XmlEditWidget", "---", nullptr));
        encoding->setText(QCoreApplication::translate("XmlEditWidget", "encoding:", nullptr));
        ok->setText(QCoreApplication::translate("XmlEditWidget", "OK", nullptr));
        cancel->setText(QCoreApplication::translate("XmlEditWidget", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        addChild->setToolTip(QCoreApplication::translate("XmlEditWidget", "Insert an element as child.", nullptr));
#endif // QT_CONFIG(tooltip)
        addChild->setText(QCoreApplication::translate("XmlEditWidget", "Add &Child...", nullptr));
#if QT_CONFIG(tooltip)
        addBrother->setToolTip(QCoreApplication::translate("XmlEditWidget", "Add an element as sibling.", nullptr));
#endif // QT_CONFIG(tooltip)
        addBrother->setText(QCoreApplication::translate("XmlEditWidget", "&Append...", nullptr));
#if QT_CONFIG(tooltip)
        editItem->setToolTip(QCoreApplication::translate("XmlEditWidget", "Edit the selected item.", nullptr));
#endif // QT_CONFIG(tooltip)
        editItem->setText(QCoreApplication::translate("XmlEditWidget", "&Edit...", nullptr));
#if QT_CONFIG(tooltip)
        deleteItem->setToolTip(QCoreApplication::translate("XmlEditWidget", "Delete the selected item.", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteItem->setText(QCoreApplication::translate("XmlEditWidget", "&Delete", nullptr));
#if QT_CONFIG(tooltip)
        moveUp->setToolTip(QCoreApplication::translate("XmlEditWidget", "Move the selected item one position up between siblings.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveUp->setText(QCoreApplication::translate("XmlEditWidget", "Move &Up", nullptr));
#if QT_CONFIG(tooltip)
        moveDown->setToolTip(QCoreApplication::translate("XmlEditWidget", "Move the selected item one position down between siblings.", nullptr));
#endif // QT_CONFIG(tooltip)
        moveDown->setText(QCoreApplication::translate("XmlEditWidget", "Move &Down", nullptr));
#if QT_CONFIG(tooltip)
        viewAsXsdCmd->setToolTip(QCoreApplication::translate("XmlEditWidget", "Open the graphical XML Schema visualizer.", nullptr));
#endif // QT_CONFIG(tooltip)
        viewAsXsdCmd->setText(QCoreApplication::translate("XmlEditWidget", "View as XSD...", nullptr));
        testPrev->setText(QCoreApplication::translate("XmlEditWidget", "testPrev", nullptr));
        testNext->setText(QCoreApplication::translate("XmlEditWidget", "testNext", nullptr));
#if QT_CONFIG(tooltip)
        styleButton->setToolTip(QCoreApplication::translate("XmlEditWidget", "Choose a style to apply to XML visualization.", nullptr));
#endif // QT_CONFIG(tooltip)
        styleButton->setText(QCoreApplication::translate("XmlEditWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        copySpecial->setToolTip(QCoreApplication::translate("XmlEditWidget", "Copy text, elements or attributes.", nullptr));
#endif // QT_CONFIG(tooltip)
        copySpecial->setText(QString());
#if QT_CONFIG(tooltip)
        indent->setToolTip(QCoreApplication::translate("XmlEditWidget", "Indentation settings.", nullptr));
#endif // QT_CONFIG(tooltip)
        indent->setText(QString());
#if QT_CONFIG(tooltip)
        settingsButton->setToolTip(QCoreApplication::translate("XmlEditWidget", "Configure aspects related to visualization.", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsButton->setText(QCoreApplication::translate("XmlEditWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XmlEditWidget: public Ui_XmlEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMLEDITWIDGET_H
