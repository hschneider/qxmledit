/****************************************************************************
** Meta object code from reading C++ file 'charencodingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/charencodingdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'charencodingdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18CharEncodingDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto CharEncodingDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18CharEncodingDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CharEncodingDialog",
        "textChanged",
        "",
        "on_hexNumericValues_stateChanged",
        "state",
        "on_chkShowCharNames_stateChanged",
        "on_addEncodingCmd_clicked",
        "on_removeEncodingCmd_clicked",
        "on_enc1_currentIndexChanged",
        "index",
        "on_enc2_currentIndexChanged",
        "on_enc3_currentIndexChanged",
        "on_numericEdit_textChanged",
        "on_cmdGenerateSequence_clicked",
        "on_cmdCodePages_clicked",
        "on_cmdCharFont_clicked",
        "on_cmdCharSearch_clicked",
        "on_charCharEntry_textEdited",
        "text",
        "on_charUnicodeValue_textEdited",
        "on_charEncodingValue_textEdited",
        "on_comboCharEncodings_activated",
        "on_comboExport_activated"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'textChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_hexNumericValues_stateChanged'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_chkShowCharNames_stateChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_addEncodingCmd_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_removeEncodingCmd_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_enc1_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_enc2_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_enc3_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_numericEdit_textChanged'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdGenerateSequence_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCodePages_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCharFont_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCharSearch_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_charCharEntry_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'on_charUnicodeValue_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'on_charEncodingValue_textEdited'
        QtMocHelpers::SlotData<void(const QString &)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'on_comboCharEncodings_activated'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'on_comboExport_activated'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CharEncodingDialog, qt_meta_tag_ZN18CharEncodingDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CharEncodingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18CharEncodingDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18CharEncodingDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18CharEncodingDialogE_t>.metaTypes,
    nullptr
} };

void CharEncodingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CharEncodingDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->on_hexNumericValues_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_chkShowCharNames_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_addEncodingCmd_clicked(); break;
        case 4: _t->on_removeEncodingCmd_clicked(); break;
        case 5: _t->on_enc1_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_enc2_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_enc3_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_numericEdit_textChanged(); break;
        case 9: _t->on_cmdGenerateSequence_clicked(); break;
        case 10: _t->on_cmdCodePages_clicked(); break;
        case 11: _t->on_cmdCharFont_clicked(); break;
        case 12: _t->on_cmdCharSearch_clicked(); break;
        case 13: _t->on_charCharEntry_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_charUnicodeValue_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->on_charEncodingValue_textEdited((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_comboCharEncodings_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_comboExport_activated((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *CharEncodingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CharEncodingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18CharEncodingDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CharEncodingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
