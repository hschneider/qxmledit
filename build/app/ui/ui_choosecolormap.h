/********************************************************************************
** Form generated from reading UI file 'choosecolormap.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSECOLORMAP_H
#define UI_CHOOSECOLORMAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseColorMap
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *mapList;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ChooseColorMap)
    {
        if (ChooseColorMap->objectName().isEmpty())
            ChooseColorMap->setObjectName("ChooseColorMap");
        ChooseColorMap->resize(540, 444);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ChooseColorMap->setWindowIcon(icon);
        ChooseColorMap->setSizeGripEnabled(false);
        ChooseColorMap->setModal(true);
        horizontalLayout = new QHBoxLayout(ChooseColorMap);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ChooseColorMap);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        mapList = new QListWidget(ChooseColorMap);
        mapList->setObjectName("mapList");

        verticalLayout_2->addWidget(mapList);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ChooseColorMap);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ChooseColorMap);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ChooseColorMap, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ChooseColorMap, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ChooseColorMap);
    } // setupUi

    void retranslateUi(QDialog *ChooseColorMap)
    {
        ChooseColorMap->setWindowTitle(QCoreApplication::translate("ChooseColorMap", "Color Map Chooser", nullptr));
        label->setText(QCoreApplication::translate("ChooseColorMap", "Choose a color map:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseColorMap: public Ui_ChooseColorMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSECOLORMAP_H
