/********************************************************************************
** Form generated from reading UI file 'sessionstatewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONSTATEWIDGET_H
#define UI_SESSIONSTATEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionStateWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *stateLabel;

    void setupUi(QWidget *SessionStateWidget)
    {
        if (SessionStateWidget->objectName().isEmpty())
            SessionStateWidget->setObjectName("SessionStateWidget");
        SessionStateWidget->resize(31, 35);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SessionStateWidget->sizePolicy().hasHeightForWidth());
        SessionStateWidget->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SessionStateWidget->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SessionStateWidget);
        verticalLayout->setObjectName("verticalLayout");
        stateLabel = new QLabel(SessionStateWidget);
        stateLabel->setObjectName("stateLabel");
        sizePolicy.setHeightForWidth(stateLabel->sizePolicy().hasHeightForWidth());
        stateLabel->setSizePolicy(sizePolicy);
        stateLabel->setPixmap(QPixmap(QString::fromUtf8(":/images16/session_closed")));
        stateLabel->setScaledContents(true);

        verticalLayout->addWidget(stateLabel);


        retranslateUi(SessionStateWidget);

        QMetaObject::connectSlotsByName(SessionStateWidget);
    } // setupUi

    void retranslateUi(QWidget *SessionStateWidget)
    {
        SessionStateWidget->setWindowTitle(QCoreApplication::translate("SessionStateWidget", "Form", nullptr));
        stateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SessionStateWidget: public Ui_SessionStateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONSTATEWIDGET_H
