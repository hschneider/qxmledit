/********************************************************************************
** Form generated from reading UI file 'configoptions.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGOPTIONS_H
#define UI_CONFIGOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigOptions
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QRadioButton *pgmLocation;
    QRadioButton *pgmDefault;
    QRadioButton *pgmThisDirectory;
    QLabel *label;
    QLabel *pgmDirValue;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *stdDirValue;
    QLineEdit *aDirectory;
    QPushButton *openLocation;
    QPushButton *browseFolderCmd;
    QFrame *line;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigOptions)
    {
        if (ConfigOptions->objectName().isEmpty())
            ConfigOptions->setObjectName("ConfigOptions");
        ConfigOptions->resize(572, 428);
        verticalLayout = new QVBoxLayout(ConfigOptions);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(ConfigOptions);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        groupBox->setFont(font);
        pgmLocation = new QRadioButton(groupBox);
        pgmLocation->setObjectName("pgmLocation");
        pgmLocation->setGeometry(QRect(30, 50, 291, 21));
        pgmDefault = new QRadioButton(groupBox);
        pgmDefault->setObjectName("pgmDefault");
        pgmDefault->setGeometry(QRect(30, 120, 351, 21));
        pgmThisDirectory = new QRadioButton(groupBox);
        pgmThisDirectory->setObjectName("pgmThisDirectory");
        pgmThisDirectory->setGeometry(QRect(30, 190, 251, 21));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 241, 16));
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pgmDirValue = new QLabel(groupBox);
        pgmDirValue->setObjectName("pgmDirValue");
        pgmDirValue->setGeometry(QRect(100, 80, 361, 16));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(true);
        pgmDirValue->setFont(font2);
        pgmDirValue->setMouseTracking(false);
        pgmDirValue->setFrameShape(QFrame::NoFrame);
        pgmDirValue->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 46, 14));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 150, 46, 14));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stdDirValue = new QLabel(groupBox);
        stdDirValue->setObjectName("stdDirValue");
        stdDirValue->setGeometry(QRect(100, 150, 361, 16));
        QFont font3;
        font3.setItalic(true);
        stdDirValue->setFont(font3);
        stdDirValue->setFrameShape(QFrame::NoFrame);
        stdDirValue->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        aDirectory = new QLineEdit(groupBox);
        aDirectory->setObjectName("aDirectory");
        aDirectory->setGeometry(QRect(80, 230, 381, 24));
        openLocation = new QPushButton(groupBox);
        openLocation->setObjectName("openLocation");
        openLocation->setGeometry(QRect(270, 300, 211, 31));
        browseFolderCmd = new QPushButton(groupBox);
        browseFolderCmd->setObjectName("browseFolderCmd");
        browseFolderCmd->setGeometry(QRect(470, 230, 41, 27));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mime/folder"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        browseFolderCmd->setIcon(icon);
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 280, 521, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(groupBox);

        label_4 = new QLabel(ConfigOptions);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        buttonBox = new QDialogButtonBox(ConfigOptions);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(pgmLocation, pgmDefault);
        QWidget::setTabOrder(pgmDefault, pgmThisDirectory);
        QWidget::setTabOrder(pgmThisDirectory, aDirectory);
        QWidget::setTabOrder(aDirectory, openLocation);
        QWidget::setTabOrder(openLocation, buttonBox);

        retranslateUi(ConfigOptions);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigOptions, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigOptions, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ConfigOptions);
    } // setupUi

    void retranslateUi(QDialog *ConfigOptions)
    {
        ConfigOptions->setWindowTitle(QCoreApplication::translate("ConfigOptions", "Configuration", nullptr));
        groupBox->setTitle(QString());
        pgmLocation->setText(QCoreApplication::translate("ConfigOptions", "Use the &program directory", nullptr));
        pgmDefault->setText(QCoreApplication::translate("ConfigOptions", "Use the &standard Operating System location", nullptr));
        pgmThisDirectory->setText(QCoreApplication::translate("ConfigOptions", "Use the &following directory:", nullptr));
        label->setText(QCoreApplication::translate("ConfigOptions", "Style Files Location", nullptr));
        pgmDirValue->setText(QString());
        label_2->setText(QCoreApplication::translate("ConfigOptions", "value:", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigOptions", "value:", nullptr));
        stdDirValue->setText(QString());
        openLocation->setText(QCoreApplication::translate("ConfigOptions", "&Open Location in the Browser", nullptr));
#if QT_CONFIG(tooltip)
        browseFolderCmd->setToolTip(QCoreApplication::translate("ConfigOptions", "Browse the file system.", nullptr));
#endif // QT_CONFIG(tooltip)
        browseFolderCmd->setText(QString());
        label_4->setText(QCoreApplication::translate("ConfigOptions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">Warning</span><span style=\" font-size:9pt;\">: changes will be applied only after a program restart.</span></p></td></tr></table></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigOptions: public Ui_ConfigOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGOPTIONS_H
