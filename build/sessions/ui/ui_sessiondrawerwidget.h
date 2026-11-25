/********************************************************************************
** Form generated from reading UI file 'sessiondrawerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONDRAWERWIDGET_H
#define UI_SESSIONDRAWERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionDrawerWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *invitation;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblNoSession;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *createSession;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *cmdSearch;
    QSpacerItem *horizontalSpacer_4;
    QFrame *searchFrame;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *searchBox;
    QPushButton *clearButton;
    QTreeView *mainTree;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *moreCmd;

    void setupUi(QWidget *SessionDrawerWidget)
    {
        if (SessionDrawerWidget->objectName().isEmpty())
            SessionDrawerWidget->setObjectName("SessionDrawerWidget");
        SessionDrawerWidget->resize(280, 734);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SessionDrawerWidget->sizePolicy().hasHeightForWidth());
        SessionDrawerWidget->setSizePolicy(sizePolicy);
        SessionDrawerWidget->setStyleSheet(QString::fromUtf8("background-color:none"));
        verticalLayout_3 = new QVBoxLayout(SessionDrawerWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        invitation = new QGroupBox(SessionDrawerWidget);
        invitation->setObjectName("invitation");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(invitation->sizePolicy().hasHeightForWidth());
        invitation->setSizePolicy(sizePolicy1);
        invitation->setAlignment(Qt::AlignCenter);
        invitation->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(invitation);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblNoSession = new QLabel(invitation);
        lblNoSession->setObjectName("lblNoSession");
        sizePolicy.setHeightForWidth(lblNoSession->sizePolicy().hasHeightForWidth());
        lblNoSession->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        lblNoSession->setFont(font);
        lblNoSession->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblNoSession);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        createSession = new QPushButton(invitation);
        createSession->setObjectName("createSession");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(createSession->sizePolicy().hasHeightForWidth());
        createSession->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/session_open"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        createSession->setIcon(icon);

        horizontalLayout_3->addWidget(createSession);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(invitation);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cmdSearch = new QToolButton(SessionDrawerWidget);
        cmdSearch->setObjectName("cmdSearch");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/editText/edit-find"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cmdSearch->setIcon(icon1);
        cmdSearch->setCheckable(true);

        horizontalLayout->addWidget(cmdSearch);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout);

        searchFrame = new QFrame(SessionDrawerWidget);
        searchFrame->setObjectName("searchFrame");
        searchFrame->setFrameShape(QFrame::NoFrame);
        searchFrame->setFrameShadow(QFrame::Plain);
        searchFrame->setLineWidth(0);
        horizontalLayout_5 = new QHBoxLayout(searchFrame);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 0);
        searchBox = new QLineEdit(searchFrame);
        searchBox->setObjectName("searchBox");

        horizontalLayout_5->addWidget(searchBox);

        clearButton = new QPushButton(searchFrame);
        clearButton->setObjectName("clearButton");
        clearButton->setStyleSheet(QString::fromUtf8("margin-left:0\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/editText/images/edit-clear-locationbar-rtl.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clearButton->setIcon(icon2);
        clearButton->setFlat(true);

        horizontalLayout_5->addWidget(clearButton);


        verticalLayout_3->addWidget(searchFrame);

        mainTree = new QTreeView(SessionDrawerWidget);
        mainTree->setObjectName("mainTree");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mainTree->sizePolicy().hasHeightForWidth());
        mainTree->setSizePolicy(sizePolicy3);
        mainTree->setAutoFillBackground(false);
        mainTree->setFrameShape(QFrame::NoFrame);
        mainTree->setFrameShadow(QFrame::Plain);
        mainTree->setLineWidth(0);
        mainTree->setSelectionBehavior(QAbstractItemView::SelectItems);
        mainTree->setRootIsDecorated(false);
        mainTree->setAnimated(true);
        mainTree->setHeaderHidden(true);

        verticalLayout_3->addWidget(mainTree);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        moreCmd = new QPushButton(SessionDrawerWidget);
        moreCmd->setObjectName("moreCmd");

        horizontalLayout_2->addWidget(moreCmd);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(SessionDrawerWidget);

        QMetaObject::connectSlotsByName(SessionDrawerWidget);
    } // setupUi

    void retranslateUi(QWidget *SessionDrawerWidget)
    {
        SessionDrawerWidget->setWindowTitle(QCoreApplication::translate("SessionDrawerWidget", "Form", nullptr));
        invitation->setTitle(QString());
        lblNoSession->setText(QCoreApplication::translate("SessionDrawerWidget", "<html><head/><body><p><span style=\" font-weight:600;\">No session active.</span></p><p>You can create a new session.</p></body></html>", nullptr));
        createSession->setText(QCoreApplication::translate("SessionDrawerWidget", "Create a new session...", nullptr));
#if QT_CONFIG(tooltip)
        cmdSearch->setToolTip(QCoreApplication::translate("SessionDrawerWidget", "Open or close the search panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        cmdSearch->setText(QString());
        searchBox->setText(QString());
        searchBox->setPlaceholderText(QCoreApplication::translate("SessionDrawerWidget", "search...", nullptr));
        clearButton->setText(QString());
        moreCmd->setText(QCoreApplication::translate("SessionDrawerWidget", "More...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SessionDrawerWidget: public Ui_SessionDrawerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONDRAWERWIDGET_H
