/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <sessiondrawerwidget>
#include <widgets/warningswidget.h>
#include <xmleditwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionExpandAll;
    QAction *actionShowAttrLine;
    QAction *actionAbout;
    QAction *actionAddComment;
    QAction *actionAppendComment;
    QAction *actionAddProcessingInstruction;
    QAction *actionAppendProcessingInstruction;
    QAction *actionAddChildElement;
    QAction *actionAppendChildElement;
    QAction *actionEdit;
    QAction *actionDelete;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QAction *actionFind;
    QAction *actionGo_To_Parent;
    QAction *actionGo_to_Previous_Brother;
    QAction *actionGo_to_Next_Brother;
    QAction *actionToggleBookmark;
    QAction *actionClearBookmarks;
    QAction *actionGotoNextBookmark;
    QAction *actionGotoPreviousBookmark;
    QAction *actionList_Bookmarks;
    QAction *actionShowChildIndex;
    QAction *actionCloseThisAllBrothers;
    QAction *actionNewFromClipboard;
    QAction *actionCompactView;
    QAction *actionHideBrothers;
    QAction *actionFixedSizeAttributes;
    QAction *actionShowAttributesLength;
    QAction *actionShowBase64;
    QAction *actionShowCurrentElementTextBase64;
    QAction *actionConfigure;
    QAction *actionEditInnerXML;
    QAction *actionEditInnerXMLBase64;
    QAction *actionEditInnerBase64Text;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionCompare;
    QAction *actionReload;
    QAction *actionLastFiles;
    QAction *actionCopyPathToClipboard;
    QAction *actionAddCurrentDirectory;
    QAction *actionEditPreferredDirectories;
    QAction *actionValidate;
    QAction *actionValidateNewFile;
    QAction *actionInsertSnippet;
    QAction *actionConfigureSnippets;
    QAction *actionExecuteAutoTest;
    QAction *actionPlugins;
    QAction *actionTransforminSnippet;
    QAction *actionShowElementTextLength;
    QAction *actionShowElementSize;
    QAction *actionDeleteBookmarked;
    QAction *actionCleanBookmarkedContent;
    QAction *actionCleanBookmarkedItemsAttribute;
    QAction *actionXplore;
    QAction *actionBlindLoadFile;
    QAction *actionHideView;
    QAction *actionSearchInFiles;
    QAction *actionHelpOnQXmlEdit;
    QAction *actionAllowedSchemaElements;
    QAction *actionPasteAndSubstituteText;
    QAction *actionNewUsingXMLSchema;
    QAction *actionTransformInComment;
    QAction *actionExtractElementsFromComment;
    QAction *actionExtractFragmentsFromFile;
    QAction *actionWelcomeDialog;
    QAction *actionSaveACopyAs;
    QAction *actionHideAllLeafChildren;
    QAction *actionShowAllLeafChildren;
    QAction *actionHideLeafChildren;
    QAction *actionShowLeafChildren;
    QAction *actionViewAsXsd;
    QAction *actionColumnView;
    QAction *actionShowCurrentSessionPanel;
    QAction *actionNewSession;
    QAction *actionPauseSession;
    QAction *actionResumeSession;
    QAction *actionCloseSession;
    QAction *actionManageSessions;
    QAction *actionSessionDetails;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionNewWindow;
    QAction *actionViewData;
    QAction *actionBase64Tools;
    QAction *actionEncodingTools;
    QAction *actionCompareXSD;
    QAction *actionExportAttributesSiblingsAsCSVClipboard;
    QAction *actionVisAttrApplyTemporaryProfile;
    QAction *actionVisAttrSaveCurrenteProfile;
    QAction *actionVisAttrManageProfiles;
    QAction *actionVisAttrRemoveCurrentProfile;
    QAction *actionCompareFiles;
    QAction *actionSpring_and_Forces;
    QAction *actionViewGraphic;
    QAction *actionCopyAttributes;
    QAction *actionPasteAttributes;
    QAction *actionPasteLastAttributes;
    QAction *actionCopyElementPathClipboard;
    QAction *actionAutoComplete;
    QAction *actionXMLEditMode;
    QAction *actionXSLTEditMode;
    QAction *actionNewXSLTSheet;
    QAction *actionNewXSDDocument;
    QAction *actionNewXSLFODocument;
    QAction *actionEditXSLTitem;
    QAction *actionScanXMLTagsAndNamesXSLTAutocompletion;
    QAction *actionShowXSLNavigator;
    QAction *actionSpecificProperties;
    QAction *actionPasteAsSibling;
    QAction *actionExpandSelectedItem;
    QAction *actionNewMavenPOM;
    QAction *actionNewFromSnippet;
    QAction *actionTipsOnVisualAppearance;
    QAction *actionBinaryViewer;
    QAction *actionReadOnly;
    QAction *actionInsertMetadata;
    QAction *actionEditMetadata;
    QAction *actionExportAsJavaJavascriptSource;
    QAction *actionInsertCompleteMetadata;
    QAction *actionInsertProlog;
    QAction *actionEncoding;
    QAction *actionExportAsCSource;
    QAction *actionCopyAllToClipboard;
    QAction *actionCodePages;
    QAction *actionInsertChildContainer;
    QAction *actionInsertParent;
    QAction *actionRemoveParent;
    QAction *actionShowAlwaysFullTextComments;
    QAction *actionXSDInsertElement;
    QAction *actionXSDAppendElement;
    QAction *actionXSDAppendSibling;
    QAction *actionXSDModifyType;
    QAction *actionXSDInsertType;
    QAction *actionXSDAppendType;
    QAction *actionXSDInsertAttribute;
    QAction *actionXSDAppendAttribute;
    QAction *actionAnonymize;
    QAction *actionQuickReferenceElements;
    QAction *actionAnonymizeFile;
    QAction *actionEditXSDAnnotation;
    QAction *actionReplace;
    QAction *actionFindNext;
    QAction *actionSetIndent;
    QAction *actionValidateUsingDocumentReferences;
    QAction *actionFindPrevious;
    QAction *actionInfo;
    QAction *actionShowMainButtons;
    QAction *actionShowStatusBar;
    QAction *actionRemoveNilAttribute;
    QAction *actionInsertNilAttribute;
    QAction *actionRemoveXSITypeAttribute;
    QAction *actionInsertXSITypeAttribute;
    QAction *actionInsertXmlSchemaReferences;
    QAction *actionOpenSameWindow;
    QAction *actionCloseSiblings;
    QAction *actionFillSerie;
    QAction *actionCloneElements;
    QAction *actionClose;
    QAction *actionShowContainingFolder;
    QAction *actionExportElementToFile;
    QAction *actionShowAttributesSorted;
    QAction *actionSortAttributesElement;
    QAction *actionSortAttributesElementRecursive;
    QAction *actionSortAttributes;
    QAction *actionRemoveAllSiblingsBefore;
    QAction *actionRemoveAllSiblingsAfter;
    QAction *actionRemoveAllSiblings;
    QAction *actionHelpSetEditorDetail;
    QAction *actionTaskDisplayDetail;
    QAction *actionEditEnumerationFacet;
    QAction *actionRemovePrefix;
    QAction *actionRemoveNamespace;
    QAction *actionSetPrefix;
    QAction *actionReplacePrefix;
    QAction *actionSetNamespace;
    QAction *actionReplaceNamespace;
    QAction *actionNormalizeNamespace;
    QAction *actionInsertSpecial;
    QAction *actionNewSCXMLDocument;
    QAction *actionAppendSpecial;
    QAction *actionShowSCXMLNavigator;
    QAction *actionValidateSCXML;
    QAction *actionSCXMLEditMode;
    QAction *actionCopyElementOnly;
    QAction *actionXSLExecutor;
    QAction *actionExecuteXSLTAsSource;
    QAction *actionExecuteXSLTAsSheet;
    QAction *actionOpenSiblingsAtTheSameLevel;
    QAction *actionShowPrincipalShortcuts;
    QAction *actionAddFormattingInfo;
    QAction *actionRemoveFormattingInfo;
    QAction *actionPresetApacheFOP;
    QAction *actionPresetNoIndentation;
    QAction *actionPresetIndentOneAttributePerLine;
    QAction *actionCloseItemAndChildren;
    QAction *actionChooseEditType;
    QAction *actionValidationDialog;
    QAction *actionOpenGuidedOperationPanel;
    QAction *actionChooseUserProfile;
    QAction *actionInsertDisablingParent;
    QAction *actionGraphic;
    QAction *actionActions;
    QAction *actionSearchCommand;
    QAction *actiondontuse;
    QAction *actionShowKeyboardShortcuts;
    QAction *actionEditAsText;
    QAction *actionTestXML;
    QAction *actionLoadSample;
    QAction *actionGenerateXSD;
    QAction *actionGenerateXMLFromXSD;
    QAction *actionValidateXSD;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayoutCentralWidget;
    WarningsWidget *loadWarningWidget;
    QHBoxLayout *horizontalLayout;
    SessionDrawerWidget *sessionTree;
    XmlEditWidget *editor;
    QTabWidget *messagePanel;
    QWidget *scxmlValidationErrors;
    QHBoxLayout *horizontalLayout_3;
    QMenuBar *menubar;
    QMenu *menu_Navigation;
    QMenu *menuHelp;
    QMenu *menuHow_Do_I;
    QMenu *menuEdit;
    QMenu *menuExport;
    QMenu *menuMore;
    QMenu *menuFormatting;
    QMenu *menuBoorkmarks;
    QMenu *menuFile;
    QMenu *menuNew_of_Kind;
    QMenu *menuExport_2;
    QMenu *menu_XML;
    QMenu *menuXML_Schema;
    QMenu *menuInsert;
    QMenu *menuAppend_sibling;
    QMenu *menuMetadata;
    QMenu *menuSchema_Instance_XSI;
    QMenu *menuSort_Attributes;
    QMenu *menuSiblings;
    QMenu *menuHierarchy;
    QMenu *menuNamespaces;
    QMenu *menuTools;
    QMenu *menuView;
    QMenu *menuFilter_Attributes;
    QMenu *menuAdvanced;
    QMenu *menuPanels;
    QMenu *viewSiblings;
    QMenu *menuAdvanced_2;
    QMenu *menu_Sessions;
    QMenu *menuTasks;
    QMenu *menuSpecial;
    QMenu *menuValidation;
    QMenu *menuXSLT;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(906, 725);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/actions/images/document-new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon1);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/quit/images/window-close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionQuit->setIcon(icon2);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/open/images/document-open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon3);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/save/images/document-save.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon4);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/save-as/images/document-save-as.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAs->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cut/images/edit-cut.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon6);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/copy/images/edit-copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon7);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/paste/images/edit-paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon8);
        actionExpandAll = new QAction(MainWindow);
        actionExpandAll->setObjectName("actionExpandAll");
        actionShowAttrLine = new QAction(MainWindow);
        actionShowAttrLine->setObjectName("actionShowAttrLine");
        actionShowAttrLine->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout->setIcon(icon);
        actionAddComment = new QAction(MainWindow);
        actionAddComment->setObjectName("actionAddComment");
        actionAppendComment = new QAction(MainWindow);
        actionAppendComment->setObjectName("actionAppendComment");
        actionAddProcessingInstruction = new QAction(MainWindow);
        actionAddProcessingInstruction->setObjectName("actionAddProcessingInstruction");
        actionAppendProcessingInstruction = new QAction(MainWindow);
        actionAppendProcessingInstruction->setObjectName("actionAppendProcessingInstruction");
        actionAddChildElement = new QAction(MainWindow);
        actionAddChildElement->setObjectName("actionAddChildElement");
        actionAppendChildElement = new QAction(MainWindow);
        actionAppendChildElement->setObjectName("actionAppendChildElement");
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName("actionEdit");
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionMoveUp = new QAction(MainWindow);
        actionMoveUp->setObjectName("actionMoveUp");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/arrows/images/go-up.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveUp->setIcon(icon9);
        actionMoveDown = new QAction(MainWindow);
        actionMoveDown->setObjectName("actionMoveDown");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/arrows/images/go-down.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionMoveDown->setIcon(icon10);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/editText/edit-find"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionFind->setIcon(icon11);
        actionGo_To_Parent = new QAction(MainWindow);
        actionGo_To_Parent->setObjectName("actionGo_To_Parent");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/goto/images/gotoparent.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGo_To_Parent->setIcon(icon12);
        actionGo_to_Previous_Brother = new QAction(MainWindow);
        actionGo_to_Previous_Brother->setObjectName("actionGo_to_Previous_Brother");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/goto/images/gotoprevbro.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGo_to_Previous_Brother->setIcon(icon13);
        actionGo_to_Next_Brother = new QAction(MainWindow);
        actionGo_to_Next_Brother->setObjectName("actionGo_to_Next_Brother");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/goto/images/gotonextbro.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGo_to_Next_Brother->setIcon(icon14);
        actionToggleBookmark = new QAction(MainWindow);
        actionToggleBookmark->setObjectName("actionToggleBookmark");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/special/images/bookmark.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionToggleBookmark->setIcon(icon15);
        actionClearBookmarks = new QAction(MainWindow);
        actionClearBookmarks->setObjectName("actionClearBookmarks");
        actionGotoNextBookmark = new QAction(MainWindow);
        actionGotoNextBookmark->setObjectName("actionGotoNextBookmark");
        actionGotoPreviousBookmark = new QAction(MainWindow);
        actionGotoPreviousBookmark->setObjectName("actionGotoPreviousBookmark");
        actionList_Bookmarks = new QAction(MainWindow);
        actionList_Bookmarks->setObjectName("actionList_Bookmarks");
        actionList_Bookmarks->setEnabled(false);
        actionShowChildIndex = new QAction(MainWindow);
        actionShowChildIndex->setObjectName("actionShowChildIndex");
        actionShowChildIndex->setCheckable(true);
        actionCloseThisAllBrothers = new QAction(MainWindow);
        actionCloseThisAllBrothers->setObjectName("actionCloseThisAllBrothers");
        actionNewFromClipboard = new QAction(MainWindow);
        actionNewFromClipboard->setObjectName("actionNewFromClipboard");
        actionCompactView = new QAction(MainWindow);
        actionCompactView->setObjectName("actionCompactView");
        actionHideBrothers = new QAction(MainWindow);
        actionHideBrothers->setObjectName("actionHideBrothers");
        actionHideBrothers->setCheckable(true);
        actionFixedSizeAttributes = new QAction(MainWindow);
        actionFixedSizeAttributes->setObjectName("actionFixedSizeAttributes");
        actionFixedSizeAttributes->setCheckable(true);
        actionShowAttributesLength = new QAction(MainWindow);
        actionShowAttributesLength->setObjectName("actionShowAttributesLength");
        actionShowAttributesLength->setCheckable(true);
        actionShowBase64 = new QAction(MainWindow);
        actionShowBase64->setObjectName("actionShowBase64");
        actionShowBase64->setCheckable(true);
        actionShowCurrentElementTextBase64 = new QAction(MainWindow);
        actionShowCurrentElementTextBase64->setObjectName("actionShowCurrentElementTextBase64");
        actionShowCurrentElementTextBase64->setCheckable(true);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName("actionConfigure");
        actionConfigure->setMenuRole(QAction::PreferencesRole);
        actionEditInnerXML = new QAction(MainWindow);
        actionEditInnerXML->setObjectName("actionEditInnerXML");
        actionEditInnerXMLBase64 = new QAction(MainWindow);
        actionEditInnerXMLBase64->setObjectName("actionEditInnerXMLBase64");
        actionEditInnerBase64Text = new QAction(MainWindow);
        actionEditInnerBase64Text->setObjectName("actionEditInnerBase64Text");
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName("actionZoomIn");
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName("actionZoomOut");
        actionCompare = new QAction(MainWindow);
        actionCompare->setObjectName("actionCompare");
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName("actionReload");
        actionLastFiles = new QAction(MainWindow);
        actionLastFiles->setObjectName("actionLastFiles");
        actionCopyPathToClipboard = new QAction(MainWindow);
        actionCopyPathToClipboard->setObjectName("actionCopyPathToClipboard");
        actionAddCurrentDirectory = new QAction(MainWindow);
        actionAddCurrentDirectory->setObjectName("actionAddCurrentDirectory");
        actionEditPreferredDirectories = new QAction(MainWindow);
        actionEditPreferredDirectories->setObjectName("actionEditPreferredDirectories");
        actionValidate = new QAction(MainWindow);
        actionValidate->setObjectName("actionValidate");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/configuration/validation"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionValidate->setIcon(icon16);
        actionValidateNewFile = new QAction(MainWindow);
        actionValidateNewFile->setObjectName("actionValidateNewFile");
        actionInsertSnippet = new QAction(MainWindow);
        actionInsertSnippet->setObjectName("actionInsertSnippet");
        actionConfigureSnippets = new QAction(MainWindow);
        actionConfigureSnippets->setObjectName("actionConfigureSnippets");
        actionExecuteAutoTest = new QAction(MainWindow);
        actionExecuteAutoTest->setObjectName("actionExecuteAutoTest");
        actionPlugins = new QAction(MainWindow);
        actionPlugins->setObjectName("actionPlugins");
        actionTransforminSnippet = new QAction(MainWindow);
        actionTransforminSnippet->setObjectName("actionTransforminSnippet");
        actionShowElementTextLength = new QAction(MainWindow);
        actionShowElementTextLength->setObjectName("actionShowElementTextLength");
        actionShowElementTextLength->setCheckable(true);
        actionShowElementSize = new QAction(MainWindow);
        actionShowElementSize->setObjectName("actionShowElementSize");
        actionShowElementSize->setCheckable(true);
        actionDeleteBookmarked = new QAction(MainWindow);
        actionDeleteBookmarked->setObjectName("actionDeleteBookmarked");
        actionCleanBookmarkedContent = new QAction(MainWindow);
        actionCleanBookmarkedContent->setObjectName("actionCleanBookmarkedContent");
        actionCleanBookmarkedItemsAttribute = new QAction(MainWindow);
        actionCleanBookmarkedItemsAttribute->setObjectName("actionCleanBookmarkedItemsAttribute");
        actionXplore = new QAction(MainWindow);
        actionXplore->setObjectName("actionXplore");
        actionBlindLoadFile = new QAction(MainWindow);
        actionBlindLoadFile->setObjectName("actionBlindLoadFile");
        actionHideView = new QAction(MainWindow);
        actionHideView->setObjectName("actionHideView");
        actionHideView->setCheckable(true);
        actionSearchInFiles = new QAction(MainWindow);
        actionSearchInFiles->setObjectName("actionSearchInFiles");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/editText/searchInFiles"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSearchInFiles->setIcon(icon17);
        actionHelpOnQXmlEdit = new QAction(MainWindow);
        actionHelpOnQXmlEdit->setObjectName("actionHelpOnQXmlEdit");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/commands/images/help-contents.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionHelpOnQXmlEdit->setIcon(icon18);
        actionAllowedSchemaElements = new QAction(MainWindow);
        actionAllowedSchemaElements->setObjectName("actionAllowedSchemaElements");
        actionPasteAndSubstituteText = new QAction(MainWindow);
        actionPasteAndSubstituteText->setObjectName("actionPasteAndSubstituteText");
        actionNewUsingXMLSchema = new QAction(MainWindow);
        actionNewUsingXMLSchema->setObjectName("actionNewUsingXMLSchema");
        actionTransformInComment = new QAction(MainWindow);
        actionTransformInComment->setObjectName("actionTransformInComment");
        actionExtractElementsFromComment = new QAction(MainWindow);
        actionExtractElementsFromComment->setObjectName("actionExtractElementsFromComment");
        actionExtractFragmentsFromFile = new QAction(MainWindow);
        actionExtractFragmentsFromFile->setObjectName("actionExtractFragmentsFromFile");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/tools/images/split.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionExtractFragmentsFromFile->setIcon(icon19);
        actionWelcomeDialog = new QAction(MainWindow);
        actionWelcomeDialog->setObjectName("actionWelcomeDialog");
        actionSaveACopyAs = new QAction(MainWindow);
        actionSaveACopyAs->setObjectName("actionSaveACopyAs");
        actionSaveACopyAs->setIcon(icon5);
        actionHideAllLeafChildren = new QAction(MainWindow);
        actionHideAllLeafChildren->setObjectName("actionHideAllLeafChildren");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/tree/hidden_children"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionHideAllLeafChildren->setIcon(icon20);
        actionShowAllLeafChildren = new QAction(MainWindow);
        actionShowAllLeafChildren->setObjectName("actionShowAllLeafChildren");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/tree/show_children"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowAllLeafChildren->setIcon(icon21);
        actionHideLeafChildren = new QAction(MainWindow);
        actionHideLeafChildren->setObjectName("actionHideLeafChildren");
        actionHideLeafChildren->setIcon(icon20);
        actionShowLeafChildren = new QAction(MainWindow);
        actionShowLeafChildren->setObjectName("actionShowLeafChildren");
        actionShowLeafChildren->setIcon(icon21);
        actionViewAsXsd = new QAction(MainWindow);
        actionViewAsXsd->setObjectName("actionViewAsXsd");
        actionColumnView = new QAction(MainWindow);
        actionColumnView->setObjectName("actionColumnView");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/commands/view_columns"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionColumnView->setIcon(icon22);
        actionShowCurrentSessionPanel = new QAction(MainWindow);
        actionShowCurrentSessionPanel->setObjectName("actionShowCurrentSessionPanel");
        actionShowCurrentSessionPanel->setCheckable(true);
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/sessions/images/sessions_view.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowCurrentSessionPanel->setIcon(icon23);
        actionNewSession = new QAction(MainWindow);
        actionNewSession->setObjectName("actionNewSession");
        actionPauseSession = new QAction(MainWindow);
        actionPauseSession->setObjectName("actionPauseSession");
        actionResumeSession = new QAction(MainWindow);
        actionResumeSession->setObjectName("actionResumeSession");
        actionCloseSession = new QAction(MainWindow);
        actionCloseSession->setObjectName("actionCloseSession");
        actionManageSessions = new QAction(MainWindow);
        actionManageSessions->setObjectName("actionManageSessions");
        actionSessionDetails = new QAction(MainWindow);
        actionSessionDetails->setObjectName("actionSessionDetails");
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        actionNewWindow = new QAction(MainWindow);
        actionNewWindow->setObjectName("actionNewWindow");
        actionViewData = new QAction(MainWindow);
        actionViewData->setObjectName("actionViewData");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/tools/images/view-structure-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionViewData->setIcon(icon24);
        actionBase64Tools = new QAction(MainWindow);
        actionBase64Tools->setObjectName("actionBase64Tools");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/tools/images/base64.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBase64Tools->setIcon(icon25);
        actionEncodingTools = new QAction(MainWindow);
        actionEncodingTools->setObjectName("actionEncodingTools");
        actionCompareXSD = new QAction(MainWindow);
        actionCompareXSD->setObjectName("actionCompareXSD");
        actionExportAttributesSiblingsAsCSVClipboard = new QAction(MainWindow);
        actionExportAttributesSiblingsAsCSVClipboard->setObjectName("actionExportAttributesSiblingsAsCSVClipboard");
        actionVisAttrApplyTemporaryProfile = new QAction(MainWindow);
        actionVisAttrApplyTemporaryProfile->setObjectName("actionVisAttrApplyTemporaryProfile");
        actionVisAttrSaveCurrenteProfile = new QAction(MainWindow);
        actionVisAttrSaveCurrenteProfile->setObjectName("actionVisAttrSaveCurrenteProfile");
        actionVisAttrManageProfiles = new QAction(MainWindow);
        actionVisAttrManageProfiles->setObjectName("actionVisAttrManageProfiles");
        actionVisAttrRemoveCurrentProfile = new QAction(MainWindow);
        actionVisAttrRemoveCurrentProfile->setObjectName("actionVisAttrRemoveCurrentProfile");
        actionCompareFiles = new QAction(MainWindow);
        actionCompareFiles->setObjectName("actionCompareFiles");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/tools/images/compare.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCompareFiles->setIcon(icon26);
        actionSpring_and_Forces = new QAction(MainWindow);
        actionSpring_and_Forces->setObjectName("actionSpring_and_Forces");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/tools/images/relations.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSpring_and_Forces->setIcon(icon27);
        actionViewGraphic = new QAction(MainWindow);
        actionViewGraphic->setObjectName("actionViewGraphic");
        actionViewGraphic->setIcon(icon27);
        actionCopyAttributes = new QAction(MainWindow);
        actionCopyAttributes->setObjectName("actionCopyAttributes");
        actionPasteAttributes = new QAction(MainWindow);
        actionPasteAttributes->setObjectName("actionPasteAttributes");
        actionPasteLastAttributes = new QAction(MainWindow);
        actionPasteLastAttributes->setObjectName("actionPasteLastAttributes");
        actionCopyElementPathClipboard = new QAction(MainWindow);
        actionCopyElementPathClipboard->setObjectName("actionCopyElementPathClipboard");
        actionAutoComplete = new QAction(MainWindow);
        actionAutoComplete->setObjectName("actionAutoComplete");
        actionXMLEditMode = new QAction(MainWindow);
        actionXMLEditMode->setObjectName("actionXMLEditMode");
        actionXMLEditMode->setCheckable(true);
        actionXSLTEditMode = new QAction(MainWindow);
        actionXSLTEditMode->setObjectName("actionXSLTEditMode");
        actionXSLTEditMode->setCheckable(true);
        actionNewXSLTSheet = new QAction(MainWindow);
        actionNewXSLTSheet->setObjectName("actionNewXSLTSheet");
        actionNewXSDDocument = new QAction(MainWindow);
        actionNewXSDDocument->setObjectName("actionNewXSDDocument");
        actionNewXSLFODocument = new QAction(MainWindow);
        actionNewXSLFODocument->setObjectName("actionNewXSLFODocument");
        actionEditXSLTitem = new QAction(MainWindow);
        actionEditXSLTitem->setObjectName("actionEditXSLTitem");
        actionScanXMLTagsAndNamesXSLTAutocompletion = new QAction(MainWindow);
        actionScanXMLTagsAndNamesXSLTAutocompletion->setObjectName("actionScanXMLTagsAndNamesXSLTAutocompletion");
        actionShowXSLNavigator = new QAction(MainWindow);
        actionShowXSLNavigator->setObjectName("actionShowXSLNavigator");
        actionShowXSLNavigator->setCheckable(true);
        actionSpecificProperties = new QAction(MainWindow);
        actionSpecificProperties->setObjectName("actionSpecificProperties");
        actionPasteAsSibling = new QAction(MainWindow);
        actionPasteAsSibling->setObjectName("actionPasteAsSibling");
        actionExpandSelectedItem = new QAction(MainWindow);
        actionExpandSelectedItem->setObjectName("actionExpandSelectedItem");
        actionNewMavenPOM = new QAction(MainWindow);
        actionNewMavenPOM->setObjectName("actionNewMavenPOM");
        actionNewFromSnippet = new QAction(MainWindow);
        actionNewFromSnippet->setObjectName("actionNewFromSnippet");
        actionTipsOnVisualAppearance = new QAction(MainWindow);
        actionTipsOnVisualAppearance->setObjectName("actionTipsOnVisualAppearance");
        actionBinaryViewer = new QAction(MainWindow);
        actionBinaryViewer->setObjectName("actionBinaryViewer");
        actionReadOnly = new QAction(MainWindow);
        actionReadOnly->setObjectName("actionReadOnly");
        actionReadOnly->setCheckable(true);
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/status/locked"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionReadOnly->setIcon(icon28);
        actionInsertMetadata = new QAction(MainWindow);
        actionInsertMetadata->setObjectName("actionInsertMetadata");
        actionEditMetadata = new QAction(MainWindow);
        actionEditMetadata->setObjectName("actionEditMetadata");
        actionExportAsJavaJavascriptSource = new QAction(MainWindow);
        actionExportAsJavaJavascriptSource->setObjectName("actionExportAsJavaJavascriptSource");
        actionInsertCompleteMetadata = new QAction(MainWindow);
        actionInsertCompleteMetadata->setObjectName("actionInsertCompleteMetadata");
        actionInsertProlog = new QAction(MainWindow);
        actionInsertProlog->setObjectName("actionInsertProlog");
        actionEncoding = new QAction(MainWindow);
        actionEncoding->setObjectName("actionEncoding");
        actionExportAsCSource = new QAction(MainWindow);
        actionExportAsCSource->setObjectName("actionExportAsCSource");
        actionCopyAllToClipboard = new QAction(MainWindow);
        actionCopyAllToClipboard->setObjectName("actionCopyAllToClipboard");
        actionCodePages = new QAction(MainWindow);
        actionCodePages->setObjectName("actionCodePages");
        actionInsertChildContainer = new QAction(MainWindow);
        actionInsertChildContainer->setObjectName("actionInsertChildContainer");
        actionInsertParent = new QAction(MainWindow);
        actionInsertParent->setObjectName("actionInsertParent");
        actionRemoveParent = new QAction(MainWindow);
        actionRemoveParent->setObjectName("actionRemoveParent");
        actionShowAlwaysFullTextComments = new QAction(MainWindow);
        actionShowAlwaysFullTextComments->setObjectName("actionShowAlwaysFullTextComments");
        actionShowAlwaysFullTextComments->setCheckable(true);
        actionXSDInsertElement = new QAction(MainWindow);
        actionXSDInsertElement->setObjectName("actionXSDInsertElement");
        actionXSDAppendElement = new QAction(MainWindow);
        actionXSDAppendElement->setObjectName("actionXSDAppendElement");
        actionXSDAppendSibling = new QAction(MainWindow);
        actionXSDAppendSibling->setObjectName("actionXSDAppendSibling");
        actionXSDModifyType = new QAction(MainWindow);
        actionXSDModifyType->setObjectName("actionXSDModifyType");
        actionXSDInsertType = new QAction(MainWindow);
        actionXSDInsertType->setObjectName("actionXSDInsertType");
        actionXSDAppendType = new QAction(MainWindow);
        actionXSDAppendType->setObjectName("actionXSDAppendType");
        actionXSDInsertAttribute = new QAction(MainWindow);
        actionXSDInsertAttribute->setObjectName("actionXSDInsertAttribute");
        actionXSDAppendAttribute = new QAction(MainWindow);
        actionXSDAppendAttribute->setObjectName("actionXSDAppendAttribute");
        actionAnonymize = new QAction(MainWindow);
        actionAnonymize->setObjectName("actionAnonymize");
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/editText/images/mask.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAnonymize->setIcon(icon29);
        actionQuickReferenceElements = new QAction(MainWindow);
        actionQuickReferenceElements->setObjectName("actionQuickReferenceElements");
        actionAnonymizeFile = new QAction(MainWindow);
        actionAnonymizeFile->setObjectName("actionAnonymizeFile");
        actionAnonymizeFile->setIcon(icon29);
        actionEditXSDAnnotation = new QAction(MainWindow);
        actionEditXSDAnnotation->setObjectName("actionEditXSDAnnotation");
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName("actionReplace");
        actionFindNext = new QAction(MainWindow);
        actionFindNext->setObjectName("actionFindNext");
        actionSetIndent = new QAction(MainWindow);
        actionSetIndent->setObjectName("actionSetIndent");
        actionValidateUsingDocumentReferences = new QAction(MainWindow);
        actionValidateUsingDocumentReferences->setObjectName("actionValidateUsingDocumentReferences");
        actionFindPrevious = new QAction(MainWindow);
        actionFindPrevious->setObjectName("actionFindPrevious");
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName("actionInfo");
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/actions/info"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionInfo->setIcon(icon30);
        actionShowMainButtons = new QAction(MainWindow);
        actionShowMainButtons->setObjectName("actionShowMainButtons");
        actionShowMainButtons->setCheckable(true);
        actionShowStatusBar = new QAction(MainWindow);
        actionShowStatusBar->setObjectName("actionShowStatusBar");
        actionShowStatusBar->setCheckable(true);
        actionRemoveNilAttribute = new QAction(MainWindow);
        actionRemoveNilAttribute->setObjectName("actionRemoveNilAttribute");
        actionInsertNilAttribute = new QAction(MainWindow);
        actionInsertNilAttribute->setObjectName("actionInsertNilAttribute");
        actionRemoveXSITypeAttribute = new QAction(MainWindow);
        actionRemoveXSITypeAttribute->setObjectName("actionRemoveXSITypeAttribute");
        actionInsertXSITypeAttribute = new QAction(MainWindow);
        actionInsertXSITypeAttribute->setObjectName("actionInsertXSITypeAttribute");
        actionInsertXmlSchemaReferences = new QAction(MainWindow);
        actionInsertXmlSchemaReferences->setObjectName("actionInsertXmlSchemaReferences");
        actionOpenSameWindow = new QAction(MainWindow);
        actionOpenSameWindow->setObjectName("actionOpenSameWindow");
        actionOpenSameWindow->setIcon(icon3);
        actionCloseSiblings = new QAction(MainWindow);
        actionCloseSiblings->setObjectName("actionCloseSiblings");
        actionFillSerie = new QAction(MainWindow);
        actionFillSerie->setObjectName("actionFillSerie");
        actionCloneElements = new QAction(MainWindow);
        actionCloneElements->setObjectName("actionCloneElements");
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionShowContainingFolder = new QAction(MainWindow);
        actionShowContainingFolder->setObjectName("actionShowContainingFolder");
        actionExportElementToFile = new QAction(MainWindow);
        actionExportElementToFile->setObjectName("actionExportElementToFile");
        actionShowAttributesSorted = new QAction(MainWindow);
        actionShowAttributesSorted->setObjectName("actionShowAttributesSorted");
        actionShowAttributesSorted->setCheckable(true);
        actionSortAttributesElement = new QAction(MainWindow);
        actionSortAttributesElement->setObjectName("actionSortAttributesElement");
        actionSortAttributesElementRecursive = new QAction(MainWindow);
        actionSortAttributesElementRecursive->setObjectName("actionSortAttributesElementRecursive");
        actionSortAttributes = new QAction(MainWindow);
        actionSortAttributes->setObjectName("actionSortAttributes");
        actionRemoveAllSiblingsBefore = new QAction(MainWindow);
        actionRemoveAllSiblingsBefore->setObjectName("actionRemoveAllSiblingsBefore");
        actionRemoveAllSiblingsAfter = new QAction(MainWindow);
        actionRemoveAllSiblingsAfter->setObjectName("actionRemoveAllSiblingsAfter");
        actionRemoveAllSiblings = new QAction(MainWindow);
        actionRemoveAllSiblings->setObjectName("actionRemoveAllSiblings");
        actionHelpSetEditorDetail = new QAction(MainWindow);
        actionHelpSetEditorDetail->setObjectName("actionHelpSetEditorDetail");
        actionTaskDisplayDetail = new QAction(MainWindow);
        actionTaskDisplayDetail->setObjectName("actionTaskDisplayDetail");
        actionEditEnumerationFacet = new QAction(MainWindow);
        actionEditEnumerationFacet->setObjectName("actionEditEnumerationFacet");
        actionRemovePrefix = new QAction(MainWindow);
        actionRemovePrefix->setObjectName("actionRemovePrefix");
        actionRemoveNamespace = new QAction(MainWindow);
        actionRemoveNamespace->setObjectName("actionRemoveNamespace");
        actionSetPrefix = new QAction(MainWindow);
        actionSetPrefix->setObjectName("actionSetPrefix");
        actionReplacePrefix = new QAction(MainWindow);
        actionReplacePrefix->setObjectName("actionReplacePrefix");
        actionSetNamespace = new QAction(MainWindow);
        actionSetNamespace->setObjectName("actionSetNamespace");
        actionReplaceNamespace = new QAction(MainWindow);
        actionReplaceNamespace->setObjectName("actionReplaceNamespace");
        actionNormalizeNamespace = new QAction(MainWindow);
        actionNormalizeNamespace->setObjectName("actionNormalizeNamespace");
        actionInsertSpecial = new QAction(MainWindow);
        actionInsertSpecial->setObjectName("actionInsertSpecial");
        actionNewSCXMLDocument = new QAction(MainWindow);
        actionNewSCXMLDocument->setObjectName("actionNewSCXMLDocument");
        actionAppendSpecial = new QAction(MainWindow);
        actionAppendSpecial->setObjectName("actionAppendSpecial");
        actionShowSCXMLNavigator = new QAction(MainWindow);
        actionShowSCXMLNavigator->setObjectName("actionShowSCXMLNavigator");
        actionShowSCXMLNavigator->setCheckable(true);
        actionValidateSCXML = new QAction(MainWindow);
        actionValidateSCXML->setObjectName("actionValidateSCXML");
        actionSCXMLEditMode = new QAction(MainWindow);
        actionSCXMLEditMode->setObjectName("actionSCXMLEditMode");
        actionSCXMLEditMode->setCheckable(true);
        actionCopyElementOnly = new QAction(MainWindow);
        actionCopyElementOnly->setObjectName("actionCopyElementOnly");
        actionXSLExecutor = new QAction(MainWindow);
        actionXSLExecutor->setObjectName("actionXSLExecutor");
        actionExecuteXSLTAsSource = new QAction(MainWindow);
        actionExecuteXSLTAsSource->setObjectName("actionExecuteXSLTAsSource");
        actionExecuteXSLTAsSheet = new QAction(MainWindow);
        actionExecuteXSLTAsSheet->setObjectName("actionExecuteXSLTAsSheet");
        actionOpenSiblingsAtTheSameLevel = new QAction(MainWindow);
        actionOpenSiblingsAtTheSameLevel->setObjectName("actionOpenSiblingsAtTheSameLevel");
        actionShowPrincipalShortcuts = new QAction(MainWindow);
        actionShowPrincipalShortcuts->setObjectName("actionShowPrincipalShortcuts");
        actionAddFormattingInfo = new QAction(MainWindow);
        actionAddFormattingInfo->setObjectName("actionAddFormattingInfo");
        actionRemoveFormattingInfo = new QAction(MainWindow);
        actionRemoveFormattingInfo->setObjectName("actionRemoveFormattingInfo");
        actionPresetApacheFOP = new QAction(MainWindow);
        actionPresetApacheFOP->setObjectName("actionPresetApacheFOP");
        actionPresetNoIndentation = new QAction(MainWindow);
        actionPresetNoIndentation->setObjectName("actionPresetNoIndentation");
        actionPresetIndentOneAttributePerLine = new QAction(MainWindow);
        actionPresetIndentOneAttributePerLine->setObjectName("actionPresetIndentOneAttributePerLine");
        actionCloseItemAndChildren = new QAction(MainWindow);
        actionCloseItemAndChildren->setObjectName("actionCloseItemAndChildren");
        actionChooseEditType = new QAction(MainWindow);
        actionChooseEditType->setObjectName("actionChooseEditType");
        actionValidationDialog = new QAction(MainWindow);
        actionValidationDialog->setObjectName("actionValidationDialog");
        actionOpenGuidedOperationPanel = new QAction(MainWindow);
        actionOpenGuidedOperationPanel->setObjectName("actionOpenGuidedOperationPanel");
        actionChooseUserProfile = new QAction(MainWindow);
        actionChooseUserProfile->setObjectName("actionChooseUserProfile");
        actionInsertDisablingParent = new QAction(MainWindow);
        actionInsertDisablingParent->setObjectName("actionInsertDisablingParent");
        actionGraphic = new QAction(MainWindow);
        actionGraphic->setObjectName("actionGraphic");
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/configuration/style"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGraphic->setIcon(icon31);
        QFont font;
        font.setBold(true);
        actionGraphic->setFont(font);
        actionActions = new QAction(MainWindow);
        actionActions->setObjectName("actionActions");
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/tree/pi_icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionActions->setIcon(icon32);
        actionActions->setFont(font);
        actionSearchCommand = new QAction(MainWindow);
        actionSearchCommand->setObjectName("actionSearchCommand");
        actionSearchCommand->setIcon(icon17);
        actiondontuse = new QAction(MainWindow);
        actiondontuse->setObjectName("actiondontuse");
        actionShowKeyboardShortcuts = new QAction(MainWindow);
        actionShowKeyboardShortcuts->setObjectName("actionShowKeyboardShortcuts");
        actionShowKeyboardShortcuts->setCheckable(true);
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/special/viewksh"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionShowKeyboardShortcuts->setIcon(icon33);
        actionEditAsText = new QAction(MainWindow);
        actionEditAsText->setObjectName("actionEditAsText");
        actionTestXML = new QAction(MainWindow);
        actionTestXML->setObjectName("actionTestXML");
        actionLoadSample = new QAction(MainWindow);
        actionLoadSample->setObjectName("actionLoadSample");
        actionGenerateXSD = new QAction(MainWindow);
        actionGenerateXSD->setObjectName("actionGenerateXSD");
        actionGenerateXMLFromXSD = new QAction(MainWindow);
        actionGenerateXMLFromXSD->setObjectName("actionGenerateXMLFromXSD");
        actionValidateXSD = new QAction(MainWindow);
        actionValidateXSD->setObjectName("actionValidateXSD");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutCentralWidget = new QVBoxLayout(centralwidget);
        verticalLayoutCentralWidget->setObjectName("verticalLayoutCentralWidget");
        loadWarningWidget = new WarningsWidget(centralwidget);
        loadWarningWidget->setObjectName("loadWarningWidget");

        verticalLayoutCentralWidget->addWidget(loadWarningWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        sessionTree = new SessionDrawerWidget(centralwidget);
        sessionTree->setObjectName("sessionTree");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sessionTree->sizePolicy().hasHeightForWidth());
        sessionTree->setSizePolicy(sizePolicy);
        sessionTree->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(sessionTree);

        editor = new XmlEditWidget(centralwidget);
        editor->setObjectName("editor");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editor->sizePolicy().hasHeightForWidth());
        editor->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(editor);


        verticalLayoutCentralWidget->addLayout(horizontalLayout);

        messagePanel = new QTabWidget(centralwidget);
        messagePanel->setObjectName("messagePanel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(messagePanel->sizePolicy().hasHeightForWidth());
        messagePanel->setSizePolicy(sizePolicy2);
        messagePanel->setTabPosition(QTabWidget::South);
        messagePanel->setDocumentMode(true);
        messagePanel->setTabsClosable(true);
        scxmlValidationErrors = new QWidget();
        scxmlValidationErrors->setObjectName("scxmlValidationErrors");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scxmlValidationErrors->sizePolicy().hasHeightForWidth());
        scxmlValidationErrors->setSizePolicy(sizePolicy3);
        horizontalLayout_3 = new QHBoxLayout(scxmlValidationErrors);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(1, 1, 1, 1);
        messagePanel->addTab(scxmlValidationErrors, QString());

        verticalLayoutCentralWidget->addWidget(messagePanel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 906, 23));
        menu_Navigation = new QMenu(menubar);
        menu_Navigation->setObjectName("menu_Navigation");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuHow_Do_I = new QMenu(menuHelp);
        menuHow_Do_I->setObjectName("menuHow_Do_I");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuExport = new QMenu(menuEdit);
        menuExport->setObjectName("menuExport");
        menuMore = new QMenu(menuEdit);
        menuMore->setObjectName("menuMore");
        menuFormatting = new QMenu(menuEdit);
        menuFormatting->setObjectName("menuFormatting");
        menuBoorkmarks = new QMenu(menubar);
        menuBoorkmarks->setObjectName("menuBoorkmarks");
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuNew_of_Kind = new QMenu(menuFile);
        menuNew_of_Kind->setObjectName("menuNew_of_Kind");
        menuExport_2 = new QMenu(menuFile);
        menuExport_2->setObjectName("menuExport_2");
        menu_XML = new QMenu(menubar);
        menu_XML->setObjectName("menu_XML");
        menuXML_Schema = new QMenu(menu_XML);
        menuXML_Schema->setObjectName("menuXML_Schema");
        menuXML_Schema->setTearOffEnabled(true);
        menuInsert = new QMenu(menuXML_Schema);
        menuInsert->setObjectName("menuInsert");
        menuAppend_sibling = new QMenu(menuXML_Schema);
        menuAppend_sibling->setObjectName("menuAppend_sibling");
        menuMetadata = new QMenu(menu_XML);
        menuMetadata->setObjectName("menuMetadata");
        menuSchema_Instance_XSI = new QMenu(menu_XML);
        menuSchema_Instance_XSI->setObjectName("menuSchema_Instance_XSI");
        menuSort_Attributes = new QMenu(menu_XML);
        menuSort_Attributes->setObjectName("menuSort_Attributes");
        menuSiblings = new QMenu(menu_XML);
        menuSiblings->setObjectName("menuSiblings");
        menuHierarchy = new QMenu(menu_XML);
        menuHierarchy->setObjectName("menuHierarchy");
        menuNamespaces = new QMenu(menu_XML);
        menuNamespaces->setObjectName("menuNamespaces");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuFilter_Attributes = new QMenu(menuView);
        menuFilter_Attributes->setObjectName("menuFilter_Attributes");
        menuAdvanced = new QMenu(menuView);
        menuAdvanced->setObjectName("menuAdvanced");
        menuPanels = new QMenu(menuView);
        menuPanels->setObjectName("menuPanels");
        viewSiblings = new QMenu(menuView);
        viewSiblings->setObjectName("viewSiblings");
        menuAdvanced_2 = new QMenu(menuView);
        menuAdvanced_2->setObjectName("menuAdvanced_2");
        menu_Sessions = new QMenu(menubar);
        menu_Sessions->setObjectName("menu_Sessions");
        menuTasks = new QMenu(menubar);
        menuTasks->setObjectName("menuTasks");
        menuSpecial = new QMenu(menubar);
        menuSpecial->setObjectName("menuSpecial");
        menuValidation = new QMenu(menuSpecial);
        menuValidation->setObjectName("menuValidation");
        menuXSLT = new QMenu(menuSpecial);
        menuXSLT->setObjectName("menuXSLT");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTasks->menuAction());
        menubar->addAction(menuBoorkmarks->menuAction());
        menubar->addAction(menu_XML->menuAction());
        menubar->addAction(menuSpecial->menuAction());
        menubar->addAction(menu_Navigation->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menu_Sessions->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_Navigation->addAction(actionGo_To_Parent);
        menu_Navigation->addAction(actionGo_to_Previous_Brother);
        menu_Navigation->addAction(actionGo_to_Next_Brother);
        menu_Navigation->addSeparator();
        menu_Navigation->addAction(actionShowXSLNavigator);
        menu_Navigation->addAction(actionShowSCXMLNavigator);
        menuHelp->addAction(actionExecuteAutoTest);
        menuHelp->addAction(actionHelpOnQXmlEdit);
        menuHelp->addAction(menuHow_Do_I->menuAction());
        menuHelp->addAction(actionSearchCommand);
        menuHelp->addAction(actionShowPrincipalShortcuts);
        menuHelp->addAction(actionShowKeyboardShortcuts);
        menuHelp->addAction(actionTipsOnVisualAppearance);
        menuHelp->addAction(actionAbout);
        menuHow_Do_I->addAction(actionHelpSetEditorDetail);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionDelete);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionPasteAsSibling);
        menuEdit->addAction(menuMore->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionEdit);
        menuEdit->addAction(actionSpecificProperties);
        menuEdit->addSeparator();
        menuEdit->addAction(actionReadOnly);
        menuEdit->addAction(menuExport->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionFindNext);
        menuEdit->addAction(actionFindPrevious);
        menuEdit->addAction(actionReplace);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDeleteBookmarked);
        menuEdit->addAction(actionCleanBookmarkedContent);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEditMetadata);
        menuEdit->addAction(menuFormatting->menuAction());
        menuEdit->addAction(actionEncoding);
        menuEdit->addSeparator();
        menuEdit->addAction(actionInfo);
        menuEdit->addAction(actionCopyPathToClipboard);
        menuEdit->addAction(actionShowContainingFolder);
        menuEdit->addSeparator();
        menuEdit->addAction(actionConfigureSnippets);
        menuEdit->addAction(actionConfigure);
        menuExport->addAction(actionExportAttributesSiblingsAsCSVClipboard);
        menuMore->addAction(actionCopyElementOnly);
        menuMore->addAction(actionCopyAttributes);
        menuMore->addAction(actionPasteLastAttributes);
        menuMore->addAction(actionPasteAttributes);
        menuMore->addAction(actionCopyElementPathClipboard);
        menuMore->addAction(actionAutoComplete);
        menuMore->addAction(actionEditXSLTitem);
        menuMore->addAction(actionEditAsText);
        menuFormatting->addAction(actionSetIndent);
        menuFormatting->addSeparator();
        menuFormatting->addAction(actionAddFormattingInfo);
        menuFormatting->addAction(actionRemoveFormattingInfo);
        menuFormatting->addSeparator();
        menuFormatting->addAction(actionPresetApacheFOP);
        menuFormatting->addAction(actionPresetNoIndentation);
        menuFormatting->addAction(actionPresetIndentOneAttributePerLine);
        menuBoorkmarks->addAction(actionToggleBookmark);
        menuBoorkmarks->addAction(actionClearBookmarks);
        menuBoorkmarks->addAction(actionGotoNextBookmark);
        menuBoorkmarks->addAction(actionGotoPreviousBookmark);
        menuFile->addAction(actionNewWindow);
        menuFile->addAction(actionNew);
        menuFile->addAction(actionNewFromClipboard);
        menuFile->addAction(menuNew_of_Kind->menuAction());
        menuFile->addAction(actionNewUsingXMLSchema);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpenSameWindow);
        menuFile->addAction(actionLoadSample);
        menuFile->addAction(actionXplore);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveACopyAs);
        menuFile->addAction(menuExport_2->menuAction());
        menuFile->addAction(actionReload);
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionLastFiles);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuFile->addSeparator();
        menuNew_of_Kind->addAction(actionNewXSLTSheet);
        menuNew_of_Kind->addAction(actionNewXSDDocument);
        menuNew_of_Kind->addAction(actionNewXSLFODocument);
        menuNew_of_Kind->addAction(actionNewSCXMLDocument);
        menuNew_of_Kind->addAction(actionNewMavenPOM);
        menuNew_of_Kind->addSeparator();
        menuNew_of_Kind->addAction(actionNewFromSnippet);
        menuExport_2->addAction(actionExportElementToFile);
        menuExport_2->addAction(actionCopyAllToClipboard);
        menuExport_2->addAction(actionExportAsJavaJavascriptSource);
        menuExport_2->addAction(actionExportAsCSource);
        menu_XML->addSeparator();
        menu_XML->addAction(actionAddChildElement);
        menu_XML->addAction(actionAppendChildElement);
        menu_XML->addAction(actionAddComment);
        menu_XML->addAction(actionAppendComment);
        menu_XML->addAction(actionAddProcessingInstruction);
        menu_XML->addAction(actionAppendProcessingInstruction);
        menu_XML->addSeparator();
        menu_XML->addAction(actionAppendSpecial);
        menu_XML->addAction(actionInsertSpecial);
        menu_XML->addSeparator();
        menu_XML->addAction(menuHierarchy->menuAction());
        menu_XML->addAction(menuSiblings->menuAction());
        menu_XML->addAction(actionTransformInComment);
        menu_XML->addAction(actionExtractElementsFromComment);
        menu_XML->addAction(actionInsertSnippet);
        menu_XML->addAction(menuSchema_Instance_XSI->menuAction());
        menu_XML->addAction(menuXML_Schema->menuAction());
        menu_XML->addAction(menuNamespaces->menuAction());
        menu_XML->addAction(actionInsertProlog);
        menu_XML->addAction(menuMetadata->menuAction());
        menu_XML->addSeparator();
        menu_XML->addAction(actionEditInnerXMLBase64);
        menu_XML->addAction(actionEditInnerXML);
        menu_XML->addAction(actionEditInnerBase64Text);
        menu_XML->addAction(actionPasteAndSubstituteText);
        menu_XML->addAction(menuSort_Attributes->menuAction());
        menu_XML->addAction(actionTransforminSnippet);
        menu_XML->addSeparator();
        menu_XML->addAction(actionMoveUp);
        menu_XML->addAction(actionMoveDown);
        menu_XML->addSeparator();
        menuXML_Schema->addAction(actionQuickReferenceElements);
        menuXML_Schema->addSeparator();
        menuXML_Schema->addAction(menuInsert->menuAction());
        menuXML_Schema->addAction(menuAppend_sibling->menuAction());
        menuXML_Schema->addAction(actionXSDModifyType);
        menuXML_Schema->addAction(actionEditXSDAnnotation);
        menuXML_Schema->addAction(actionEditEnumerationFacet);
        menuInsert->addAction(actionXSDInsertElement);
        menuInsert->addAction(actionXSDInsertType);
        menuInsert->addAction(actionXSDInsertAttribute);
        menuAppend_sibling->addAction(actionXSDAppendElement);
        menuAppend_sibling->addAction(actionXSDAppendType);
        menuAppend_sibling->addAction(actionXSDAppendAttribute);
        menuMetadata->addAction(actionInsertMetadata);
        menuMetadata->addAction(actionInsertCompleteMetadata);
        menuSchema_Instance_XSI->addAction(actionInsertXmlSchemaReferences);
        menuSchema_Instance_XSI->addSeparator();
        menuSchema_Instance_XSI->addAction(actionInsertNilAttribute);
        menuSchema_Instance_XSI->addAction(actionRemoveXSITypeAttribute);
        menuSchema_Instance_XSI->addSeparator();
        menuSchema_Instance_XSI->addAction(actionInsertXSITypeAttribute);
        menuSchema_Instance_XSI->addAction(actionRemoveNilAttribute);
        menuSort_Attributes->addAction(actionSortAttributesElement);
        menuSort_Attributes->addAction(actionSortAttributesElementRecursive);
        menuSort_Attributes->addAction(actionSortAttributes);
        menuSiblings->addAction(actionRemoveAllSiblingsBefore);
        menuSiblings->addAction(actionRemoveAllSiblingsAfter);
        menuSiblings->addAction(actionRemoveAllSiblings);
        menuHierarchy->addAction(actionInsertChildContainer);
        menuHierarchy->addAction(actionInsertParent);
        menuHierarchy->addAction(actionRemoveParent);
        menuHierarchy->addSeparator();
        menuHierarchy->addAction(actionInsertDisablingParent);
        menuNamespaces->addAction(actionSetPrefix);
        menuNamespaces->addAction(actionReplacePrefix);
        menuNamespaces->addAction(actionRemovePrefix);
        menuNamespaces->addSeparator();
        menuNamespaces->addAction(actionSetNamespace);
        menuNamespaces->addAction(actionReplaceNamespace);
        menuNamespaces->addAction(actionRemoveNamespace);
        menuNamespaces->addAction(actionNormalizeNamespace);
        menuTools->addAction(actionPlugins);
        menuTools->addAction(actionAnonymizeFile);
        menuTools->addAction(actionSearchInFiles);
        menuTools->addAction(actionExtractFragmentsFromFile);
        menuTools->addAction(actionViewData);
        menuTools->addAction(actionValidationDialog);
        menuTools->addAction(actionBase64Tools);
        menuTools->addAction(actionEncodingTools);
        menuTools->addAction(actionCompareFiles);
        menuTools->addAction(actionSpring_and_Forces);
        menuTools->addAction(actionBinaryViewer);
        menuTools->addAction(actionCodePages);
        menuTools->addAction(actionXSLExecutor);
        menuTools->addAction(actionTestXML);
        menuView->addAction(menuPanels->menuAction());
        menuView->addAction(actionColumnView);
        menuView->addAction(menuAdvanced->menuAction());
        menuView->addAction(actionExpandAll);
        menuView->addAction(actionExpandSelectedItem);
        menuView->addAction(actionCloseItemAndChildren);
        menuView->addAction(viewSiblings->menuAction());
        menuView->addAction(actionHideAllLeafChildren);
        menuView->addAction(actionShowAllLeafChildren);
        menuView->addAction(menuFilter_Attributes->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionCompactView);
        menuView->addAction(actionShowAttrLine);
        menuView->addAction(actionShowChildIndex);
        menuView->addAction(actionShowAttributesSorted);
        menuView->addAction(actionShowElementSize);
        menuView->addAction(menuAdvanced_2->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuView->addSeparator();
        menuView->addAction(actionViewGraphic);
        menuFilter_Attributes->addAction(actionVisAttrApplyTemporaryProfile);
        menuFilter_Attributes->addAction(actionVisAttrSaveCurrenteProfile);
        menuFilter_Attributes->addAction(actionVisAttrManageProfiles);
        menuFilter_Attributes->addAction(actionVisAttrRemoveCurrentProfile);
        menuPanels->addAction(actionShowCurrentSessionPanel);
        menuPanels->addAction(actionShowMainButtons);
        menuPanels->addAction(actionShowStatusBar);
        viewSiblings->addAction(actionCloseThisAllBrothers);
        viewSiblings->addAction(actionHideBrothers);
        viewSiblings->addAction(actionCloseSiblings);
        viewSiblings->addAction(actionOpenSiblingsAtTheSameLevel);
        menuAdvanced_2->addAction(actionShowAlwaysFullTextComments);
        menuAdvanced_2->addAction(actionFixedSizeAttributes);
        menuAdvanced_2->addAction(actionShowAttributesLength);
        menuAdvanced_2->addAction(actionShowElementTextLength);
        menuAdvanced_2->addAction(actionShowBase64);
        menuAdvanced_2->addAction(actionShowCurrentElementTextBase64);
        menuAdvanced_2->addAction(actionHideLeafChildren);
        menuAdvanced_2->addAction(actionShowLeafChildren);
        menu_Sessions->addAction(actionNewSession);
        menu_Sessions->addAction(actionPauseSession);
        menu_Sessions->addAction(actionResumeSession);
        menu_Sessions->addAction(actionCloseSession);
        menu_Sessions->addSeparator();
        menu_Sessions->addAction(actionSessionDetails);
        menu_Sessions->addSeparator();
        menu_Sessions->addAction(actionManageSessions);
        menuTasks->addAction(actionGraphic);
        menuTasks->addAction(actionTaskDisplayDetail);
        menuTasks->addAction(actionChooseEditType);
        menuTasks->addSeparator();
        menuTasks->addAction(actionActions);
        menuTasks->addAction(actionChooseUserProfile);
        menuTasks->addAction(actionOpenGuidedOperationPanel);
        menuSpecial->addAction(actionXMLEditMode);
        menuSpecial->addAction(actionXSLTEditMode);
        menuSpecial->addAction(actionSCXMLEditMode);
        menuSpecial->addSeparator();
        menuSpecial->addAction(actionScanXMLTagsAndNamesXSLTAutocompletion);
        menuSpecial->addAction(actionAnonymize);
        menuSpecial->addAction(actionCompare);
        menuSpecial->addAction(actionCompareXSD);
        menuSpecial->addAction(actionGenerateXSD);
        menuSpecial->addAction(actionGenerateXMLFromXSD);
        menuSpecial->addAction(actionFillSerie);
        menuSpecial->addAction(actionCloneElements);
        menuSpecial->addSeparator();
        menuSpecial->addAction(menuValidation->menuAction());
        menuSpecial->addAction(menuXSLT->menuAction());
        menuValidation->addAction(actionValidate);
        menuValidation->addAction(actionValidateUsingDocumentReferences);
        menuValidation->addAction(actionValidateNewFile);
        menuValidation->addAction(actionValidateSCXML);
        menuValidation->addAction(actionValidateXSD);
        menuXSLT->addAction(actionExecuteXSLTAsSource);
        menuXSLT->addAction(actionExecuteXSLTAsSheet);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionShowCurrentSessionPanel);
        toolBar->addAction(actionColumnView);
        toolBar->addSeparator();
        toolBar->addAction(actionFind);
        toolBar->addAction(actionValidate);
        toolBar->addAction(actionToggleBookmark);
        toolBar->addSeparator();
        toolBar->addAction(actionGo_To_Parent);
        toolBar->addAction(actionGo_to_Previous_Brother);
        toolBar->addAction(actionGo_to_Next_Brother);
        toolBar->addSeparator();
        toolBar->addAction(actionHelpOnQXmlEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QXmlEdit", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
        actionNew->setIconText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save &As...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "&Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Cop&y", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExpandAll->setText(QCoreApplication::translate("MainWindow", "&Expand All", nullptr));
#if QT_CONFIG(tooltip)
        actionExpandAll->setToolTip(QCoreApplication::translate("MainWindow", "Expand all the items.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExpandAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowAttrLine->setText(QCoreApplication::translate("MainWindow", "Show &One Attribute per Line", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About QXmlEdit", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "About QXmlEdit", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddComment->setText(QCoreApplication::translate("MainWindow", "Add &Comment as Child...", nullptr));
#if QT_CONFIG(shortcut)
        actionAddComment->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAppendComment->setText(QCoreApplication::translate("MainWindow", "Append C&omment as Brother...", nullptr));
#if QT_CONFIG(shortcut)
        actionAppendComment->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddProcessingInstruction->setText(QCoreApplication::translate("MainWindow", "Add Processing Instruction as Child...", nullptr));
#if QT_CONFIG(shortcut)
        actionAddProcessingInstruction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAppendProcessingInstruction->setText(QCoreApplication::translate("MainWindow", "Append Processing Instruction as Brother...", nullptr));
#if QT_CONFIG(shortcut)
        actionAppendProcessingInstruction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddChildElement->setText(QCoreApplication::translate("MainWindow", "Add a Child Element...", nullptr));
#if QT_CONFIG(tooltip)
        actionAddChildElement->setToolTip(QCoreApplication::translate("MainWindow", "Add a new element", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAddChildElement->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAppendChildElement->setText(QCoreApplication::translate("MainWindow", "Append a Brother Element...", nullptr));
#if QT_CONFIG(shortcut)
        actionAppendChildElement->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEdit->setText(QCoreApplication::translate("MainWindow", "&Properties...", nullptr));
#if QT_CONFIG(shortcut)
        actionEdit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp->setText(QCoreApplication::translate("MainWindow", "Move &Up", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUp->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown->setText(QCoreApplication::translate("MainWindow", "Move Do&wn", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveDown->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "&Find...", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_To_Parent->setText(QCoreApplication::translate("MainWindow", "Go To Parent", nullptr));
#if QT_CONFIG(tooltip)
        actionGo_To_Parent->setToolTip(QCoreApplication::translate("MainWindow", "Move to the parent", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGo_To_Parent->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_to_Previous_Brother->setText(QCoreApplication::translate("MainWindow", "Go to Previous Brother", nullptr));
#if QT_CONFIG(tooltip)
        actionGo_to_Previous_Brother->setToolTip(QCoreApplication::translate("MainWindow", "Go to Previous Brother", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGo_to_Previous_Brother->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_to_Next_Brother->setText(QCoreApplication::translate("MainWindow", "Go to Next Brother", nullptr));
#if QT_CONFIG(tooltip)
        actionGo_to_Next_Brother->setToolTip(QCoreApplication::translate("MainWindow", "Go to Next Brother", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGo_to_Next_Brother->setShortcut(QCoreApplication::translate("MainWindow", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleBookmark->setText(QCoreApplication::translate("MainWindow", "&Toggle Bookmark", nullptr));
#if QT_CONFIG(tooltip)
        actionToggleBookmark->setToolTip(QCoreApplication::translate("MainWindow", "Toggle Boorkmark at Current Location", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionToggleBookmark->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClearBookmarks->setText(QCoreApplication::translate("MainWindow", "&Remove All Bookmarks", nullptr));
        actionGotoNextBookmark->setText(QCoreApplication::translate("MainWindow", "Go To &Next Bookmark", nullptr));
#if QT_CONFIG(shortcut)
        actionGotoNextBookmark->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGotoPreviousBookmark->setText(QCoreApplication::translate("MainWindow", "Go To &Previous Bookmark", nullptr));
#if QT_CONFIG(shortcut)
        actionGotoPreviousBookmark->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionList_Bookmarks->setText(QCoreApplication::translate("MainWindow", "List Bookmarks", nullptr));
        actionShowChildIndex->setText(QCoreApplication::translate("MainWindow", "Show Child &Index", nullptr));
#if QT_CONFIG(tooltip)
        actionShowChildIndex->setToolTip(QCoreApplication::translate("MainWindow", "Show Child Index", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCloseThisAllBrothers->setText(QCoreApplication::translate("MainWindow", "Close This and All Siblings", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseThisAllBrothers->setToolTip(QCoreApplication::translate("MainWindow", "Close This and All Siblings", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCloseThisAllBrothers->setShortcut(QCoreApplication::translate("MainWindow", "F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewFromClipboard->setText(QCoreApplication::translate("MainWindow", "New From &Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionNewFromClipboard->setToolTip(QCoreApplication::translate("MainWindow", "import XML from clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCompactView->setText(QCoreApplication::translate("MainWindow", "&Compact View", nullptr));
#if QT_CONFIG(tooltip)
        actionCompactView->setToolTip(QCoreApplication::translate("MainWindow", "Compact View", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHideBrothers->setText(QCoreApplication::translate("MainWindow", "&Hide Siblings", nullptr));
#if QT_CONFIG(tooltip)
        actionHideBrothers->setToolTip(QCoreApplication::translate("MainWindow", "Hide Siblings", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFixedSizeAttributes->setText(QCoreApplication::translate("MainWindow", "&Fixed Size Attributes", nullptr));
#if QT_CONFIG(tooltip)
        actionFixedSizeAttributes->setToolTip(QCoreApplication::translate("MainWindow", "Show Attributes with Fixed Size Font", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowAttributesLength->setText(QCoreApplication::translate("MainWindow", "Show Attributes &Length", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAttributesLength->setToolTip(QCoreApplication::translate("MainWindow", "Show Attributes Length", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowBase64->setText(QCoreApplication::translate("MainWindow", "Show Text as Base 64 Coded", nullptr));
#if QT_CONFIG(tooltip)
        actionShowBase64->setToolTip(QCoreApplication::translate("MainWindow", "Show Text as Base 64 Coded", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowCurrentElementTextBase64->setText(QCoreApplication::translate("MainWindow", "Show Current Element Text Base 64", nullptr));
#if QT_CONFIG(tooltip)
        actionShowCurrentElementTextBase64->setToolTip(QCoreApplication::translate("MainWindow", "Show Current Element Text Base 64", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConfigure->setText(QCoreApplication::translate("MainWindow", "Confi&gure...", nullptr));
#if QT_CONFIG(tooltip)
        actionConfigure->setToolTip(QCoreApplication::translate("MainWindow", "Configure", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditInnerXML->setText(QCoreApplication::translate("MainWindow", "Edit Inner XML...", nullptr));
#if QT_CONFIG(tooltip)
        actionEditInnerXML->setToolTip(QCoreApplication::translate("MainWindow", "Edit inner XML", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditInnerXMLBase64->setText(QCoreApplication::translate("MainWindow", "Edit Inner XML Base 64 Coded...", nullptr));
#if QT_CONFIG(tooltip)
        actionEditInnerXMLBase64->setToolTip(QCoreApplication::translate("MainWindow", "Edit inner XML Base 64 Coded", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditInnerBase64Text->setText(QCoreApplication::translate("MainWindow", "Edit inner Base 64 Text...", nullptr));
#if QT_CONFIG(tooltip)
        actionEditInnerBase64Text->setToolTip(QCoreApplication::translate("MainWindow", "Edit inner Base 64 Text", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCompare->setText(QCoreApplication::translate("MainWindow", "Compare with...", nullptr));
#if QT_CONFIG(tooltip)
        actionCompare->setToolTip(QCoreApplication::translate("MainWindow", "Compare the current data with another XML file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReload->setText(QCoreApplication::translate("MainWindow", "Reload", nullptr));
#if QT_CONFIG(tooltip)
        actionReload->setToolTip(QCoreApplication::translate("MainWindow", "Reload the current file", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLastFiles->setText(QCoreApplication::translate("MainWindow", "Last Files", nullptr));
        actionCopyPathToClipboard->setText(QCoreApplication::translate("MainWindow", "Copy File Path to Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyPathToClipboard->setToolTip(QCoreApplication::translate("MainWindow", "Copy path to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddCurrentDirectory->setText(QCoreApplication::translate("MainWindow", "Add Current Directory to Preferred Ones", nullptr));
#if QT_CONFIG(tooltip)
        actionAddCurrentDirectory->setToolTip(QCoreApplication::translate("MainWindow", "Add the current directory to Preferred Ones", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditPreferredDirectories->setText(QCoreApplication::translate("MainWindow", "Edit Preferred Directories...", nullptr));
#if QT_CONFIG(tooltip)
        actionEditPreferredDirectories->setToolTip(QCoreApplication::translate("MainWindow", "Edit Preferred Directories", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidate->setText(QCoreApplication::translate("MainWindow", "Validate", nullptr));
#if QT_CONFIG(tooltip)
        actionValidate->setToolTip(QCoreApplication::translate("MainWindow", "Validate against a XSD", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidateNewFile->setText(QCoreApplication::translate("MainWindow", "Validate Using New Schema File...", nullptr));
#if QT_CONFIG(tooltip)
        actionValidateNewFile->setToolTip(QCoreApplication::translate("MainWindow", "Validate using new XSD File.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertSnippet->setText(QCoreApplication::translate("MainWindow", "Insert Snippet...", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertSnippet->setToolTip(QCoreApplication::translate("MainWindow", "Insert a XML fragment", nullptr));
#endif // QT_CONFIG(tooltip)
        actionConfigureSnippets->setText(QCoreApplication::translate("MainWindow", "Configure Snippets...", nullptr));
#if QT_CONFIG(tooltip)
        actionConfigureSnippets->setToolTip(QCoreApplication::translate("MainWindow", "Configure Snippets", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExecuteAutoTest->setText(QCoreApplication::translate("MainWindow", "Execute Auto Test", nullptr));
#if QT_CONFIG(tooltip)
        actionExecuteAutoTest->setToolTip(QCoreApplication::translate("MainWindow", "Execute Auto Test", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPlugins->setText(QCoreApplication::translate("MainWindow", "Plugins", nullptr));
        actionTransforminSnippet->setText(QCoreApplication::translate("MainWindow", "Transform in Snippet...", nullptr));
#if QT_CONFIG(tooltip)
        actionTransforminSnippet->setToolTip(QCoreApplication::translate("MainWindow", "Transform in Snippet", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowElementTextLength->setText(QCoreApplication::translate("MainWindow", "Show Element Text Length", nullptr));
#if QT_CONFIG(tooltip)
        actionShowElementTextLength->setToolTip(QCoreApplication::translate("MainWindow", "Show Element Text Length", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowElementSize->setText(QCoreApplication::translate("MainWindow", "Show Element Size", nullptr));
#if QT_CONFIG(tooltip)
        actionShowElementSize->setToolTip(QCoreApplication::translate("MainWindow", "Show element size", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDeleteBookmarked->setText(QCoreApplication::translate("MainWindow", "Delete Bookmarked Items", nullptr));
#if QT_CONFIG(tooltip)
        actionDeleteBookmarked->setToolTip(QCoreApplication::translate("MainWindow", "Delete Bookmarked items", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCleanBookmarkedContent->setText(QCoreApplication::translate("MainWindow", "Clean Bookmarked Items Content", nullptr));
#if QT_CONFIG(tooltip)
        actionCleanBookmarkedContent->setToolTip(QCoreApplication::translate("MainWindow", "Clean Bookmarked ItemsContent", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCleanBookmarkedItemsAttribute->setText(QCoreApplication::translate("MainWindow", "Clean Bookmarked Items Attribute...", nullptr));
#if QT_CONFIG(tooltip)
        actionCleanBookmarkedItemsAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Clean Bookmarked Items Attribute", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXplore->setText(QCoreApplication::translate("MainWindow", "Explore Structure...", nullptr));
#if QT_CONFIG(tooltip)
        actionXplore->setToolTip(QCoreApplication::translate("MainWindow", "Explore structure loading only partial informations about a file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBlindLoadFile->setText(QCoreApplication::translate("MainWindow", "Blind Load File...", nullptr));
#if QT_CONFIG(tooltip)
        actionBlindLoadFile->setToolTip(QCoreApplication::translate("MainWindow", "load a file in blind mode", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHideView->setText(QCoreApplication::translate("MainWindow", "Hide View", nullptr));
#if QT_CONFIG(tooltip)
        actionHideView->setToolTip(QCoreApplication::translate("MainWindow", "Hide graphics view", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSearchInFiles->setText(QCoreApplication::translate("MainWindow", "Search in Files...", nullptr));
#if QT_CONFIG(tooltip)
        actionSearchInFiles->setToolTip(QCoreApplication::translate("MainWindow", "Search in files", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelpOnQXmlEdit->setText(QCoreApplication::translate("MainWindow", "Help on QXmlEdit", nullptr));
#if QT_CONFIG(tooltip)
        actionHelpOnQXmlEdit->setToolTip(QCoreApplication::translate("MainWindow", "Help on QXmlEdit", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAllowedSchemaElements->setText(QCoreApplication::translate("MainWindow", "Allowed Schema Elements", nullptr));
#if QT_CONFIG(tooltip)
        actionAllowedSchemaElements->setToolTip(QCoreApplication::translate("MainWindow", "Allowed Schema Elements", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPasteAndSubstituteText->setText(QCoreApplication::translate("MainWindow", "Edit Inner Text as One Node...", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteAndSubstituteText->setToolTip(QCoreApplication::translate("MainWindow", "Paste and substitute element text", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewUsingXMLSchema->setText(QCoreApplication::translate("MainWindow", "New Using XML Schema...", nullptr));
#if QT_CONFIG(tooltip)
        actionNewUsingXMLSchema->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new XML Document using a XML Schema", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTransformInComment->setText(QCoreApplication::translate("MainWindow", "Transform in Comment", nullptr));
#if QT_CONFIG(tooltip)
        actionTransformInComment->setToolTip(QCoreApplication::translate("MainWindow", "Transform in comment", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExtractElementsFromComment->setText(QCoreApplication::translate("MainWindow", "Extract Elements from Comment", nullptr));
#if QT_CONFIG(tooltip)
        actionExtractElementsFromComment->setToolTip(QCoreApplication::translate("MainWindow", "Extract elements from comment.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExtractFragmentsFromFile->setText(QCoreApplication::translate("MainWindow", "Extract Fragments From a File...", nullptr));
#if QT_CONFIG(tooltip)
        actionExtractFragmentsFromFile->setToolTip(QCoreApplication::translate("MainWindow", "Extract XML fragments from a huge file...", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWelcomeDialog->setText(QCoreApplication::translate("MainWindow", "Welcome Dialog...", nullptr));
#if QT_CONFIG(tooltip)
        actionWelcomeDialog->setToolTip(QCoreApplication::translate("MainWindow", "Show the welcome dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSaveACopyAs->setText(QCoreApplication::translate("MainWindow", "Save a Copy As...", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveACopyAs->setToolTip(QCoreApplication::translate("MainWindow", "Saves a copy of the current file. Current file path will not be affected.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHideAllLeafChildren->setText(QCoreApplication::translate("MainWindow", "Hide All the Leaf Children", nullptr));
#if QT_CONFIG(tooltip)
        actionHideAllLeafChildren->setToolTip(QCoreApplication::translate("MainWindow", "Hide all the nodes that does not have children, revealing the structure.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowAllLeafChildren->setText(QCoreApplication::translate("MainWindow", "Show All the Leaf Children", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAllLeafChildren->setToolTip(QCoreApplication::translate("MainWindow", "Show all the leaf nodes that was previously hidden.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHideLeafChildren->setText(QCoreApplication::translate("MainWindow", "Hide Leaf Children", nullptr));
#if QT_CONFIG(tooltip)
        actionHideLeafChildren->setToolTip(QCoreApplication::translate("MainWindow", "Hide the children of the current node that does not have children, revealing the structure.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowLeafChildren->setText(QCoreApplication::translate("MainWindow", "Show Leaf Children", nullptr));
#if QT_CONFIG(tooltip)
        actionShowLeafChildren->setToolTip(QCoreApplication::translate("MainWindow", "Show the leaf nodes of the current node that was previously hidden.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewAsXsd->setText(QCoreApplication::translate("MainWindow", "View As Xsd", nullptr));
        actionColumnView->setText(QCoreApplication::translate("MainWindow", "Columnar View...", nullptr));
#if QT_CONFIG(tooltip)
        actionColumnView->setToolTip(QCoreApplication::translate("MainWindow", "View as columns.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowCurrentSessionPanel->setText(QCoreApplication::translate("MainWindow", "Show Current Session Panel", nullptr));
#if QT_CONFIG(tooltip)
        actionShowCurrentSessionPanel->setToolTip(QCoreApplication::translate("MainWindow", "Opens the session panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewSession->setText(QCoreApplication::translate("MainWindow", "New...", nullptr));
#if QT_CONFIG(tooltip)
        actionNewSession->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new session.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPauseSession->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPauseSession->setToolTip(QCoreApplication::translate("MainWindow", "Pauses the current session.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionResumeSession->setText(QCoreApplication::translate("MainWindow", "Resume", nullptr));
#if QT_CONFIG(tooltip)
        actionResumeSession->setToolTip(QCoreApplication::translate("MainWindow", "Resume the current session.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCloseSession->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseSession->setToolTip(QCoreApplication::translate("MainWindow", "Closes the current session.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionManageSessions->setText(QCoreApplication::translate("MainWindow", "Manage...", nullptr));
#if QT_CONFIG(tooltip)
        actionManageSessions->setToolTip(QCoreApplication::translate("MainWindow", "Manage the sessions.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSessionDetails->setText(QCoreApplication::translate("MainWindow", "Details...", nullptr));
#if QT_CONFIG(tooltip)
        actionSessionDetails->setToolTip(QCoreApplication::translate("MainWindow", "Details about the current session.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(tooltip)
        actionUndo->setToolTip(QCoreApplication::translate("MainWindow", "Undo last action.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(tooltip)
        actionRedo->setToolTip(QCoreApplication::translate("MainWindow", "Redo last action.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewWindow->setText(QCoreApplication::translate("MainWindow", "New Window", nullptr));
#if QT_CONFIG(tooltip)
        actionNewWindow->setToolTip(QCoreApplication::translate("MainWindow", "Opens a new window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNewWindow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewData->setText(QCoreApplication::translate("MainWindow", "View data...", nullptr));
#if QT_CONFIG(tooltip)
        actionViewData->setToolTip(QCoreApplication::translate("MainWindow", "Navigates a data file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBase64Tools->setText(QCoreApplication::translate("MainWindow", "Base 64 Tools...", nullptr));
#if QT_CONFIG(tooltip)
        actionBase64Tools->setToolTip(QCoreApplication::translate("MainWindow", "Base 64 tools", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEncodingTools->setText(QCoreApplication::translate("MainWindow", "Encoding Tools...", nullptr));
#if QT_CONFIG(tooltip)
        actionEncodingTools->setToolTip(QCoreApplication::translate("MainWindow", "Encoding Tools.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCompareXSD->setText(QCoreApplication::translate("MainWindow", "Compare XS&D...", nullptr));
#if QT_CONFIG(tooltip)
        actionCompareXSD->setToolTip(QCoreApplication::translate("MainWindow", "Compare two XSD in a graphical way", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportAttributesSiblingsAsCSVClipboard->setText(QCoreApplication::translate("MainWindow", "Export Attributes of Siblings as CSV in the Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionExportAttributesSiblingsAsCSVClipboard->setToolTip(QCoreApplication::translate("MainWindow", "Export attributes of siblings as CSV in the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVisAttrApplyTemporaryProfile->setText(QCoreApplication::translate("MainWindow", "Apply a Temporary Profile", nullptr));
#if QT_CONFIG(tooltip)
        actionVisAttrApplyTemporaryProfile->setToolTip(QCoreApplication::translate("MainWindow", "Apply a temporary profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVisAttrSaveCurrenteProfile->setText(QCoreApplication::translate("MainWindow", "Save the Current Profile...", nullptr));
#if QT_CONFIG(tooltip)
        actionVisAttrSaveCurrenteProfile->setToolTip(QCoreApplication::translate("MainWindow", "Save the current profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVisAttrManageProfiles->setText(QCoreApplication::translate("MainWindow", "Manage Profiles...", nullptr));
#if QT_CONFIG(tooltip)
        actionVisAttrManageProfiles->setToolTip(QCoreApplication::translate("MainWindow", "Manage profiles...", nullptr));
#endif // QT_CONFIG(tooltip)
        actionVisAttrRemoveCurrentProfile->setText(QCoreApplication::translate("MainWindow", "Remove the Current Profile", nullptr));
#if QT_CONFIG(tooltip)
        actionVisAttrRemoveCurrentProfile->setToolTip(QCoreApplication::translate("MainWindow", "Remove the current profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCompareFiles->setText(QCoreApplication::translate("MainWindow", "Compare Files...", nullptr));
#if QT_CONFIG(tooltip)
        actionCompareFiles->setToolTip(QCoreApplication::translate("MainWindow", "Compare two files.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSpring_and_Forces->setText(QCoreApplication::translate("MainWindow", "Relations...", nullptr));
#if QT_CONFIG(tooltip)
        actionSpring_and_Forces->setToolTip(QCoreApplication::translate("MainWindow", "Under development", nullptr));
#endif // QT_CONFIG(tooltip)
        actionViewGraphic->setText(QCoreApplication::translate("MainWindow", "View Relations...", nullptr));
        actionCopyAttributes->setText(QCoreApplication::translate("MainWindow", "Copy Attributes...", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAttributes->setToolTip(QCoreApplication::translate("MainWindow", "Copy attributes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopyAttributes->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteAttributes->setText(QCoreApplication::translate("MainWindow", "Paste Attributes...", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteAttributes->setToolTip(QCoreApplication::translate("MainWindow", "Paste attributes.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPasteAttributes->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteLastAttributes->setText(QCoreApplication::translate("MainWindow", "Paste Fast Attributes", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteLastAttributes->setToolTip(QCoreApplication::translate("MainWindow", "Paste Fast Attributes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPasteLastAttributes->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyElementPathClipboard->setText(QCoreApplication::translate("MainWindow", "Copy Element Path in the Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyElementPathClipboard->setToolTip(QCoreApplication::translate("MainWindow", "Copy the element path to the clipboard.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAutoComplete->setText(QCoreApplication::translate("MainWindow", "AutoComplete...", nullptr));
#if QT_CONFIG(tooltip)
        actionAutoComplete->setToolTip(QCoreApplication::translate("MainWindow", "Autocomplete the current word.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAutoComplete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionXMLEditMode->setText(QCoreApplication::translate("MainWindow", "XML Edit Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionXMLEditMode->setToolTip(QCoreApplication::translate("MainWindow", "XML edit mode conventions.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSLTEditMode->setText(QCoreApplication::translate("MainWindow", "XSLT Edit Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionXSLTEditMode->setToolTip(QCoreApplication::translate("MainWindow", "Apply XSLT edit mode conventions.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewXSLTSheet->setText(QCoreApplication::translate("MainWindow", "New XSLT sheet", nullptr));
#if QT_CONFIG(tooltip)
        actionNewXSLTSheet->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new empty XSLT sheet.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewXSDDocument->setText(QCoreApplication::translate("MainWindow", "New XSD document (XML Schema)", nullptr));
#if QT_CONFIG(tooltip)
        actionNewXSDDocument->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new empty XML Schema document.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewXSLFODocument->setText(QCoreApplication::translate("MainWindow", "New XSL-FO document", nullptr));
#if QT_CONFIG(tooltip)
        actionNewXSLFODocument->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new empty XSL-FO document.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditXSLTitem->setText(QCoreApplication::translate("MainWindow", "Edit XSLT item...", nullptr));
#if QT_CONFIG(tooltip)
        actionEditXSLTitem->setToolTip(QCoreApplication::translate("MainWindow", "Edit element using a XSLT specific dialog.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionScanXMLTagsAndNamesXSLTAutocompletion->setText(QCoreApplication::translate("MainWindow", "Target XML for Tags and Names for XSLT Autocompletion...", nullptr));
#if QT_CONFIG(tooltip)
        actionScanXMLTagsAndNamesXSLTAutocompletion->setToolTip(QCoreApplication::translate("MainWindow", "Scan an XML file and uses tags and attribute names for  XSLT autocompletion.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowXSLNavigator->setText(QCoreApplication::translate("MainWindow", "Show XSL Navigator", nullptr));
#if QT_CONFIG(tooltip)
        actionShowXSLNavigator->setToolTip(QCoreApplication::translate("MainWindow", "Show the XSL navigator dialog", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSpecificProperties->setText(QCoreApplication::translate("MainWindow", "Specific Properties...", nullptr));
#if QT_CONFIG(tooltip)
        actionSpecificProperties->setToolTip(QCoreApplication::translate("MainWindow", "Opens the specific properties panel.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSpecificProperties->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteAsSibling->setText(QCoreApplication::translate("MainWindow", "Paste as Sibling", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteAsSibling->setToolTip(QCoreApplication::translate("MainWindow", "Paste the clipboard content as sibling of the selected node", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPasteAsSibling->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExpandSelectedItem->setText(QCoreApplication::translate("MainWindow", "Expand the Selected Item", nullptr));
#if QT_CONFIG(tooltip)
        actionExpandSelectedItem->setToolTip(QCoreApplication::translate("MainWindow", "Expand the selected item and all its children.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExpandSelectedItem->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewMavenPOM->setText(QCoreApplication::translate("MainWindow", "New Maven POM", nullptr));
#if QT_CONFIG(tooltip)
        actionNewMavenPOM->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new file from Mavn POM template.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNewFromSnippet->setText(QCoreApplication::translate("MainWindow", "New from Snippet...", nullptr));
#if QT_CONFIG(tooltip)
        actionNewFromSnippet->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new file from an existing snippet.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTipsOnVisualAppearance->setText(QCoreApplication::translate("MainWindow", "Customizing Display Styles", nullptr));
#if QT_CONFIG(tooltip)
        actionTipsOnVisualAppearance->setToolTip(QCoreApplication::translate("MainWindow", "Some tips about how to change how the data are visualized.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionBinaryViewer->setText(QCoreApplication::translate("MainWindow", "Binary Viewer", nullptr));
#if QT_CONFIG(tooltip)
        actionBinaryViewer->setToolTip(QCoreApplication::translate("MainWindow", "Binary files viewer", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReadOnly->setText(QCoreApplication::translate("MainWindow", "Read Only", nullptr));
#if QT_CONFIG(tooltip)
        actionReadOnly->setToolTip(QCoreApplication::translate("MainWindow", "Does not allow modification to the document.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertMetadata->setText(QCoreApplication::translate("MainWindow", "Insert Metadata", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertMetadata->setToolTip(QCoreApplication::translate("MainWindow", "Insert updatable metadata.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditMetadata->setText(QCoreApplication::translate("MainWindow", "Edit Metadata", nullptr));
#if QT_CONFIG(tooltip)
        actionEditMetadata->setToolTip(QCoreApplication::translate("MainWindow", "Edit the metadata", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportAsJavaJavascriptSource->setText(QCoreApplication::translate("MainWindow", "Export as Java/JavaScript source...", nullptr));
#if QT_CONFIG(tooltip)
        actionExportAsJavaJavascriptSource->setToolTip(QCoreApplication::translate("MainWindow", "Export as Java/JavaScript source", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertCompleteMetadata->setText(QCoreApplication::translate("MainWindow", "Insert Complete Metadata", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertCompleteMetadata->setToolTip(QCoreApplication::translate("MainWindow", "Insert complete metadata (updatatable and manual).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertProlog->setText(QCoreApplication::translate("MainWindow", "Insert prolog", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertProlog->setToolTip(QCoreApplication::translate("MainWindow", "Insert the xml prolog", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEncoding->setText(QCoreApplication::translate("MainWindow", "Encoding", nullptr));
#if QT_CONFIG(tooltip)
        actionEncoding->setToolTip(QCoreApplication::translate("MainWindow", "Select the encoding.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportAsCSource->setText(QCoreApplication::translate("MainWindow", "Export as C/C++ source...", nullptr));
#if QT_CONFIG(tooltip)
        actionExportAsCSource->setToolTip(QCoreApplication::translate("MainWindow", "Export the XML as a Cpp Source", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyAllToClipboard->setText(QCoreApplication::translate("MainWindow", "Copy all to Clipboard", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyAllToClipboard->setToolTip(QCoreApplication::translate("MainWindow", "Copy all the document to the clipoard", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCodePages->setText(QCoreApplication::translate("MainWindow", "Code Pages...", nullptr));
#if QT_CONFIG(tooltip)
        actionCodePages->setToolTip(QCoreApplication::translate("MainWindow", "Show code pages.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertChildContainer->setText(QCoreApplication::translate("MainWindow", "Insert child container", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertChildContainer->setToolTip(QCoreApplication::translate("MainWindow", "Insert a tag that wraps all the existing children/", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertParent->setText(QCoreApplication::translate("MainWindow", "Insert parent", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertParent->setToolTip(QCoreApplication::translate("MainWindow", "Insert a parent for the current element.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveParent->setText(QCoreApplication::translate("MainWindow", "Remove parent", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveParent->setToolTip(QCoreApplication::translate("MainWindow", "Removes the parent of the current item", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowAlwaysFullTextComments->setText(QCoreApplication::translate("MainWindow", "Show always full text of comments", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAlwaysFullTextComments->setToolTip(QCoreApplication::translate("MainWindow", "Show the full comment text even in compact mode", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDInsertElement->setText(QCoreApplication::translate("MainWindow", "Insert &Element...", nullptr));
        actionXSDAppendElement->setText(QCoreApplication::translate("MainWindow", "Append &Element...", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDAppendElement->setToolTip(QCoreApplication::translate("MainWindow", "Append element as sibling", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDAppendSibling->setText(QCoreApplication::translate("MainWindow", "Append Sibling", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDAppendSibling->setToolTip(QCoreApplication::translate("MainWindow", "Append sibling.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDModifyType->setText(QCoreApplication::translate("MainWindow", "Modify Type...", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDModifyType->setToolTip(QCoreApplication::translate("MainWindow", "Modify the XSD type.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDInsertType->setText(QCoreApplication::translate("MainWindow", "Insert &Type...", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDInsertType->setToolTip(QCoreApplication::translate("MainWindow", "Insert type", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDAppendType->setText(QCoreApplication::translate("MainWindow", "Append &Type...", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDAppendType->setToolTip(QCoreApplication::translate("MainWindow", "Append type as sibling", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDInsertAttribute->setText(QCoreApplication::translate("MainWindow", "Insert &Attribute...", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDInsertAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Insert attribute", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSDAppendAttribute->setText(QCoreApplication::translate("MainWindow", "Append &Attribute...", nullptr));
#if QT_CONFIG(tooltip)
        actionXSDAppendAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Append an XSD attribute as sibling.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnonymize->setText(QCoreApplication::translate("MainWindow", "Anonymize...", nullptr));
#if QT_CONFIG(tooltip)
        actionAnonymize->setToolTip(QCoreApplication::translate("MainWindow", "Anonymize the current file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionQuickReferenceElements->setText(QCoreApplication::translate("MainWindow", "Quick Reference for Elements...", nullptr));
#if QT_CONFIG(tooltip)
        actionQuickReferenceElements->setToolTip(QCoreApplication::translate("MainWindow", "Display a quick Reference for Elements...", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAnonymizeFile->setText(QCoreApplication::translate("MainWindow", "Anonymize File...", nullptr));
#if QT_CONFIG(tooltip)
        actionAnonymizeFile->setToolTip(QCoreApplication::translate("MainWindow", "Anonymize an external file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditXSDAnnotation->setText(QCoreApplication::translate("MainWindow", "Edit XSD Annotation", nullptr));
#if QT_CONFIG(tooltip)
        actionEditXSDAnnotation->setToolTip(QCoreApplication::translate("MainWindow", "Edit annotations of XML Schema", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReplace->setText(QCoreApplication::translate("MainWindow", "Replace...", nullptr));
#if QT_CONFIG(tooltip)
        actionReplace->setToolTip(QCoreApplication::translate("MainWindow", "Replace", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionReplace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFindNext->setText(QCoreApplication::translate("MainWindow", "Find Next", nullptr));
#if QT_CONFIG(shortcut)
        actionFindNext->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSetIndent->setText(QCoreApplication::translate("MainWindow", "Formatting...", nullptr));
#if QT_CONFIG(tooltip)
        actionSetIndent->setToolTip(QCoreApplication::translate("MainWindow", "Set the indentation for this document.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidateUsingDocumentReferences->setText(QCoreApplication::translate("MainWindow", "Validate using document references", nullptr));
#if QT_CONFIG(tooltip)
        actionValidateUsingDocumentReferences->setToolTip(QCoreApplication::translate("MainWindow", "Validate using internal document references.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFindPrevious->setText(QCoreApplication::translate("MainWindow", "Find Previous", nullptr));
#if QT_CONFIG(tooltip)
        actionFindPrevious->setToolTip(QCoreApplication::translate("MainWindow", "Find the previous occurrence.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionFindPrevious->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
#if QT_CONFIG(tooltip)
        actionInfo->setToolTip(QCoreApplication::translate("MainWindow", "Info", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowMainButtons->setText(QCoreApplication::translate("MainWindow", "Show Buttons", nullptr));
#if QT_CONFIG(tooltip)
        actionShowMainButtons->setToolTip(QCoreApplication::translate("MainWindow", "Show or hide the main windows buttons.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowStatusBar->setText(QCoreApplication::translate("MainWindow", "Status Bar", nullptr));
#if QT_CONFIG(tooltip)
        actionShowStatusBar->setToolTip(QCoreApplication::translate("MainWindow", "Show or hide the status bar.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveNilAttribute->setText(QCoreApplication::translate("MainWindow", "Remove XSI \"nil\" Attribute", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveNilAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Remove schema instance \"nil\" Attribute", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertNilAttribute->setText(QCoreApplication::translate("MainWindow", "Insert XSI \"nil\" attribute", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertNilAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Insert schema instance \"nil\" attribute.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveXSITypeAttribute->setText(QCoreApplication::translate("MainWindow", "Remove XSI Type Attribute", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveXSITypeAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Remove XSI type attribute.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertXSITypeAttribute->setText(QCoreApplication::translate("MainWindow", "Insert XSI Type Attribute...", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertXSITypeAttribute->setToolTip(QCoreApplication::translate("MainWindow", "Insert XSI Type Attribute.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertXmlSchemaReferences->setText(QCoreApplication::translate("MainWindow", "Xml Schema References...", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertXmlSchemaReferences->setToolTip(QCoreApplication::translate("MainWindow", "Insert XML Schema references.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpenSameWindow->setText(QCoreApplication::translate("MainWindow", "&Open in Same Window...", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenSameWindow->setToolTip(QCoreApplication::translate("MainWindow", "Open in same window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpenSameWindow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCloseSiblings->setText(QCoreApplication::translate("MainWindow", "Close Siblings", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseSiblings->setToolTip(QCoreApplication::translate("MainWindow", "Close the siblings of the current element.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFillSerie->setText(QCoreApplication::translate("MainWindow", "Fill serie...", nullptr));
#if QT_CONFIG(tooltip)
        actionFillSerie->setToolTip(QCoreApplication::translate("MainWindow", "Fill a set of elements with consecutive values.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCloneElements->setText(QCoreApplication::translate("MainWindow", "Clone Elements...", nullptr));
#if QT_CONFIG(tooltip)
        actionCloneElements->setToolTip(QCoreApplication::translate("MainWindow", "Clone the selected element.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("MainWindow", "Close the window.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowContainingFolder->setText(QCoreApplication::translate("MainWindow", "Show Containing Folder", nullptr));
#if QT_CONFIG(tooltip)
        actionShowContainingFolder->setToolTip(QCoreApplication::translate("MainWindow", "Opens the containing folder in the system browser.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportElementToFile->setText(QCoreApplication::translate("MainWindow", "Export Element to File", nullptr));
#if QT_CONFIG(tooltip)
        actionExportElementToFile->setToolTip(QCoreApplication::translate("MainWindow", "Export the selected element to a file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowAttributesSorted->setText(QCoreApplication::translate("MainWindow", "Show Attributes Sorted", nullptr));
#if QT_CONFIG(tooltip)
        actionShowAttributesSorted->setToolTip(QCoreApplication::translate("MainWindow", "Show the attributes sorted alphabetically.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSortAttributesElement->setText(QCoreApplication::translate("MainWindow", "Sort Attributes of the Selection", nullptr));
#if QT_CONFIG(tooltip)
        actionSortAttributesElement->setToolTip(QCoreApplication::translate("MainWindow", "Sort Attributes of the Selection", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSortAttributesElementRecursive->setText(QCoreApplication::translate("MainWindow", "Sort Attributes of the Selection and Its Children", nullptr));
        actionSortAttributes->setText(QCoreApplication::translate("MainWindow", "Sort Attributes in All the Elements", nullptr));
        actionRemoveAllSiblingsBefore->setText(QCoreApplication::translate("MainWindow", "Remove All Siblings Before", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveAllSiblingsBefore->setToolTip(QCoreApplication::translate("MainWindow", "Remove all the siblings before the selected element.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveAllSiblingsAfter->setText(QCoreApplication::translate("MainWindow", "Remove All Siblings After", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveAllSiblingsAfter->setToolTip(QCoreApplication::translate("MainWindow", "Remove all the siblings after the selected element.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveAllSiblings->setText(QCoreApplication::translate("MainWindow", "Remove All Siblings", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveAllSiblings->setToolTip(QCoreApplication::translate("MainWindow", "Remove all the siblings of the selected element.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHelpSetEditorDetail->setText(QCoreApplication::translate("MainWindow", "Set the Editor Detail", nullptr));
        actionTaskDisplayDetail->setText(QCoreApplication::translate("MainWindow", "Choose Display Detail", nullptr));
#if QT_CONFIG(tooltip)
        actionTaskDisplayDetail->setToolTip(QCoreApplication::translate("MainWindow", "Choose display detail.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditEnumerationFacet->setText(QCoreApplication::translate("MainWindow", "Edit Enumeration or Facet", nullptr));
#if QT_CONFIG(tooltip)
        actionEditEnumerationFacet->setToolTip(QCoreApplication::translate("MainWindow", "Edit facets, enumerations in particular.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemovePrefix->setText(QCoreApplication::translate("MainWindow", "Remove Prefix...", nullptr));
#if QT_CONFIG(tooltip)
        actionRemovePrefix->setToolTip(QCoreApplication::translate("MainWindow", "Removes prefixes from elements and attributes.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveNamespace->setText(QCoreApplication::translate("MainWindow", "Remove Namespace...", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveNamespace->setToolTip(QCoreApplication::translate("MainWindow", "Removes namespaces from elements and attributes.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetPrefix->setText(QCoreApplication::translate("MainWindow", "Assign Prefix...", nullptr));
#if QT_CONFIG(tooltip)
        actionSetPrefix->setToolTip(QCoreApplication::translate("MainWindow", "Assign a prefix.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReplacePrefix->setText(QCoreApplication::translate("MainWindow", "Replace Prefix...", nullptr));
#if QT_CONFIG(tooltip)
        actionReplacePrefix->setToolTip(QCoreApplication::translate("MainWindow", "Replace one or all the prefixes.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSetNamespace->setText(QCoreApplication::translate("MainWindow", "Assign Namespace...", nullptr));
#if QT_CONFIG(tooltip)
        actionSetNamespace->setToolTip(QCoreApplication::translate("MainWindow", "Assign a namespace.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionReplaceNamespace->setText(QCoreApplication::translate("MainWindow", "Replace Namespace...", nullptr));
#if QT_CONFIG(tooltip)
        actionReplaceNamespace->setToolTip(QCoreApplication::translate("MainWindow", "Replace one or more namespaces.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNormalizeNamespace->setText(QCoreApplication::translate("MainWindow", "Normalize namespaces", nullptr));
#if QT_CONFIG(tooltip)
        actionNormalizeNamespace->setToolTip(QCoreApplication::translate("MainWindow", "Normalize namespace prefixes.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertSpecial->setText(QCoreApplication::translate("MainWindow", "Insert Specialized Child...", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertSpecial->setToolTip(QCoreApplication::translate("MainWindow", "Insert a specialized element.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionInsertSpecial->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewSCXMLDocument->setText(QCoreApplication::translate("MainWindow", "New SCXML document", nullptr));
#if QT_CONFIG(tooltip)
        actionNewSCXMLDocument->setToolTip(QCoreApplication::translate("MainWindow", "Creates a new empty SCXML document.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAppendSpecial->setText(QCoreApplication::translate("MainWindow", "Append Specialized Sibling...", nullptr));
#if QT_CONFIG(tooltip)
        actionAppendSpecial->setToolTip(QCoreApplication::translate("MainWindow", "Append a specialized element.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAppendSpecial->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowSCXMLNavigator->setText(QCoreApplication::translate("MainWindow", "Show SCXML Navigator", nullptr));
#if QT_CONFIG(tooltip)
        actionShowSCXMLNavigator->setToolTip(QCoreApplication::translate("MainWindow", "Shows or hides the SCXML navigator.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidateSCXML->setText(QCoreApplication::translate("MainWindow", "Validate SCXML", nullptr));
#if QT_CONFIG(tooltip)
        actionValidateSCXML->setToolTip(QCoreApplication::translate("MainWindow", "Validate the SCXML machine.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSCXMLEditMode->setText(QCoreApplication::translate("MainWindow", "SCXML Edit Mode", nullptr));
#if QT_CONFIG(tooltip)
        actionSCXMLEditMode->setToolTip(QCoreApplication::translate("MainWindow", "Apply SCXML edit mode conventions.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCopyElementOnly->setText(QCoreApplication::translate("MainWindow", "Copy Element Without Children", nullptr));
#if QT_CONFIG(tooltip)
        actionCopyElementOnly->setToolTip(QCoreApplication::translate("MainWindow", "Copy in the clipboard the element but the children.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionXSLExecutor->setText(QCoreApplication::translate("MainWindow", "XSL Executor", nullptr));
#if QT_CONFIG(tooltip)
        actionXSLExecutor->setToolTip(QCoreApplication::translate("MainWindow", "Execute a XSL sheet on a XML file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExecuteXSLTAsSource->setText(QCoreApplication::translate("MainWindow", "Execute XSLT Using This as Source", nullptr));
#if QT_CONFIG(tooltip)
        actionExecuteXSLTAsSource->setToolTip(QCoreApplication::translate("MainWindow", "Execute XSLT using this as source.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExecuteXSLTAsSheet->setText(QCoreApplication::translate("MainWindow", "Execute XSLT Using This as XSL", nullptr));
#if QT_CONFIG(tooltip)
        actionExecuteXSLTAsSheet->setToolTip(QCoreApplication::translate("MainWindow", "Execute XSLT using this as XSL sheet.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpenSiblingsAtTheSameLevel->setText(QCoreApplication::translate("MainWindow", "Open Siblings at the Same Level", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenSiblingsAtTheSameLevel->setToolTip(QCoreApplication::translate("MainWindow", "Open siblings at the same level.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShowPrincipalShortcuts->setText(QCoreApplication::translate("MainWindow", "Principal Shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        actionShowPrincipalShortcuts->setToolTip(QCoreApplication::translate("MainWindow", "Show the main shortcuts.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddFormattingInfo->setText(QCoreApplication::translate("MainWindow", "Add Formatting Info", nullptr));
#if QT_CONFIG(tooltip)
        actionAddFormattingInfo->setToolTip(QCoreApplication::translate("MainWindow", "Add formatting info metadata.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveFormattingInfo->setText(QCoreApplication::translate("MainWindow", "Remove Formatting Info", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveFormattingInfo->setToolTip(QCoreApplication::translate("MainWindow", "Remove formatting info metadata.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPresetApacheFOP->setText(QCoreApplication::translate("MainWindow", "Preset Apache FOP", nullptr));
#if QT_CONFIG(tooltip)
        actionPresetApacheFOP->setToolTip(QCoreApplication::translate("MainWindow", "Preset for Apache FOP formatting (2 spaces).", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPresetNoIndentation->setText(QCoreApplication::translate("MainWindow", "Preset No Indentation", nullptr));
#if QT_CONFIG(tooltip)
        actionPresetNoIndentation->setToolTip(QCoreApplication::translate("MainWindow", "Do not indent at all.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPresetIndentOneAttributePerLine->setText(QCoreApplication::translate("MainWindow", "Preset Indent One Attribute per Line", nullptr));
#if QT_CONFIG(tooltip)
        actionPresetIndentOneAttributePerLine->setToolTip(QCoreApplication::translate("MainWindow", "Indent with two spaces and one attribute per line.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCloseItemAndChildren->setText(QCoreApplication::translate("MainWindow", "Close Item and Children", nullptr));
#if QT_CONFIG(tooltip)
        actionCloseItemAndChildren->setToolTip(QCoreApplication::translate("MainWindow", "Close the selected item and its children.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCloseItemAndChildren->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChooseEditType->setText(QCoreApplication::translate("MainWindow", "Choose Edit Type", nullptr));
#if QT_CONFIG(tooltip)
        actionChooseEditType->setToolTip(QCoreApplication::translate("MainWindow", "Choose if edit elements in text mode or using a form.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidationDialog->setText(QCoreApplication::translate("MainWindow", "XSD Validation", nullptr));
#if QT_CONFIG(tooltip)
        actionValidationDialog->setToolTip(QCoreApplication::translate("MainWindow", "XSD validation panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpenGuidedOperationPanel->setText(QCoreApplication::translate("MainWindow", "Guided Operations Panel", nullptr));
#if QT_CONFIG(tooltip)
        actionOpenGuidedOperationPanel->setToolTip(QCoreApplication::translate("MainWindow", "Open the guided operations panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionChooseUserProfile->setText(QCoreApplication::translate("MainWindow", "Choose User Profile", nullptr));
#if QT_CONFIG(tooltip)
        actionChooseUserProfile->setToolTip(QCoreApplication::translate("MainWindow", "Choose the user profile.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionInsertDisablingParent->setText(QCoreApplication::translate("MainWindow", "Insert Disabled Parent for XSLT", nullptr));
#if QT_CONFIG(tooltip)
        actionInsertDisablingParent->setToolTip(QCoreApplication::translate("MainWindow", "Insert a parent that is skipped from XSLT execution, yet valid.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGraphic->setText(QCoreApplication::translate("MainWindow", "      Graphic", nullptr));
        actionActions->setText(QCoreApplication::translate("MainWindow", "      Actions", nullptr));
        actionSearchCommand->setText(QCoreApplication::translate("MainWindow", "Search Command", nullptr));
#if QT_CONFIG(tooltip)
        actionSearchCommand->setToolTip(QCoreApplication::translate("MainWindow", "Search a command by name", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSearchCommand->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actiondontuse->setText(QCoreApplication::translate("MainWindow", "dontuse", nullptr));
        actionShowKeyboardShortcuts->setText(QCoreApplication::translate("MainWindow", "Show Keyboard Shortcuts", nullptr));
#if QT_CONFIG(tooltip)
        actionShowKeyboardShortcuts->setToolTip(QCoreApplication::translate("MainWindow", "Show or hide the keyboard shortcuts panel.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEditAsText->setText(QCoreApplication::translate("MainWindow", "Edit Element as Text", nullptr));
#if QT_CONFIG(tooltip)
        actionEditAsText->setToolTip(QCoreApplication::translate("MainWindow", "Edit the current element in textual form.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTestXML->setText(QCoreApplication::translate("MainWindow", "Test XML", nullptr));
#if QT_CONFIG(tooltip)
        actionTestXML->setToolTip(QCoreApplication::translate("MainWindow", "Test a XML file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoadSample->setText(QCoreApplication::translate("MainWindow", "Load Sample...", nullptr));
#if QT_CONFIG(tooltip)
        actionLoadSample->setToolTip(QCoreApplication::translate("MainWindow", "Load a synthetic sample of a file.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGenerateXSD->setText(QCoreApplication::translate("MainWindow", "Generate XSD from Data...", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerateXSD->setToolTip(QCoreApplication::translate("MainWindow", "Generate XSD Schema from data", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGenerateXMLFromXSD->setText(QCoreApplication::translate("MainWindow", "Generate XML from XSD...", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerateXMLFromXSD->setToolTip(QCoreApplication::translate("MainWindow", "Generate XML from schema.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionValidateXSD->setText(QCoreApplication::translate("MainWindow", "Validate as XSD", nullptr));
#if QT_CONFIG(tooltip)
        actionValidateXSD->setToolTip(QCoreApplication::translate("MainWindow", "Validate as XSD", nullptr));
#endif // QT_CONFIG(tooltip)
        messagePanel->setTabText(messagePanel->indexOf(scxmlValidationErrors), QCoreApplication::translate("MainWindow", "SCXML Validation Errors", nullptr));
        menu_Navigation->setTitle(QCoreApplication::translate("MainWindow", "&Navigation", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuHow_Do_I->setTitle(QCoreApplication::translate("MainWindow", "How Do I...?", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuExport->setTitle(QCoreApplication::translate("MainWindow", "Export", nullptr));
        menuMore->setTitle(QCoreApplication::translate("MainWindow", "Advanced", nullptr));
        menuFormatting->setTitle(QCoreApplication::translate("MainWindow", "Formatting", nullptr));
        menuBoorkmarks->setTitle(QCoreApplication::translate("MainWindow", "&Bookmarks", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuNew_of_Kind->setTitle(QCoreApplication::translate("MainWindow", "New Speciali&zed", nullptr));
        menuExport_2->setTitle(QCoreApplication::translate("MainWindow", "Export", nullptr));
        menu_XML->setTitle(QCoreApplication::translate("MainWindow", "&XML", nullptr));
        menuXML_Schema->setTitle(QCoreApplication::translate("MainWindow", "XML Schema", nullptr));
        menuInsert->setTitle(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        menuAppend_sibling->setTitle(QCoreApplication::translate("MainWindow", "Append Sibling", nullptr));
        menuMetadata->setTitle(QCoreApplication::translate("MainWindow", "Metadata", nullptr));
        menuSchema_Instance_XSI->setTitle(QCoreApplication::translate("MainWindow", "Schema Instance (XSI)", nullptr));
        menuSort_Attributes->setTitle(QCoreApplication::translate("MainWindow", "Sort Attributes", nullptr));
        menuSiblings->setTitle(QCoreApplication::translate("MainWindow", "Siblings", nullptr));
        menuHierarchy->setTitle(QCoreApplication::translate("MainWindow", "Hierarchy", nullptr));
        menuNamespaces->setTitle(QCoreApplication::translate("MainWindow", "Namespaces", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuFilter_Attributes->setTitle(QCoreApplication::translate("MainWindow", "Filter Attributes", nullptr));
        menuAdvanced->setTitle(QCoreApplication::translate("MainWindow", "Advanced", nullptr));
        menuPanels->setTitle(QCoreApplication::translate("MainWindow", "Panels", nullptr));
        viewSiblings->setTitle(QCoreApplication::translate("MainWindow", "Siblings", nullptr));
        menuAdvanced_2->setTitle(QCoreApplication::translate("MainWindow", "Advanced", nullptr));
        menu_Sessions->setTitle(QCoreApplication::translate("MainWindow", "&Sessions", nullptr));
        menuTasks->setTitle(QCoreApplication::translate("MainWindow", "Preferences", nullptr));
        menuSpecial->setTitle(QCoreApplication::translate("MainWindow", "Special", nullptr));
        menuValidation->setTitle(QCoreApplication::translate("MainWindow", "Validation", nullptr));
        menuXSLT->setTitle(QCoreApplication::translate("MainWindow", "XSLT", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
