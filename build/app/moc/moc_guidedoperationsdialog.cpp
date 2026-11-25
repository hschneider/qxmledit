/****************************************************************************
** Meta object code from reading C++ file 'guidedoperationsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/help/guidedoperationsdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guidedoperationsdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22GuidedOperationsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto GuidedOperationsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN22GuidedOperationsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GuidedOperationsDialog",
        "triggerNew",
        "",
        "triggerQuit",
        "triggerOpen",
        "triggerValidate",
        "triggerClose",
        "triggerFormatting",
        "triggerCfgVision",
        "triggerCfgEditing",
        "triggerConfigure",
        "triggerUserProfile",
        "triggerExtractFile",
        "triggerViewXSD",
        "triggerCompare",
        "triggerAnon",
        "triggerUserManual",
        "triggerEditingShortcut",
        "triggerBase64",
        "triggerViewXMLMap",
        "triggerAbout",
        "triggerShowKeyboardInfo",
        "state",
        "openFile",
        "fullFilePath",
        "on_cmdNew_clicked",
        "on_cmdQuit_clicked",
        "on_cmdOpen_clicked",
        "on_cmdValidate_clicked",
        "on_cmdCfgVision_clicked",
        "on_cmdCfgFormatting_clicked",
        "on_cmdCfgEditing_clicked",
        "on_cmdConfigure_clicked",
        "on_cmdUserProfile_clicked",
        "on_cmdExtractFile_clicked",
        "on_cmdViewXSD_clicked",
        "on_cmdCompare_clicked",
        "on_cmdAnon_clicked",
        "on_cmdUserManual_clicked",
        "on_cmdEditingShortcut_clicked",
        "on_cmdBase64_clicked",
        "on_cmdViewDataMap_clicked",
        "on_cmdAbout_clicked",
        "on_cmdShowKeyboardInfo_toggled",
        "onShortcutOpen",
        "onShortcutNew",
        "onShortcutQuit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'triggerNew'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerQuit'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerOpen'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerValidate'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerClose'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerFormatting'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerCfgVision'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerCfgEditing'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerConfigure'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerUserProfile'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerExtractFile'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerViewXSD'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerCompare'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerAnon'
        QtMocHelpers::SignalData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerUserManual'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerEditingShortcut'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerBase64'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerViewXMLMap'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerAbout'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'triggerShowKeyboardInfo'
        QtMocHelpers::SignalData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Signal 'openFile'
        QtMocHelpers::SignalData<void(const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 24 },
        }}),
        // Slot 'on_cmdNew_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdQuit_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdOpen_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdValidate_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCfgVision_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCfgFormatting_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCfgEditing_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdConfigure_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdUserProfile_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdExtractFile_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdViewXSD_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCompare_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdAnon_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdUserManual_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdEditingShortcut_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdBase64_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdViewDataMap_clicked'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdAbout_clicked'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdShowKeyboardInfo_toggled'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutOpen'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutNew'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onShortcutQuit'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GuidedOperationsDialog, qt_meta_tag_ZN22GuidedOperationsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GuidedOperationsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22GuidedOperationsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22GuidedOperationsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22GuidedOperationsDialogE_t>.metaTypes,
    nullptr
} };

void GuidedOperationsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GuidedOperationsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->triggerNew(); break;
        case 1: _t->triggerQuit(); break;
        case 2: _t->triggerOpen(); break;
        case 3: _t->triggerValidate(); break;
        case 4: _t->triggerClose(); break;
        case 5: _t->triggerFormatting(); break;
        case 6: _t->triggerCfgVision(); break;
        case 7: _t->triggerCfgEditing(); break;
        case 8: _t->triggerConfigure(); break;
        case 9: _t->triggerUserProfile(); break;
        case 10: _t->triggerExtractFile(); break;
        case 11: _t->triggerViewXSD(); break;
        case 12: _t->triggerCompare(); break;
        case 13: _t->triggerAnon(); break;
        case 14: _t->triggerUserManual(); break;
        case 15: _t->triggerEditingShortcut(); break;
        case 16: _t->triggerBase64(); break;
        case 17: _t->triggerViewXMLMap(); break;
        case 18: _t->triggerAbout(); break;
        case 19: _t->triggerShowKeyboardInfo((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->openFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->on_cmdNew_clicked(); break;
        case 22: _t->on_cmdQuit_clicked(); break;
        case 23: _t->on_cmdOpen_clicked(); break;
        case 24: _t->on_cmdValidate_clicked(); break;
        case 25: _t->on_cmdCfgVision_clicked(); break;
        case 26: _t->on_cmdCfgFormatting_clicked(); break;
        case 27: _t->on_cmdCfgEditing_clicked(); break;
        case 28: _t->on_cmdConfigure_clicked(); break;
        case 29: _t->on_cmdUserProfile_clicked(); break;
        case 30: _t->on_cmdExtractFile_clicked(); break;
        case 31: _t->on_cmdViewXSD_clicked(); break;
        case 32: _t->on_cmdCompare_clicked(); break;
        case 33: _t->on_cmdAnon_clicked(); break;
        case 34: _t->on_cmdUserManual_clicked(); break;
        case 35: _t->on_cmdEditingShortcut_clicked(); break;
        case 36: _t->on_cmdBase64_clicked(); break;
        case 37: _t->on_cmdViewDataMap_clicked(); break;
        case 38: _t->on_cmdAbout_clicked(); break;
        case 39: _t->on_cmdShowKeyboardInfo_toggled(); break;
        case 40: _t->onShortcutOpen(); break;
        case 41: _t->onShortcutNew(); break;
        case 42: _t->onShortcutQuit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerNew, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerQuit, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerOpen, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerValidate, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerClose, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerFormatting, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerCfgVision, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerCfgEditing, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerConfigure, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerUserProfile, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerExtractFile, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerViewXSD, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerCompare, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerAnon, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerUserManual, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerEditingShortcut, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerBase64, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerViewXMLMap, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)()>(_a, &GuidedOperationsDialog::triggerAbout, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)(bool )>(_a, &GuidedOperationsDialog::triggerShowKeyboardInfo, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (GuidedOperationsDialog::*)(const QString & )>(_a, &GuidedOperationsDialog::openFile, 20))
            return;
    }
}

const QMetaObject *GuidedOperationsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuidedOperationsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22GuidedOperationsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GuidedOperationsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void GuidedOperationsDialog::triggerNew()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GuidedOperationsDialog::triggerQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GuidedOperationsDialog::triggerOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GuidedOperationsDialog::triggerValidate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GuidedOperationsDialog::triggerClose()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GuidedOperationsDialog::triggerFormatting()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GuidedOperationsDialog::triggerCfgVision()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GuidedOperationsDialog::triggerCfgEditing()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GuidedOperationsDialog::triggerConfigure()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void GuidedOperationsDialog::triggerUserProfile()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void GuidedOperationsDialog::triggerExtractFile()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GuidedOperationsDialog::triggerViewXSD()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void GuidedOperationsDialog::triggerCompare()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void GuidedOperationsDialog::triggerAnon()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void GuidedOperationsDialog::triggerUserManual()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void GuidedOperationsDialog::triggerEditingShortcut()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void GuidedOperationsDialog::triggerBase64()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void GuidedOperationsDialog::triggerViewXMLMap()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void GuidedOperationsDialog::triggerAbout()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void GuidedOperationsDialog::triggerShowKeyboardInfo(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void GuidedOperationsDialog::openFile(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1);
}
QT_WARNING_POP
