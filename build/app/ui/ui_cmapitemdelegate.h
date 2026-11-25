/********************************************************************************
** Form generated from reading UI file 'cmapitemdelegate.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAPITEMDELEGATE_H
#define UI_CMAPITEMDELEGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "visualization/vismapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CMapItemDelegate
{
public:
    QHBoxLayout *horizontalLayout;
    VisMapWidget *colorMap;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *CMapItemDelegate)
    {
        if (CMapItemDelegate->objectName().isEmpty())
            CMapItemDelegate->setObjectName("CMapItemDelegate");
        CMapItemDelegate->resize(242, 42);
        horizontalLayout = new QHBoxLayout(CMapItemDelegate);
        horizontalLayout->setObjectName("horizontalLayout");
        colorMap = new VisMapWidget(CMapItemDelegate);
        colorMap->setObjectName("colorMap");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colorMap->sizePolicy().hasHeightForWidth());
        colorMap->setSizePolicy(sizePolicy);
        colorMap->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(colorMap);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(CMapItemDelegate);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        retranslateUi(CMapItemDelegate);

        QMetaObject::connectSlotsByName(CMapItemDelegate);
    } // setupUi

    void retranslateUi(QWidget *CMapItemDelegate)
    {
        CMapItemDelegate->setWindowTitle(QCoreApplication::translate("CMapItemDelegate", "Form", nullptr));
        label->setText(QCoreApplication::translate("CMapItemDelegate", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CMapItemDelegate: public Ui_CMapItemDelegate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAPITEMDELEGATE_H
