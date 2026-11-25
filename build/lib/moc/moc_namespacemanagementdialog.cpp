/****************************************************************************
** Meta object code from reading C++ file 'namespacemanagementdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/namespace/namespacemanagementdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'namespacemanagementdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25NamespaceManagementDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto NamespaceManagementDialog::qt_create_metaobjectdata<qt_meta_tag_ZN25NamespaceManagementDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NamespaceManagementDialog",
        "on_cmdRemNs_clicked",
        "",
        "on_nsList_itemSelectionChanged",
        "on_cmdAddNs_clicked",
        "on_cmdModNs_clicked",
        "on_cmdSelect_clicked",
        "on_cmdClear_clicked",
        "on_uri_currentIndexChanged",
        "index",
        "on_nsList_itemDoubleClicked",
        "QTableWidgetItem*",
        "on_prefix_textChanged",
        "text",
        "on_uri_editTextChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_cmdRemNs_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nsList_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdAddNs_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdModNs_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdSelect_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdClear_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_uri_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_nsList_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 2 },
        }}),
        // Slot 'on_prefix_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'on_uri_editTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NamespaceManagementDialog, qt_meta_tag_ZN25NamespaceManagementDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NamespaceManagementDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25NamespaceManagementDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25NamespaceManagementDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25NamespaceManagementDialogE_t>.metaTypes,
    nullptr
} };

void NamespaceManagementDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NamespaceManagementDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_cmdRemNs_clicked(); break;
        case 1: _t->on_nsList_itemSelectionChanged(); break;
        case 2: _t->on_cmdAddNs_clicked(); break;
        case 3: _t->on_cmdModNs_clicked(); break;
        case 4: _t->on_cmdSelect_clicked(); break;
        case 5: _t->on_cmdClear_clicked(); break;
        case 6: _t->on_uri_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_nsList_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 8: _t->on_prefix_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_uri_editTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *NamespaceManagementDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NamespaceManagementDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25NamespaceManagementDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NamespaceManagementDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
