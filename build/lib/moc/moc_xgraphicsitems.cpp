/****************************************************************************
** Meta object code from reading C++ file 'xgraphicsitems.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xsdeditor/items/xgraphicsitems.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xgraphicsitems.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21GraphicsRoundRectItemE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphicsRoundRectItem::qt_create_metaobjectdata<qt_meta_tag_ZN21GraphicsRoundRectItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphicsRoundRectItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphicsRoundRectItem, qt_meta_tag_ZN21GraphicsRoundRectItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphicsRoundRectItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21GraphicsRoundRectItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21GraphicsRoundRectItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21GraphicsRoundRectItemE_t>.metaTypes,
    nullptr
} };

void GraphicsRoundRectItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphicsRoundRectItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GraphicsRoundRectItem::*)(QGraphicsItem::GraphicsItemChange , const QVariant & )>(_a, &GraphicsRoundRectItem::itemChanged, 0))
            return;
    }
}

const QMetaObject *GraphicsRoundRectItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsRoundRectItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21GraphicsRoundRectItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphicsRoundRectItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GraphicsRoundRectItem::itemChanged(QGraphicsItem::GraphicsItemChange _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN16GraphicsRectItemE_t {};
} // unnamed namespace

template <> constexpr inline auto GraphicsRectItem::qt_create_metaobjectdata<qt_meta_tag_ZN16GraphicsRectItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GraphicsRectItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GraphicsRectItem, qt_meta_tag_ZN16GraphicsRectItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GraphicsRectItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16GraphicsRectItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16GraphicsRectItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16GraphicsRectItemE_t>.metaTypes,
    nullptr
} };

void GraphicsRectItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GraphicsRectItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GraphicsRectItem::*)(QGraphicsItem::GraphicsItemChange , const QVariant & )>(_a, &GraphicsRectItem::itemChanged, 0))
            return;
    }
}

const QMetaObject *GraphicsRectItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsRectItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16GraphicsRectItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int GraphicsRectItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GraphicsRectItem::itemChanged(QGraphicsItem::GraphicsItemChange _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN11PolygonItemE_t {};
} // unnamed namespace

template <> constexpr inline auto PolygonItem::qt_create_metaobjectdata<qt_meta_tag_ZN11PolygonItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PolygonItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PolygonItem, qt_meta_tag_ZN11PolygonItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PolygonItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PolygonItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PolygonItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11PolygonItemE_t>.metaTypes,
    nullptr
} };

void PolygonItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PolygonItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PolygonItem::*)(QGraphicsItem::GraphicsItemChange , const QVariant & )>(_a, &PolygonItem::itemChanged, 0))
            return;
    }
}

const QMetaObject *PolygonItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolygonItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11PolygonItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPolygonItem"))
        return static_cast< QGraphicsPolygonItem*>(this);
    return QObject::qt_metacast(_clname);
}

int PolygonItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PolygonItem::itemChanged(QGraphicsItem::GraphicsItemChange _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN10CircleItemE_t {};
} // unnamed namespace

template <> constexpr inline auto CircleItem::qt_create_metaobjectdata<qt_meta_tag_ZN10CircleItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CircleItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CircleItem, qt_meta_tag_ZN10CircleItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CircleItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CircleItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CircleItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10CircleItemE_t>.metaTypes,
    nullptr
} };

void CircleItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CircleItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CircleItem::*)(QGraphicsItem::GraphicsItemChange , const QVariant & )>(_a, &CircleItem::itemChanged, 0))
            return;
    }
}

const QMetaObject *CircleItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CircleItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10CircleItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsEllipseItem"))
        return static_cast< QGraphicsEllipseItem*>(this);
    return QObject::qt_metacast(_clname);
}

int CircleItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CircleItem::itemChanged(QGraphicsItem::GraphicsItemChange _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN8TextItemE_t {};
} // unnamed namespace

template <> constexpr inline auto TextItem::qt_create_metaobjectdata<qt_meta_tag_ZN8TextItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TextItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'itemChanged'
        QtMocHelpers::SignalData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TextItem, qt_meta_tag_ZN8TextItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TextItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTextItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TextItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TextItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8TextItemE_t>.metaTypes,
    nullptr
} };

void TextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TextItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TextItem::*)(QGraphicsItem::GraphicsItemChange , const QVariant & )>(_a, &TextItem::itemChanged, 0))
            return;
    }
}

const QMetaObject *TextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8TextItemE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int TextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TextItem::itemChanged(QGraphicsItem::GraphicsItemChange _t1, const QVariant & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
