/********************************************************************************
** Form generated from reading UI file 'diffmapwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFMAPWIDGET_H
#define UI_DIFFMAPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiffMapWidget
{
public:

    void setupUi(QWidget *DiffMapWidget)
    {
        if (DiffMapWidget->objectName().isEmpty())
            DiffMapWidget->setObjectName("DiffMapWidget");
        DiffMapWidget->resize(334, 204);

        retranslateUi(DiffMapWidget);

        QMetaObject::connectSlotsByName(DiffMapWidget);
    } // setupUi

    void retranslateUi(QWidget *DiffMapWidget)
    {
        DiffMapWidget->setWindowTitle(QCoreApplication::translate("DiffMapWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiffMapWidget: public Ui_DiffMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFMAPWIDGET_H
