/****************************************************************************
** Meta object code from reading C++ file 'sessiondrawerwidgetprivate.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sessions/sessiondrawerwidgetprivate.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessiondrawerwidgetprivate.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionDrawerWidgetPrivate::qt_create_metaobjectdata<qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionDrawerWidgetPrivate",
        "onSessionDataChanged",
        "",
        "onEnablingChanged",
        "treeItemDoubleClicked",
        "QModelIndex",
        "index",
        "clearSearchText",
        "newSearchText",
        "newText",
        "onMoreCmd",
        "onSessionStateChanged",
        "Session::SessionState",
        "onCreateSession",
        "onSearchChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onSessionDataChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onEnablingChanged'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'treeItemDoubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'clearSearchText'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newSearchText'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'onMoreCmd'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSessionStateChanged'
        QtMocHelpers::SlotData<void(Session::SessionState)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 2 },
        }}),
        // Slot 'onCreateSession'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSearchChanged'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionDrawerWidgetPrivate, qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SessionDrawerWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t>.metaTypes,
    nullptr
} };

void SessionDrawerWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionDrawerWidgetPrivate *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onSessionDataChanged(); break;
        case 1: _t->onEnablingChanged(); break;
        case 2: _t->treeItemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->clearSearchText(); break;
        case 4: _t->newSearchText((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onMoreCmd(); break;
        case 6: _t->onSessionStateChanged((*reinterpret_cast<std::add_pointer_t<Session::SessionState>>(_a[1]))); break;
        case 7: _t->onCreateSession(); break;
        case 8: _t->onSearchChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *SessionDrawerWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionDrawerWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26SessionDrawerWidgetPrivateE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SessionDrawerWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
