/****************************************************************************
** Meta object code from reading C++ file 'qlabelwithsignals.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/widgets/qlabelwithsignals.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlabelwithsignals.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17QLabelWithSignalsE_t {};
} // unnamed namespace

template <> constexpr inline auto QLabelWithSignals::qt_create_metaobjectdata<qt_meta_tag_ZN17QLabelWithSignalsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QLabelWithSignals",
        "doubleClicked",
        "",
        "clicked",
        "mouseDoubleClickEvent",
        "QMouseEvent*",
        "e",
        "mousePressEvent"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'doubleClicked'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clicked'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'mouseDoubleClickEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'mousePressEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QLabelWithSignals, qt_meta_tag_ZN17QLabelWithSignalsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QLabelWithSignals::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QLabelWithSignalsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QLabelWithSignalsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN17QLabelWithSignalsE_t>.metaTypes,
    nullptr
} };

void QLabelWithSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QLabelWithSignals *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->doubleClicked(); break;
        case 1: _t->clicked(); break;
        case 2: _t->mouseDoubleClickEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QLabelWithSignals::*)()>(_a, &QLabelWithSignals::doubleClicked, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QLabelWithSignals::*)()>(_a, &QLabelWithSignals::clicked, 1))
            return;
    }
}

const QMetaObject *QLabelWithSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLabelWithSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN17QLabelWithSignalsE_t>.strings))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int QLabelWithSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QLabelWithSignals::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QLabelWithSignals::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
