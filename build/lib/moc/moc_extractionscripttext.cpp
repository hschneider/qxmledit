/****************************************************************************
** Meta object code from reading C++ file 'extractionscripttext.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/extraction/scripting/events/extractionscripttext.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extractionscripttext.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25ExtractionScriptTextEventE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtractionScriptTextEvent::qt_create_metaobjectdata<qt_meta_tag_ZN25ExtractionScriptTextEventE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtractionScriptTextEvent",
        "ignored",
        "isModified",
        "isCDATA",
        "text",
        "isWhitespace",
        "errorMessage",
        "isError"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'ignored'
        QtMocHelpers::PropertyData<bool>(1, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isModified'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'isCDATA'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'text'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isWhitespace'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'errorMessage'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'isError'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtractionScriptTextEvent, qt_meta_tag_ZN25ExtractionScriptTextEventE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtractionScriptTextEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25ExtractionScriptTextEventE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25ExtractionScriptTextEventE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25ExtractionScriptTextEventE_t>.metaTypes,
    nullptr
} };

void ExtractionScriptTextEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtractionScriptTextEvent *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->isIgnored(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->isModified(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->isCDATA(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->text(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->isWhitespace(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->errorMessage(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->isError(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIgnored(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setCDATA(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setText(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setErrorMessage(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setError(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ExtractionScriptTextEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtractionScriptTextEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25ExtractionScriptTextEventE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ExtractionScriptTextEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
