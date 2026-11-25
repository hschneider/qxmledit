/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *copyR;
    QLabel *lblProjectLocation;
    QLabel *label_3;
    QLabel *icons;
    QLabel *license;
    QWidget *tab_2;
    QLabel *lblIssues;
    QTreeWidget *authorsWidget;
    QWidget *tab_3;
    QLabel *label_4;
    QTableWidget *tablePaths;
    QLabel *label;
    QLabel *applicationName;
    QFrame *line;
    QLabel *envir;
    QLabel *label_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(652, 478);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(652, 478));
        AboutDialog->setMaximumSize(QSize(652, 478));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AboutDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 130, 601, 291));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName("tab");
        copyR = new QLabel(tab);
        copyR->setObjectName("copyR");
        copyR->setGeometry(QRect(30, 60, 411, 16));
        lblProjectLocation = new QLabel(tab);
        lblProjectLocation->setObjectName("lblProjectLocation");
        lblProjectLocation->setGeometry(QRect(30, 90, 521, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblProjectLocation->sizePolicy().hasHeightForWidth());
        lblProjectLocation->setSizePolicy(sizePolicy1);
        lblProjectLocation->setOpenExternalLinks(true);
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 20, 531, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif")});
        font.setItalic(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        icons = new QLabel(tab);
        icons->setObjectName("icons");
        icons->setGeometry(QRect(30, 200, 531, 51));
        icons->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        icons->setWordWrap(true);
        license = new QLabel(tab);
        license->setObjectName("license");
        license->setGeometry(QRect(30, 150, 441, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        lblIssues = new QLabel(tab_2);
        lblIssues->setObjectName("lblIssues");
        lblIssues->setGeometry(QRect(20, 10, 511, 16));
        lblIssues->setOpenExternalLinks(true);
        lblIssues->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        authorsWidget = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        authorsWidget->setHeaderItem(__qtreewidgetitem);
        authorsWidget->setObjectName("authorsWidget");
        authorsWidget->setGeometry(QRect(10, 30, 571, 221));
        authorsWidget->header()->setVisible(false);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_4 = new QLabel(tab_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 491, 18));
        tablePaths = new QTableWidget(tab_3);
        if (tablePaths->columnCount() < 2)
            tablePaths->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePaths->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePaths->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tablePaths->setObjectName("tablePaths");
        tablePaths->setGeometry(QRect(10, 40, 571, 211));
        tablePaths->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tablePaths->setAlternatingRowColors(true);
        tablePaths->setSelectionMode(QAbstractItemView::SingleSelection);
        tablePaths->setSortingEnabled(true);
        tablePaths->setColumnCount(2);
        tablePaths->verticalHeader()->setVisible(false);
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 61, 51));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/images/icon.png")));
        label->setScaledContents(true);
        applicationName = new QLabel(AboutDialog);
        applicationName->setObjectName("applicationName");
        applicationName->setGeometry(QRect(150, 0, 471, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif")});
        font1.setPointSize(24);
        font1.setBold(true);
        applicationName->setFont(font1);
        applicationName->setTextFormat(Qt::RichText);
        applicationName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line = new QFrame(AboutDialog);
        line->setObjectName("line");
        line->setGeometry(QRect(100, 80, 491, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        envir = new QLabel(AboutDialog);
        envir->setObjectName("envir");
        envir->setGeometry(QRect(100, 100, 511, 16));
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 651, 81));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.469613, y1:1, x2:0.48563, y2:0.477, stop:0 rgba(187, 228, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_2->raise();
        buttonBox->raise();
        tabWidget->raise();
        label->raise();
        applicationName->raise();
        line->raise();
        envir->raise();

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About QXmlEdit", nullptr));
        copyR->setText(QCoreApplication::translate("AboutDialog", "(c) 2008-2023 Luca Bellonda", nullptr));
        lblProjectLocation->setText(QCoreApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"$JPSITE\"><span style=\" text-decoration: underline; color:#507e41;\">$JPSITE</span></a>\n"
"<br/>\n"
"<a href=\"$PJLOC\"><span style=\" text-decoration: underline; color:#507e41;\">$PJLOC</span></a>\n"
"</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "A simple XML Editor", nullptr));
        icons->setText(QCoreApplication::translate("AboutDialog", "Icons by Oxygen (www.oxygen-icons.org), covered by LGPLv3 license (see README document)", nullptr));
        license->setText(QCoreApplication::translate("AboutDialog", "License:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AboutDialog", "About", nullptr));
        lblIssues->setText(QCoreApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Please use </span><a href=\"$ISSUESLOC\"><span style=\" text-decoration: underline; color:#507e41;\">$ISSUESLOC</span></a><span style=\" font-size:9pt;\"> to report bugs.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AboutDialog", "Authors", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Information about the configuration", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablePaths->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AboutDialog", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablePaths->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AboutDialog", "Value", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("AboutDialog", "Environment", nullptr));
        label->setText(QString());
        applicationName->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>QXmlEdit <span style=\" font-size:18pt;\">xxx</span></p></body></html>", nullptr));
        envir->setText(QCoreApplication::translate("AboutDialog", "environment", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
