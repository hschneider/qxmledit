/****************************************************************************
** Meta object code from reading C++ file 'extractfragmentsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/extraction/extractfragmentsdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extractfragmentsdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22ExtractFragmentsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ExtractFragmentsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN22ExtractFragmentsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ExtractFragmentsDialog",
        "accept",
        "",
        "reject",
        "on_buttonBox_accepted",
        "on_extractAll_clicked",
        "on_extractRange_clicked",
        "on_extractWithCfr_clicked",
        "on_makeSubfolders_clicked",
        "on_cmdViewInBrowser_clicked",
        "on_cmdDirScan_clicked",
        "on_sourceFIleSearch_clicked",
        "on_chkExtractFiles_clicked",
        "editTextChanged",
        "text",
        "on_chkDeleteUsingPath_clicked",
        "showNaming",
        "on_splitByDepth_clicked",
        "on_splitByPath_clicked",
        "on_cmdAdvanced_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_buttonBox_accepted'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_extractAll_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_extractRange_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_extractWithCfr_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_makeSubfolders_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdViewInBrowser_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdDirScan_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_sourceFIleSearch_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkExtractFiles_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'on_chkDeleteUsingPath_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showNaming'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_splitByDepth_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_splitByPath_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdAdvanced_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ExtractFragmentsDialog, qt_meta_tag_ZN22ExtractFragmentsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ExtractFragmentsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ExtractFragmentsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ExtractFragmentsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22ExtractFragmentsDialogE_t>.metaTypes,
    nullptr
} };

void ExtractFragmentsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ExtractFragmentsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_extractAll_clicked(); break;
        case 4: _t->on_extractRange_clicked(); break;
        case 5: _t->on_extractWithCfr_clicked(); break;
        case 6: _t->on_makeSubfolders_clicked(); break;
        case 7: _t->on_cmdViewInBrowser_clicked(); break;
        case 8: _t->on_cmdDirScan_clicked(); break;
        case 9: _t->on_sourceFIleSearch_clicked(); break;
        case 10: _t->on_chkExtractFiles_clicked(); break;
        case 11: _t->editTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->on_chkDeleteUsingPath_clicked(); break;
        case 13: _t->showNaming(); break;
        case 14: _t->on_splitByDepth_clicked(); break;
        case 15: _t->on_splitByPath_clicked(); break;
        case 16: _t->on_cmdAdvanced_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *ExtractFragmentsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtractFragmentsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ExtractFragmentsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ExtractFragmentsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
