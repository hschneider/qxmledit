/****************************************************************************
** Meta object code from reading C++ file 'xsltnavigatorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/xslt/xsltnavigatorwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsltnavigatorwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19XSLTNavigatorWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto XSLTNavigatorWidget::qt_create_metaobjectdata<qt_meta_tag_ZN19XSLTNavigatorWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSLTNavigatorWidget",
        "goTo",
        "",
        "Element*",
        "element",
        "edit",
        "on_treeNavigator_itemSelectionChanged",
        "on_showCmd_clicked",
        "on_treeNavigator_itemClicked",
        "QTreeWidgetItem*",
        "on_editCmd_clicked",
        "on_treeNavigator_itemDoubleClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'goTo'
        QtMocHelpers::SignalData<void(Element *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'edit'
        QtMocHelpers::SignalData<void(Element *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'on_treeNavigator_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_showCmd_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_treeNavigator_itemClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 2 }, { QMetaType::Int, 2 },
        }}),
        // Slot 'on_editCmd_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_treeNavigator_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 2 }, { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSLTNavigatorWidget, qt_meta_tag_ZN19XSLTNavigatorWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSLTNavigatorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSLTNavigatorWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSLTNavigatorWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19XSLTNavigatorWidgetE_t>.metaTypes,
    nullptr
} };

void XSLTNavigatorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSLTNavigatorWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->goTo((*reinterpret_cast<std::add_pointer_t<Element*>>(_a[1]))); break;
        case 1: _t->edit((*reinterpret_cast<std::add_pointer_t<Element*>>(_a[1]))); break;
        case 2: _t->on_treeNavigator_itemSelectionChanged(); break;
        case 3: _t->on_showCmd_clicked(); break;
        case 4: _t->on_treeNavigator_itemClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->on_editCmd_clicked(); break;
        case 6: _t->on_treeNavigator_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (XSLTNavigatorWidget::*)(Element * )>(_a, &XSLTNavigatorWidget::goTo, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (XSLTNavigatorWidget::*)(Element * )>(_a, &XSLTNavigatorWidget::edit, 1))
            return;
    }
}

const QMetaObject *XSLTNavigatorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSLTNavigatorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19XSLTNavigatorWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int XSLTNavigatorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void XSLTNavigatorWidget::goTo(Element * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void XSLTNavigatorWidget::edit(Element * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
