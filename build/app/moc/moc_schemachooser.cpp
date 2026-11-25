/****************************************************************************
** Meta object code from reading C++ file 'schemachooser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/schemachooser.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schemachooser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13SchemaChooserE_t {};
} // unnamed namespace

template <> constexpr inline auto SchemaChooser::qt_create_metaobjectdata<qt_meta_tag_ZN13SchemaChooserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SchemaChooser",
        "accept",
        "",
        "on_lastUsedList_currentItemChanged",
        "QListWidgetItem*",
        "current",
        "previous",
        "on_lastUsedList_itemClicked",
        "item",
        "on_favoritesList_currentItemChanged",
        "on_favoritesList_itemClicked",
        "on_addPrefsSchema_clicked",
        "on_remPrefsSchema_clicked",
        "on_browseFile_clicked",
        "on_textSelection_textChanged",
        "text",
        "on_favoritesList_itemDoubleClicked",
        "on_lastUsedList_itemDoubleClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lastUsedList_currentItemChanged'
        QtMocHelpers::SlotData<void(QListWidgetItem *, QListWidgetItem *)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 6 },
        }}),
        // Slot 'on_lastUsedList_itemClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 8 },
        }}),
        // Slot 'on_favoritesList_currentItemChanged'
        QtMocHelpers::SlotData<void(QListWidgetItem *, QListWidgetItem *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 5 }, { 0x80000000 | 4, 2 },
        }}),
        // Slot 'on_favoritesList_itemClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 8 },
        }}),
        // Slot 'on_addPrefsSchema_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_remPrefsSchema_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_browseFile_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_textSelection_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'on_favoritesList_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 8 },
        }}),
        // Slot 'on_lastUsedList_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QListWidgetItem *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 4, 8 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SchemaChooser, qt_meta_tag_ZN13SchemaChooserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SchemaChooser::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SchemaChooserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SchemaChooserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13SchemaChooserE_t>.metaTypes,
    nullptr
} };

void SchemaChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SchemaChooser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_lastUsedList_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 2: _t->on_lastUsedList_itemClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 3: _t->on_favoritesList_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 4: _t->on_favoritesList_itemClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 5: _t->on_addPrefsSchema_clicked(); break;
        case 6: _t->on_remPrefsSchema_clicked(); break;
        case 7: _t->on_browseFile_clicked(); break;
        case 8: _t->on_textSelection_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_favoritesList_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 10: _t->on_lastUsedList_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SchemaChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchemaChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13SchemaChooserE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SchemaChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
