/****************************************************************************
** Meta object code from reading C++ file 'scxmlnavigatorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/specialized/scxml/widgets/scxmlnavigatorwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scxmlnavigatorwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SCXMLNavigatorWidget::qt_create_metaobjectdata<qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SCXMLNavigatorWidget",
        "goToState",
        "",
        "stateName",
        "Element*",
        "element",
        "editState",
        "on_showCmd_clicked",
        "on_editCmd_clicked",
        "on_flat_clicked",
        "on_states_itemSelectionChanged",
        "on_states_itemDoubleClicked",
        "QTreeWidgetItem*",
        "item",
        "column",
        "on_states_itemClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goToState'
        QtMocHelpers::SignalData<void(const QString &, Element *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'editState'
        QtMocHelpers::SignalData<void(const QString &, Element *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Slot 'on_showCmd_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editCmd_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_flat_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_states_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_states_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { QMetaType::Int, 14 },
        }}),
        // Slot 'on_states_itemClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { QMetaType::Int, 14 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SCXMLNavigatorWidget, qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SCXMLNavigatorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t>.metaTypes,
    nullptr
} };

void SCXMLNavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SCXMLNavigatorWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goToState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2]))); break;
        case 1: _t->editState((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<Element*>>(_a[2]))); break;
        case 2: _t->on_showCmd_clicked(); break;
        case 3: _t->on_editCmd_clicked(); break;
        case 4: _t->on_flat_clicked(); break;
        case 5: _t->on_states_itemSelectionChanged(); break;
        case 6: _t->on_states_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->on_states_itemClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SCXMLNavigatorWidget::*)(const QString & , Element * )>(_a, &SCXMLNavigatorWidget::goToState, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SCXMLNavigatorWidget::*)(const QString & , Element * )>(_a, &SCXMLNavigatorWidget::editState, 1))
            return;
    }
}

const QMetaObject *SCXMLNavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCXMLNavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SCXMLNavigatorWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SCXMLNavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SCXMLNavigatorWidget::goToState(const QString & _t1, Element * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void SCXMLNavigatorWidget::editState(const QString & _t1, Element * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
