/********************************************************************************
** Form generated from reading UI file 'vismapwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISMAPWIDGET_H
#define UI_VISMAPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisMapWidget
{
public:

    void setupUi(QWidget *VisMapWidget)
    {
        if (VisMapWidget->objectName().isEmpty())
            VisMapWidget->setObjectName("VisMapWidget");
        VisMapWidget->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        VisMapWidget->setWindowIcon(icon);

        retranslateUi(VisMapWidget);

        QMetaObject::connectSlotsByName(VisMapWidget);
    } // setupUi

    void retranslateUi(QWidget *VisMapWidget)
    {
        VisMapWidget->setWindowTitle(QCoreApplication::translate("VisMapWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisMapWidget: public Ui_VisMapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISMAPWIDGET_H
