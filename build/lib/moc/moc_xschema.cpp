/****************************************************************************
** Meta object code from reading C++ file 'xschema.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xsdeditor/xschema.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xschema.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6XEnumsE_t {};
} // unnamed namespace

template <> constexpr inline auto XEnums::qt_create_metaobjectdata<qt_meta_tag_ZN6XEnumsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XEnums"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XEnums, qt_meta_tag_ZN6XEnumsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XEnums::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6XEnumsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6XEnumsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6XEnumsE_t>.metaTypes,
    nullptr
} };

void XEnums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XEnums *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XEnums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XEnums::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6XEnumsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XEnums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13XSchemaObjectE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaObject::qt_create_metaobjectdata<qt_meta_tag_ZN13XSchemaObjectE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaObject",
        "childAdded",
        "",
        "XSchemaObject*",
        "newChild",
        "childRemoved",
        "theChild",
        "deleted",
        "theObject",
        "nameChanged",
        "newName",
        "idChanged",
        "newId",
        "changed",
        "propertyChanged",
        "propertyName",
        "name",
        "EFinalType",
        "FINALTYPE_NONE",
        "FINALTYPE_ALL",
        "FINALTYPE_RESTRICTION",
        "FINALTYPE_EXTENSION",
        "FINALTYPE_LIST",
        "FINALTYPE_UNION",
        "FINALTYPE_SUBSTITUTION"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'childAdded'
        QtMocHelpers::SignalData<void(XSchemaObject *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'childRemoved'
        QtMocHelpers::SignalData<void(XSchemaObject *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 6 },
        }}),
        // Signal 'deleted'
        QtMocHelpers::SignalData<void(XSchemaObject *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 },
        }}),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'idChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'changed'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'propertyChanged'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(16, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'EFinalType'
        QtMocHelpers::EnumData<enum EFinalType>(17, 17, QMC::EnumFlags{}).add({
            {   18, EFinalType::FINALTYPE_NONE },
            {   19, EFinalType::FINALTYPE_ALL },
            {   20, EFinalType::FINALTYPE_RESTRICTION },
            {   21, EFinalType::FINALTYPE_EXTENSION },
            {   22, EFinalType::FINALTYPE_LIST },
            {   23, EFinalType::FINALTYPE_UNION },
            {   24, EFinalType::FINALTYPE_SUBSTITUTION },
        }),
    };
    return QtMocHelpers::metaObjectData<XSchemaObject, qt_meta_tag_ZN13XSchemaObjectE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaObjectE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaObjectE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XSchemaObjectE_t>.metaTypes,
    nullptr
} };

void XSchemaObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaObject *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->childAdded((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 1: _t->childRemoved((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 2: _t->deleted((*reinterpret_cast<std::add_pointer_t<XSchemaObject*>>(_a[1]))); break;
        case 3: _t->nameChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->idChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->changed(); break;
        case 6: _t->propertyChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< XSchemaObject* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)(XSchemaObject * )>(_a, &XSchemaObject::childAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)(XSchemaObject * )>(_a, &XSchemaObject::childRemoved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)(XSchemaObject * )>(_a, &XSchemaObject::deleted, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)(const QString & )>(_a, &XSchemaObject::nameChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)(const QString & )>(_a, &XSchemaObject::idChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)()>(_a, &XSchemaObject::changed, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaObject::*)(const QString & )>(_a, &XSchemaObject::propertyChanged, 6))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *XSchemaObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaObjectE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XSchemaObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void XSchemaObject::childAdded(XSchemaObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void XSchemaObject::childRemoved(XSchemaObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void XSchemaObject::deleted(XSchemaObject * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void XSchemaObject::nameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void XSchemaObject::idChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void XSchemaObject::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void XSchemaObject::propertyChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN16XSchemaAttributeE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaAttribute::qt_create_metaobjectdata<qt_meta_tag_ZN16XSchemaAttributeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaAttribute"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaAttribute, qt_meta_tag_ZN16XSchemaAttributeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaAttribute::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16XSchemaAttributeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16XSchemaAttributeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16XSchemaAttributeE_t>.metaTypes,
    nullptr
} };

void XSchemaAttribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaAttribute *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaAttribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaAttribute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16XSchemaAttributeE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaAttribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN14XSchemaElementE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaElement::qt_create_metaobjectdata<qt_meta_tag_ZN14XSchemaElementE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaElement",
        "abstractChanged",
        "",
        "XEnums::XBool",
        "newValue",
        "nillableChanged",
        "fixedChanged",
        "mixedChanged",
        "defaultValueChanged",
        "maxOccursChanged",
        "minOccursChanged",
        "xsdTypeChanged",
        "xsd",
        "refChanged",
        "categoryChanged",
        "XSchemaElement::ElementCategory",
        "abstract",
        "nillable",
        "mixed",
        "fixed",
        "defaultValue",
        "xsdType",
        "category",
        "ref",
        "ElementCategory",
        "EES_EMPTY",
        "EES_REFERENCE",
        "EES_SIMPLETYPE_ONLY",
        "EES_SIMPLETYPE_WITHATTRIBUTES",
        "EES_COMPLEX_DERIVED",
        "EES_COMPLEX_DEFINITION"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'abstractChanged'
        QtMocHelpers::SignalData<void(const XEnums::XBool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'nillableChanged'
        QtMocHelpers::SignalData<void(const XEnums::XBool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'fixedChanged'
        QtMocHelpers::SignalData<void(const XEnums::XBool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'mixedChanged'
        QtMocHelpers::SignalData<void(const XEnums::XBool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'defaultValueChanged'
        QtMocHelpers::SignalData<void(const XEnums::XBool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'maxOccursChanged'
        QtMocHelpers::SignalData<void(const int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'minOccursChanged'
        QtMocHelpers::SignalData<void(const int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'xsdTypeChanged'
        QtMocHelpers::SignalData<void(const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'refChanged'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Signal 'categoryChanged'
        QtMocHelpers::SignalData<void(const XSchemaElement::ElementCategory)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'abstract'
        QtMocHelpers::PropertyData<XEnums::XBool>(16, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
        // property 'nillable'
        QtMocHelpers::PropertyData<XEnums::XBool>(17, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'mixed'
        QtMocHelpers::PropertyData<XEnums::XBool>(18, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 3),
        // property 'fixed'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'defaultValue'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'xsdType'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 7),
        // property 'category'
        QtMocHelpers::PropertyData<XSchemaElement::ElementCategory>(22, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 9),
        // property 'ref'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 8),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ElementCategory'
        QtMocHelpers::EnumData<enum ElementCategory>(24, 24, QMC::EnumFlags{}).add({
            {   25, ElementCategory::EES_EMPTY },
            {   26, ElementCategory::EES_REFERENCE },
            {   27, ElementCategory::EES_SIMPLETYPE_ONLY },
            {   28, ElementCategory::EES_SIMPLETYPE_WITHATTRIBUTES },
            {   29, ElementCategory::EES_COMPLEX_DERIVED },
            {   30, ElementCategory::EES_COMPLEX_DEFINITION },
        }),
    };
    return QtMocHelpers::metaObjectData<XSchemaElement, qt_meta_tag_ZN14XSchemaElementE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN14XSchemaElementE[] = {
    QMetaObject::SuperData::link<XEnums::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject XSchemaElement::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14XSchemaElementE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14XSchemaElementE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN14XSchemaElementE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14XSchemaElementE_t>.metaTypes,
    nullptr
} };

void XSchemaElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaElement *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->abstractChanged((*reinterpret_cast<std::add_pointer_t<XEnums::XBool>>(_a[1]))); break;
        case 1: _t->nillableChanged((*reinterpret_cast<std::add_pointer_t<XEnums::XBool>>(_a[1]))); break;
        case 2: _t->fixedChanged((*reinterpret_cast<std::add_pointer_t<XEnums::XBool>>(_a[1]))); break;
        case 3: _t->mixedChanged((*reinterpret_cast<std::add_pointer_t<XEnums::XBool>>(_a[1]))); break;
        case 4: _t->defaultValueChanged((*reinterpret_cast<std::add_pointer_t<XEnums::XBool>>(_a[1]))); break;
        case 5: _t->maxOccursChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->minOccursChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->xsdTypeChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->refChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->categoryChanged((*reinterpret_cast<std::add_pointer_t<XSchemaElement::ElementCategory>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const XEnums::XBool )>(_a, &XSchemaElement::abstractChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const XEnums::XBool )>(_a, &XSchemaElement::nillableChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const XEnums::XBool )>(_a, &XSchemaElement::fixedChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const XEnums::XBool )>(_a, &XSchemaElement::mixedChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const XEnums::XBool )>(_a, &XSchemaElement::defaultValueChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const int )>(_a, &XSchemaElement::maxOccursChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const int )>(_a, &XSchemaElement::minOccursChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const QString & )>(_a, &XSchemaElement::xsdTypeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const QString & )>(_a, &XSchemaElement::refChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSchemaElement::*)(const XSchemaElement::ElementCategory )>(_a, &XSchemaElement::categoryChanged, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<XEnums::XBool*>(_v) = _t->abstract(); break;
        case 1: *reinterpret_cast<XEnums::XBool*>(_v) = _t->nillable(); break;
        case 2: *reinterpret_cast<XEnums::XBool*>(_v) = _t->mixed(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->fixed(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->defaultValue(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->xsdType(); break;
        case 6: *reinterpret_cast<XSchemaElement::ElementCategory*>(_v) = _t->category(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->ref(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAbstract(*reinterpret_cast<XEnums::XBool*>(_v)); break;
        case 1: _t->setNillable(*reinterpret_cast<XEnums::XBool*>(_v)); break;
        case 2: _t->setMixed(*reinterpret_cast<XEnums::XBool*>(_v)); break;
        case 3: _t->setFixed(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setDefaultValue(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setXsdType(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setCategory(*reinterpret_cast<XSchemaElement::ElementCategory*>(_v)); break;
        case 7: _t->setRef(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *XSchemaElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14XSchemaElementE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void XSchemaElement::abstractChanged(const XEnums::XBool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void XSchemaElement::nillableChanged(const XEnums::XBool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void XSchemaElement::fixedChanged(const XEnums::XBool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void XSchemaElement::mixedChanged(const XEnums::XBool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void XSchemaElement::defaultValueChanged(const XEnums::XBool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void XSchemaElement::maxOccursChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void XSchemaElement::minOccursChanged(const int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void XSchemaElement::xsdTypeChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void XSchemaElement::refChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void XSchemaElement::categoryChanged(const XSchemaElement::ElementCategory _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN13XSchemaChoiceE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaChoice::qt_create_metaobjectdata<qt_meta_tag_ZN13XSchemaChoiceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaChoice"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaChoice, qt_meta_tag_ZN13XSchemaChoiceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaChoice::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaChoiceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaChoiceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XSchemaChoiceE_t>.metaTypes,
    nullptr
} };

void XSchemaChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaChoice *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaChoiceE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15XSchemaSequenceE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaSequence::qt_create_metaobjectdata<qt_meta_tag_ZN15XSchemaSequenceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaSequence"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaSequence, qt_meta_tag_ZN15XSchemaSequenceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaSequence::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaSequenceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaSequenceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15XSchemaSequenceE_t>.metaTypes,
    nullptr
} };

void XSchemaSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaSequence *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaSequenceE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN17XSchemaAnnotationE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaAnnotation::qt_create_metaobjectdata<qt_meta_tag_ZN17XSchemaAnnotationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaAnnotation"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaAnnotation, qt_meta_tag_ZN17XSchemaAnnotationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaAnnotation::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17XSchemaAnnotationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17XSchemaAnnotationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17XSchemaAnnotationE_t>.metaTypes,
    nullptr
} };

void XSchemaAnnotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaAnnotation *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaAnnotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaAnnotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17XSchemaAnnotationE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaAnnotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10XSchemaAllE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaAll::qt_create_metaobjectdata<qt_meta_tag_ZN10XSchemaAllE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaAll"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaAll, qt_meta_tag_ZN10XSchemaAllE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaAll::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaAllE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaAllE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10XSchemaAllE_t>.metaTypes,
    nullptr
} };

void XSchemaAll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaAll *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaAll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaAll::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaAllE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaAll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10XSchemaAnyE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaAny::qt_create_metaobjectdata<qt_meta_tag_ZN10XSchemaAnyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaAny"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaAny, qt_meta_tag_ZN10XSchemaAnyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaAny::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaAnyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaAnyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10XSchemaAnyE_t>.metaTypes,
    nullptr
} };

void XSchemaAny::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaAny *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaAny::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaAny::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaAnyE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaAny::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN19XSchemaAnyAttributeE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaAnyAttribute::qt_create_metaobjectdata<qt_meta_tag_ZN19XSchemaAnyAttributeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaAnyAttribute"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaAnyAttribute, qt_meta_tag_ZN19XSchemaAnyAttributeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaAnyAttribute::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSchemaAnyAttributeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSchemaAnyAttributeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19XSchemaAnyAttributeE_t>.metaTypes,
    nullptr
} };

void XSchemaAnyAttribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaAnyAttribute *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaAnyAttribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaAnyAttribute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSchemaAnyAttributeE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaAnyAttribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN21XSchemaAttributeGroupE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaAttributeGroup::qt_create_metaobjectdata<qt_meta_tag_ZN21XSchemaAttributeGroupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaAttributeGroup"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaAttributeGroup, qt_meta_tag_ZN21XSchemaAttributeGroupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaAttributeGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21XSchemaAttributeGroupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21XSchemaAttributeGroupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21XSchemaAttributeGroupE_t>.metaTypes,
    nullptr
} };

void XSchemaAttributeGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaAttributeGroup *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaAttributeGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaAttributeGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21XSchemaAttributeGroupE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaAttributeGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12XSchemaFieldE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaField::qt_create_metaobjectdata<qt_meta_tag_ZN12XSchemaFieldE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaField"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaField, qt_meta_tag_ZN12XSchemaFieldE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaField::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaFieldE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaFieldE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12XSchemaFieldE_t>.metaTypes,
    nullptr
} };

void XSchemaField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaField *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaFieldE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12XSchemaGroupE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaGroup::qt_create_metaobjectdata<qt_meta_tag_ZN12XSchemaGroupE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaGroup"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaGroup, qt_meta_tag_ZN12XSchemaGroupE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaGroupE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaGroupE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12XSchemaGroupE_t>.metaTypes,
    nullptr
} };

void XSchemaGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaGroup *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaGroupE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13XSchemaImportE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaImport::qt_create_metaobjectdata<qt_meta_tag_ZN13XSchemaImportE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaImport"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaImport, qt_meta_tag_ZN13XSchemaImportE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaImport::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaImportE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaImportE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XSchemaImportE_t>.metaTypes,
    nullptr
} };

void XSchemaImport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaImport *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaImport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaImport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaImportE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaImport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN14XSchemaIncludeE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaInclude::qt_create_metaobjectdata<qt_meta_tag_ZN14XSchemaIncludeE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaInclude"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaInclude, qt_meta_tag_ZN14XSchemaIncludeE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaInclude::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14XSchemaIncludeE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14XSchemaIncludeE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14XSchemaIncludeE_t>.metaTypes,
    nullptr
} };

void XSchemaInclude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaInclude *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaInclude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaInclude::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14XSchemaIncludeE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaInclude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN10XSchemaKeyE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaKey::qt_create_metaobjectdata<qt_meta_tag_ZN10XSchemaKeyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaKey"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaKey, qt_meta_tag_ZN10XSchemaKeyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaKey::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaKeyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaKeyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10XSchemaKeyE_t>.metaTypes,
    nullptr
} };

void XSchemaKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaKey *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaKey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10XSchemaKeyE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13XSchemaKeyRefE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaKeyRef::qt_create_metaobjectdata<qt_meta_tag_ZN13XSchemaKeyRefE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaKeyRef"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaKeyRef, qt_meta_tag_ZN13XSchemaKeyRefE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaKeyRef::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaKeyRefE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaKeyRefE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XSchemaKeyRefE_t>.metaTypes,
    nullptr
} };

void XSchemaKeyRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaKeyRef *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaKeyRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaKeyRef::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaKeyRefE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaKeyRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13XSchemaUniqueE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaUnique::qt_create_metaobjectdata<qt_meta_tag_ZN13XSchemaUniqueE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaUnique"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaUnique, qt_meta_tag_ZN13XSchemaUniqueE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaUnique::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaUniqueE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaUniqueE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XSchemaUniqueE_t>.metaTypes,
    nullptr
} };

void XSchemaUnique::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaUnique *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaUnique::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaUnique::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSchemaUniqueE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaUnique::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15XSchemaNotationE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaNotation::qt_create_metaobjectdata<qt_meta_tag_ZN15XSchemaNotationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaNotation"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaNotation, qt_meta_tag_ZN15XSchemaNotationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaNotation::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaNotationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaNotationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15XSchemaNotationE_t>.metaTypes,
    nullptr
} };

void XSchemaNotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaNotation *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaNotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaNotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaNotationE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaNotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15XSchemaRedefineE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaRedefine::qt_create_metaobjectdata<qt_meta_tag_ZN15XSchemaRedefineE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaRedefine"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaRedefine, qt_meta_tag_ZN15XSchemaRedefineE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaRedefine::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaRedefineE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaRedefineE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15XSchemaRedefineE_t>.metaTypes,
    nullptr
} };

void XSchemaRedefine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaRedefine *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaRedefine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaRedefine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaRedefineE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaRedefine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN15XSchemaSelectorE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaSelector::qt_create_metaobjectdata<qt_meta_tag_ZN15XSchemaSelectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaSelector"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaSelector, qt_meta_tag_ZN15XSchemaSelectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaSelectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaSelectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15XSchemaSelectorE_t>.metaTypes,
    nullptr
} };

void XSchemaSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaSelector *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15XSchemaSelectorE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN9XSDSchemaE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDSchema::qt_create_metaobjectdata<qt_meta_tag_ZN9XSDSchemaE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDSchema"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDSchema, qt_meta_tag_ZN9XSDSchemaE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDSchema::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9XSDSchemaE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9XSDSchemaE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9XSDSchemaE_t>.metaTypes,
    nullptr
} };

void XSDSchema::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDSchema *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSDSchema::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDSchema::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9XSDSchemaE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "XSchemaRoot"))
        return static_cast< XSchemaRoot*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSDSchema::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN16XSchemaContainerE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaContainer::qt_create_metaobjectdata<qt_meta_tag_ZN16XSchemaContainerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaContainer"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaContainer, qt_meta_tag_ZN16XSchemaContainerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16XSchemaContainerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16XSchemaContainerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16XSchemaContainerE_t>.metaTypes,
    nullptr
} };

void XSchemaContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaContainer *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16XSchemaContainerE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN12XSchemaOtherE_t {};
} // unnamed namespace

template <> constexpr inline auto XSchemaOther::qt_create_metaobjectdata<qt_meta_tag_ZN12XSchemaOtherE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSchemaOther"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSchemaOther, qt_meta_tag_ZN12XSchemaOtherE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSchemaOther::staticMetaObject = { {
    QMetaObject::SuperData::link<XSchemaObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaOtherE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaOtherE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12XSchemaOtherE_t>.metaTypes,
    nullptr
} };

void XSchemaOther::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSchemaOther *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *XSchemaOther::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSchemaOther::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12XSchemaOtherE_t>.strings))
        return static_cast<void*>(this);
    return XSchemaObject::qt_metacast(_clname);
}

int XSchemaOther::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = XSchemaObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
