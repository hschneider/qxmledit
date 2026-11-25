/********************************************************************************
** Form generated from reading UI file 'datawidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAWIDGET_H
#define UI_DATAWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataWidget
{
public:
    QAction *actionCopyDataToClipboard;
    QAction *actionExtractThisFragment;
    QAction *actionCopyPathToClipboard;
    QAction *actionCopyImageToClipboard;

    void setupUi(QWidget *DataWidget)
    {
        if (DataWidget->objectName().isEmpty())
            DataWidget->setObjectName("DataWidget");
        DataWidget->resize(609, 495);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DataWidget->setWindowIcon(icon);
        actionCopyDataToClipboard = new QAction(DataWidget);
        actionCopyDataToClipboard->setObjectName("actionCopyDataToClipboard");
        actionExtractThisFragment = new QAction(DataWidget);
        actionExtractThisFragment->setObjectName("actionExtractThisFragment");
        actionCopyPathToClipboard = new QAction(DataWidget);
        actionCopyPathToClipboard->setObjectName("actionCopyPathToClipboard");
        actionCopyImageToClipboard = new QAction(DataWidget);
        actionCopyImageToClipboard->setObjectName("actionCopyImageToClipboard");

        retranslateUi(DataWidget);

        QMetaObject::connectSlotsByName(DataWidget);
    } // setupUi

    void retranslateUi(QWidget *DataWidget)
    {
        DataWidget->setWindowTitle(QCoreApplication::translate("DataWidget", "Form", nullptr));
        actionCopyDataToClipboard->setText(QCoreApplication::translate("DataWidget", "Copy Data to Clipboard", nullptr));
        actionExtractThisFragment->setText(QCoreApplication::translate("DataWidget", "Extract This Fragment...", nullptr));
        actionCopyPathToClipboard->setText(QCoreApplication::translate("DataWidget", "Copy Path to the Clipboard", nullptr));
        actionCopyImageToClipboard->setText(QCoreApplication::translate("DataWidget", "Copy Image  to Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyImageToClipboard->setToolTip(QCoreApplication::translate("DataWidget", "Copy image to clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class DataWidget: public Ui_DataWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAWIDGET_H
