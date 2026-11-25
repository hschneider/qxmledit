/********************************************************************************
** Form generated from reading UI file 'charencodingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARENCODINGDIALOG_H
#define UI_CHARENCODINGDIALOG_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharEncodingDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPlainTextEdit *sourceText;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboExport;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *encodedTextGrid;
    QPushButton *removeEncodingCmd;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *encodingCombo;
    QPushButton *addEncodingCmd;
    QLabel *label_10;
    QWidget *tab_char;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_15;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QLineEdit *numericEdit;
    QPushButton *cmdGenerateSequence;
    QLabel *label_14;
    QTableWidget *charExplorerGrid;
    QLabel *label_18;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *enc1;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QTableWidget *grid1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *enc2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QTableWidget *grid2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_7;
    QComboBox *enc3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_10;
    QTableWidget *grid3;
    QWidget *tabCharInfo;
    QVBoxLayout *aNewVerticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioCharByChar;
    QLineEdit *charCharEntry;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioCharByUnicode;
    QLineEdit *charUnicodeValue;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *radioCharByEncoding;
    QLabel *label_20;
    QComboBox *comboCharEncodings;
    QLabel *label_21;
    QLineEdit *charEncodingValue;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *cmdCharSearch;
    QFrame *line;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_23;
    QLabel *charSelected;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *cmdCharFont;
    QTableWidget *charDetails;
    QHBoxLayout *horizontalLayout;
    QCheckBox *hexNumericValues;
    QCheckBox *chkShowCharNames;
    QSpacerItem *horizontalSpacer;
    QPushButton *cmdCodePages;
    QSpacerItem *horizontalSpacer_12;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CharEncodingDialog)
    {
        if (CharEncodingDialog->objectName().isEmpty())
            CharEncodingDialog->setObjectName("CharEncodingDialog");
        CharEncodingDialog->resize(1044, 702);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CharEncodingDialog->setWindowIcon(icon);
        verticalLayout_6 = new QVBoxLayout(CharEncodingDialog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(CharEncodingDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label);

        sourceText = new QPlainTextEdit(CharEncodingDialog);
        sourceText->setObjectName("sourceText");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourceText->sizePolicy().hasHeightForWidth());
        sourceText->setSizePolicy(sizePolicy);
        sourceText->setMaximumSize(QSize(16777215, 100));

        horizontalLayout_2->addWidget(sourceText);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(CharEncodingDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        comboExport = new QComboBox(CharEncodingDialog);
        comboExport->addItem(QString());
        comboExport->addItem(QString());
        comboExport->setObjectName("comboExport");
        comboExport->setEnabled(true);

        verticalLayout->addWidget(comboExport);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_6->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(CharEncodingDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");

        verticalLayout_2->addWidget(label_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        encodedTextGrid = new QTableWidget(tab);
        encodedTextGrid->setObjectName("encodedTextGrid");

        horizontalLayout_3->addWidget(encodedTextGrid);

        removeEncodingCmd = new QPushButton(tab);
        removeEncodingCmd->setObjectName("removeEncodingCmd");

        horizontalLayout_3->addWidget(removeEncodingCmd);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_5);

        encodingCombo = new QComboBox(tab);
        encodingCombo->setObjectName("encodingCombo");

        horizontalLayout_4->addWidget(encodingCombo);

        addEncodingCmd = new QPushButton(tab);
        addEncodingCmd->setObjectName("addEncodingCmd");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addEncodingCmd->sizePolicy().hasHeightForWidth());
        addEncodingCmd->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(addEncodingCmd);

        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setWordWrap(true);

        horizontalLayout_4->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab, QString());
        tab_char = new QWidget();
        tab_char->setObjectName("tab_char");
        verticalLayout_24 = new QVBoxLayout(tab_char);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_15 = new QLabel(tab_char);
        label_15->setObjectName("label_15");

        verticalLayout_3->addWidget(label_15);

        label_16 = new QLabel(tab_char);
        label_16->setObjectName("label_16");

        verticalLayout_3->addWidget(label_16);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        label_17 = new QLabel(tab_char);
        label_17->setObjectName("label_17");

        horizontalLayout_12->addWidget(label_17);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_3 = new QLabel(tab_char);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3->setWordWrap(false);

        horizontalLayout_11->addWidget(label_3);

        numericEdit = new QLineEdit(tab_char);
        numericEdit->setObjectName("numericEdit");

        horizontalLayout_11->addWidget(numericEdit);

        cmdGenerateSequence = new QPushButton(tab_char);
        cmdGenerateSequence->setObjectName("cmdGenerateSequence");

        horizontalLayout_11->addWidget(cmdGenerateSequence);


        verticalLayout_3->addLayout(horizontalLayout_11);

        label_14 = new QLabel(tab_char);
        label_14->setObjectName("label_14");

        verticalLayout_3->addWidget(label_14);

        charExplorerGrid = new QTableWidget(tab_char);
        charExplorerGrid->setObjectName("charExplorerGrid");

        verticalLayout_3->addWidget(charExplorerGrid);

        label_18 = new QLabel(tab_char);
        label_18->setObjectName("label_18");

        verticalLayout_3->addWidget(label_18);


        verticalLayout_24->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_char, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_22 = new QVBoxLayout(tab_2);
        verticalLayout_22->setObjectName("verticalLayout_22");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_9->setFont(font);

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        enc1 = new QComboBox(tab_2);
        enc1->setObjectName("enc1");

        horizontalLayout_5->addWidget(enc1);


        verticalLayout_22->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        grid1 = new QTableWidget(tab_2);
        if (grid1->rowCount() < 2)
            grid1->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        grid1->setVerticalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        grid1->setVerticalHeaderItem(1, __qtablewidgetitem1);
        grid1->setObjectName("grid1");

        horizontalLayout_10->addWidget(grid1);


        verticalLayout_22->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_12 = new QLabel(tab_2);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        horizontalLayout_6->addWidget(label_12);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        enc2 = new QComboBox(tab_2);
        enc2->setObjectName("enc2");

        horizontalLayout_6->addWidget(enc2);


        verticalLayout_22->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        grid2 = new QTableWidget(tab_2);
        if (grid2->rowCount() < 2)
            grid2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        grid2->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        grid2->setVerticalHeaderItem(1, __qtablewidgetitem3);
        grid2->setObjectName("grid2");

        horizontalLayout_9->addWidget(grid2);


        verticalLayout_22->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        horizontalLayout_7->addWidget(label_13);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        enc3 = new QComboBox(tab_2);
        enc3->setObjectName("enc3");

        horizontalLayout_7->addWidget(enc3);


        verticalLayout_22->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);

        grid3 = new QTableWidget(tab_2);
        if (grid3->rowCount() < 2)
            grid3->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        grid3->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        grid3->setVerticalHeaderItem(1, __qtablewidgetitem5);
        grid3->setObjectName("grid3");

        horizontalLayout_8->addWidget(grid3);


        verticalLayout_22->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_2, QString());
        tabCharInfo = new QWidget();
        tabCharInfo->setObjectName("tabCharInfo");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabCharInfo->sizePolicy().hasHeightForWidth());
        tabCharInfo->setSizePolicy(sizePolicy2);
        aNewVerticalLayout = new QVBoxLayout(tabCharInfo);
        aNewVerticalLayout->setObjectName("aNewVerticalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_19 = new QLabel(tabCharInfo);
        label_19->setObjectName("label_19");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy3);

        verticalLayout_5->addWidget(label_19);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalSpacer_14 = new QSpacerItem(90, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_14);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        radioCharByChar = new QRadioButton(tabCharInfo);
        radioCharByChar->setObjectName("radioCharByChar");

        horizontalLayout_13->addWidget(radioCharByChar);

        charCharEntry = new QLineEdit(tabCharInfo);
        charCharEntry->setObjectName("charCharEntry");
        sizePolicy1.setHeightForWidth(charCharEntry->sizePolicy().hasHeightForWidth());
        charCharEntry->setSizePolicy(sizePolicy1);
        charCharEntry->setMaxLength(1);

        horizontalLayout_13->addWidget(charCharEntry);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        radioCharByUnicode = new QRadioButton(tabCharInfo);
        radioCharByUnicode->setObjectName("radioCharByUnicode");

        horizontalLayout_14->addWidget(radioCharByUnicode);

        charUnicodeValue = new QLineEdit(tabCharInfo);
        charUnicodeValue->setObjectName("charUnicodeValue");

        horizontalLayout_14->addWidget(charUnicodeValue);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_16);

        label_24 = new QLabel(tabCharInfo);
        label_24->setObjectName("label_24");
        sizePolicy3.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setItalic(true);
        label_24->setFont(font1);

        horizontalLayout_14->addWidget(label_24);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        radioCharByEncoding = new QRadioButton(tabCharInfo);
        radioCharByEncoding->setObjectName("radioCharByEncoding");

        horizontalLayout_15->addWidget(radioCharByEncoding);

        label_20 = new QLabel(tabCharInfo);
        label_20->setObjectName("label_20");
        sizePolicy3.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy3);

        horizontalLayout_15->addWidget(label_20);

        comboCharEncodings = new QComboBox(tabCharInfo);
        comboCharEncodings->setObjectName("comboCharEncodings");

        horizontalLayout_15->addWidget(comboCharEncodings);

        label_21 = new QLabel(tabCharInfo);
        label_21->setObjectName("label_21");
        sizePolicy3.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy3);

        horizontalLayout_15->addWidget(label_21);

        charEncodingValue = new QLineEdit(tabCharInfo);
        charEncodingValue->setObjectName("charEncodingValue");

        horizontalLayout_15->addWidget(charEncodingValue);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_17);


        verticalLayout_4->addLayout(horizontalLayout_15);


        horizontalLayout_21->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_21);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_18);

        cmdCharSearch = new QPushButton(tabCharInfo);
        cmdCharSearch->setObjectName("cmdCharSearch");
        sizePolicy1.setHeightForWidth(cmdCharSearch->sizePolicy().hasHeightForWidth());
        cmdCharSearch->setSizePolicy(sizePolicy1);

        horizontalLayout_17->addWidget(cmdCharSearch);


        verticalLayout_5->addLayout(horizontalLayout_17);

        line = new QFrame(tabCharInfo);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_5->addWidget(line);

        label_4 = new QLabel(tabCharInfo);
        label_4->setObjectName("label_4");
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_4->setFont(font2);

        verticalLayout_5->addWidget(label_4);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_23 = new QLabel(tabCharInfo);
        label_23->setObjectName("label_23");
        sizePolicy3.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy3);

        horizontalLayout_16->addWidget(label_23);

        charSelected = new QLabel(tabCharInfo);
        charSelected->setObjectName("charSelected");
        sizePolicy3.setHeightForWidth(charSelected->sizePolicy().hasHeightForWidth());
        charSelected->setSizePolicy(sizePolicy3);
        charSelected->setFrameShape(QFrame::Panel);
        charSelected->setFrameShadow(QFrame::Plain);
        charSelected->setAlignment(Qt::AlignCenter);
        charSelected->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_16->addWidget(charSelected);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_13);

        cmdCharFont = new QPushButton(tabCharInfo);
        cmdCharFont->setObjectName("cmdCharFont");

        horizontalLayout_16->addWidget(cmdCharFont);


        verticalLayout_5->addLayout(horizontalLayout_16);

        charDetails = new QTableWidget(tabCharInfo);
        charDetails->setObjectName("charDetails");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(charDetails->sizePolicy().hasHeightForWidth());
        charDetails->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(charDetails);


        aNewVerticalLayout->addLayout(verticalLayout_5);

        tabWidget->addTab(tabCharInfo, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        hexNumericValues = new QCheckBox(CharEncodingDialog);
        hexNumericValues->setObjectName("hexNumericValues");

        horizontalLayout->addWidget(hexNumericValues);

        chkShowCharNames = new QCheckBox(CharEncodingDialog);
        chkShowCharNames->setObjectName("chkShowCharNames");

        horizontalLayout->addWidget(chkShowCharNames);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cmdCodePages = new QPushButton(CharEncodingDialog);
        cmdCodePages->setObjectName("cmdCodePages");

        horizontalLayout->addWidget(cmdCodePages);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        buttonBox = new QDialogButtonBox(CharEncodingDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_6->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(numericEdit);
        label_20->setBuddy(comboCharEncodings);
        label_21->setBuddy(charEncodingValue);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CharEncodingDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CharEncodingDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CharEncodingDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CharEncodingDialog);
    } // setupUi

    void retranslateUi(QDialog *CharEncodingDialog)
    {
        CharEncodingDialog->setWindowTitle(QCoreApplication::translate("CharEncodingDialog", "Encoding Explorer", nullptr));
        label->setText(QCoreApplication::translate("CharEncodingDialog", "Source text:", nullptr));
        label_2->setText(QCoreApplication::translate("CharEncodingDialog", "Paste here the text to be examined", nullptr));
        comboExport->setItemText(0, QCoreApplication::translate("CharEncodingDialog", "Export", nullptr));
        comboExport->setItemText(1, QCoreApplication::translate("CharEncodingDialog", "As UTF-8 binary stream", nullptr));

        label_11->setText(QCoreApplication::translate("CharEncodingDialog", "Show how the source text is encoded using different codecs. You can add or remove encodings", nullptr));
        removeEncodingCmd->setText(QCoreApplication::translate("CharEncodingDialog", "Remove", nullptr));
        label_5->setText(QCoreApplication::translate("CharEncodingDialog", "Add an encoding:", nullptr));
        addEncodingCmd->setText(QCoreApplication::translate("CharEncodingDialog", "Add", nullptr));
        label_10->setText(QCoreApplication::translate("CharEncodingDialog", "Add encodings to the table selecting an encoding from the combo, then triggering \"Add\".", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CharEncodingDialog", "String Explorer", nullptr));
        label_15->setText(QCoreApplication::translate("CharEncodingDialog", "Insert numeric values and see how they are interpreted using different encodings.", nullptr));
        label_16->setText(QCoreApplication::translate("CharEncodingDialog", "Hexadecimal values are prefixed by 0x, octals by 0, use a space as separator", nullptr));
        label_17->setText(QCoreApplication::translate("CharEncodingDialog", "Sample: 0x61 98 99 0x64", nullptr));
        label_3->setText(QCoreApplication::translate("CharEncodingDialog", "&Numeric values:", nullptr));
#if QT_CONFIG(tooltip)
        cmdGenerateSequence->setToolTip(QCoreApplication::translate("CharEncodingDialog", "<html><head/><body><p>Creates a sequence of numbers 128..255 (32..255 if using CTRL key)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdGenerateSequence->setText(QCoreApplication::translate("CharEncodingDialog", "&Sequence 128..255", nullptr));
        label_14->setText(QCoreApplication::translate("CharEncodingDialog", "Textual representation in different encodings:", nullptr));
        label_18->setText(QCoreApplication::translate("CharEncodingDialog", "This feature uses the encodings defined in the \"String Explorer\" tab.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_char), QCoreApplication::translate("CharEncodingDialog", "Character Explorer", nullptr));
        label_9->setText(QCoreApplication::translate("CharEncodingDialog", "1", nullptr));
        label_6->setText(QCoreApplication::translate("CharEncodingDialog", "text written using the encoding", nullptr));
        QTableWidgetItem *___qtablewidgetitem = grid1->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CharEncodingDialog", "Text", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = grid1->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CharEncodingDialog", "Values", nullptr));
        label_12->setText(QCoreApplication::translate("CharEncodingDialog", "2", nullptr));
        label_7->setText(QCoreApplication::translate("CharEncodingDialog", "read using this encoding, then written again using the encoding", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = grid2->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CharEncodingDialog", "Text", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = grid2->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CharEncodingDialog", "Values", nullptr));
        label_13->setText(QCoreApplication::translate("CharEncodingDialog", "3", nullptr));
        label_8->setText(QCoreApplication::translate("CharEncodingDialog", "read using this encoding", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = grid3->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CharEncodingDialog", "Text", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = grid3->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CharEncodingDialog", "Values", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CharEncodingDialog", "Chains Explorer", nullptr));
        label_19->setText(QCoreApplication::translate("CharEncodingDialog", "Search a character by:", nullptr));
        radioCharByChar->setText(QCoreApplication::translate("CharEncodingDialog", "&character:", nullptr));
        radioCharByUnicode->setText(QCoreApplication::translate("CharEncodingDialog", "&Unicode code point:", nullptr));
        label_24->setText(QCoreApplication::translate("CharEncodingDialog", "Prefix with 0x for hexadecimal", nullptr));
        radioCharByEncoding->setText(QCoreApplication::translate("CharEncodingDialog", "encod&ing value:", nullptr));
        label_20->setText(QCoreApplication::translate("CharEncodingDialog", "&encoding:", nullptr));
        label_21->setText(QCoreApplication::translate("CharEncodingDialog", "&value:", nullptr));
        cmdCharSearch->setText(QCoreApplication::translate("CharEncodingDialog", "&Search", nullptr));
        label_4->setText(QCoreApplication::translate("CharEncodingDialog", "Info", nullptr));
        label_23->setText(QCoreApplication::translate("CharEncodingDialog", "Character:", nullptr));
        charSelected->setText(QCoreApplication::translate("CharEncodingDialog", " --- ", nullptr));
        cmdCharFont->setText(QCoreApplication::translate("CharEncodingDialog", "Change font...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCharInfo), QCoreApplication::translate("CharEncodingDialog", "Character Info", nullptr));
        hexNumericValues->setText(QCoreApplication::translate("CharEncodingDialog", "Hexadecimal numeric values", nullptr));
        chkShowCharNames->setText(QCoreApplication::translate("CharEncodingDialog", "Show character names", nullptr));
        cmdCodePages->setText(QCoreApplication::translate("CharEncodingDialog", "Code Pages Detail...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharEncodingDialog: public Ui_CharEncodingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARENCODINGDIALOG_H
