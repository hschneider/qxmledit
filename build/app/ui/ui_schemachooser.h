/********************************************************************************
** Form generated from reading UI file 'schemachooser.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEMACHOOSER_H
#define UI_SCHEMACHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SchemaChooser
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListWidget *favoritesList;
    QVBoxLayout *verticalLayout;
    QPushButton *addPrefsSchema;
    QPushButton *remPrefsSchema;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *textSelection;
    QPushButton *browseFile;
    QLabel *label_2;
    QListWidget *lastUsedList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SchemaChooser)
    {
        if (SchemaChooser->objectName().isEmpty())
            SchemaChooser->setObjectName("SchemaChooser");
        SchemaChooser->resize(815, 537);
        verticalLayout_2 = new QVBoxLayout(SchemaChooser);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(SchemaChooser);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        favoritesList = new QListWidget(SchemaChooser);
        favoritesList->setObjectName("favoritesList");

        horizontalLayout->addWidget(favoritesList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addPrefsSchema = new QPushButton(SchemaChooser);
        addPrefsSchema->setObjectName("addPrefsSchema");

        verticalLayout->addWidget(addPrefsSchema);

        remPrefsSchema = new QPushButton(SchemaChooser);
        remPrefsSchema->setObjectName("remPrefsSchema");

        verticalLayout->addWidget(remPrefsSchema);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(SchemaChooser);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        textSelection = new QLineEdit(SchemaChooser);
        textSelection->setObjectName("textSelection");

        horizontalLayout_3->addWidget(textSelection);

        browseFile = new QPushButton(SchemaChooser);
        browseFile->setObjectName("browseFile");

        horizontalLayout_3->addWidget(browseFile);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_2 = new QLabel(SchemaChooser);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lastUsedList = new QListWidget(SchemaChooser);
        lastUsedList->setObjectName("lastUsedList");

        verticalLayout_2->addWidget(lastUsedList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SchemaChooser);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(SchemaChooser);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SchemaChooser, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SchemaChooser, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SchemaChooser);
    } // setupUi

    void retranslateUi(QDialog *SchemaChooser)
    {
        SchemaChooser->setWindowTitle(QCoreApplication::translate("SchemaChooser", "Choose a Schema", nullptr));
        label->setText(QCoreApplication::translate("SchemaChooser", "Favorites:", nullptr));
        addPrefsSchema->setText(QCoreApplication::translate("SchemaChooser", "Add...", nullptr));
        remPrefsSchema->setText(QCoreApplication::translate("SchemaChooser", "Remove", nullptr));
        label_3->setText(QCoreApplication::translate("SchemaChooser", "Selection:", nullptr));
        browseFile->setText(QCoreApplication::translate("SchemaChooser", "...", nullptr));
        label_2->setText(QCoreApplication::translate("SchemaChooser", "Last used schema:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SchemaChooser: public Ui_SchemaChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEMACHOOSER_H
