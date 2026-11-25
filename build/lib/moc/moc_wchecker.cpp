/****************************************************************************
** Meta object code from reading C++ file 'wchecker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/uiutil/wchecker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wchecker.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14UIWidgetHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto UIWidgetHelper::qt_create_metaobjectdata<qt_meta_tag_ZN14UIWidgetHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UIWidgetHelper"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UIWidgetHelper, qt_meta_tag_ZN14UIWidgetHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UIWidgetHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14UIWidgetHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14UIWidgetHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14UIWidgetHelperE_t>.metaTypes,
    nullptr
} };

void UIWidgetHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UIWidgetHelper *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *UIWidgetHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UIWidgetHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14UIWidgetHelperE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UIWidgetHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto UIDataBaseCheckWidgetHelper::qt_create_metaobjectdata<qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UIDataBaseCheckWidgetHelper"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UIDataBaseCheckWidgetHelper, qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UIDataBaseCheckWidgetHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<UIWidgetHelper::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t>.metaTypes,
    nullptr
} };

void UIDataBaseCheckWidgetHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UIDataBaseCheckWidgetHelper *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *UIDataBaseCheckWidgetHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UIDataBaseCheckWidgetHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN27UIDataBaseCheckWidgetHelperE_t>.strings))
        return static_cast<void*>(this);
    return UIWidgetHelper::qt_metacast(_clname);
}

int UIDataBaseCheckWidgetHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIWidgetHelper::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN24UITableCheckWidgetHelperE_t {};
} // unnamed namespace

template <> constexpr inline auto UITableCheckWidgetHelper::qt_create_metaobjectdata<qt_meta_tag_ZN24UITableCheckWidgetHelperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UITableCheckWidgetHelper",
        "onItemClicked",
        "",
        "QTableWidgetItem*",
        "onItemChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onItemClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'onItemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UITableCheckWidgetHelper, qt_meta_tag_ZN24UITableCheckWidgetHelperE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UITableCheckWidgetHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<UIDataBaseCheckWidgetHelper::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24UITableCheckWidgetHelperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24UITableCheckWidgetHelperE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24UITableCheckWidgetHelperE_t>.metaTypes,
    nullptr
} };

void UITableCheckWidgetHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UITableCheckWidgetHelper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onItemClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 1: _t->onItemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *UITableCheckWidgetHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UITableCheckWidgetHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24UITableCheckWidgetHelperE_t>.strings))
        return static_cast<void*>(this);
    return UIDataBaseCheckWidgetHelper::qt_metacast(_clname);
}

int UITableCheckWidgetHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UIDataBaseCheckWidgetHelper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
