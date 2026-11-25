/****************************************************************************
** Meta object code from reading C++ file 'configurexmlmanagementdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/configurexmlmanagementdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configurexmlmanagementdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureXMLManagementDialog::qt_create_metaobjectdata<qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureXMLManagementDialog",
        "on_chkMetadata_clicked",
        "",
        "on_comboEncoding_activated",
        "on_chkInsProlog_clicked",
        "on_xmlIndent_valueChanged",
        "newValue",
        "on_cmdIndentReset_clicked",
        "on_chkNoIndent_stateChanged",
        "on_chkSortAttributes_stateChanged",
        "on_attrCharacters_valueChanged",
        "on_attrNoIndendation_clicked",
        "on_attrNewLineAt_clicked",
        "on_cmdPredefinedAttributes_clicked",
        "on_cbProcessFormattingMetadata_stateChanged",
        "on_cbInsertFormattingMetadata_stateChanged",
        "on_cbAnonLegacyAlg_stateChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_chkMetadata_clicked'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_comboEncoding_activated'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_chkInsProlog_clicked'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_xmlIndent_valueChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'on_cmdIndentReset_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkNoIndent_stateChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_chkSortAttributes_stateChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_attrCharacters_valueChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_attrNoIndendation_clicked'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_attrNewLineAt_clicked'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_cmdPredefinedAttributes_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbProcessFormattingMetadata_stateChanged'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_cbInsertFormattingMetadata_stateChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_cbAnonLegacyAlg_stateChanged'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureXMLManagementDialog, qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureXMLManagementDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t>.metaTypes,
    nullptr
} };

void ConfigureXMLManagementDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureXMLManagementDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_chkMetadata_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_comboEncoding_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_chkInsProlog_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_xmlIndent_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_cmdIndentReset_clicked(); break;
        case 5: _t->on_chkNoIndent_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_chkSortAttributes_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_attrCharacters_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_attrNoIndendation_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->on_attrNewLineAt_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->on_cmdPredefinedAttributes_clicked(); break;
        case 11: _t->on_cbProcessFormattingMetadata_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_cbInsertFormattingMetadata_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_cbAnonLegacyAlg_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ConfigureXMLManagementDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureXMLManagementDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN28ConfigureXMLManagementDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureXMLManagementDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
