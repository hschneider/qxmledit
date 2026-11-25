/********************************************************************************
** Form generated from reading UI file 'navigationmode.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONMODE_H
#define UI_NAVIGATIONMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationMode
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QLabel *label;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *NavigationMode)
    {
        if (NavigationMode->objectName().isEmpty())
            NavigationMode->setObjectName("NavigationMode");
        NavigationMode->resize(187, 28);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NavigationMode->sizePolicy().hasHeightForWidth());
        NavigationMode->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(NavigationMode);
        horizontalLayout->setObjectName("horizontalLayout");
        iconLabel = new QLabel(NavigationMode);
        iconLabel->setObjectName("iconLabel");
        sizePolicy.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy);
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/status/explore-mode")));

        horizontalLayout->addWidget(iconLabel);

        label = new QLabel(NavigationMode);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(NavigationMode);

        QMetaObject::connectSlotsByName(NavigationMode);
    } // setupUi

    void retranslateUi(QWidget *NavigationMode)
    {
        NavigationMode->setWindowTitle(QCoreApplication::translate("NavigationMode", "Form", nullptr));
        iconLabel->setText(QString());
        label->setText(QCoreApplication::translate("NavigationMode", "Explore Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavigationMode: public Ui_NavigationMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONMODE_H
