/****************************************************************************
** Meta object code from reading C++ file 'sessionmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sessions/sessionmanager.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SessionManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionManager::qt_create_metaobjectdata<qt_meta_tag_ZN14SessionManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionManager",
        "sessionStateChanged",
        "",
        "Session::SessionState",
        "state",
        "clearSession",
        "dataChanged",
        "enablingChanged",
        "storageError",
        "errorMessage",
        "editFile",
        "filePath",
        "sessionActivated",
        "idSession"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sessionStateChanged'
        QtMocHelpers::SignalData<void(Session::SessionState)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'clearSession'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dataChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'enablingChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'storageError'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'editFile'
        QtMocHelpers::SignalData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'sessionActivated'
        QtMocHelpers::SignalData<void(const int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionManager, qt_meta_tag_ZN14SessionManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SessionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SessionManagerE_t>.metaTypes,
    nullptr
} };

void SessionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sessionStateChanged((*reinterpret_cast<std::add_pointer_t<Session::SessionState>>(_a[1]))); break;
        case 1: _t->clearSession(); break;
        case 2: _t->dataChanged(); break;
        case 3: _t->enablingChanged(); break;
        case 4: _t->storageError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->editFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->sessionActivated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)(Session::SessionState )>(_a, &SessionManager::sessionStateChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)()>(_a, &SessionManager::clearSession, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)()>(_a, &SessionManager::dataChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)()>(_a, &SessionManager::enablingChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)(const QString & )>(_a, &SessionManager::storageError, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)(const QString & )>(_a, &SessionManager::editFile, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionManager::*)(const int )>(_a, &SessionManager::sessionActivated, 6))
            return;
    }
}

const QMetaObject *SessionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SessionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SessionManager::sessionStateChanged(Session::SessionState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void SessionManager::clearSession()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SessionManager::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SessionManager::enablingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SessionManager::storageError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void SessionManager::editFile(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void SessionManager::sessionActivated(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
