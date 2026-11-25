/****************************************************************************
** Meta object code from reading C++ file 'configureeditmodesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/config/configureeditmodesdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configureeditmodesdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24ConfigureEditModesDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureEditModesDialog::qt_create_metaobjectdata<qt_meta_tag_ZN24ConfigureEditModesDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureEditModesDialog",
        "on_cbShowXSLTPanel_clicked",
        "",
        "clicked",
        "on_cbAutomaticallySwitchToXSLTMode_clicked",
        "on_cbShowSCXMLPanel_clicked",
        "on_cbAutomaticallySwitchToSCXMLMode_clicked",
        "on_cmdSaxonPath_clicked",
        "on_cbSaxon_clicked",
        "on_saxonPath_textChanged",
        "text",
        "on_cbPreferEditAsForm_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_cbShowXSLTPanel_clicked'
        QtMocHelpers::SlotData<void(bool)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'on_cbAutomaticallySwitchToXSLTMode_clicked'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'on_cbShowSCXMLPanel_clicked'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_cbAutomaticallySwitchToSCXMLMode_clicked'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_cmdSaxonPath_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cbSaxon_clicked'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'on_saxonPath_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'on_cbPreferEditAsForm_clicked'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureEditModesDialog, qt_meta_tag_ZN24ConfigureEditModesDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureEditModesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24ConfigureEditModesDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24ConfigureEditModesDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24ConfigureEditModesDialogE_t>.metaTypes,
    nullptr
} };

void ConfigureEditModesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureEditModesDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_cbShowXSLTPanel_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_cbAutomaticallySwitchToXSLTMode_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->on_cbShowSCXMLPanel_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_cbAutomaticallySwitchToSCXMLMode_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_cmdSaxonPath_clicked(); break;
        case 5: _t->on_cbSaxon_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_saxonPath_textChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_cbPreferEditAsForm_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ConfigureEditModesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureEditModesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24ConfigureEditModesDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureEditModesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
