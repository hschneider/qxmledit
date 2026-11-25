/****************************************************************************
** Meta object code from reading C++ file 'anonadvdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/anonymize/anonadvdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'anonadvdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13AnonAdvDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto AnonAdvDialog::qt_create_metaobjectdata<qt_meta_tag_ZN13AnonAdvDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AnonAdvDialog",
        "accept",
        "",
        "reject",
        "on_cmdExcElement_clicked",
        "on_cmdExcAttribute_clicked",
        "on_cmdExcText_clicked",
        "on_allChk_clicked",
        "checked",
        "on_codeChk_clicked",
        "on_chkFixedPattern_clicked",
        "on_exceptions_currentItemChanged",
        "QTableWidgetItem*",
        "current",
        "previous",
        "on_treeWidget_reevaluateSelectionState",
        "on_cmdDeleteException_clicked",
        "on_cmdManageProfiles_clicked",
        "on_cmdSaveProfile_clicked",
        "on_cmdEditProfile_clicked",
        "on_actionExceptionElement_triggered",
        "on_actionExceptionAttributes_triggered",
        "on_actionExceptionText_triggered",
        "treeContextMenu",
        "QPoint",
        "pt",
        "on_cmdImportException_clicked",
        "on_cmdExportExceptions_clicked",
        "on_threshold_valueChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_cmdExcElement_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdExcAttribute_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdExcText_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_allChk_clicked'
        QtMocHelpers::SlotData<void(bool)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_codeChk_clicked'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_chkFixedPattern_clicked'
        QtMocHelpers::SlotData<void(bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Slot 'on_exceptions_currentItemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *, QTableWidgetItem *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 }, { 0x80000000 | 12, 14 },
        }}),
        // Slot 'on_treeWidget_reevaluateSelectionState'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdDeleteException_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdManageProfiles_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdSaveProfile_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdEditProfile_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExceptionElement_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExceptionAttributes_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExceptionText_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'treeContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Slot 'on_cmdImportException_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdExportExceptions_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_threshold_valueChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AnonAdvDialog, qt_meta_tag_ZN13AnonAdvDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AnonAdvDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AnonAdvDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AnonAdvDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13AnonAdvDialogE_t>.metaTypes,
    nullptr
} };

void AnonAdvDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AnonAdvDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->on_cmdExcElement_clicked(); break;
        case 3: _t->on_cmdExcAttribute_clicked(); break;
        case 4: _t->on_cmdExcText_clicked(); break;
        case 5: _t->on_allChk_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_codeChk_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_chkFixedPattern_clicked((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_exceptions_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QTableWidgetItem*>>(_a[2]))); break;
        case 9: _t->on_treeWidget_reevaluateSelectionState(); break;
        case 10: _t->on_cmdDeleteException_clicked(); break;
        case 11: _t->on_cmdManageProfiles_clicked(); break;
        case 12: _t->on_cmdSaveProfile_clicked(); break;
        case 13: _t->on_cmdEditProfile_clicked(); break;
        case 14: _t->on_actionExceptionElement_triggered(); break;
        case 15: _t->on_actionExceptionAttributes_triggered(); break;
        case 16: _t->on_actionExceptionText_triggered(); break;
        case 17: _t->treeContextMenu((*reinterpret_cast<std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->on_cmdImportException_clicked(); break;
        case 19: _t->on_cmdExportExceptions_clicked(); break;
        case 20: _t->on_threshold_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *AnonAdvDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnonAdvDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13AnonAdvDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AnonAdvDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
