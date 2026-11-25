/********************************************************************************
** Form generated from reading UI file 'shortcutinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTINFO_H
#define UI_SHORTCUTINFO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortcutInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QComboBox *type;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ShortcutInfo)
    {
        if (ShortcutInfo->objectName().isEmpty())
            ShortcutInfo->setObjectName("ShortcutInfo");
        ShortcutInfo->resize(317, 73);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShortcutInfo->sizePolicy().hasHeightForWidth());
        ShortcutInfo->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ShortcutInfo->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(ShortcutInfo);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(ShortcutInfo);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        type = new QComboBox(ShortcutInfo);
        type->setObjectName("type");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(type->sizePolicy().hasHeightForWidth());
        type->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(type);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(ShortcutInfo);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        page = new QWidget();
        page->setObjectName("page");
        sizePolicy2.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        stackedWidget->addWidget(page);

        horizontalLayout->addWidget(stackedWidget);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

#if QT_CONFIG(shortcut)
        label->setBuddy(type);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ShortcutInfo);

        QMetaObject::connectSlotsByName(ShortcutInfo);
    } // setupUi

    void retranslateUi(QWidget *ShortcutInfo)
    {
        ShortcutInfo->setWindowTitle(QCoreApplication::translate("ShortcutInfo", "Keyboard Shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        ShortcutInfo->setToolTip(QCoreApplication::translate("ShortcutInfo", "Information about keyboard shortcuts.", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ShortcutInfo", "&Qualifier:", nullptr));
#if QT_CONFIG(tooltip)
        type->setToolTip(QCoreApplication::translate("ShortcutInfo", "Select the key qualifier.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class ShortcutInfo: public Ui_ShortcutInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTINFO_H
