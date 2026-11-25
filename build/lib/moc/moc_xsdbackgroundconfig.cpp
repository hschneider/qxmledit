/****************************************************************************
** Meta object code from reading C++ file 'xsdbackgroundconfig.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/xsdeditor/xsdbackgroundconfig.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsdbackgroundconfig.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19XSDBackgroundConfigE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDBackgroundConfig::qt_create_metaobjectdata<qt_meta_tag_ZN19XSDBackgroundConfigE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDBackgroundConfig",
        "onBackgroundConfigurationChanged",
        "",
        "XSDGraphicsBackgroundConfiguration*",
        "configuration",
        "on_mainColor_clicked",
        "on_alternateColor_clicked",
        "on_gradientTypeCombo_currentIndexChanged",
        "index",
        "on_gradientDirectionCombo_currentIndexChanged",
        "on_gradientUnitsCombo_currentIndexChanged",
        "on_repetitionAt_valueChanged",
        "value",
        "onReset"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'onBackgroundConfigurationChanged'
        QtMocHelpers::SignalData<void(XSDGraphicsBackgroundConfiguration *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'on_mainColor_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_alternateColor_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_gradientTypeCombo_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_gradientDirectionCombo_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_gradientUnitsCombo_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_repetitionAt_valueChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'onReset'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDBackgroundConfig, qt_meta_tag_ZN19XSDBackgroundConfigE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDBackgroundConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSDBackgroundConfigE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSDBackgroundConfigE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19XSDBackgroundConfigE_t>.metaTypes,
    nullptr
} };

void XSDBackgroundConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDBackgroundConfig *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onBackgroundConfigurationChanged((*reinterpret_cast<std::add_pointer_t<XSDGraphicsBackgroundConfiguration*>>(_a[1]))); break;
        case 1: _t->on_mainColor_clicked(); break;
        case 2: _t->on_alternateColor_clicked(); break;
        case 3: _t->on_gradientTypeCombo_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_gradientDirectionCombo_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_gradientUnitsCombo_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_repetitionAt_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->onReset(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XSDBackgroundConfig::*)(XSDGraphicsBackgroundConfiguration * )>(_a, &XSDBackgroundConfig::onBackgroundConfigurationChanged, 0))
            return;
    }
}

const QMetaObject *XSDBackgroundConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDBackgroundConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSDBackgroundConfigE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int XSDBackgroundConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void XSDBackgroundConfig::onBackgroundConfigurationChanged(XSDGraphicsBackgroundConfiguration * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
