/********************************************************************************
** Form generated from reading UI file 'warningswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGSWIDGET_H
#define UI_WARNINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WarningsWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QWidget *WarningsWidget)
    {
        if (WarningsWidget->objectName().isEmpty())
            WarningsWidget->setObjectName("WarningsWidget");
        WarningsWidget->resize(679, 56);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WarningsWidget->sizePolicy().hasHeightForWidth());
        WarningsWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(WarningsWidget);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        frame = new QFrame(WarningsWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 192, 80);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/special/warning")));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(frame);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(211, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(frame);
        closeButton->setObjectName("closeButton");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/quit/images/window-close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        closeButton->setIcon(icon);
        closeButton->setFlat(false);

        horizontalLayout->addWidget(closeButton);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(WarningsWidget);

        QMetaObject::connectSlotsByName(WarningsWidget);
    } // setupUi

    void retranslateUi(QWidget *WarningsWidget)
    {
        WarningsWidget->setWindowTitle(QCoreApplication::translate("WarningsWidget", "Form", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("WarningsWidget", "Warnings: the data can be incomplete due to load errors.", nullptr));
        closeButton->setText(QCoreApplication::translate("WarningsWidget", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WarningsWidget: public Ui_WarningsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGSWIDGET_H
