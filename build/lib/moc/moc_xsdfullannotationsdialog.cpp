/****************************************************************************
** Meta object code from reading C++ file 'xsdfullannotationsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/xsd/xsdfullannotationsdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xsdfullannotationsdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto XSDFullAnnotationsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "XSDFullAnnotationsDialog",
        "on_cmdNew_clicked",
        "",
        "on_cmdModify_clicked",
        "on_cmdDelete_clicked",
        "onItemClicked",
        "QTableWidgetItem*",
        "item",
        "onItemChanged",
        "on_annotations_itemDoubleClicked",
        "on_cmdMoveDown_clicked",
        "on_cmdMoveUp_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_cmdNew_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdModify_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdDelete_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onItemClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'onItemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'on_annotations_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'on_cmdMoveDown_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdMoveUp_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<XSDFullAnnotationsDialog, qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject XSDFullAnnotationsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t>.metaTypes,
    nullptr
} };

void XSDFullAnnotationsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<XSDFullAnnotationsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_cmdNew_clicked(); break;
        case 1: _t->on_cmdModify_clicked(); break;
        case 2: _t->on_cmdDelete_clicked(); break;
        case 3: _t->onItemClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 4: _t->onItemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 5: _t->on_annotations_itemDoubleClicked((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 6: _t->on_cmdMoveDown_clicked(); break;
        case 7: _t->on_cmdMoveUp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *XSDFullAnnotationsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XSDFullAnnotationsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24XSDFullAnnotationsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int XSDFullAnnotationsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
