/****************************************************************************
** Meta object code from reading C++ file 'xmleditwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/globals/includes/xmleditwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmleditwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13XmlEditWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto XmlEditWidget::qt_create_metaobjectdata<qt_meta_tag_ZN13XmlEditWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XmlEditWidget",
        "reevaluateSelectionState",
        "",
        "documentIsModified",
        "isModified",
        "treeContextMenuRequested",
        "QPoint",
        "signalSetClipBoardActionsState",
        "isAction",
        "okClicked",
        "cancelClicked",
        "enableZoom",
        "viewAsXsdRequested",
        "schemaLabelChanged",
        "newLabel",
        "showStatusMessage",
        "message",
        "isLongTimeout",
        "dataReadyMessage",
        "loadCurrentPage",
        "page",
        "undoStateUpdated",
        "undoPossible",
        "redoPossible",
        "editModeChanged",
        "readOnlyStateChanged",
        "encodingChanged",
        "newEncoding",
        "indentationChanged",
        "indentationEnabled",
        "newIndent",
        "schemaValidationError",
        "Element*",
        "element",
        "newXSDSchemaForValidation",
        "newSchemaUrl",
        "requestInsert",
        "requestDelete",
        "requestAppend",
        "requestInsertSpec",
        "requestAppendSpec",
        "elementDoubleClicked",
        "times",
        "editElementEvent",
        "editElementAsFormUsageCount",
        "editElementAsTextUsageCount",
        "configure",
        "position",
        "enabled",
        "encodingLabelVisible",
        "viewAsXSDButtonVisible",
        "moveButtonsVisible",
        "versionNumber"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'reevaluateSelectionState'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'documentIsModified'
        QtMocHelpers::SignalData<void(const bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'treeContextMenuRequested'
        QtMocHelpers::SignalData<void(const QPoint &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Signal 'signalSetClipBoardActionsState'
        QtMocHelpers::SignalData<void(const bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'okClicked'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cancelClicked'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enableZoom'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewAsXsdRequested'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'schemaLabelChanged'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Signal 'showStatusMessage'
        QtMocHelpers::SignalData<void(const QString &, const bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Signal 'dataReadyMessage'
        QtMocHelpers::SignalData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Signal 'loadCurrentPage'
        QtMocHelpers::SignalData<void(const int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Signal 'undoStateUpdated'
        QtMocHelpers::SignalData<void(const bool, const bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 }, { QMetaType::Bool, 23 },
        }}),
        // Signal 'editModeChanged'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'readOnlyStateChanged'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'encodingChanged'
        QtMocHelpers::SignalData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Signal 'indentationChanged'
        QtMocHelpers::SignalData<void(const bool, const int)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 }, { QMetaType::Int, 30 },
        }}),
        // Signal 'schemaValidationError'
        QtMocHelpers::SignalData<void(const QString &, Element *)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 16 }, { 0x80000000 | 32, 33 },
        }}),
        // Signal 'newXSDSchemaForValidation'
        QtMocHelpers::SignalData<void(const QString &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Signal 'requestInsert'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestDelete'
        QtMocHelpers::SignalData<void()>(37, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestAppend'
        QtMocHelpers::SignalData<void()>(38, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestInsertSpec'
        QtMocHelpers::SignalData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestAppendSpec'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'elementDoubleClicked'
        QtMocHelpers::SignalData<void(const uint)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 42 },
        }}),
        // Signal 'editElementEvent'
        QtMocHelpers::SignalData<void(const uint, const uint)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 44 }, { QMetaType::UInt, 45 },
        }}),
        // Signal 'configure'
        QtMocHelpers::SignalData<void(const QPoint &)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 47 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'enabled'
        QtMocHelpers::PropertyData<bool>(48, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'encodingLabelVisible'
        QtMocHelpers::PropertyData<bool>(49, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'viewAsXSDButtonVisible'
        QtMocHelpers::PropertyData<bool>(50, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'moveButtonsVisible'
        QtMocHelpers::PropertyData<bool>(51, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'versionNumber'
        QtMocHelpers::PropertyData<ulong>(52, QMetaType::ULong, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XmlEditWidget, qt_meta_tag_ZN13XmlEditWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XmlEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XmlEditWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XmlEditWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XmlEditWidgetE_t>.metaTypes,
    nullptr
} };

void XmlEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XmlEditWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reevaluateSelectionState(); break;
        case 1: _t->documentIsModified((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->treeContextMenuRequested((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->signalSetClipBoardActionsState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->okClicked(); break;
        case 5: _t->cancelClicked(); break;
        case 6: _t->enableZoom(); break;
        case 7: _t->viewAsXsdRequested(); break;
        case 8: _t->schemaLabelChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->showStatusMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 10: _t->dataReadyMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->loadCurrentPage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->undoStateUpdated((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 13: _t->editModeChanged(); break;
        case 14: _t->readOnlyStateChanged(); break;
        case 15: _t->encodingChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->indentationChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->schemaValidationError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2]))); break;
        case 18: _t->newXSDSchemaForValidation((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->requestInsert(); break;
        case 20: _t->requestDelete(); break;
        case 21: _t->requestAppend(); break;
        case 22: _t->requestInsertSpec(); break;
        case 23: _t->requestAppendSpec(); break;
        case 24: _t->elementDoubleClicked((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 25: _t->editElementEvent((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2]))); break;
        case 26: _t->configure((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::reevaluateSelectionState, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const bool )>(_a, &XmlEditWidget::documentIsModified, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QPoint & )>(_a, &XmlEditWidget::treeContextMenuRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const bool )>(_a, &XmlEditWidget::signalSetClipBoardActionsState, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::okClicked, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::cancelClicked, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::enableZoom, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::viewAsXsdRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QString & )>(_a, &XmlEditWidget::schemaLabelChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QString & , const bool )>(_a, &XmlEditWidget::showStatusMessage, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QString & )>(_a, &XmlEditWidget::dataReadyMessage, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const int )>(_a, &XmlEditWidget::loadCurrentPage, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const bool , const bool )>(_a, &XmlEditWidget::undoStateUpdated, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::editModeChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::readOnlyStateChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QString & )>(_a, &XmlEditWidget::encodingChanged, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const bool , const int )>(_a, &XmlEditWidget::indentationChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QString & , Element * )>(_a, &XmlEditWidget::schemaValidationError, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QString & )>(_a, &XmlEditWidget::newXSDSchemaForValidation, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::requestInsert, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::requestDelete, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::requestAppend, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::requestInsertSpec, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)()>(_a, &XmlEditWidget::requestAppendSpec, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const uint )>(_a, &XmlEditWidget::elementDoubleClicked, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const uint , const uint )>(_a, &XmlEditWidget::editElementEvent, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (XmlEditWidget::*)(const QPoint & )>(_a, &XmlEditWidget::configure, 26))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isEncodingLabelVisible(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isViewAsXSDButtonVisible(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->areMoveButtonsVisible(); break;
        case 4: *reinterpret_cast<ulong*>(_v) = _t->versionNumber(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setEncodingLabelVisible(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setViewAsXSDButtonVisible(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setMoveButtonsVisible(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *XmlEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XmlEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XmlEditWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int XmlEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void XmlEditWidget::reevaluateSelectionState()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void XmlEditWidget::documentIsModified(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void XmlEditWidget::treeContextMenuRequested(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void XmlEditWidget::signalSetClipBoardActionsState(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void XmlEditWidget::okClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void XmlEditWidget::cancelClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void XmlEditWidget::enableZoom()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void XmlEditWidget::viewAsXsdRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void XmlEditWidget::schemaLabelChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void XmlEditWidget::showStatusMessage(const QString & _t1, const bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void XmlEditWidget::dataReadyMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void XmlEditWidget::loadCurrentPage(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1);
}

// SIGNAL 12
void XmlEditWidget::undoStateUpdated(const bool _t1, const bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1, _t2);
}

// SIGNAL 13
void XmlEditWidget::editModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void XmlEditWidget::readOnlyStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void XmlEditWidget::encodingChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void XmlEditWidget::indentationChanged(const bool _t1, const int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1, _t2);
}

// SIGNAL 17
void XmlEditWidget::schemaValidationError(const QString & _t1, Element * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2);
}

// SIGNAL 18
void XmlEditWidget::newXSDSchemaForValidation(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void XmlEditWidget::requestInsert()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void XmlEditWidget::requestDelete()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void XmlEditWidget::requestAppend()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void XmlEditWidget::requestInsertSpec()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void XmlEditWidget::requestAppendSpec()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void XmlEditWidget::elementDoubleClicked(const uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}

// SIGNAL 25
void XmlEditWidget::editElementEvent(const uint _t1, const uint _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 25, nullptr, _t1, _t2);
}

// SIGNAL 26
void XmlEditWidget::configure(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1);
}
QT_WARNING_POP
