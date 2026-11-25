/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "onRaiseWindow",
        "",
        "on_actionNew_triggered",
        "on_actionOpen_triggered",
        "on_actionSave_triggered",
        "on_actionSaveAs_triggered",
        "on_actionAbout_triggered",
        "on_actionPaste_triggered",
        "on_actionCopy_triggered",
        "on_actionCut_triggered",
        "on_actionExpandAll_triggered",
        "on_actionExpandSelectedItem_triggered",
        "on_actionShowAttrLine_triggered",
        "on_actionAppendComment_triggered",
        "on_actionAddComment_triggered",
        "on_actionAppendProcessingInstruction_triggered",
        "on_actionAddProcessingInstruction_triggered",
        "on_actionAddChildElement_triggered",
        "on_actionAppendChildElement_triggered",
        "on_actionEdit_triggered",
        "on_actionFind_triggered",
        "on_actionReplace_triggered",
        "on_actionDelete_triggered",
        "on_actionMoveUp_triggered",
        "on_actionMoveDown_triggered",
        "on_actionGo_To_Parent_triggered",
        "on_actionGo_to_Previous_Brother_triggered",
        "on_actionGo_to_Next_Brother_triggered",
        "on_actionClearBookmarks_triggered",
        "on_actionToggleBookmark_triggered",
        "on_actionGotoNextBookmark_triggered",
        "on_actionGotoPreviousBookmark_triggered",
        "on_actionShowChildIndex_triggered",
        "on_actionCloseThisAllBrothers_triggered",
        "on_actionNewFromClipboard_triggered",
        "on_actionQuit_triggered",
        "on_actionCompactView_triggered",
        "on_actionShowAttributesSorted_triggered",
        "on_actionShowAlwaysFullTextComments_triggered",
        "on_actionHideBrothers_triggered",
        "on_actionCloseSiblings_triggered",
        "on_actionCloseItemAndChildren_triggered",
        "on_actionFixedSizeAttributes_triggered",
        "on_actionShowAttributesLength_triggered",
        "on_actionShowCurrentElementTextBase64_triggered",
        "on_actionShowBase64_triggered",
        "on_actionConfigure_triggered",
        "on_actionEditInnerXML_triggered",
        "on_actionEditInnerXMLBase64_triggered",
        "on_actionEditInnerBase64Text_triggered",
        "on_actionZoomIn_triggered",
        "on_actionZoomOut_triggered",
        "on_actionCompare_triggered",
        "on_actionReload_triggered",
        "on_actionCopyPathToClipboard_triggered",
        "on_actionShowContainingFolder_triggered",
        "on_actionAddCurrentDirectory_triggered",
        "on_actionEditPreferredDirectories_triggered",
        "on_actionValidate_triggered",
        "on_actionValidateNewFile_triggered",
        "on_actionValidateUsingDocumentReferences_triggered",
        "on_actionInsertSnippet_triggered",
        "on_actionConfigureSnippets_triggered",
        "on_actionExecuteAutoTest_triggered",
        "on_actionTransforminSnippet_triggered",
        "on_actionShowElementTextLength_triggered",
        "on_actionShowElementSize_triggered",
        "on_actionDeleteBookmarked_triggered",
        "on_actionCleanBookmarkedContent_triggered",
        "on_actionXplore_triggered",
        "on_actionHideView_triggered",
        "on_actionSearchInFiles_triggered",
        "on_actionHelpOnQXmlEdit_triggered",
        "on_actionViewAsXsd_triggered",
        "on_actionAllowedSchemaElements_triggered",
        "on_actionPasteAndSubstituteText_triggered",
        "on_actionNewUsingXMLSchema_triggered",
        "on_actionTransformInComment_triggered",
        "on_actionExtractElementsFromComment_triggered",
        "on_actionExtractFragmentsFromFile_triggered",
        "on_actionWelcomeDialog_triggered",
        "on_actionSaveACopyAs_triggered",
        "on_actionHideLeafChildren_triggered",
        "on_actionHideAllLeafChildren_triggered",
        "on_actionShowLeafChildren_triggered",
        "on_actionShowAllLeafChildren_triggered",
        "on_actionColumnView_triggered",
        "on_actionShowCurrentSessionPanel_triggered",
        "on_actionNewSession_triggered",
        "on_actionPauseSession_triggered",
        "on_actionResumeSession_triggered",
        "on_actionCloseSession_triggered",
        "on_actionManageSessions_triggered",
        "on_actionSessionDetails_triggered",
        "on_actionUndo_triggered",
        "on_actionRedo_triggered",
        "on_actionNewWindow_triggered",
        "on_actionViewData_triggered",
        "on_actionBase64Tools_triggered",
        "on_actionEncodingTools_triggered",
        "on_actionCompareXSD_triggered",
        "on_actionExportAttributesSiblingsAsCSVClipboard_triggered",
        "on_actionVisAttrApplyTemporaryProfile_triggered",
        "on_actionVisAttrSaveCurrenteProfile_triggered",
        "on_actionVisAttrManageProfiles_triggered",
        "on_actionVisAttrRemoveCurrentProfile_triggered",
        "on_actionCompareFiles_triggered",
        "on_actionSpring_and_Forces_triggered",
        "on_actionViewGraphic_triggered",
        "on_actionCopyAttributes_triggered",
        "on_actionPasteAttributes_triggered",
        "on_actionPasteLastAttributes_triggered",
        "on_actionCopyElementPathClipboard_triggered",
        "on_actionAutoComplete_triggered",
        "on_actionXMLEditMode_triggered",
        "on_actionXSLTEditMode_triggered",
        "on_actionSCXMLEditMode_triggered",
        "on_actionNewXSLTSheet_triggered",
        "on_actionNewXSDDocument_triggered",
        "on_actionNewXSLFODocument_triggered",
        "on_actionNewMavenPOM_triggered",
        "on_actionNewSCXMLDocument_triggered",
        "on_actionNewFromSnippet_triggered",
        "on_actionEditXSLTitem_triggered",
        "on_actionScanXMLTagsAndNamesXSLTAutocompletion_triggered",
        "on_actionShowXSLNavigator_triggered",
        "on_actionSpecificProperties_triggered",
        "on_actionPasteAsSibling_triggered",
        "on_actionTipsOnVisualAppearance_triggered",
        "on_actionBinaryViewer_triggered",
        "on_actionReadOnly_toggled",
        "checked",
        "on_actionInsertMetadata_triggered",
        "on_actionInsertCompleteMetadata_triggered",
        "on_actionEditMetadata_triggered",
        "on_actionExportAsJavaJavascriptSource_triggered",
        "on_actionInsertProlog_triggered",
        "onEncodingChanged",
        "QAction*",
        "action",
        "onIndentationChanged",
        "indentationEnabled",
        "newIndent",
        "onSchemaValidationError",
        "message",
        "Element*",
        "element",
        "onNewXSDSchemaForValidation",
        "newUrl",
        "on_actionExportAsCSource_triggered",
        "on_actionCopyAllToClipboard_triggered",
        "on_actionCodePages_triggered",
        "on_actionInsertChildContainer_triggered",
        "on_actionInsertParent_triggered",
        "on_actionRemoveParent_triggered",
        "on_actionXSDInsertElement_triggered",
        "on_actionXSDAppendElement_triggered",
        "on_actionXSDInsertType_triggered",
        "on_actionXSDAppendType_triggered",
        "on_actionXSDInsertAttribute_triggered",
        "on_actionXSDAppendAttribute_triggered",
        "on_actionXSDModifyType_triggered",
        "on_actionAnonymize_triggered",
        "on_actionQuickReferenceElements_triggered",
        "on_actionAnonymizeFile_triggered",
        "on_actionEditXSDAnnotation_triggered",
        "on_actionEditEnumerationFacet_triggered",
        "on_actionFindNext_triggered",
        "on_actionFindPrevious_triggered",
        "on_actionSetIndent_triggered",
        "on_actionInfo_triggered",
        "on_actionShowMainButtons_triggered",
        "on_actionShowStatusBar_triggered",
        "on_actionRemoveNilAttribute_triggered",
        "on_actionInsertNilAttribute_triggered",
        "on_actionRemoveXSITypeAttribute_triggered",
        "on_actionInsertXSITypeAttribute_triggered",
        "on_actionInsertXmlSchemaReferences_triggered",
        "on_actionOpenSameWindow_triggered",
        "on_actionFillSerie_triggered",
        "on_actionCloneElements_triggered",
        "on_actionClose_triggered",
        "on_actionExportElementToFile_triggered",
        "on_actionSortAttributesElementRecursive_triggered",
        "on_actionSortAttributesElement_triggered",
        "on_actionSortAttributes_triggered",
        "on_actionRemoveAllSiblings_triggered",
        "on_actionRemoveAllSiblingsAfter_triggered",
        "on_actionRemoveAllSiblingsBefore_triggered",
        "on_actionTaskDisplayDetail_triggered",
        "on_actionHelpSetEditorDetail_triggered",
        "on_actionRemovePrefix_triggered",
        "on_actionRemoveNamespace_triggered",
        "on_actionSetPrefix_triggered",
        "on_actionSetNamespace_triggered",
        "on_actionReplacePrefix_triggered",
        "on_actionReplaceNamespace_triggered",
        "on_actionNormalizeNamespace_triggered",
        "on_actionInsertSpecial_triggered",
        "on_actionAppendSpecial_triggered",
        "on_actionShowSCXMLNavigator_triggered",
        "on_actionValidateSCXML_triggered",
        "on_actionValidateXSD_triggered",
        "on_actionCopyElementOnly_triggered",
        "on_actionXSLExecutor_triggered",
        "on_actionExecuteXSLTAsSheet_triggered",
        "on_actionExecuteXSLTAsSource_triggered",
        "on_actionOpenSiblingsAtTheSameLevel_triggered",
        "on_actionShowPrincipalShortcuts_triggered",
        "on_actionAddFormattingInfo_triggered",
        "on_actionRemoveFormattingInfo_triggered",
        "on_actionPresetApacheFOP_triggered",
        "on_actionPresetNoIndentation_triggered",
        "on_actionPresetIndentOneAttributePerLine_triggered",
        "on_actionChooseEditType_triggered",
        "on_actionValidationDialog_triggered",
        "on_actionOpenGuidedOperationPanel_triggered",
        "on_actionChooseUserProfile_triggered",
        "on_actionInsertDisablingParent_triggered",
        "on_actionSearchCommand_triggered",
        "on_actionShowKeyboardShortcuts_triggered",
        "on_actionEditAsText_triggered",
        "on_actionTestXML_triggered",
        "on_actionLoadSample_triggered",
        "on_actionGenerateXSD_triggered",
        "on_actionGenerateXMLFromXSD_triggered",
        "onClipboardDataChanged",
        "isData",
        "onDocumentIsModified",
        "isModified",
        "onSessionEnablingChanged",
        "onHandleSessionState",
        "onReadOnlyStateChanged",
        "onReadOnlyGo",
        "onSourceNavigateTo",
        "QList<int>",
        "path",
        "onMessagesTabCloseRequested",
        "treeContextMenu",
        "QPoint",
        "position",
        "onOkClicked",
        "onCancelClicked",
        "onRecentFile",
        "onPreferredDir",
        "onPlugin",
        "navigateToPage",
        "page",
        "schemaLoadComplete",
        "newLabel",
        "onComputeSelectionState",
        "onComputeSelectionStateExperimentalFeatures",
        "onNewMessage",
        "newMessage",
        "setClipBoardActionsState",
        "isAction",
        "onShowStatusMessage",
        "isLongTimeout",
        "onSessionfileLoadRequest",
        "onSessionFolderOpenRequest",
        "onShowSessionManagement",
        "onUndoStateUpdated",
        "isUndo",
        "isRedo",
        "onChangeEditorMode",
        "onEditorEncodingChanged",
        "newEncoding",
        "onEditorElementDoubleClicked",
        "times",
        "onEditorEditElementEvent",
        "editElementAsFormUsageCount",
        "editElementAsTextUsageCount",
        "onEditorConfigure",
        "onInfoKeyboardDismiss",
        "onInfoEditTypesDismiss",
        "onInfoKeyboardRequestOpenShortcutsPanel",
        "onInfoEditTypesOpenShortcutsPanel",
        "onStateKeyboardShortcutChanged",
        "newState"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onRaiseWindow'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNew_triggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveAs_triggered'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_triggered'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPaste_triggered'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_triggered'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCut_triggered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExpandAll_triggered'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExpandSelectedItem_triggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowAttrLine_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAppendComment_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddComment_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAppendProcessingInstruction_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddProcessingInstruction_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddChildElement_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAppendChildElement_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEdit_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFind_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReplace_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_triggered'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveUp_triggered'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMoveDown_triggered'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGo_To_Parent_triggered'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGo_to_Previous_Brother_triggered'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGo_to_Next_Brother_triggered'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionClearBookmarks_triggered'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggleBookmark_triggered'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGotoNextBookmark_triggered'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGotoPreviousBookmark_triggered'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowChildIndex_triggered'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseThisAllBrothers_triggered'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewFromClipboard_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionQuit_triggered'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCompactView_triggered'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowAttributesSorted_triggered'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowAlwaysFullTextComments_triggered'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHideBrothers_triggered'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseSiblings_triggered'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseItemAndChildren_triggered'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFixedSizeAttributes_triggered'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowAttributesLength_triggered'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowCurrentElementTextBase64_triggered'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowBase64_triggered'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionConfigure_triggered'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditInnerXML_triggered'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditInnerXMLBase64_triggered'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditInnerBase64Text_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomIn_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoomOut_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCompare_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReload_triggered'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyPathToClipboard_triggered'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowContainingFolder_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddCurrentDirectory_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditPreferredDirectories_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionValidate_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionValidateNewFile_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionValidateUsingDocumentReferences_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertSnippet_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionConfigureSnippets_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExecuteAutoTest_triggered'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTransforminSnippet_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowElementTextLength_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowElementSize_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDeleteBookmarked_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCleanBookmarkedContent_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXplore_triggered'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHideView_triggered'
        QtMocHelpers::SlotData<void()>(71, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSearchInFiles_triggered'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHelpOnQXmlEdit_triggered'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewAsXsd_triggered'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAllowedSchemaElements_triggered'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteAndSubstituteText_triggered'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewUsingXMLSchema_triggered'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTransformInComment_triggered'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExtractElementsFromComment_triggered'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExtractFragmentsFromFile_triggered'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionWelcomeDialog_triggered'
        QtMocHelpers::SlotData<void()>(81, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSaveACopyAs_triggered'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHideLeafChildren_triggered'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHideAllLeafChildren_triggered'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowLeafChildren_triggered'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowAllLeafChildren_triggered'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionColumnView_triggered'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowCurrentSessionPanel_triggered'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewSession_triggered'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPauseSession_triggered'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionResumeSession_triggered'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloseSession_triggered'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionManageSessions_triggered'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSessionDetails_triggered'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUndo_triggered'
        QtMocHelpers::SlotData<void()>(95, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRedo_triggered'
        QtMocHelpers::SlotData<void()>(96, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewWindow_triggered'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewData_triggered'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionBase64Tools_triggered'
        QtMocHelpers::SlotData<void()>(99, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEncodingTools_triggered'
        QtMocHelpers::SlotData<void()>(100, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCompareXSD_triggered'
        QtMocHelpers::SlotData<void()>(101, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExportAttributesSiblingsAsCSVClipboard_triggered'
        QtMocHelpers::SlotData<void()>(102, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVisAttrApplyTemporaryProfile_triggered'
        QtMocHelpers::SlotData<void()>(103, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVisAttrSaveCurrenteProfile_triggered'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVisAttrManageProfiles_triggered'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVisAttrRemoveCurrentProfile_triggered'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCompareFiles_triggered'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSpring_and_Forces_triggered'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionViewGraphic_triggered'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyAttributes_triggered'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteAttributes_triggered'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteLastAttributes_triggered'
        QtMocHelpers::SlotData<void()>(112, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyElementPathClipboard_triggered'
        QtMocHelpers::SlotData<void()>(113, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAutoComplete_triggered'
        QtMocHelpers::SlotData<void()>(114, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXMLEditMode_triggered'
        QtMocHelpers::SlotData<void()>(115, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSLTEditMode_triggered'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSCXMLEditMode_triggered'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewXSLTSheet_triggered'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewXSDDocument_triggered'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewXSLFODocument_triggered'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewMavenPOM_triggered'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewSCXMLDocument_triggered'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNewFromSnippet_triggered'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditXSLTitem_triggered'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScanXMLTagsAndNamesXSLTAutocompletion_triggered'
        QtMocHelpers::SlotData<void()>(125, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowXSLNavigator_triggered'
        QtMocHelpers::SlotData<void()>(126, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSpecificProperties_triggered'
        QtMocHelpers::SlotData<void()>(127, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPasteAsSibling_triggered'
        QtMocHelpers::SlotData<void()>(128, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTipsOnVisualAppearance_triggered'
        QtMocHelpers::SlotData<void()>(129, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionBinaryViewer_triggered'
        QtMocHelpers::SlotData<void()>(130, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReadOnly_toggled'
        QtMocHelpers::SlotData<void(bool)>(131, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 132 },
        }}),
        // Slot 'on_actionInsertMetadata_triggered'
        QtMocHelpers::SlotData<void()>(133, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertCompleteMetadata_triggered'
        QtMocHelpers::SlotData<void()>(134, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditMetadata_triggered'
        QtMocHelpers::SlotData<void()>(135, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExportAsJavaJavascriptSource_triggered'
        QtMocHelpers::SlotData<void()>(136, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertProlog_triggered'
        QtMocHelpers::SlotData<void()>(137, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEncodingChanged'
        QtMocHelpers::SlotData<void(QAction *)>(138, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 139, 140 },
        }}),
        // Slot 'onIndentationChanged'
        QtMocHelpers::SlotData<void(const bool, const int)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 142 }, { QMetaType::Int, 143 },
        }}),
        // Slot 'onSchemaValidationError'
        QtMocHelpers::SlotData<void(const QString &, Element *)>(144, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 145 }, { 0x80000000 | 146, 147 },
        }}),
        // Slot 'onNewXSDSchemaForValidation'
        QtMocHelpers::SlotData<void(const QString &)>(148, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 149 },
        }}),
        // Slot 'on_actionExportAsCSource_triggered'
        QtMocHelpers::SlotData<void()>(150, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyAllToClipboard_triggered'
        QtMocHelpers::SlotData<void()>(151, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCodePages_triggered'
        QtMocHelpers::SlotData<void()>(152, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertChildContainer_triggered'
        QtMocHelpers::SlotData<void()>(153, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertParent_triggered'
        QtMocHelpers::SlotData<void()>(154, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveParent_triggered'
        QtMocHelpers::SlotData<void()>(155, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDInsertElement_triggered'
        QtMocHelpers::SlotData<void()>(156, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDAppendElement_triggered'
        QtMocHelpers::SlotData<void()>(157, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDInsertType_triggered'
        QtMocHelpers::SlotData<void()>(158, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDAppendType_triggered'
        QtMocHelpers::SlotData<void()>(159, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDInsertAttribute_triggered'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDAppendAttribute_triggered'
        QtMocHelpers::SlotData<void()>(161, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSDModifyType_triggered'
        QtMocHelpers::SlotData<void()>(162, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAnonymize_triggered'
        QtMocHelpers::SlotData<void()>(163, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionQuickReferenceElements_triggered'
        QtMocHelpers::SlotData<void()>(164, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAnonymizeFile_triggered'
        QtMocHelpers::SlotData<void()>(165, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditXSDAnnotation_triggered'
        QtMocHelpers::SlotData<void()>(166, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditEnumerationFacet_triggered'
        QtMocHelpers::SlotData<void()>(167, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFindNext_triggered'
        QtMocHelpers::SlotData<void()>(168, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFindPrevious_triggered'
        QtMocHelpers::SlotData<void()>(169, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSetIndent_triggered'
        QtMocHelpers::SlotData<void()>(170, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInfo_triggered'
        QtMocHelpers::SlotData<void()>(171, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowMainButtons_triggered'
        QtMocHelpers::SlotData<void()>(172, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowStatusBar_triggered'
        QtMocHelpers::SlotData<void()>(173, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveNilAttribute_triggered'
        QtMocHelpers::SlotData<void()>(174, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertNilAttribute_triggered'
        QtMocHelpers::SlotData<void()>(175, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveXSITypeAttribute_triggered'
        QtMocHelpers::SlotData<void()>(176, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertXSITypeAttribute_triggered'
        QtMocHelpers::SlotData<void()>(177, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertXmlSchemaReferences_triggered'
        QtMocHelpers::SlotData<void()>(178, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenSameWindow_triggered'
        QtMocHelpers::SlotData<void()>(179, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFillSerie_triggered'
        QtMocHelpers::SlotData<void()>(180, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCloneElements_triggered'
        QtMocHelpers::SlotData<void()>(181, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionClose_triggered'
        QtMocHelpers::SlotData<void()>(182, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExportElementToFile_triggered'
        QtMocHelpers::SlotData<void()>(183, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSortAttributesElementRecursive_triggered'
        QtMocHelpers::SlotData<void()>(184, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSortAttributesElement_triggered'
        QtMocHelpers::SlotData<void()>(185, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSortAttributes_triggered'
        QtMocHelpers::SlotData<void()>(186, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveAllSiblings_triggered'
        QtMocHelpers::SlotData<void()>(187, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveAllSiblingsAfter_triggered'
        QtMocHelpers::SlotData<void()>(188, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveAllSiblingsBefore_triggered'
        QtMocHelpers::SlotData<void()>(189, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTaskDisplayDetail_triggered'
        QtMocHelpers::SlotData<void()>(190, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionHelpSetEditorDetail_triggered'
        QtMocHelpers::SlotData<void()>(191, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemovePrefix_triggered'
        QtMocHelpers::SlotData<void()>(192, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveNamespace_triggered'
        QtMocHelpers::SlotData<void()>(193, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSetPrefix_triggered'
        QtMocHelpers::SlotData<void()>(194, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSetNamespace_triggered'
        QtMocHelpers::SlotData<void()>(195, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReplacePrefix_triggered'
        QtMocHelpers::SlotData<void()>(196, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReplaceNamespace_triggered'
        QtMocHelpers::SlotData<void()>(197, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNormalizeNamespace_triggered'
        QtMocHelpers::SlotData<void()>(198, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertSpecial_triggered'
        QtMocHelpers::SlotData<void()>(199, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAppendSpecial_triggered'
        QtMocHelpers::SlotData<void()>(200, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowSCXMLNavigator_triggered'
        QtMocHelpers::SlotData<void()>(201, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionValidateSCXML_triggered'
        QtMocHelpers::SlotData<void()>(202, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionValidateXSD_triggered'
        QtMocHelpers::SlotData<void()>(203, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopyElementOnly_triggered'
        QtMocHelpers::SlotData<void()>(204, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionXSLExecutor_triggered'
        QtMocHelpers::SlotData<void()>(205, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExecuteXSLTAsSheet_triggered'
        QtMocHelpers::SlotData<void()>(206, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExecuteXSLTAsSource_triggered'
        QtMocHelpers::SlotData<void()>(207, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenSiblingsAtTheSameLevel_triggered'
        QtMocHelpers::SlotData<void()>(208, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowPrincipalShortcuts_triggered'
        QtMocHelpers::SlotData<void()>(209, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAddFormattingInfo_triggered'
        QtMocHelpers::SlotData<void()>(210, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRemoveFormattingInfo_triggered'
        QtMocHelpers::SlotData<void()>(211, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPresetApacheFOP_triggered'
        QtMocHelpers::SlotData<void()>(212, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPresetNoIndentation_triggered'
        QtMocHelpers::SlotData<void()>(213, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPresetIndentOneAttributePerLine_triggered'
        QtMocHelpers::SlotData<void()>(214, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionChooseEditType_triggered'
        QtMocHelpers::SlotData<void()>(215, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionValidationDialog_triggered'
        QtMocHelpers::SlotData<void()>(216, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpenGuidedOperationPanel_triggered'
        QtMocHelpers::SlotData<void()>(217, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionChooseUserProfile_triggered'
        QtMocHelpers::SlotData<void()>(218, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsertDisablingParent_triggered'
        QtMocHelpers::SlotData<void()>(219, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSearchCommand_triggered'
        QtMocHelpers::SlotData<void()>(220, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShowKeyboardShortcuts_triggered'
        QtMocHelpers::SlotData<void()>(221, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEditAsText_triggered'
        QtMocHelpers::SlotData<void()>(222, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTestXML_triggered'
        QtMocHelpers::SlotData<void()>(223, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLoadSample_triggered'
        QtMocHelpers::SlotData<void()>(224, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGenerateXSD_triggered'
        QtMocHelpers::SlotData<void()>(225, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGenerateXMLFromXSD_triggered'
        QtMocHelpers::SlotData<void()>(226, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onClipboardDataChanged'
        QtMocHelpers::SlotData<void(bool)>(227, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 228 },
        }}),
        // Slot 'onDocumentIsModified'
        QtMocHelpers::SlotData<void(const bool)>(229, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 230 },
        }}),
        // Slot 'onSessionEnablingChanged'
        QtMocHelpers::SlotData<void()>(231, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onHandleSessionState'
        QtMocHelpers::SlotData<void()>(232, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReadOnlyStateChanged'
        QtMocHelpers::SlotData<void()>(233, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReadOnlyGo'
        QtMocHelpers::SlotData<void()>(234, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSourceNavigateTo'
        QtMocHelpers::SlotData<void(QList<int>)>(235, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 236, 237 },
        }}),
        // Slot 'onMessagesTabCloseRequested'
        QtMocHelpers::SlotData<void(int)>(238, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'treeContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(239, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 240, 241 },
        }}),
        // Slot 'onOkClicked'
        QtMocHelpers::SlotData<void()>(242, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCancelClicked'
        QtMocHelpers::SlotData<void()>(243, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRecentFile'
        QtMocHelpers::SlotData<void()>(244, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPreferredDir'
        QtMocHelpers::SlotData<void()>(245, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPlugin'
        QtMocHelpers::SlotData<void()>(246, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'navigateToPage'
        QtMocHelpers::SlotData<void(const int)>(247, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 248 },
        }}),
        // Slot 'schemaLoadComplete'
        QtMocHelpers::SlotData<void(const QString &)>(249, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 250 },
        }}),
        // Slot 'onComputeSelectionState'
        QtMocHelpers::SlotData<void()>(251, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onComputeSelectionStateExperimentalFeatures'
        QtMocHelpers::SlotData<void()>(252, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNewMessage'
        QtMocHelpers::SlotData<void(const QString &)>(253, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 254 },
        }}),
        // Slot 'setClipBoardActionsState'
        QtMocHelpers::SlotData<void(const bool)>(255, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 256 },
        }}),
        // Slot 'onShowStatusMessage'
        QtMocHelpers::SlotData<void(const QString &, const bool)>(257, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 145 }, { QMetaType::Bool, 258 },
        }}),
        // Slot 'onSessionfileLoadRequest'
        QtMocHelpers::SlotData<bool(const QString &)>(259, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { QMetaType::QString, 237 },
        }}),
        // Slot 'onSessionFolderOpenRequest'
        QtMocHelpers::SlotData<void(const QString &)>(260, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 237 },
        }}),
        // Slot 'onShowSessionManagement'
        QtMocHelpers::SlotData<void()>(261, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onUndoStateUpdated'
        QtMocHelpers::SlotData<void(const bool, const bool)>(262, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 263 }, { QMetaType::Bool, 264 },
        }}),
        // Slot 'onChangeEditorMode'
        QtMocHelpers::SlotData<void()>(265, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEditorEncodingChanged'
        QtMocHelpers::SlotData<void(const QString &)>(266, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 267 },
        }}),
        // Slot 'onEditorElementDoubleClicked'
        QtMocHelpers::SlotData<void(const uint)>(268, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 269 },
        }}),
        // Slot 'onEditorEditElementEvent'
        QtMocHelpers::SlotData<void(const uint, const uint)>(270, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 271 }, { QMetaType::UInt, 272 },
        }}),
        // Slot 'onEditorConfigure'
        QtMocHelpers::SlotData<void(const QPoint &)>(273, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 240, 241 },
        }}),
        // Slot 'onInfoKeyboardDismiss'
        QtMocHelpers::SlotData<void()>(274, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInfoEditTypesDismiss'
        QtMocHelpers::SlotData<void()>(275, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInfoKeyboardRequestOpenShortcutsPanel'
        QtMocHelpers::SlotData<void()>(276, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onInfoEditTypesOpenShortcutsPanel'
        QtMocHelpers::SlotData<void()>(277, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onStateKeyboardShortcutChanged'
        QtMocHelpers::SlotData<void(bool)>(278, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 279 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onRaiseWindow(); break;
        case 1: _t->on_actionNew_triggered(); break;
        case 2: _t->on_actionOpen_triggered(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionSaveAs_triggered(); break;
        case 5: _t->on_actionAbout_triggered(); break;
        case 6: _t->on_actionPaste_triggered(); break;
        case 7: _t->on_actionCopy_triggered(); break;
        case 8: _t->on_actionCut_triggered(); break;
        case 9: _t->on_actionExpandAll_triggered(); break;
        case 10: _t->on_actionExpandSelectedItem_triggered(); break;
        case 11: _t->on_actionShowAttrLine_triggered(); break;
        case 12: _t->on_actionAppendComment_triggered(); break;
        case 13: _t->on_actionAddComment_triggered(); break;
        case 14: _t->on_actionAppendProcessingInstruction_triggered(); break;
        case 15: _t->on_actionAddProcessingInstruction_triggered(); break;
        case 16: _t->on_actionAddChildElement_triggered(); break;
        case 17: _t->on_actionAppendChildElement_triggered(); break;
        case 18: _t->on_actionEdit_triggered(); break;
        case 19: _t->on_actionFind_triggered(); break;
        case 20: _t->on_actionReplace_triggered(); break;
        case 21: _t->on_actionDelete_triggered(); break;
        case 22: _t->on_actionMoveUp_triggered(); break;
        case 23: _t->on_actionMoveDown_triggered(); break;
        case 24: _t->on_actionGo_To_Parent_triggered(); break;
        case 25: _t->on_actionGo_to_Previous_Brother_triggered(); break;
        case 26: _t->on_actionGo_to_Next_Brother_triggered(); break;
        case 27: _t->on_actionClearBookmarks_triggered(); break;
        case 28: _t->on_actionToggleBookmark_triggered(); break;
        case 29: _t->on_actionGotoNextBookmark_triggered(); break;
        case 30: _t->on_actionGotoPreviousBookmark_triggered(); break;
        case 31: _t->on_actionShowChildIndex_triggered(); break;
        case 32: _t->on_actionCloseThisAllBrothers_triggered(); break;
        case 33: _t->on_actionNewFromClipboard_triggered(); break;
        case 34: _t->on_actionQuit_triggered(); break;
        case 35: _t->on_actionCompactView_triggered(); break;
        case 36: _t->on_actionShowAttributesSorted_triggered(); break;
        case 37: _t->on_actionShowAlwaysFullTextComments_triggered(); break;
        case 38: _t->on_actionHideBrothers_triggered(); break;
        case 39: _t->on_actionCloseSiblings_triggered(); break;
        case 40: _t->on_actionCloseItemAndChildren_triggered(); break;
        case 41: _t->on_actionFixedSizeAttributes_triggered(); break;
        case 42: _t->on_actionShowAttributesLength_triggered(); break;
        case 43: _t->on_actionShowCurrentElementTextBase64_triggered(); break;
        case 44: _t->on_actionShowBase64_triggered(); break;
        case 45: _t->on_actionConfigure_triggered(); break;
        case 46: _t->on_actionEditInnerXML_triggered(); break;
        case 47: _t->on_actionEditInnerXMLBase64_triggered(); break;
        case 48: _t->on_actionEditInnerBase64Text_triggered(); break;
        case 49: _t->on_actionZoomIn_triggered(); break;
        case 50: _t->on_actionZoomOut_triggered(); break;
        case 51: _t->on_actionCompare_triggered(); break;
        case 52: _t->on_actionReload_triggered(); break;
        case 53: _t->on_actionCopyPathToClipboard_triggered(); break;
        case 54: _t->on_actionShowContainingFolder_triggered(); break;
        case 55: _t->on_actionAddCurrentDirectory_triggered(); break;
        case 56: _t->on_actionEditPreferredDirectories_triggered(); break;
        case 57: _t->on_actionValidate_triggered(); break;
        case 58: _t->on_actionValidateNewFile_triggered(); break;
        case 59: _t->on_actionValidateUsingDocumentReferences_triggered(); break;
        case 60: _t->on_actionInsertSnippet_triggered(); break;
        case 61: _t->on_actionConfigureSnippets_triggered(); break;
        case 62: _t->on_actionExecuteAutoTest_triggered(); break;
        case 63: _t->on_actionTransforminSnippet_triggered(); break;
        case 64: _t->on_actionShowElementTextLength_triggered(); break;
        case 65: _t->on_actionShowElementSize_triggered(); break;
        case 66: _t->on_actionDeleteBookmarked_triggered(); break;
        case 67: _t->on_actionCleanBookmarkedContent_triggered(); break;
        case 68: _t->on_actionXplore_triggered(); break;
        case 69: _t->on_actionHideView_triggered(); break;
        case 70: _t->on_actionSearchInFiles_triggered(); break;
        case 71: _t->on_actionHelpOnQXmlEdit_triggered(); break;
        case 72: _t->on_actionViewAsXsd_triggered(); break;
        case 73: _t->on_actionAllowedSchemaElements_triggered(); break;
        case 74: _t->on_actionPasteAndSubstituteText_triggered(); break;
        case 75: _t->on_actionNewUsingXMLSchema_triggered(); break;
        case 76: _t->on_actionTransformInComment_triggered(); break;
        case 77: _t->on_actionExtractElementsFromComment_triggered(); break;
        case 78: _t->on_actionExtractFragmentsFromFile_triggered(); break;
        case 79: _t->on_actionWelcomeDialog_triggered(); break;
        case 80: _t->on_actionSaveACopyAs_triggered(); break;
        case 81: _t->on_actionHideLeafChildren_triggered(); break;
        case 82: _t->on_actionHideAllLeafChildren_triggered(); break;
        case 83: _t->on_actionShowLeafChildren_triggered(); break;
        case 84: _t->on_actionShowAllLeafChildren_triggered(); break;
        case 85: _t->on_actionColumnView_triggered(); break;
        case 86: _t->on_actionShowCurrentSessionPanel_triggered(); break;
        case 87: _t->on_actionNewSession_triggered(); break;
        case 88: _t->on_actionPauseSession_triggered(); break;
        case 89: _t->on_actionResumeSession_triggered(); break;
        case 90: _t->on_actionCloseSession_triggered(); break;
        case 91: _t->on_actionManageSessions_triggered(); break;
        case 92: _t->on_actionSessionDetails_triggered(); break;
        case 93: _t->on_actionUndo_triggered(); break;
        case 94: _t->on_actionRedo_triggered(); break;
        case 95: _t->on_actionNewWindow_triggered(); break;
        case 96: _t->on_actionViewData_triggered(); break;
        case 97: _t->on_actionBase64Tools_triggered(); break;
        case 98: _t->on_actionEncodingTools_triggered(); break;
        case 99: _t->on_actionCompareXSD_triggered(); break;
        case 100: _t->on_actionExportAttributesSiblingsAsCSVClipboard_triggered(); break;
        case 101: _t->on_actionVisAttrApplyTemporaryProfile_triggered(); break;
        case 102: _t->on_actionVisAttrSaveCurrenteProfile_triggered(); break;
        case 103: _t->on_actionVisAttrManageProfiles_triggered(); break;
        case 104: _t->on_actionVisAttrRemoveCurrentProfile_triggered(); break;
        case 105: _t->on_actionCompareFiles_triggered(); break;
        case 106: _t->on_actionSpring_and_Forces_triggered(); break;
        case 107: _t->on_actionViewGraphic_triggered(); break;
        case 108: _t->on_actionCopyAttributes_triggered(); break;
        case 109: _t->on_actionPasteAttributes_triggered(); break;
        case 110: _t->on_actionPasteLastAttributes_triggered(); break;
        case 111: _t->on_actionCopyElementPathClipboard_triggered(); break;
        case 112: _t->on_actionAutoComplete_triggered(); break;
        case 113: _t->on_actionXMLEditMode_triggered(); break;
        case 114: _t->on_actionXSLTEditMode_triggered(); break;
        case 115: _t->on_actionSCXMLEditMode_triggered(); break;
        case 116: _t->on_actionNewXSLTSheet_triggered(); break;
        case 117: _t->on_actionNewXSDDocument_triggered(); break;
        case 118: _t->on_actionNewXSLFODocument_triggered(); break;
        case 119: _t->on_actionNewMavenPOM_triggered(); break;
        case 120: _t->on_actionNewSCXMLDocument_triggered(); break;
        case 121: _t->on_actionNewFromSnippet_triggered(); break;
        case 122: _t->on_actionEditXSLTitem_triggered(); break;
        case 123: _t->on_actionScanXMLTagsAndNamesXSLTAutocompletion_triggered(); break;
        case 124: _t->on_actionShowXSLNavigator_triggered(); break;
        case 125: _t->on_actionSpecificProperties_triggered(); break;
        case 126: _t->on_actionPasteAsSibling_triggered(); break;
        case 127: _t->on_actionTipsOnVisualAppearance_triggered(); break;
        case 128: _t->on_actionBinaryViewer_triggered(); break;
        case 129: _t->on_actionReadOnly_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 130: _t->on_actionInsertMetadata_triggered(); break;
        case 131: _t->on_actionInsertCompleteMetadata_triggered(); break;
        case 132: _t->on_actionEditMetadata_triggered(); break;
        case 133: _t->on_actionExportAsJavaJavascriptSource_triggered(); break;
        case 134: _t->on_actionInsertProlog_triggered(); break;
        case 135: _t->onEncodingChanged((*reinterpret_cast<std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 136: _t->onIndentationChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 137: _t->onSchemaValidationError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2]))); break;
        case 138: _t->onNewXSDSchemaForValidation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 139: _t->on_actionExportAsCSource_triggered(); break;
        case 140: _t->on_actionCopyAllToClipboard_triggered(); break;
        case 141: _t->on_actionCodePages_triggered(); break;
        case 142: _t->on_actionInsertChildContainer_triggered(); break;
        case 143: _t->on_actionInsertParent_triggered(); break;
        case 144: _t->on_actionRemoveParent_triggered(); break;
        case 145: _t->on_actionXSDInsertElement_triggered(); break;
        case 146: _t->on_actionXSDAppendElement_triggered(); break;
        case 147: _t->on_actionXSDInsertType_triggered(); break;
        case 148: _t->on_actionXSDAppendType_triggered(); break;
        case 149: _t->on_actionXSDInsertAttribute_triggered(); break;
        case 150: _t->on_actionXSDAppendAttribute_triggered(); break;
        case 151: _t->on_actionXSDModifyType_triggered(); break;
        case 152: _t->on_actionAnonymize_triggered(); break;
        case 153: _t->on_actionQuickReferenceElements_triggered(); break;
        case 154: _t->on_actionAnonymizeFile_triggered(); break;
        case 155: _t->on_actionEditXSDAnnotation_triggered(); break;
        case 156: _t->on_actionEditEnumerationFacet_triggered(); break;
        case 157: _t->on_actionFindNext_triggered(); break;
        case 158: _t->on_actionFindPrevious_triggered(); break;
        case 159: _t->on_actionSetIndent_triggered(); break;
        case 160: _t->on_actionInfo_triggered(); break;
        case 161: _t->on_actionShowMainButtons_triggered(); break;
        case 162: _t->on_actionShowStatusBar_triggered(); break;
        case 163: _t->on_actionRemoveNilAttribute_triggered(); break;
        case 164: _t->on_actionInsertNilAttribute_triggered(); break;
        case 165: _t->on_actionRemoveXSITypeAttribute_triggered(); break;
        case 166: _t->on_actionInsertXSITypeAttribute_triggered(); break;
        case 167: _t->on_actionInsertXmlSchemaReferences_triggered(); break;
        case 168: _t->on_actionOpenSameWindow_triggered(); break;
        case 169: _t->on_actionFillSerie_triggered(); break;
        case 170: _t->on_actionCloneElements_triggered(); break;
        case 171: _t->on_actionClose_triggered(); break;
        case 172: _t->on_actionExportElementToFile_triggered(); break;
        case 173: _t->on_actionSortAttributesElementRecursive_triggered(); break;
        case 174: _t->on_actionSortAttributesElement_triggered(); break;
        case 175: _t->on_actionSortAttributes_triggered(); break;
        case 176: _t->on_actionRemoveAllSiblings_triggered(); break;
        case 177: _t->on_actionRemoveAllSiblingsAfter_triggered(); break;
        case 178: _t->on_actionRemoveAllSiblingsBefore_triggered(); break;
        case 179: _t->on_actionTaskDisplayDetail_triggered(); break;
        case 180: _t->on_actionHelpSetEditorDetail_triggered(); break;
        case 181: _t->on_actionRemovePrefix_triggered(); break;
        case 182: _t->on_actionRemoveNamespace_triggered(); break;
        case 183: _t->on_actionSetPrefix_triggered(); break;
        case 184: _t->on_actionSetNamespace_triggered(); break;
        case 185: _t->on_actionReplacePrefix_triggered(); break;
        case 186: _t->on_actionReplaceNamespace_triggered(); break;
        case 187: _t->on_actionNormalizeNamespace_triggered(); break;
        case 188: _t->on_actionInsertSpecial_triggered(); break;
        case 189: _t->on_actionAppendSpecial_triggered(); break;
        case 190: _t->on_actionShowSCXMLNavigator_triggered(); break;
        case 191: _t->on_actionValidateSCXML_triggered(); break;
        case 192: _t->on_actionValidateXSD_triggered(); break;
        case 193: _t->on_actionCopyElementOnly_triggered(); break;
        case 194: _t->on_actionXSLExecutor_triggered(); break;
        case 195: _t->on_actionExecuteXSLTAsSheet_triggered(); break;
        case 196: _t->on_actionExecuteXSLTAsSource_triggered(); break;
        case 197: _t->on_actionOpenSiblingsAtTheSameLevel_triggered(); break;
        case 198: _t->on_actionShowPrincipalShortcuts_triggered(); break;
        case 199: _t->on_actionAddFormattingInfo_triggered(); break;
        case 200: _t->on_actionRemoveFormattingInfo_triggered(); break;
        case 201: _t->on_actionPresetApacheFOP_triggered(); break;
        case 202: _t->on_actionPresetNoIndentation_triggered(); break;
        case 203: _t->on_actionPresetIndentOneAttributePerLine_triggered(); break;
        case 204: _t->on_actionChooseEditType_triggered(); break;
        case 205: _t->on_actionValidationDialog_triggered(); break;
        case 206: _t->on_actionOpenGuidedOperationPanel_triggered(); break;
        case 207: _t->on_actionChooseUserProfile_triggered(); break;
        case 208: _t->on_actionInsertDisablingParent_triggered(); break;
        case 209: _t->on_actionSearchCommand_triggered(); break;
        case 210: _t->on_actionShowKeyboardShortcuts_triggered(); break;
        case 211: _t->on_actionEditAsText_triggered(); break;
        case 212: _t->on_actionTestXML_triggered(); break;
        case 213: _t->on_actionLoadSample_triggered(); break;
        case 214: _t->on_actionGenerateXSD_triggered(); break;
        case 215: _t->on_actionGenerateXMLFromXSD_triggered(); break;
        case 216: _t->onClipboardDataChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 217: _t->onDocumentIsModified((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 218: _t->onSessionEnablingChanged(); break;
        case 219: _t->onHandleSessionState(); break;
        case 220: _t->onReadOnlyStateChanged(); break;
        case 221: _t->onReadOnlyGo(); break;
        case 222: _t->onSourceNavigateTo((*reinterpret_cast<std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 223: _t->onMessagesTabCloseRequested((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 224: _t->treeContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 225: _t->onOkClicked(); break;
        case 226: _t->onCancelClicked(); break;
        case 227: _t->onRecentFile(); break;
        case 228: _t->onPreferredDir(); break;
        case 229: _t->onPlugin(); break;
        case 230: _t->navigateToPage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 231: _t->schemaLoadComplete((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 232: _t->onComputeSelectionState(); break;
        case 233: _t->onComputeSelectionStateExperimentalFeatures(); break;
        case 234: _t->onNewMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 235: _t->setClipBoardActionsState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 236: _t->onShowStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 237: { bool _r = _t->onSessionfileLoadRequest((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 238: _t->onSessionFolderOpenRequest((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 239: _t->onShowSessionManagement(); break;
        case 240: _t->onUndoStateUpdated((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 241: _t->onChangeEditorMode(); break;
        case 242: _t->onEditorEncodingChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 243: _t->onEditorElementDoubleClicked((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 244: _t->onEditorEditElementEvent((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2]))); break;
        case 245: _t->onEditorConfigure((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 246: _t->onInfoKeyboardDismiss(); break;
        case 247: _t->onInfoEditTypesDismiss(); break;
        case 248: _t->onInfoKeyboardRequestOpenShortcutsPanel(); break;
        case 249: _t->onInfoEditTypesOpenShortcutsPanel(); break;
        case 250: _t->onStateKeyboardShortcutChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 135:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 222:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "UIDelegate"))
        return static_cast< UIDelegate*>(this);
    if (!strcmp(_clname, "XMLLoadErrorHandler"))
        return static_cast< XMLLoadErrorHandler*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 251)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 251;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 251)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 251;
    }
    return _id;
}
QT_WARNING_POP
