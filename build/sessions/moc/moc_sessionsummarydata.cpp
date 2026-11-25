/****************************************************************************
** Meta object code from reading C++ file 'sessionsummarydata.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sessions/sessionsummarydata.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionsummarydata.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19BaseSessionDataInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto BaseSessionDataInfo::qt_create_metaobjectdata<qt_meta_tag_ZN19BaseSessionDataInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BaseSessionDataInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BaseSessionDataInfo, qt_meta_tag_ZN19BaseSessionDataInfoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BaseSessionDataInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19BaseSessionDataInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19BaseSessionDataInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19BaseSessionDataInfoE_t>.metaTypes,
    nullptr
} };

void BaseSessionDataInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BaseSessionDataInfo *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *BaseSessionDataInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseSessionDataInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19BaseSessionDataInfoE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BaseSessionDataInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN22SessionDirectoryAccessE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionDirectoryAccess::qt_create_metaobjectdata<qt_meta_tag_ZN22SessionDirectoryAccessE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionDirectoryAccess"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionDirectoryAccess, qt_meta_tag_ZN22SessionDirectoryAccessE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SessionDirectoryAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseSessionDataInfo::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22SessionDirectoryAccessE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22SessionDirectoryAccessE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22SessionDirectoryAccessE_t>.metaTypes,
    nullptr
} };

void SessionDirectoryAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionDirectoryAccess *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SessionDirectoryAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionDirectoryAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22SessionDirectoryAccessE_t>.strings))
        return static_cast<void*>(this);
    return BaseSessionDataInfo::qt_metacast(_clname);
}

int SessionDirectoryAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseSessionDataInfo::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN17SessionFileAccessE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionFileAccess::qt_create_metaobjectdata<qt_meta_tag_ZN17SessionFileAccessE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionFileAccess"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionFileAccess, qt_meta_tag_ZN17SessionFileAccessE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SessionFileAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseSessionDataInfo::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SessionFileAccessE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SessionFileAccessE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17SessionFileAccessE_t>.metaTypes,
    nullptr
} };

void SessionFileAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionFileAccess *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SessionFileAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionFileAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17SessionFileAccessE_t>.strings))
        return static_cast<void*>(this);
    return BaseSessionDataInfo::qt_metacast(_clname);
}

int SessionFileAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseSessionDataInfo::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN21SessionCategoryAccessE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionCategoryAccess::qt_create_metaobjectdata<qt_meta_tag_ZN21SessionCategoryAccessE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionCategoryAccess"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionCategoryAccess, qt_meta_tag_ZN21SessionCategoryAccessE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SessionCategoryAccess::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseSessionDataInfo::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21SessionCategoryAccessE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21SessionCategoryAccessE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21SessionCategoryAccessE_t>.metaTypes,
    nullptr
} };

void SessionCategoryAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionCategoryAccess *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *SessionCategoryAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionCategoryAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21SessionCategoryAccessE_t>.strings))
        return static_cast<void*>(this);
    return BaseSessionDataInfo::qt_metacast(_clname);
}

int SessionCategoryAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseSessionDataInfo::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
