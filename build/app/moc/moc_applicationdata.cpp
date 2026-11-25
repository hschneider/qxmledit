/****************************************************************************
** Meta object code from reading C++ file 'applicationdata.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/applicationdata.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationdata.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15ApplicationDataE_t {};
} // unnamed namespace

template <> constexpr inline auto ApplicationData::qt_create_metaobjectdata<qt_meta_tag_ZN15ApplicationDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ApplicationData",
        "openUserGuidedPanel",
        "",
        "openUserTypePanel",
        "firstAccess",
        "windowActivated",
        "MainWindow*",
        "window",
        "activated",
        "stateKeyboardShortcutChanged",
        "isVisible",
        "keyboardShortcutOpenCloseRequest",
        "requestEnableKeys",
        "windowsCountChanged",
        "count",
        "onSessionActivated",
        "idSession",
        "onClearSession"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'openUserGuidedPanel'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openUserTypePanel'
        QtMocHelpers::SignalData<void(const bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'windowActivated'
        QtMocHelpers::SignalData<void(MainWindow *, bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::Bool, 8 },
        }}),
        // Signal 'stateKeyboardShortcutChanged'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Signal 'keyboardShortcutOpenCloseRequest'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestEnableKeys'
        QtMocHelpers::SignalData<void(MainWindow *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'windowsCountChanged'
        QtMocHelpers::SignalData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'onSessionActivated'
        QtMocHelpers::SlotData<void(const int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'onClearSession'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ApplicationData, qt_meta_tag_ZN15ApplicationDataE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ApplicationData::staticMetaObject = { {
    QMetaObject::SuperData::link<QXmlEditData::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ApplicationDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ApplicationDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15ApplicationDataE_t>.metaTypes,
    nullptr
} };

void ApplicationData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ApplicationData *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openUserGuidedPanel(); break;
        case 1: _t->openUserTypePanel((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->windowActivated((*reinterpret_cast<std::add_pointer_t<MainWindow*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->stateKeyboardShortcutChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->keyboardShortcutOpenCloseRequest(); break;
        case 5: _t->requestEnableKeys((*reinterpret_cast<std::add_pointer_t<MainWindow*>>(_a[1]))); break;
        case 6: _t->windowsCountChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->onSessionActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onClearSession(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)()>(_a, &ApplicationData::openUserGuidedPanel, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)(const bool )>(_a, &ApplicationData::openUserTypePanel, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)(MainWindow * , bool )>(_a, &ApplicationData::windowActivated, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)(bool )>(_a, &ApplicationData::stateKeyboardShortcutChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)()>(_a, &ApplicationData::keyboardShortcutOpenCloseRequest, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)(MainWindow * )>(_a, &ApplicationData::requestEnableKeys, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ApplicationData::*)(int )>(_a, &ApplicationData::windowsCountChanged, 6))
            return;
    }
}

const QMetaObject *ApplicationData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15ApplicationDataE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SessionDataFactory"))
        return static_cast< SessionDataFactory*>(this);
    return QXmlEditData::qt_metacast(_clname);
}

int ApplicationData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmlEditData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ApplicationData::openUserGuidedPanel()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ApplicationData::openUserTypePanel(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ApplicationData::windowActivated(MainWindow * _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void ApplicationData::stateKeyboardShortcutChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void ApplicationData::keyboardShortcutOpenCloseRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ApplicationData::requestEnableKeys(MainWindow * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void ApplicationData::windowsCountChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
