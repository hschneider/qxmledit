/****************************************************************************
** Meta object code from reading C++ file 'xmleditwidgetprivate.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xmleditwidgetprivate.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmleditwidgetprivate.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20XmlEditWidgetPrivateE_t {};
} // unnamed namespace

template <> constexpr inline auto XmlEditWidgetPrivate::qt_create_metaobjectdata<qt_meta_tag_ZN20XmlEditWidgetPrivateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XmlEditWidgetPrivate",
        "schemaLoadComplete",
        "",
        "XSchemaLoader*",
        "loader",
        "XSchemaLoader::Code",
        "code",
        "regolaIsModified",
        "regolaUndoChanged",
        "findText",
        "countTextOccurrences",
        "elementDoubleClicked",
        "QTreeWidgetItem*",
        "item",
        "column",
        "on_treeWidget_itemSelectionChanged",
        "on_viewAsXsdCmd_clicked",
        "treeContextMenu",
        "QPoint",
        "position",
        "onStyleChanged",
        "onPredefinedStyleChanged",
        "onCopySpecial",
        "navigateToPage",
        "page",
        "docTypeChanged",
        "docType",
        "on_ok_clicked",
        "on_cancel_clicked",
        "on_moveUp_clicked",
        "on_moveDown_clicked",
        "on_addChild_clicked",
        "on_addBrother_clicked",
        "on_editItem_clicked",
        "on_deleteItem_clicked",
        "on_closeSearchPanel_clicked",
        "openAdvancedResultPanel",
        "onEncodingChanged",
        "newEncoding",
        "onSearchNext",
        "onSearchPrev",
        "onReplace",
        "FindTextParams::EFindType",
        "replaceType",
        "onReplaceAll",
        "onReplaceSkipAndGotoNext",
        "onReplaceSkipAndGotoPrevious",
        "onReplaceReplaceAndGotoNext",
        "onReplaceReplaceAndGotoPrevious",
        "onSetIndent",
        "onIndentationChanged",
        "indentationEnabled",
        "newIndentation",
        "onShortcutDelete",
        "onShortcutInsert",
        "onShortcutInsertSpec",
        "onShortcutAppend",
        "onShortcutAppendSpec",
        "removeNilAttribute",
        "insertNilAttribute",
        "removeXSITypeAttribute",
        "insertXSITypeAttribute",
        "newValue",
        "insertXmlSchemaReferences",
        "actionFillSerie",
        "doReplica",
        "ReplicaCloneInfo*",
        "cmd",
        "Element*",
        "element",
        "updateAttributeIndentationSettings",
        "setFacets",
        "selection",
        "QList<XSDFacet*>",
        "facets",
        "onEditEnum",
        "updateTimeout",
        "onSCXMLNavigatorEditState",
        "stateName",
        "onSCXMLNavigatorGoToState",
        "onXSLTNavigatorGoTo",
        "onXSLTNavigatorEdit",
        "openSiblingsSameLevel",
        "onShortcutShiftEnter",
        "onShortcutCtrlEnter",
        "onShortcutAltEnter",
        "onShortcutT",
        "onShortcutX",
        "onShortcutY",
        "addFormattingInfo",
        "removeFormattingInfo",
        "presetFormatting",
        "XMLIndentationSettings::ESettings",
        "preset",
        "onSettings"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'schemaLoadComplete'
        QtMocHelpers::SlotData<void(XSchemaLoader *, const XSchemaLoader::Code)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'regolaIsModified'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'regolaUndoChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'findText'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'countTextOccurrences'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'elementDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { QMetaType::Int, 14 },
        }}),
        // Slot 'on_treeWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_viewAsXsdCmd_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'treeContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'onStyleChanged'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onPredefinedStyleChanged'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCopySpecial'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'navigateToPage'
        QtMocHelpers::SlotData<void(const int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 24 },
        }}),
        // Slot 'docTypeChanged'
        QtMocHelpers::SlotData<void(const QString &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Slot 'on_ok_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cancel_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveUp_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_moveDown_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addChild_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_addBrother_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editItem_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_deleteItem_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_closeSearchPanel_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openAdvancedResultPanel'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEncodingChanged'
        QtMocHelpers::SlotData<void(const QString &)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 38 },
        }}),
        // Slot 'onSearchNext'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSearchPrev'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplace'
        QtMocHelpers::SlotData<void(const FindTextParams::EFindType)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 42, 43 },
        }}),
        // Slot 'onReplaceAll'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplaceSkipAndGotoNext'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplaceSkipAndGotoPrevious'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplaceReplaceAndGotoNext'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplaceReplaceAndGotoPrevious'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSetIndent'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onIndentationChanged'
        QtMocHelpers::SlotData<void(const bool, const int)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 51 }, { QMetaType::Int, 52 },
        }}),
        // Slot 'onShortcutDelete'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutInsert'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutInsertSpec'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutAppend'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutAppendSpec'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeNilAttribute'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'insertNilAttribute'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeXSITypeAttribute'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'insertXSITypeAttribute'
        QtMocHelpers::SlotData<void(const QString &)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 62 },
        }}),
        // Slot 'insertXmlSchemaReferences'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'actionFillSerie'
        QtMocHelpers::SlotData<bool()>(64, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'doReplica'
        QtMocHelpers::SlotData<bool(ReplicaCloneInfo *, Element *)>(65, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 66, 67 }, { 0x80000000 | 68, 69 },
        }}),
        // Slot 'updateAttributeIndentationSettings'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setFacets'
        QtMocHelpers::SlotData<void(Element *, QList<XSDFacet*>)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 68, 72 }, { 0x80000000 | 73, 74 },
        }}),
        // Slot 'onEditEnum'
        QtMocHelpers::SlotData<bool()>(75, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'updateTimeout'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSCXMLNavigatorEditState'
        QtMocHelpers::SlotData<void(const QString &, Element *)>(77, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 78 }, { 0x80000000 | 68, 69 },
        }}),
        // Slot 'onSCXMLNavigatorGoToState'
        QtMocHelpers::SlotData<void(const QString &, Element *)>(79, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 78 }, { 0x80000000 | 68, 69 },
        }}),
        // Slot 'onXSLTNavigatorGoTo'
        QtMocHelpers::SlotData<void(Element *)>(80, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 68, 69 },
        }}),
        // Slot 'onXSLTNavigatorEdit'
        QtMocHelpers::SlotData<void(Element *)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 68, 69 },
        }}),
        // Slot 'openSiblingsSameLevel'
        QtMocHelpers::SlotData<void()>(82, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutShiftEnter'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutCtrlEnter'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutAltEnter'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutT'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutX'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutY'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addFormattingInfo'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeFormattingInfo'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'presetFormatting'
        QtMocHelpers::SlotData<bool(const XMLIndentationSettings::ESettings)>(91, 2, QMC::AccessPrivate, QMetaType::Bool, {{
            { 0x80000000 | 92, 93 },
        }}),
        // Slot 'onSettings'
        QtMocHelpers::SlotData<void()>(94, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XmlEditWidgetPrivate, qt_meta_tag_ZN20XmlEditWidgetPrivateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XmlEditWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20XmlEditWidgetPrivateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20XmlEditWidgetPrivateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20XmlEditWidgetPrivateE_t>.metaTypes,
    nullptr
} };

void XmlEditWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XmlEditWidgetPrivate *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->schemaLoadComplete((*reinterpret_cast<std::add_pointer_t<XSchemaLoader*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<XSchemaLoader::Code>>(_a[2]))); break;
        case 1: _t->regolaIsModified(); break;
        case 2: _t->regolaUndoChanged(); break;
        case 3: _t->findText(); break;
        case 4: _t->countTextOccurrences(); break;
        case 5: _t->elementDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->on_treeWidget_itemSelectionChanged(); break;
        case 7: _t->on_viewAsXsdCmd_clicked(); break;
        case 8: _t->treeContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 9: _t->onStyleChanged(); break;
        case 10: _t->onPredefinedStyleChanged(); break;
        case 11: _t->onCopySpecial(); break;
        case 12: _t->navigateToPage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->docTypeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_ok_clicked(); break;
        case 15: _t->on_cancel_clicked(); break;
        case 16: _t->on_moveUp_clicked(); break;
        case 17: _t->on_moveDown_clicked(); break;
        case 18: _t->on_addChild_clicked(); break;
        case 19: _t->on_addBrother_clicked(); break;
        case 20: _t->on_editItem_clicked(); break;
        case 21: _t->on_deleteItem_clicked(); break;
        case 22: _t->on_closeSearchPanel_clicked(); break;
        case 23: _t->openAdvancedResultPanel(); break;
        case 24: _t->onEncodingChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->onSearchNext(); break;
        case 26: _t->onSearchPrev(); break;
        case 27: _t->onReplace((*reinterpret_cast<std::add_pointer_t<FindTextParams::EFindType>>(_a[1]))); break;
        case 28: _t->onReplaceAll(); break;
        case 29: _t->onReplaceSkipAndGotoNext(); break;
        case 30: _t->onReplaceSkipAndGotoPrevious(); break;
        case 31: _t->onReplaceReplaceAndGotoNext(); break;
        case 32: _t->onReplaceReplaceAndGotoPrevious(); break;
        case 33: _t->onSetIndent(); break;
        case 34: _t->onIndentationChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 35: _t->onShortcutDelete(); break;
        case 36: _t->onShortcutInsert(); break;
        case 37: _t->onShortcutInsertSpec(); break;
        case 38: _t->onShortcutAppend(); break;
        case 39: _t->onShortcutAppendSpec(); break;
        case 40: _t->removeNilAttribute(); break;
        case 41: _t->insertNilAttribute(); break;
        case 42: _t->removeXSITypeAttribute(); break;
        case 43: _t->insertXSITypeAttribute((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->insertXmlSchemaReferences(); break;
        case 45: { bool _r = _t->actionFillSerie();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->doReplica((*reinterpret_cast<std::add_pointer_t<ReplicaCloneInfo*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->updateAttributeIndentationSettings(); break;
        case 48: _t->setFacets((*reinterpret_cast<std::add_pointer_t<Element*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<XSDFacet*>>>(_a[2]))); break;
        case 49: { bool _r = _t->onEditEnum();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->updateTimeout(); break;
        case 51: _t->onSCXMLNavigatorEditState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2]))); break;
        case 52: _t->onSCXMLNavigatorGoToState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2]))); break;
        case 53: _t->onXSLTNavigatorGoTo((*reinterpret_cast<std::add_pointer_t<Element*>>(_a[1]))); break;
        case 54: _t->onXSLTNavigatorEdit((*reinterpret_cast<std::add_pointer_t<Element*>>(_a[1]))); break;
        case 55: _t->openSiblingsSameLevel(); break;
        case 56: _t->onShortcutShiftEnter(); break;
        case 57: _t->onShortcutCtrlEnter(); break;
        case 58: _t->onShortcutAltEnter(); break;
        case 59: _t->onShortcutT(); break;
        case 60: _t->onShortcutX(); break;
        case 61: _t->onShortcutY(); break;
        case 62: _t->addFormattingInfo(); break;
        case 63: _t->removeFormattingInfo(); break;
        case 64: { bool _r = _t->presetFormatting((*reinterpret_cast<std::add_pointer_t<XMLIndentationSettings::ESettings>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->onSettings(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaLoader* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *XmlEditWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XmlEditWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20XmlEditWidgetPrivateE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "XSDAnnotationEditProvider"))
        return static_cast< XSDAnnotationEditProvider*>(this);
    return QObject::qt_metacast(_clname);
}

int XmlEditWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
    return _id;
}
QT_WARNING_POP
