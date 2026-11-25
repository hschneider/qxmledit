/********************************************************************************
** Form generated from reading UI file 'tipsaboutvisualappearance.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPSABOUTVISUALAPPEARANCE_H
#define UI_TIPSABOUTVISUALAPPEARANCE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TipsAboutVisualAppearance
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TipsAboutVisualAppearance)
    {
        if (TipsAboutVisualAppearance->objectName().isEmpty())
            TipsAboutVisualAppearance->setObjectName("TipsAboutVisualAppearance");
        TipsAboutVisualAppearance->resize(960, 631);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TipsAboutVisualAppearance->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(TipsAboutVisualAppearance);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(TipsAboutVisualAppearance);
        textBrowser->setObjectName("textBrowser");

        horizontalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(TipsAboutVisualAppearance);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(TipsAboutVisualAppearance);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TipsAboutVisualAppearance, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TipsAboutVisualAppearance, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TipsAboutVisualAppearance);
    } // setupUi

    void retranslateUi(QDialog *TipsAboutVisualAppearance)
    {
        TipsAboutVisualAppearance->setWindowTitle(QCoreApplication::translate("TipsAboutVisualAppearance", "Tips on Visual Appearance", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("TipsAboutVisualAppearance", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Oxygen'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">QXmlEdit supports &quot;style&quot; files that are used in the editor. The styles can be choosen using this icon: </span><img src=\":/special/style\" /><span style=\" font-family:'Arial';\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">Using the style it is possible to assign a specific appearance to each XML element, depending on the value of its attributes or the element position or name.</span></p"
                        ">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial';\">In the manual there is the full detail of how to build a style, but here there is a quick reminder.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-weight:600;\">Writing a &quot;Style&quot; file</span><span style=\" font-family:'Arial';\">:</span></p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-family:'Arial';\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Specify the color, the font to be used and an optional icon for each element class.</li>\n"
"<li style=\" font-family:'Arial'; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add a rule to evaluate the element displayed. If the rule evaluates true, the style you associate with the rule is applied to the element.</li>\n"
"<li style=\" font-family:'Arial'; font-size:8pt; font-weight:96; font-style:italic; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-style:normal;\">The rule can evaluate the element tag, the element position or any element attributes value.</span></li>\n"
"<li style=\" font-family:'Arial'; font-size:8pt; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">The evaluation type can be string or numeric.</span></li>\n"
"<li style=\" font-family:'Arial'; font-size:8pt; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">The comparison operators you can use are: equal, not equal, greater than, less than (with equals), attribute existence, substring match or string starting with a specified value.</span></li>\n"
"<li style=\" font-family:'Arial'; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The rules can use OR or AND connectors.</li>\n"
"<li style=\" font-family:'Arial'; font-size:8pt; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">The rules can be combined in a tree.</span></li>\n"
"<li style=\" font-family:'Arial'; font-size:8pt; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span"
                        " style=\" font-size:9pt;\">The rules are evaluated in the definition order and the first match is used.</span></li>\n"
"<li style=\" font-family:'Arial'; font-size:8pt; font-weight:96; color:#1a1a1a;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">If no rule is verified, a special style &quot;default&quot; is used.</span></li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-weight:600;\">Effects of the sytle</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p"
                        ">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">The style can transform the display of this elements:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/styles/images/wostyle.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\">Into this:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; "
                        "margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/styles/images/wstyle.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:8pt;\">An example rule that display an 'info' icon if the attribute 'attribute' value is '123' is the following:</span></p>\n"
"<p style=\"-qt-paragraph-type:emp"
                        "ty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">&lt;style name=&quot;Log&quot; description=&quot;log test style&quot;&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">    &lt;keywords&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">     &lt;ruleSet idStyle=&quot;1&quot;&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">        &lt;rule name=&quot;attribute&quot; value=&quot;123&quot; op=&quot;eq&quot; /&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">     &lt;/ruleSet&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">    &lt;/keywords&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">    &lt;styles&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><"
                        "span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">     &lt;style id=&quot;1&quot;  color=&quot;0000FF&quot;/&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">      &lt;default&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">        &lt;style id=&quot;default&quot; color=&quot;FF4040&quot;  icon=&quot;:I:&quot;/&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">     &lt;/default&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">    &lt;/styles&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-style:italic; color:#aa0000;\">&lt;/style&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell';\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TipsAboutVisualAppearance: public Ui_TipsAboutVisualAppearance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPSABOUTVISUALAPPEARANCE_H
