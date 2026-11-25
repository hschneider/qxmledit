/****************************************************************************
** Meta object code from reading C++ file 'editelement.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/editelement.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editelement.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11EditElementE_t {};
} // unnamed namespace

template <> constexpr inline auto EditElement::qt_create_metaobjectdata<qt_meta_tag_ZN11EditElementE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EditElement",
        "accept",
        "",
        "on_newAttribute_clicked",
        "on_delAttribute_clicked",
        "on_editTag_textChanged",
        "on_attrTable_itemSelectionChanged",
        "on_elementTable_itemSelectionChanged",
        "on_textAdd_clicked",
        "on_textDel_clicked",
        "on_textUp_clicked",
        "on_textDown_clicked",
        "on_textEdit_clicked",
        "on_elementTable_cellClicked",
        "row",
        "column",
        "on_attrTable_itemChanged",
        "QTableWidgetItem*",
        "item",
        "on_cmdFromBase64_clicked",
        "on_cmdToBase64_clicked",
        "on_cmdNamespaces_clicked",
        "on_cmdLoadFileBase64_clicked",
        "on_cmdSaveFileBase64_clicked",
        "on_cmdEditAttributeAdvanced_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_newAttribute_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_delAttribute_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editTag_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'on_attrTable_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_elementTable_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_textAdd_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_textDel_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_textUp_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_textDown_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_textEdit_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_elementTable_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 14 }, { QMetaType::Int, 15 },
        }}),
        // Slot 'on_attrTable_itemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'on_cmdFromBase64_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdToBase64_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdNamespaces_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdLoadFileBase64_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdSaveFileBase64_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdEditAttributeAdvanced_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditElement, qt_meta_tag_ZN11EditElementE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EditElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EditElementE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EditElementE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11EditElementE_t>.metaTypes,
    nullptr
} };

void EditElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditElement *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_newAttribute_clicked(); break;
        case 2: _t->on_delAttribute_clicked(); break;
        case 3: _t->on_editTag_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_attrTable_itemSelectionChanged(); break;
        case 5: _t->on_elementTable_itemSelectionChanged(); break;
        case 6: _t->on_textAdd_clicked(); break;
        case 7: _t->on_textDel_clicked(); break;
        case 8: _t->on_textUp_clicked(); break;
        case 9: _t->on_textDown_clicked(); break;
        case 10: _t->on_textEdit_clicked(); break;
        case 11: _t->on_elementTable_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->on_attrTable_itemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 13: _t->on_cmdFromBase64_clicked(); break;
        case 14: _t->on_cmdToBase64_clicked(); break;
        case 15: _t->on_cmdNamespaces_clicked(); break;
        case 16: _t->on_cmdLoadFileBase64_clicked(); break;
        case 17: _t->on_cmdSaveFileBase64_clicked(); break;
        case 18: _t->on_cmdEditAttributeAdvanced_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *EditElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EditElementE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
