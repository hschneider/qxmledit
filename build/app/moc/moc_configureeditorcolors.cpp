/****************************************************************************
** Meta object code from reading C++ file 'configureeditorcolors.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/configureeditorcolors.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configureeditorcolors.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21ConfigureEditorColorsE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureEditorColors::qt_create_metaobjectdata<qt_meta_tag_ZN21ConfigureEditorColorsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureEditorColors",
        "on_treeColors_itemSelectionChanged",
        "",
        "on_cmdResetColor_clicked",
        "on_cmdChangeColor_clicked",
        "on_cmdResetAllColors_clicked",
        "on_treeColors_itemDoubleClicked",
        "QTreeWidgetItem*",
        "item",
        "column",
        "on_cmdExport_clicked",
        "on_cmdImport_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_treeColors_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdResetColor_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdChangeColor_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdResetAllColors_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_treeColors_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { QMetaType::Int, 9 },
        }}),
        // Slot 'on_cmdExport_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdImport_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureEditorColors, qt_meta_tag_ZN21ConfigureEditorColorsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureEditorColors::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21ConfigureEditorColorsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21ConfigureEditorColorsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21ConfigureEditorColorsE_t>.metaTypes,
    nullptr
} };

void ConfigureEditorColors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureEditorColors *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_treeColors_itemSelectionChanged(); break;
        case 1: _t->on_cmdResetColor_clicked(); break;
        case 2: _t->on_cmdChangeColor_clicked(); break;
        case 3: _t->on_cmdResetAllColors_clicked(); break;
        case 4: _t->on_treeColors_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->on_cmdExport_clicked(); break;
        case 6: _t->on_cmdImport_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ConfigureEditorColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureEditorColors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21ConfigureEditorColorsE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureEditorColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
