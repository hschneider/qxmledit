/********************************************************************************
** Form generated from reading UI file 'guidedvalidationdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDEDVALIDATIONDIALOG_H
#define UI_GUIDEDVALIDATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuidedValidationDialog
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *statusXML;
    QLabel *label_2;
    QLineEdit *fileNameXML;
    QPushButton *cmdLoadXML;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *statusXSD;
    QLabel *label_3;
    QLineEdit *fileNameXSD;
    QPushButton *cmdLoadXSD;
    QSpacerItem *verticalSpacer_2;
    QStackedWidget *state;
    QWidget *pageok;
    QHBoxLayout *horizontalLayout_2;
    QLabel *msgOK;
    QWidget *pageempty;
    QWidget *pageko;
    QHBoxLayout *horizontalLayout_3;
    QLabel *msgError;
    QWidget *pagewait;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QWidget *pageError;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *errorCause;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *GuidedValidationDialog)
    {
        if (GuidedValidationDialog->objectName().isEmpty())
            GuidedValidationDialog->setObjectName("GuidedValidationDialog");
        GuidedValidationDialog->setWindowModality(Qt::ApplicationModal);
        GuidedValidationDialog->resize(780, 406);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        GuidedValidationDialog->setWindowIcon(icon);
        GuidedValidationDialog->setModal(true);
        horizontalLayout_7 = new QHBoxLayout(GuidedValidationDialog);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(GuidedValidationDialog);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(GuidedValidationDialog);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        statusXML = new QLabel(GuidedValidationDialog);
        statusXML->setObjectName("statusXML");
        statusXML->setPixmap(QPixmap(QString::fromUtf8(":/configuration/validation")));
        statusXML->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(statusXML);

        label_2 = new QLabel(GuidedValidationDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        fileNameXML = new QLineEdit(GuidedValidationDialog);
        fileNameXML->setObjectName("fileNameXML");
        fileNameXML->setReadOnly(true);

        horizontalLayout_5->addWidget(fileNameXML);

        cmdLoadXML = new QPushButton(GuidedValidationDialog);
        cmdLoadXML->setObjectName("cmdLoadXML");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdLoadXML->setIcon(icon1);

        horizontalLayout_5->addWidget(cmdLoadXML);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        statusXSD = new QLabel(GuidedValidationDialog);
        statusXSD->setObjectName("statusXSD");
        statusXSD->setPixmap(QPixmap(QString::fromUtf8(":/configuration/validation")));
        statusXSD->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(statusXSD);

        label_3 = new QLabel(GuidedValidationDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        fileNameXSD = new QLineEdit(GuidedValidationDialog);
        fileNameXSD->setObjectName("fileNameXSD");
        fileNameXSD->setReadOnly(true);

        horizontalLayout_6->addWidget(fileNameXSD);

        cmdLoadXSD = new QPushButton(GuidedValidationDialog);
        cmdLoadXSD->setObjectName("cmdLoadXSD");
        cmdLoadXSD->setIcon(icon1);

        horizontalLayout_6->addWidget(cmdLoadXSD);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        state = new QStackedWidget(GuidedValidationDialog);
        state->setObjectName("state");
        pageok = new QWidget();
        pageok->setObjectName("pageok");
        horizontalLayout_2 = new QHBoxLayout(pageok);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        msgOK = new QLabel(pageok);
        msgOK->setObjectName("msgOK");
        QFont font1;
        font1.setBold(true);
        msgOK->setFont(font1);
        msgOK->setStyleSheet(QString::fromUtf8("background-color: rgb(115, 210, 22);"));
        msgOK->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(msgOK);

        state->addWidget(pageok);
        pageempty = new QWidget();
        pageempty->setObjectName("pageempty");
        state->addWidget(pageempty);
        pageko = new QWidget();
        pageko->setObjectName("pageko");
        pageko->setFont(font1);
        horizontalLayout_3 = new QHBoxLayout(pageko);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        msgError = new QLabel(pageko);
        msgError->setObjectName("msgError");
        msgError->setFont(font1);
        msgError->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 0, 0);\n"
"color: rgb(243, 243, 243);"));
        msgError->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(msgError);

        state->addWidget(pageko);
        pagewait = new QWidget();
        pagewait->setObjectName("pagewait");
        horizontalLayout = new QHBoxLayout(pagewait);
        horizontalLayout->setObjectName("horizontalLayout");
        progressBar = new QProgressBar(pagewait);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        horizontalLayout->addWidget(progressBar);

        state->addWidget(pagewait);
        pageError = new QWidget();
        pageError->setObjectName("pageError");
        horizontalLayout_4 = new QHBoxLayout(pageError);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(pageError);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        state->addWidget(pageError);

        verticalLayout->addWidget(state);

        errorCause = new QLabel(GuidedValidationDialog);
        errorCause->setObjectName("errorCause");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errorCause->sizePolicy().hasHeightForWidth());
        errorCause->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(errorCause);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        buttonBox = new QDialogButtonBox(GuidedValidationDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_7->addLayout(verticalLayout_2);


        retranslateUi(GuidedValidationDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GuidedValidationDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GuidedValidationDialog, qOverload<>(&QDialog::reject));

        state->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GuidedValidationDialog);
    } // setupUi

    void retranslateUi(QDialog *GuidedValidationDialog)
    {
        GuidedValidationDialog->setWindowTitle(QCoreApplication::translate("GuidedValidationDialog", "XSD Validation", nullptr));
        label_4->setText(QCoreApplication::translate("GuidedValidationDialog", "Validate an XML file with an XSD schema", nullptr));
        label_5->setText(QCoreApplication::translate("GuidedValidationDialog", " Load or drop files to activate.\n"
"", nullptr));
        statusXML->setText(QString());
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("GuidedValidationDialog", "Select a XML file or drop one from file manager.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("GuidedValidationDialog", "XML Data", nullptr));
#if QT_CONFIG(tooltip)
        fileNameXML->setToolTip(QCoreApplication::translate("GuidedValidationDialog", "XML to validate.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cmdLoadXML->setToolTip(QCoreApplication::translate("GuidedValidationDialog", "Load XML to Validate", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdLoadXML->setText(QCoreApplication::translate("GuidedValidationDialog", " Load", nullptr));
        statusXSD->setText(QString());
#if QT_CONFIG(tooltip)
        label_3->setToolTip(QCoreApplication::translate("GuidedValidationDialog", "Select a XSD schema file or drop one from file manager.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("GuidedValidationDialog", "Schema", nullptr));
#if QT_CONFIG(tooltip)
        fileNameXSD->setToolTip(QCoreApplication::translate("GuidedValidationDialog", "XSD for validation.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cmdLoadXSD->setToolTip(QCoreApplication::translate("GuidedValidationDialog", "Load validation XSD.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdLoadXSD->setText(QCoreApplication::translate("GuidedValidationDialog", " Load", nullptr));
        msgOK->setText(QCoreApplication::translate("GuidedValidationDialog", "XML is valid", nullptr));
        msgError->setText(QCoreApplication::translate("GuidedValidationDialog", "XML is invalid", nullptr));
        label->setText(QCoreApplication::translate("GuidedValidationDialog", "Error", nullptr));
        errorCause->setText(QCoreApplication::translate("GuidedValidationDialog", "Cause:....", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuidedValidationDialog: public Ui_GuidedValidationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDEDVALIDATIONDIALOG_H
