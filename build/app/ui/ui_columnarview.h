/********************************************************************************
** Form generated from reading UI file 'columnarview.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNARVIEW_H
#define UI_COLUMNARVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColumnarView
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *showSplit;
    QSplitter *splitter;
    QColumnView *columnView;
    QColumnView *columnView2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColumnarView)
    {
        if (ColumnarView->objectName().isEmpty())
            ColumnarView->setObjectName("ColumnarView");
        ColumnarView->setWindowModality(Qt::WindowModal);
        ColumnarView->resize(909, 616);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColumnarView->sizePolicy().hasHeightForWidth());
        ColumnarView->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ColumnarView->setWindowIcon(icon);
        ColumnarView->setSizeGripEnabled(true);
        ColumnarView->setModal(true);
        verticalLayout = new QVBoxLayout(ColumnarView);
        verticalLayout->setObjectName("verticalLayout");
        showSplit = new QCheckBox(ColumnarView);
        showSplit->setObjectName("showSplit");

        verticalLayout->addWidget(showSplit);

        splitter = new QSplitter(ColumnarView);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        columnView = new QColumnView(splitter);
        columnView->setObjectName("columnView");
        columnView->setAlternatingRowColors(true);
        splitter->addWidget(columnView);
        columnView2 = new QColumnView(splitter);
        columnView2->setObjectName("columnView2");
        columnView2->setAlternatingRowColors(true);
        splitter->addWidget(columnView2);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(ColumnarView);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColumnarView);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ColumnarView, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ColumnarView, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ColumnarView);
    } // setupUi

    void retranslateUi(QDialog *ColumnarView)
    {
        ColumnarView->setWindowTitle(QCoreApplication::translate("ColumnarView", "Columnar View", nullptr));
        showSplit->setText(QCoreApplication::translate("ColumnarView", "Split view", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnarView: public Ui_ColumnarView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNARVIEW_H
