/********************************************************************************
** Form generated from reading UI file 'configureeditorcolors.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGUREEDITORCOLORS_H
#define UI_CONFIGUREEDITORCOLORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <xmleditwidget.h>

QT_BEGIN_NAMESPACE

class Ui_ConfigureEditorColors
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTreeWidget *treeColors;
    QLabel *label_2;
    XmlEditWidget *editor;
    QVBoxLayout *verticalLayout;
    QPushButton *cmdChangeColor;
    QPushButton *cmdResetColor;
    QSpacerItem *verticalSpacer;
    QPushButton *cmdResetAllColors;
    QHBoxLayout *horizontalLayout;
    QPushButton *cmdExport;
    QPushButton *cmdImport;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *ConfigureEditorColors)
    {
        if (ConfigureEditorColors->objectName().isEmpty())
            ConfigureEditorColors->setObjectName("ConfigureEditorColors");
        ConfigureEditorColors->resize(808, 562);
        verticalLayout_3 = new QVBoxLayout(ConfigureEditorColors);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ConfigureEditorColors);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        treeColors = new QTreeWidget(ConfigureEditorColors);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeColors->setHeaderItem(__qtreewidgetitem);
        treeColors->setObjectName("treeColors");

        verticalLayout_2->addWidget(treeColors);

        label_2 = new QLabel(ConfigureEditorColors);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        editor = new XmlEditWidget(ConfigureEditorColors);
        editor->setObjectName("editor");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(editor);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cmdChangeColor = new QPushButton(ConfigureEditorColors);
        cmdChangeColor->setObjectName("cmdChangeColor");

        verticalLayout->addWidget(cmdChangeColor);

        cmdResetColor = new QPushButton(ConfigureEditorColors);
        cmdResetColor->setObjectName("cmdResetColor");

        verticalLayout->addWidget(cmdResetColor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        cmdResetAllColors = new QPushButton(ConfigureEditorColors);
        cmdResetAllColors->setObjectName("cmdResetAllColors");

        verticalLayout->addWidget(cmdResetAllColors);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cmdExport = new QPushButton(ConfigureEditorColors);
        cmdExport->setObjectName("cmdExport");

        horizontalLayout->addWidget(cmdExport);

        cmdImport = new QPushButton(ConfigureEditorColors);
        cmdImport->setObjectName("cmdImport");

        horizontalLayout->addWidget(cmdImport);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ConfigureEditorColors);

        QMetaObject::connectSlotsByName(ConfigureEditorColors);
    } // setupUi

    void retranslateUi(QDialog *ConfigureEditorColors)
    {
        ConfigureEditorColors->setWindowTitle(QCoreApplication::translate("ConfigureEditorColors", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ConfigureEditorColors", "Colors used in the editor", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureEditorColors", "Sample", nullptr));
        cmdChangeColor->setText(QCoreApplication::translate("ConfigureEditorColors", "Change...", nullptr));
        cmdResetColor->setText(QCoreApplication::translate("ConfigureEditorColors", "Reset", nullptr));
        cmdResetAllColors->setText(QCoreApplication::translate("ConfigureEditorColors", "Reset all", nullptr));
        cmdExport->setText(QCoreApplication::translate("ConfigureEditorColors", "Export in CSV...", nullptr));
        cmdImport->setText(QCoreApplication::translate("ConfigureEditorColors", "Import from CSV...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureEditorColors: public Ui_ConfigureEditorColors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGUREEDITORCOLORS_H
