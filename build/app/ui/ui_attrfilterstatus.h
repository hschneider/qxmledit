/********************************************************************************
** Form generated from reading UI file 'attrfilterstatus.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRFILTERSTATUS_H
#define UI_ATTRFILTERSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttrFilterStatus
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *icon;

    void setupUi(QWidget *AttrFilterStatus)
    {
        if (AttrFilterStatus->objectName().isEmpty())
            AttrFilterStatus->setObjectName("AttrFilterStatus");
        AttrFilterStatus->resize(40, 40);
        horizontalLayout = new QHBoxLayout(AttrFilterStatus);
        horizontalLayout->setObjectName("horizontalLayout");
        icon = new QLabel(AttrFilterStatus);
        icon->setObjectName("icon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setPixmap(QPixmap(QString::fromUtf8(":/editText/filter")));

        horizontalLayout->addWidget(icon);


        retranslateUi(AttrFilterStatus);

        QMetaObject::connectSlotsByName(AttrFilterStatus);
    } // setupUi

    void retranslateUi(QWidget *AttrFilterStatus)
    {
        AttrFilterStatus->setWindowTitle(QCoreApplication::translate("AttrFilterStatus", "Form", nullptr));
        icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AttrFilterStatus: public Ui_AttrFilterStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRFILTERSTATUS_H
