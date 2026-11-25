/****************************************************************************
** Meta object code from reading C++ file 'xsdwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xsdeditor/xsdwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsdwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8XSDSceneE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDScene::qt_create_metaobjectdata<qt_meta_tag_ZN8XSDSceneE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDScene"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDScene, qt_meta_tag_ZN8XSDSceneE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8XSDSceneE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8XSDSceneE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8XSDSceneE_t>.metaTypes,
    nullptr
} };

void XSDScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDScene *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSDScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8XSDSceneE_t>.strings))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int XSDScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN7XSDItemE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDItem::qt_create_metaobjectdata<qt_meta_tag_ZN7XSDItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDItem",
        "childAdded",
        "",
        "XSchemaObject*",
        "newChild"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'childAdded'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDItem, qt_meta_tag_ZN7XSDItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7XSDItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7XSDItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7XSDItemE_t>.metaTypes,
    nullptr
} };

void XSDItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->childAdded((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *XSDItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7XSDItemE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ItemServiceExecutor"))
        return static_cast< ItemServiceExecutor*>(this);
    return QObject::qt_metacast(_clname);
}

int XSDItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN8RootItemE_t {};
} // unnamed namespace

template <> constexpr inline auto RootItem::qt_create_metaobjectdata<qt_meta_tag_ZN8RootItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RootItem",
        "objectDeleted",
        "",
        "XSchemaObject*",
        "child",
        "childRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'objectDeleted'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'childRemoved'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RootItem, qt_meta_tag_ZN8RootItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RootItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8RootItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8RootItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8RootItemE_t>.metaTypes,
    nullptr
} };

void RootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RootItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->objectDeleted((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 1: _t->childRemoved((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *RootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8RootItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int RootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN15RootOutlineItemE_t {};
} // unnamed namespace

template <> constexpr inline auto RootOutlineItem::qt_create_metaobjectdata<qt_meta_tag_ZN15RootOutlineItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RootOutlineItem",
        "objectDeleted",
        "",
        "XSchemaObject*",
        "child",
        "childRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'objectDeleted'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'childRemoved'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RootOutlineItem, qt_meta_tag_ZN15RootOutlineItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RootOutlineItem::staticMetaObject = { {
    QMetaObject::SuperData::link<RootItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RootOutlineItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RootOutlineItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15RootOutlineItemE_t>.metaTypes,
    nullptr
} };

void RootOutlineItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RootOutlineItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->objectDeleted((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 1: _t->childRemoved((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *RootOutlineItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RootOutlineItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RootOutlineItemE_t>.strings))
        return static_cast<void*>(this);
    return RootItem::qt_metacast(_clname);
}

int RootOutlineItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RootItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13ContainerItemE_t {};
} // unnamed namespace

template <> constexpr inline auto ContainerItem::qt_create_metaobjectdata<qt_meta_tag_ZN13ContainerItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ContainerItem",
        "objectDeleted",
        "",
        "XSchemaObject*",
        "child",
        "childRemoved"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'objectDeleted'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'childRemoved'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ContainerItem, qt_meta_tag_ZN13ContainerItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ContainerItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ContainerItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ContainerItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ContainerItemE_t>.metaTypes,
    nullptr
} };

void ContainerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ContainerItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->objectDeleted((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 1: _t->childRemoved((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ContainerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContainerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ContainerItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int ContainerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13AttributeItemE_t {};
} // unnamed namespace

template <> constexpr inline auto AttributeItem::qt_create_metaobjectdata<qt_meta_tag_ZN13AttributeItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AttributeItem",
        "textChanged",
        "",
        "nameChanged",
        "newName",
        "childAdded",
        "XSchemaObject*",
        "newChild"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'textChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nameChanged'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'childAdded'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AttributeItem, qt_meta_tag_ZN13AttributeItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AttributeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AttributeItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AttributeItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13AttributeItemE_t>.metaTypes,
    nullptr
} };

void AttributeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AttributeItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->nameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->childAdded((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *AttributeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttributeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AttributeItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int AttributeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11ElementItemE_t {};
} // unnamed namespace

template <> constexpr inline auto ElementItem::qt_create_metaobjectdata<qt_meta_tag_ZN11ElementItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ElementItem",
        "textChanged",
        "",
        "elmNameChanged",
        "newName",
        "itemChanged",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value",
        "childAdded",
        "XSchemaObject*",
        "newChild"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'textChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'elmNameChanged'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'childAdded'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ElementItem, qt_meta_tag_ZN11ElementItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ElementItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ElementItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ElementItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11ElementItemE_t>.metaTypes,
    nullptr
} };

void ElementItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ElementItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->elmNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 3: _t->childAdded((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ElementItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElementItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11ElementItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int ElementItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN10ChoiceItemE_t {};
} // unnamed namespace

template <> constexpr inline auto ChoiceItem::qt_create_metaobjectdata<qt_meta_tag_ZN10ChoiceItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ChoiceItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ChoiceItem, qt_meta_tag_ZN10ChoiceItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ChoiceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ChoiceItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ChoiceItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ChoiceItemE_t>.metaTypes,
    nullptr
} };

void ChoiceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChoiceItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ChoiceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChoiceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ChoiceItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int ChoiceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN12SequenceItemE_t {};
} // unnamed namespace

template <> constexpr inline auto SequenceItem::qt_create_metaobjectdata<qt_meta_tag_ZN12SequenceItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SequenceItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SequenceItem, qt_meta_tag_ZN12SequenceItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SequenceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SequenceItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SequenceItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SequenceItemE_t>.metaTypes,
    nullptr
} };

void SequenceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SequenceItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *SequenceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SequenceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SequenceItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int SequenceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN15RestrictionItemE_t {};
} // unnamed namespace

template <> constexpr inline auto RestrictionItem::qt_create_metaobjectdata<qt_meta_tag_ZN15RestrictionItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RestrictionItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RestrictionItem, qt_meta_tag_ZN15RestrictionItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RestrictionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RestrictionItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RestrictionItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15RestrictionItemE_t>.metaTypes,
    nullptr
} };

void RestrictionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RestrictionItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *RestrictionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RestrictionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15RestrictionItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int RestrictionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN9UnionItemE_t {};
} // unnamed namespace

template <> constexpr inline auto UnionItem::qt_create_metaobjectdata<qt_meta_tag_ZN9UnionItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "UnionItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UnionItem, qt_meta_tag_ZN9UnionItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject UnionItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UnionItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UnionItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9UnionItemE_t>.metaTypes,
    nullptr
} };

void UnionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<UnionItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *UnionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9UnionItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int UnionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN8ListItemE_t {};
} // unnamed namespace

template <> constexpr inline auto ListItem::qt_create_metaobjectdata<qt_meta_tag_ZN8ListItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ListItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ListItem, qt_meta_tag_ZN8ListItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ListItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ListItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ListItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8ListItemE_t>.metaTypes,
    nullptr
} };

void ListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ListItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8ListItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int ListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN11GenericItemE_t {};
} // unnamed namespace

template <> constexpr inline auto GenericItem::qt_create_metaobjectdata<qt_meta_tag_ZN11GenericItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GenericItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GenericItem, qt_meta_tag_ZN11GenericItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GenericItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GenericItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GenericItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11GenericItemE_t>.metaTypes,
    nullptr
} };

void GenericItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GenericItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *GenericItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11GenericItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int GenericItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN9GroupItemE_t {};
} // unnamed namespace

template <> constexpr inline auto GroupItem::qt_create_metaobjectdata<qt_meta_tag_ZN9GroupItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GroupItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GroupItem, qt_meta_tag_ZN9GroupItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GroupItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9GroupItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9GroupItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9GroupItemE_t>.metaTypes,
    nullptr
} };

void GroupItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GroupItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *GroupItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9GroupItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int GroupItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN18AttributeGroupItemE_t {};
} // unnamed namespace

template <> constexpr inline auto AttributeGroupItem::qt_create_metaobjectdata<qt_meta_tag_ZN18AttributeGroupItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AttributeGroupItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AttributeGroupItem, qt_meta_tag_ZN18AttributeGroupItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AttributeGroupItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AttributeGroupItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AttributeGroupItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18AttributeGroupItemE_t>.metaTypes,
    nullptr
} };

void AttributeGroupItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AttributeGroupItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *AttributeGroupItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttributeGroupItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18AttributeGroupItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int AttributeGroupItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN11IncludeItemE_t {};
} // unnamed namespace

template <> constexpr inline auto IncludeItem::qt_create_metaobjectdata<qt_meta_tag_ZN11IncludeItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IncludeItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IncludeItem, qt_meta_tag_ZN11IncludeItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IncludeItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11IncludeItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11IncludeItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11IncludeItemE_t>.metaTypes,
    nullptr
} };

void IncludeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IncludeItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *IncludeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IncludeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11IncludeItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int IncludeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN12RedefineItemE_t {};
} // unnamed namespace

template <> constexpr inline auto RedefineItem::qt_create_metaobjectdata<qt_meta_tag_ZN12RedefineItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RedefineItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RedefineItem, qt_meta_tag_ZN12RedefineItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RedefineItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12RedefineItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12RedefineItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12RedefineItemE_t>.metaTypes,
    nullptr
} };

void RedefineItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RedefineItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *RedefineItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedefineItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12RedefineItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int RedefineItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN10ImportItemE_t {};
} // unnamed namespace

template <> constexpr inline auto ImportItem::qt_create_metaobjectdata<qt_meta_tag_ZN10ImportItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ImportItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ImportItem, qt_meta_tag_ZN10ImportItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ImportItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ImportItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ImportItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10ImportItemE_t>.metaTypes,
    nullptr
} };

void ImportItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ImportItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ImportItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImportItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10ImportItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int ImportItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN7AllItemE_t {};
} // unnamed namespace

template <> constexpr inline auto AllItem::qt_create_metaobjectdata<qt_meta_tag_ZN7AllItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AllItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AllItem, qt_meta_tag_ZN7AllItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AllItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7AllItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7AllItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7AllItemE_t>.metaTypes,
    nullptr
} };

void AllItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AllItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *AllItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AllItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7AllItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int AllItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN14DerivationItemE_t {};
} // unnamed namespace

template <> constexpr inline auto DerivationItem::qt_create_metaobjectdata<qt_meta_tag_ZN14DerivationItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DerivationItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DerivationItem, qt_meta_tag_ZN14DerivationItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DerivationItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DerivationItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DerivationItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14DerivationItemE_t>.metaTypes,
    nullptr
} };

void DerivationItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DerivationItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *DerivationItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DerivationItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14DerivationItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int DerivationItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN18OutlineElementItemE_t {};
} // unnamed namespace

template <> constexpr inline auto OutlineElementItem::qt_create_metaobjectdata<qt_meta_tag_ZN18OutlineElementItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutlineElementItem",
        "textChanged",
        "",
        "elmNameChanged",
        "newName",
        "itemChanged",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value",
        "childAdded",
        "XSchemaObject*",
        "newChild"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'textChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'elmNameChanged'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'childAdded'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutlineElementItem, qt_meta_tag_ZN18OutlineElementItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutlineElementItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OutlineElementItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OutlineElementItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18OutlineElementItemE_t>.metaTypes,
    nullptr
} };

void OutlineElementItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutlineElementItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->elmNameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 3: _t->childAdded((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *OutlineElementItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlineElementItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OutlineElementItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int OutlineElementItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN19OutlineSequenceItemE_t {};
} // unnamed namespace

template <> constexpr inline auto OutlineSequenceItem::qt_create_metaobjectdata<qt_meta_tag_ZN19OutlineSequenceItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutlineSequenceItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutlineSequenceItem, qt_meta_tag_ZN19OutlineSequenceItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutlineSequenceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19OutlineSequenceItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19OutlineSequenceItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19OutlineSequenceItemE_t>.metaTypes,
    nullptr
} };

void OutlineSequenceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutlineSequenceItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OutlineSequenceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlineSequenceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19OutlineSequenceItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int OutlineSequenceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN17OutlineChoiceItemE_t {};
} // unnamed namespace

template <> constexpr inline auto OutlineChoiceItem::qt_create_metaobjectdata<qt_meta_tag_ZN17OutlineChoiceItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutlineChoiceItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutlineChoiceItem, qt_meta_tag_ZN17OutlineChoiceItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutlineChoiceItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OutlineChoiceItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OutlineChoiceItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17OutlineChoiceItemE_t>.metaTypes,
    nullptr
} };

void OutlineChoiceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutlineChoiceItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OutlineChoiceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlineChoiceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17OutlineChoiceItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int OutlineChoiceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN14OutlineAllItemE_t {};
} // unnamed namespace

template <> constexpr inline auto OutlineAllItem::qt_create_metaobjectdata<qt_meta_tag_ZN14OutlineAllItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutlineAllItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutlineAllItem, qt_meta_tag_ZN14OutlineAllItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutlineAllItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OutlineAllItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OutlineAllItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14OutlineAllItemE_t>.metaTypes,
    nullptr
} };

void OutlineAllItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutlineAllItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OutlineAllItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlineAllItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OutlineAllItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int OutlineAllItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN16OutlineGroupItemE_t {};
} // unnamed namespace

template <> constexpr inline auto OutlineGroupItem::qt_create_metaobjectdata<qt_meta_tag_ZN16OutlineGroupItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutlineGroupItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutlineGroupItem, qt_meta_tag_ZN16OutlineGroupItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutlineGroupItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OutlineGroupItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OutlineGroupItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16OutlineGroupItemE_t>.metaTypes,
    nullptr
} };

void OutlineGroupItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutlineGroupItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OutlineGroupItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlineGroupItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16OutlineGroupItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int OutlineGroupItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN14OutlineAnyItemE_t {};
} // unnamed namespace

template <> constexpr inline auto OutlineAnyItem::qt_create_metaobjectdata<qt_meta_tag_ZN14OutlineAnyItemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OutlineAnyItem",
        "itemChanged",
        "",
        "QGraphicsItem::GraphicsItemChange",
        "change",
        "QVariant",
        "value"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'itemChanged'
        QtMocHelpers::SlotData<void(QGraphicsItem::GraphicsItemChange, const QVariant &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OutlineAnyItem, qt_meta_tag_ZN14OutlineAnyItemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OutlineAnyItem::staticMetaObject = { {
    QMetaObject::SuperData::link<XSDItem::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OutlineAnyItemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OutlineAnyItemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14OutlineAnyItemE_t>.metaTypes,
    nullptr
} };

void OutlineAnyItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OutlineAnyItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->itemChanged((*reinterpret_cast<std::add_pointer_t<QGraphicsItem::GraphicsItemChange>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OutlineAnyItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlineAnyItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14OutlineAnyItemE_t>.strings))
        return static_cast<void*>(this);
    return XSDItem::qt_metacast(_clname);
}

int OutlineAnyItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSDItem::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN9XSDWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDWindow::qt_create_metaobjectdata<qt_meta_tag_ZN9XSDWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDWindow",
        "xon_gotoAction_triggered",
        "",
        "xon_copyNameAction_triggered",
        "xon_copyElementAction_triggered",
        "xon_copyFacetsAction_triggered",
        "selectionChanged",
        "xon_loadFromString_triggered",
        "on_cmdZoomIn_clicked",
        "on_cmdZoomOut_clicked",
        "on_cmdZoom1_clicked",
        "on_closeButton_clicked",
        "on_clearSearch_clicked",
        "on_searchBox_textChanged",
        "newText",
        "on_forwardButton_clicked",
        "on_backButton_clicked",
        "on_navigation_itemDoubleClicked",
        "QTreeWidgetItem*",
        "item",
        "column",
        "on_navigationCmd_clicked",
        "on_printCmd_clicked",
        "on_svgCmd_clicked",
        "on_cmdObjZoomIn_clicked",
        "on_cmdObjZoomOut_clicked",
        "on_cmdObjZoomReset_clicked",
        "on_cmdShowBase_clicked",
        "on_cmdOutline_clicked",
        "onCompareAnnotationAction",
        "newState",
        "on_xsdCompareTools_swapReference",
        "on_compareSummary_objectDoubleClicked",
        "XSchemaObject*",
        "target",
        "on_actionSwapReferenceAndTarget_triggered",
        "on_actionConfigureAspect_triggered",
        "onBackgroundConfigurationChanged",
        "XSDGraphicsBackgroundConfiguration*",
        "configuration",
        "on_cmdShowDepend_clicked",
        "on_htmlCmd_clicked",
        "on_cmdReport_clicked",
        "controller",
        "IXSDController*"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'xon_gotoAction_triggered'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'xon_copyNameAction_triggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'xon_copyElementAction_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'xon_copyFacetsAction_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'xon_loadFromString_triggered'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdZoomIn_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdZoomOut_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdZoom1_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_closeButton_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_clearSearch_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_searchBox_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'on_forwardButton_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_backButton_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_navigation_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(17, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 18, 19 }, { QMetaType::Int, 20 },
        }}),
        // Slot 'on_navigationCmd_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_printCmd_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_svgCmd_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdObjZoomIn_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdObjZoomOut_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdObjZoomReset_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdShowBase_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdOutline_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onCompareAnnotationAction'
        QtMocHelpers::SlotData<void(bool)>(29, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'on_xsdCompareTools_swapReference'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_compareSummary_objectDoubleClicked'
        QtMocHelpers::SlotData<void(XSchemaObject *)>(32, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 33, 34 },
        }}),
        // Slot 'on_actionSwapReferenceAndTarget_triggered'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_actionConfigureAspect_triggered'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'onBackgroundConfigurationChanged'
        QtMocHelpers::SlotData<void(XSDGraphicsBackgroundConfiguration *)>(37, 2, QMC::AccessProtected, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'on_cmdShowDepend_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_htmlCmd_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'on_cmdReport_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'controller'
        QtMocHelpers::PropertyData<IXSDController*>(43, 0x80000000 | 44, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDWindow, qt_meta_tag_ZN9XSDWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9XSDWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9XSDWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9XSDWindowE_t>.metaTypes,
    nullptr
} };

void XSDWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->xon_gotoAction_triggered(); break;
        case 1: _t->xon_copyNameAction_triggered(); break;
        case 2: _t->xon_copyElementAction_triggered(); break;
        case 3: _t->xon_copyFacetsAction_triggered(); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->xon_loadFromString_triggered(); break;
        case 6: _t->on_cmdZoomIn_clicked(); break;
        case 7: _t->on_cmdZoomOut_clicked(); break;
        case 8: _t->on_cmdZoom1_clicked(); break;
        case 9: _t->on_closeButton_clicked(); break;
        case 10: _t->on_clearSearch_clicked(); break;
        case 11: _t->on_searchBox_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->on_forwardButton_clicked(); break;
        case 13: _t->on_backButton_clicked(); break;
        case 14: _t->on_navigation_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 15: _t->on_navigationCmd_clicked(); break;
        case 16: _t->on_printCmd_clicked(); break;
        case 17: _t->on_svgCmd_clicked(); break;
        case 18: _t->on_cmdObjZoomIn_clicked(); break;
        case 19: _t->on_cmdObjZoomOut_clicked(); break;
        case 20: _t->on_cmdObjZoomReset_clicked(); break;
        case 21: _t->on_cmdShowBase_clicked(); break;
        case 22: _t->on_cmdOutline_clicked(); break;
        case 23: _t->onCompareAnnotationAction((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->on_xsdCompareTools_swapReference(); break;
        case 25: _t->on_compareSummary_objectDoubleClicked((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 26: _t->on_actionSwapReferenceAndTarget_triggered(); break;
        case 27: _t->on_actionConfigureAspect_triggered(); break;
        case 28: _t->onBackgroundConfigurationChanged((*reinterpret_cast<std::add_pointer_t<XSDGraphicsBackgroundConfiguration*>>(_a[1]))); break;
        case 29: _t->on_cmdShowDepend_clicked(); break;
        case 30: _t->on_htmlCmd_clicked(); break;
        case 31: _t->on_cmdReport_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<IXSDController**>(_v) = _t->controller(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setController(*reinterpret_cast<IXSDController**>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *XSDWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9XSDWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int XSDWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
