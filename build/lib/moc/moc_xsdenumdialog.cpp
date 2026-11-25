/****************************************************************************
** Meta object code from reading C++ file 'xsdenumdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/xsd/xsdenumdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsdenumdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13XSDEnumDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDEnumDialog::qt_create_metaobjectdata<qt_meta_tag_ZN13XSDEnumDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDEnumDialog",
        "on_cmdAdd_clicked",
        "",
        "on_cmdMod_clicked",
        "on_cmdDel_clicked",
        "on_cmdMoveUp_clicked",
        "on_cmdMoveDown_clicked",
        "on_cmdAnnot_clicked",
        "on_facets_currentItemChanged",
        "QTableWidgetItem*",
        "on_facets_itemDoubleClicked",
        "item"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_cmdAdd_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdMod_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdDel_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdMoveUp_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdMoveDown_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdAnnot_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_facets_currentItemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *, QTableWidgetItem *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 2 }, { 0x80000000 | 9, 2 },
        }}),
        // Slot 'on_facets_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 11 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDEnumDialog, qt_meta_tag_ZN13XSDEnumDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDEnumDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSDEnumDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSDEnumDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13XSDEnumDialogE_t>.metaTypes,
    nullptr
} };

void XSDEnumDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDEnumDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_cmdAdd_clicked(); break;
        case 1: _t->on_cmdMod_clicked(); break;
        case 2: _t->on_cmdDel_clicked(); break;
        case 3: _t->on_cmdMoveUp_clicked(); break;
        case 4: _t->on_cmdMoveDown_clicked(); break;
        case 5: _t->on_cmdAnnot_clicked(); break;
        case 6: _t->on_facets_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[2]))); break;
        case 7: _t->on_facets_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *XSDEnumDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDEnumDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13XSDEnumDialogE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "XSDAnnotationEditProvider"))
        return static_cast< XSDAnnotationEditProvider*>(this);
    return QDialog::qt_metacast(_clname);
}

int XSDEnumDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
