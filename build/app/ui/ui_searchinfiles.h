/********************************************************************************
** Form generated from reading UI file 'searchinfiles.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHINFILES_H
#define UI_SEARCHINFILES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchInFiles
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *pattern2Search;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *filePath;
    QPushButton *cmdOpenFile;
    QCheckBox *groupChk;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdCancel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cmdStart;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *results;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SearchInFiles)
    {
        if (SearchInFiles->objectName().isEmpty())
            SearchInFiles->setObjectName("SearchInFiles");
        SearchInFiles->resize(575, 449);
        verticalLayout_2 = new QVBoxLayout(SearchInFiles);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(SearchInFiles);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pattern2Search = new QComboBox(frame);
        pattern2Search->setObjectName("pattern2Search");
        pattern2Search->setEditable(true);
        pattern2Search->setMaxVisibleItems(16);

        verticalLayout->addWidget(pattern2Search);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        filePath = new QLineEdit(frame);
        filePath->setObjectName("filePath");

        horizontalLayout->addWidget(filePath);

        cmdOpenFile = new QPushButton(frame);
        cmdOpenFile->setObjectName("cmdOpenFile");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdOpenFile->setIcon(icon);

        horizontalLayout->addWidget(cmdOpenFile);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);

        groupChk = new QCheckBox(SearchInFiles);
        groupChk->setObjectName("groupChk");

        verticalLayout_2->addWidget(groupChk);

        progressBar = new QProgressBar(SearchInFiles);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);
        progressBar->setInvertedAppearance(false);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cmdCancel = new QPushButton(SearchInFiles);
        cmdCancel->setObjectName("cmdCancel");
        cmdCancel->setEnabled(false);

        horizontalLayout_2->addWidget(cmdCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        cmdStart = new QPushButton(SearchInFiles);
        cmdStart->setObjectName("cmdStart");

        horizontalLayout_3->addWidget(cmdStart);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        results = new QTableWidget(SearchInFiles);
        results->setObjectName("results");
        results->setSelectionMode(QAbstractItemView::SingleSelection);
        results->setSelectionBehavior(QAbstractItemView::SelectRows);
        results->setGridStyle(Qt::DotLine);

        verticalLayout_2->addWidget(results);

        buttonBox = new QDialogButtonBox(SearchInFiles);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SearchInFiles);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SearchInFiles, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SearchInFiles, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SearchInFiles);
    } // setupUi

    void retranslateUi(QDialog *SearchInFiles)
    {
        SearchInFiles->setWindowTitle(QCoreApplication::translate("SearchInFiles", "Search in files", nullptr));
        label->setText(QCoreApplication::translate("SearchInFiles", "Pattern to search in files:", nullptr));
        label_2->setText(QCoreApplication::translate("SearchInFiles", "hint: the pattern to search is like this: /a/b/c", nullptr));
        label_3->setText(QCoreApplication::translate("SearchInFiles", "File path:", nullptr));
        cmdOpenFile->setText(QString());
        groupChk->setText(QCoreApplication::translate("SearchInFiles", "&Grouping", nullptr));
#if QT_CONFIG(shortcut)
        groupChk->setShortcut(QCoreApplication::translate("SearchInFiles", "Alt+G", nullptr));
#endif // QT_CONFIG(shortcut)
        cmdCancel->setText(QCoreApplication::translate("SearchInFiles", "Cancel", nullptr));
        cmdStart->setText(QCoreApplication::translate("SearchInFiles", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchInFiles: public Ui_SearchInFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHINFILES_H
