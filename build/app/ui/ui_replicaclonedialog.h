/********************************************************************************
** Form generated from reading UI file 'replicaclonedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLICACLONEDIALOG_H
#define UI_REPLICACLONEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReplicaCloneDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *numClones;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbRecursive;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addIndex;
    QPushButton *removeIndex;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ReplicaCloneDialog)
    {
        if (ReplicaCloneDialog->objectName().isEmpty())
            ReplicaCloneDialog->setObjectName("ReplicaCloneDialog");
        ReplicaCloneDialog->resize(352, 123);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReplicaCloneDialog->setWindowIcon(icon);
        horizontalLayout_3 = new QHBoxLayout(ReplicaCloneDialog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ReplicaCloneDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        numClones = new QSpinBox(ReplicaCloneDialog);
        numClones->setObjectName("numClones");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(numClones->sizePolicy().hasHeightForWidth());
        numClones->setSizePolicy(sizePolicy);
        numClones->setMinimum(1);
        numClones->setMaximum(100000);

        horizontalLayout->addWidget(numClones);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        cbRecursive = new QCheckBox(ReplicaCloneDialog);
        cbRecursive->setObjectName("cbRecursive");

        verticalLayout_2->addWidget(cbRecursive);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addIndex = new QPushButton(ReplicaCloneDialog);
        addIndex->setObjectName("addIndex");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addIndex->sizePolicy().hasHeightForWidth());
        addIndex->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(addIndex);

        removeIndex = new QPushButton(ReplicaCloneDialog);
        removeIndex->setObjectName("removeIndex");

        horizontalLayout_2->addWidget(removeIndex);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        buttonBox = new QDialogButtonBox(ReplicaCloneDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(numClones);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ReplicaCloneDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ReplicaCloneDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ReplicaCloneDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ReplicaCloneDialog);
    } // setupUi

    void retranslateUi(QDialog *ReplicaCloneDialog)
    {
        ReplicaCloneDialog->setWindowTitle(QCoreApplication::translate("ReplicaCloneDialog", "Clone Element", nullptr));
        label->setText(QCoreApplication::translate("ReplicaCloneDialog", "Number of clones:", nullptr));
        cbRecursive->setText(QCoreApplication::translate("ReplicaCloneDialog", "Recursive", nullptr));
        addIndex->setText(QCoreApplication::translate("ReplicaCloneDialog", "Add an index...", nullptr));
        removeIndex->setText(QCoreApplication::translate("ReplicaCloneDialog", "Remove  index", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplicaCloneDialog: public Ui_ReplicaCloneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLICACLONEDIALOG_H
