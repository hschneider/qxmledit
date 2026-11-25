/****************************************************************************
** Meta object code from reading C++ file 'extractionscriptelement.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/extraction/scripting/events/extractionscriptelement.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extractionscriptelement.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN28ExtractionScriptElementEventE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtractionScriptElementEvent::qt_create_metaobjectdata<qt_meta_tag_ZN28ExtractionScriptElementEventE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtractionScriptElementEvent",
        "removeAttributeByName",
        "",
        "name",
        "removeAttributeByNameNS",
        "namespaceId",
        "removeAttributeByIndex",
        "index",
        "sortAttributesByName",
        "sortAttributesByNamespaceAndName",
        "attributeValueByName",
        "attributeName",
        "attributeValueByNameNS",
        "attributeValueByIndex",
        "attributeNameByIndex",
        "attributeNameSpaceByIndex",
        "setAttributeValueByName",
        "attributeValue",
        "setAttributeValueByNameNS",
        "setAttributeValueByIndex",
        "setAttributeNameByIndex",
        "setAttributeNameByIndexNS",
        "isError",
        "errorMessage",
        "useNamespaces",
        "elementName",
        "localName",
        "nameSpace",
        "attributesCount"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'removeAttributeByName'
        QtMocHelpers::MethodData<int(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 3 },
        }}),
        // Method 'removeAttributeByNameNS'
        QtMocHelpers::MethodData<int(const QString &, const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 3 },
        }}),
        // Method 'removeAttributeByIndex'
        QtMocHelpers::MethodData<int(const int)>(6, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'sortAttributesByName'
        QtMocHelpers::MethodData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'sortAttributesByNamespaceAndName'
        QtMocHelpers::MethodData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'attributeValueByName'
        QtMocHelpers::MethodData<QString(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 11 },
        }}),
        // Method 'attributeValueByNameNS'
        QtMocHelpers::MethodData<QString(const QString &, const QString &)>(12, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 3 },
        }}),
        // Method 'attributeValueByIndex'
        QtMocHelpers::MethodData<QString(const int)>(13, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'attributeNameByIndex'
        QtMocHelpers::MethodData<QString(const int)>(14, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'attributeNameSpaceByIndex'
        QtMocHelpers::MethodData<QString(const int)>(15, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'setAttributeValueByName'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { QMetaType::QString, 17 },
        }}),
        // Method 'setAttributeValueByNameNS'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 }, { QMetaType::QString, 11 }, { QMetaType::QString, 17 },
        }}),
        // Method 'setAttributeValueByIndex'
        QtMocHelpers::MethodData<void(const int, const QString &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 17 },
        }}),
        // Method 'setAttributeNameByIndex'
        QtMocHelpers::MethodData<void(const int, const QString &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 11 },
        }}),
        // Method 'setAttributeNameByIndexNS'
        QtMocHelpers::MethodData<void(const int, const QString &, const QString &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::QString, 5 }, { QMetaType::QString, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'isError'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'errorMessage'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'useNamespaces'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'elementName'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'localName'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'nameSpace'
        QtMocHelpers::PropertyData<QString>(27, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'attributesCount'
        QtMocHelpers::PropertyData<int>(28, QMetaType::Int, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtractionScriptElementEvent, qt_meta_tag_ZN28ExtractionScriptElementEventE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtractionScriptElementEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28ExtractionScriptElementEventE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28ExtractionScriptElementEventE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN28ExtractionScriptElementEventE_t>.metaTypes,
    nullptr
} };

void ExtractionScriptElementEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtractionScriptElementEvent *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = _t->removeAttributeByName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->removeAttributeByNameNS((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->removeAttributeByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->sortAttributesByName(); break;
        case 4: _t->sortAttributesByNamespaceAndName(); break;
        case 5: { QString _r = _t->attributeValueByName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->attributeValueByNameNS((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->attributeValueByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->attributeNameByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->attributeNameSpaceByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setAttributeValueByName((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->setAttributeValueByNameNS((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 12: _t->setAttributeValueByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->setAttributeNameByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->setAttributeNameByIndexNS((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isError(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->errorMessage(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->useNamespaces(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->elementName(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->localName(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->nameSpace(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->attributesCount(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setNameSpace(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ExtractionScriptElementEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtractionScriptElementEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28ExtractionScriptElementEventE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtractionScriptElementEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
