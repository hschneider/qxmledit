/********************************************************************************
** Form generated from reading UI file 'navigationbox.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONBOX_H
#define UI_NAVIGATIONBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationBox
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QHBoxLayout *horizontalLayout;
    QPushButton *goPrev;
    QSpinBox *valueBox;
    QPushButton *go;
    QPushButton *goNext;
    QHBoxLayout *horizontalLayout_2;
    QLabel *minVal;
    QSlider *slider;
    QLabel *maxVal;

    void setupUi(QWidget *NavigationBox)
    {
        if (NavigationBox->objectName().isEmpty())
            NavigationBox->setObjectName("NavigationBox");
        NavigationBox->resize(208, 136);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NavigationBox->sizePolicy().hasHeightForWidth());
        NavigationBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(NavigationBox);
        verticalLayout->setObjectName("verticalLayout");
        title = new QLabel(NavigationBox);
        title->setObjectName("title");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);
        title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        goPrev = new QPushButton(NavigationBox);
        goPrev->setObjectName("goPrev");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(goPrev->sizePolicy().hasHeightForWidth());
        goPrev->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrows/images/go-previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        goPrev->setIcon(icon);

        horizontalLayout->addWidget(goPrev);

        valueBox = new QSpinBox(NavigationBox);
        valueBox->setObjectName("valueBox");
        sizePolicy1.setHeightForWidth(valueBox->sizePolicy().hasHeightForWidth());
        valueBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(valueBox);

        go = new QPushButton(NavigationBox);
        go->setObjectName("go");
        sizePolicy2.setHeightForWidth(go->sizePolicy().hasHeightForWidth());
        go->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(go);

        goNext = new QPushButton(NavigationBox);
        goNext->setObjectName("goNext");
        sizePolicy2.setHeightForWidth(goNext->sizePolicy().hasHeightForWidth());
        goNext->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arrows/images/go-next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        goNext->setIcon(icon1);

        horizontalLayout->addWidget(goNext);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        minVal = new QLabel(NavigationBox);
        minVal->setObjectName("minVal");
        sizePolicy1.setHeightForWidth(minVal->sizePolicy().hasHeightForWidth());
        minVal->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(minVal);

        slider = new QSlider(NavigationBox);
        slider->setObjectName("slider");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(slider->sizePolicy().hasHeightForWidth());
        slider->setSizePolicy(sizePolicy3);
        slider->setOrientation(Qt::Horizontal);
        slider->setInvertedControls(false);
        slider->setTickPosition(QSlider::TicksBelow);
        slider->setTickInterval(10);

        horizontalLayout_2->addWidget(slider);

        maxVal = new QLabel(NavigationBox);
        maxVal->setObjectName("maxVal");
        sizePolicy1.setHeightForWidth(maxVal->sizePolicy().hasHeightForWidth());
        maxVal->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(maxVal);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(NavigationBox);

        QMetaObject::connectSlotsByName(NavigationBox);
    } // setupUi

    void retranslateUi(QWidget *NavigationBox)
    {
        NavigationBox->setWindowTitle(QCoreApplication::translate("NavigationBox", "Form", nullptr));
        title->setText(QCoreApplication::translate("NavigationBox", "Current fragment", nullptr));
        goPrev->setText(QString());
        go->setText(QCoreApplication::translate("NavigationBox", "Go", nullptr));
        goNext->setText(QString());
        minVal->setText(QCoreApplication::translate("NavigationBox", "1", nullptr));
        maxVal->setText(QCoreApplication::translate("NavigationBox", "2000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavigationBox: public Ui_NavigationBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONBOX_H
