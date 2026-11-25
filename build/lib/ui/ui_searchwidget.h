/********************************************************************************
** Form generated from reading UI file 'searchwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIDGET_H
#define UI_SEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *searchGroup;
    QVBoxLayout *ricercaLayout;
    QHBoxLayout *searchTop;
    QPushButton *closeSearchPanel;
    QLabel *lblXPath;
    QLabel *textLabel;
    QComboBox *searchBox;
    QToolButton *clearText;
    QToolButton *cmdSearchlets;
    QLabel *info;
    QPushButton *findButton;
    QPushButton *cmdPrev;
    QPushButton *cmdNext;
    QPushButton *counting;
    QCheckBox *useXQuery;
    QPushButton *cmdOpenAdvancedPanel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelScope;
    QComboBox *searchScope;
    QLabel *searchLabel;
    QComboBox *searchLocation;
    QCheckBox *isMatchExactValue;
    QCheckBox *isCaseSensitive;
    QCheckBox *isOnlyChildren;
    QHBoxLayout *searchBottom;
    QLabel *occNumber;
    QLabel *lblSize;
    QLabel *sizeOfSearch;
    QSpacerItem *horizontalSpacer;
    QCheckBox *wrapAround;
    QCheckBox *closeUnrelated;
    QCheckBox *selectionToBookmarks;
    QCheckBox *showSize;
    QGroupBox *replaceGroup;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *replacement;
    QToolButton *cmdReplSkipPrev;
    QToolButton *cmdReplSkipNext;
    QToolButton *cmdReplReplPrev;
    QToolButton *cmdReplReplNext;
    QPushButton *cmdReplaceAll;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName("SearchWidget");
        SearchWidget->resize(1016, 281);
        verticalLayout = new QVBoxLayout(SearchWidget);
        verticalLayout->setObjectName("verticalLayout");
        searchGroup = new QGroupBox(SearchWidget);
        searchGroup->setObjectName("searchGroup");
        searchGroup->setFlat(false);
        ricercaLayout = new QVBoxLayout(searchGroup);
        ricercaLayout->setObjectName("ricercaLayout");
        searchTop = new QHBoxLayout();
        searchTop->setObjectName("searchTop");
        closeSearchPanel = new QPushButton(searchGroup);
        closeSearchPanel->setObjectName("closeSearchPanel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeSearchPanel->sizePolicy().hasHeightForWidth());
        closeSearchPanel->setSizePolicy(sizePolicy);
        closeSearchPanel->setFocusPolicy(Qt::ClickFocus);
        closeSearchPanel->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/quit/images/window-close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        closeSearchPanel->setIcon(icon);
        closeSearchPanel->setFlat(true);

        searchTop->addWidget(closeSearchPanel);

        lblXPath = new QLabel(searchGroup);
        lblXPath->setObjectName("lblXPath");
        QFont font;
        font.setBold(true);
        lblXPath->setFont(font);
        lblXPath->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        lblXPath->setFrameShape(QFrame::Box);
        lblXPath->setFrameShadow(QFrame::Sunken);

        searchTop->addWidget(lblXPath);

        textLabel = new QLabel(searchGroup);
        textLabel->setObjectName("textLabel");
        textLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        searchTop->addWidget(textLabel);

        searchBox = new QComboBox(searchGroup);
        searchBox->setObjectName("searchBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy1);
        searchBox->setEditable(true);

        searchTop->addWidget(searchBox);

        clearText = new QToolButton(searchGroup);
        clearText->setObjectName("clearText");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/editText/images/edit-clear-locationbar-rtl.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearText->setIcon(icon1);

        searchTop->addWidget(clearText);

        cmdSearchlets = new QToolButton(searchGroup);
        cmdSearchlets->setObjectName("cmdSearchlets");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdSearchlets->setIcon(icon2);
        cmdSearchlets->setPopupMode(QToolButton::MenuButtonPopup);

        searchTop->addWidget(cmdSearchlets);

        info = new QLabel(searchGroup);
        info->setObjectName("info");
        info->setPixmap(QPixmap(QString::fromUtf8(":/xsdimages/documentinfo")));

        searchTop->addWidget(info);

        findButton = new QPushButton(searchGroup);
        findButton->setObjectName("findButton");

        searchTop->addWidget(findButton);

        cmdPrev = new QPushButton(searchGroup);
        cmdPrev->setObjectName("cmdPrev");

        searchTop->addWidget(cmdPrev);

        cmdNext = new QPushButton(searchGroup);
        cmdNext->setObjectName("cmdNext");

        searchTop->addWidget(cmdNext);

        counting = new QPushButton(searchGroup);
        counting->setObjectName("counting");

        searchTop->addWidget(counting);

        useXQuery = new QCheckBox(searchGroup);
        useXQuery->setObjectName("useXQuery");

        searchTop->addWidget(useXQuery);

        cmdOpenAdvancedPanel = new QPushButton(searchGroup);
        cmdOpenAdvancedPanel->setObjectName("cmdOpenAdvancedPanel");

        searchTop->addWidget(cmdOpenAdvancedPanel);


        ricercaLayout->addLayout(searchTop);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelScope = new QLabel(searchGroup);
        labelScope->setObjectName("labelScope");
        labelScope->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelScope);

        searchScope = new QComboBox(searchGroup);
        searchScope->setObjectName("searchScope");
        sizePolicy1.setHeightForWidth(searchScope->sizePolicy().hasHeightForWidth());
        searchScope->setSizePolicy(sizePolicy1);
        searchScope->setEditable(true);

        horizontalLayout_2->addWidget(searchScope);

        searchLabel = new QLabel(searchGroup);
        searchLabel->setObjectName("searchLabel");
        searchLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(searchLabel);

        searchLocation = new QComboBox(searchGroup);
        searchLocation->setObjectName("searchLocation");
        searchLocation->setEditable(false);

        horizontalLayout_2->addWidget(searchLocation);

        isMatchExactValue = new QCheckBox(searchGroup);
        isMatchExactValue->setObjectName("isMatchExactValue");

        horizontalLayout_2->addWidget(isMatchExactValue);

        isCaseSensitive = new QCheckBox(searchGroup);
        isCaseSensitive->setObjectName("isCaseSensitive");

        horizontalLayout_2->addWidget(isCaseSensitive);

        isOnlyChildren = new QCheckBox(searchGroup);
        isOnlyChildren->setObjectName("isOnlyChildren");

        horizontalLayout_2->addWidget(isOnlyChildren);


        ricercaLayout->addLayout(horizontalLayout_2);

        searchBottom = new QHBoxLayout();
        searchBottom->setObjectName("searchBottom");
        occNumber = new QLabel(searchGroup);
        occNumber->setObjectName("occNumber");

        searchBottom->addWidget(occNumber);

        lblSize = new QLabel(searchGroup);
        lblSize->setObjectName("lblSize");
        lblSize->setFont(font);

        searchBottom->addWidget(lblSize);

        sizeOfSearch = new QLabel(searchGroup);
        sizeOfSearch->setObjectName("sizeOfSearch");

        searchBottom->addWidget(sizeOfSearch);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        searchBottom->addItem(horizontalSpacer);

        wrapAround = new QCheckBox(searchGroup);
        wrapAround->setObjectName("wrapAround");

        searchBottom->addWidget(wrapAround);

        closeUnrelated = new QCheckBox(searchGroup);
        closeUnrelated->setObjectName("closeUnrelated");

        searchBottom->addWidget(closeUnrelated);

        selectionToBookmarks = new QCheckBox(searchGroup);
        selectionToBookmarks->setObjectName("selectionToBookmarks");

        searchBottom->addWidget(selectionToBookmarks);

        showSize = new QCheckBox(searchGroup);
        showSize->setObjectName("showSize");

        searchBottom->addWidget(showSize);


        ricercaLayout->addLayout(searchBottom);


        verticalLayout->addWidget(searchGroup);

        replaceGroup = new QGroupBox(SearchWidget);
        replaceGroup->setObjectName("replaceGroup");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(replaceGroup->sizePolicy().hasHeightForWidth());
        replaceGroup->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(replaceGroup);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(replaceGroup);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        replacement = new QLineEdit(replaceGroup);
        replacement->setObjectName("replacement");

        horizontalLayout->addWidget(replacement);

        cmdReplSkipPrev = new QToolButton(replaceGroup);
        cmdReplSkipPrev->setObjectName("cmdReplSkipPrev");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/replace/images/replace.skip.prev.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdReplSkipPrev->setIcon(icon3);

        horizontalLayout->addWidget(cmdReplSkipPrev);

        cmdReplSkipNext = new QToolButton(replaceGroup);
        cmdReplSkipNext->setObjectName("cmdReplSkipNext");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/replace/images/replace.skip.next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdReplSkipNext->setIcon(icon4);

        horizontalLayout->addWidget(cmdReplSkipNext);

        cmdReplReplPrev = new QToolButton(replaceGroup);
        cmdReplReplPrev->setObjectName("cmdReplReplPrev");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/replace/images/replace.repl.prev.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdReplReplPrev->setIcon(icon5);

        horizontalLayout->addWidget(cmdReplReplPrev);

        cmdReplReplNext = new QToolButton(replaceGroup);
        cmdReplReplNext->setObjectName("cmdReplReplNext");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/replace/images/replace.repl.next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdReplReplNext->setIcon(icon6);

        horizontalLayout->addWidget(cmdReplReplNext);

        cmdReplaceAll = new QPushButton(replaceGroup);
        cmdReplaceAll->setObjectName("cmdReplaceAll");

        horizontalLayout->addWidget(cmdReplaceAll);


        verticalLayout->addWidget(replaceGroup);

#if QT_CONFIG(shortcut)
        textLabel->setBuddy(searchBox);
        label->setBuddy(replacement);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QCoreApplication::translate("SearchWidget", "Form", nullptr));
        searchGroup->setTitle(QCoreApplication::translate("SearchWidget", "Search", nullptr));
#if QT_CONFIG(tooltip)
        closeSearchPanel->setToolTip(QCoreApplication::translate("SearchWidget", "Close search panel", nullptr));
#endif // QT_CONFIG(tooltip)
        closeSearchPanel->setStyleSheet(QCoreApplication::translate("SearchWidget", "border-color:transparent;\n"
"", nullptr));
        closeSearchPanel->setText(QString());
        lblXPath->setText(QCoreApplication::translate("SearchWidget", "XPath", nullptr));
        textLabel->setText(QCoreApplication::translate("SearchWidget", "Text to &Search", nullptr));
        clearText->setText(QCoreApplication::translate("SearchWidget", "...", nullptr));
        cmdSearchlets->setText(QCoreApplication::translate("SearchWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        info->setToolTip(QCoreApplication::translate("SearchWidget", "<html><head/><body><p>Ctrl+Space to activate the autocompletion using element and attribute names.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        info->setText(QString());
#if QT_CONFIG(tooltip)
        findButton->setToolTip(QCoreApplication::translate("SearchWidget", "Find all", nullptr));
#endif // QT_CONFIG(tooltip)
        findButton->setText(QCoreApplication::translate("SearchWidget", "Find All", nullptr));
#if QT_CONFIG(tooltip)
        cmdPrev->setToolTip(QCoreApplication::translate("SearchWidget", "Find previous", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdPrev->setText(QCoreApplication::translate("SearchWidget", "Prev", nullptr));
#if QT_CONFIG(tooltip)
        cmdNext->setToolTip(QCoreApplication::translate("SearchWidget", "Find Next", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdNext->setText(QCoreApplication::translate("SearchWidget", "Next", nullptr));
        counting->setText(QCoreApplication::translate("SearchWidget", "Count", nullptr));
        useXQuery->setText(QCoreApplication::translate("SearchWidget", "XPath", nullptr));
        cmdOpenAdvancedPanel->setText(QCoreApplication::translate("SearchWidget", "Advanced", nullptr));
        labelScope->setText(QCoreApplication::translate("SearchWidget", "scope:", nullptr));
        searchLabel->setText(QCoreApplication::translate("SearchWidget", "Search in:", nullptr));
        isMatchExactValue->setText(QCoreApplication::translate("SearchWidget", "Match Exact Value", nullptr));
        isCaseSensitive->setText(QCoreApplication::translate("SearchWidget", "Case Sensitive", nullptr));
        isOnlyChildren->setText(QCoreApplication::translate("SearchWidget", "Only in Children", nullptr));
        occNumber->setText(QString());
        lblSize->setText(QCoreApplication::translate("SearchWidget", "size:", nullptr));
        sizeOfSearch->setText(QCoreApplication::translate("SearchWidget", "---", nullptr));
        wrapAround->setText(QCoreApplication::translate("SearchWidget", "Wrap around", nullptr));
        closeUnrelated->setText(QCoreApplication::translate("SearchWidget", "Close Unrelated", nullptr));
        selectionToBookmarks->setText(QCoreApplication::translate("SearchWidget", "Selection to Bookmarks", nullptr));
        showSize->setText(QCoreApplication::translate("SearchWidget", "Show Size", nullptr));
        replaceGroup->setTitle(QString());
        label->setText(QCoreApplication::translate("SearchWidget", "&Replace with:", nullptr));
#if QT_CONFIG(tooltip)
        cmdReplSkipPrev->setToolTip(QCoreApplication::translate("SearchWidget", "Skip this and find the previous match.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdReplSkipPrev->setText(QCoreApplication::translate("SearchWidget", "Skip and previous", nullptr));
#if QT_CONFIG(tooltip)
        cmdReplSkipNext->setToolTip(QCoreApplication::translate("SearchWidget", "Skip this and find the next match.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdReplSkipNext->setText(QCoreApplication::translate("SearchWidget", "Skip and next", nullptr));
#if QT_CONFIG(tooltip)
        cmdReplReplPrev->setToolTip(QCoreApplication::translate("SearchWidget", "Replace this and find the previous match.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdReplReplPrev->setText(QCoreApplication::translate("SearchWidget", "Replace and previous", nullptr));
#if QT_CONFIG(tooltip)
        cmdReplReplNext->setToolTip(QCoreApplication::translate("SearchWidget", "Replace this and find the next match.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdReplReplNext->setText(QCoreApplication::translate("SearchWidget", "Replace and next", nullptr));
#if QT_CONFIG(tooltip)
        cmdReplaceAll->setToolTip(QCoreApplication::translate("SearchWidget", "Replace all the occurrences.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdReplaceAll->setText(QCoreApplication::translate("SearchWidget", "Replace &all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIDGET_H
