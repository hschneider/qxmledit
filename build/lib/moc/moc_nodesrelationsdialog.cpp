/****************************************************************************
** Meta object code from reading C++ file 'nodesrelationsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/graph/nodesrelationsdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nodesrelationsdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20NodesRelationsDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto NodesRelationsDialog::qt_create_metaobjectdata<qt_meta_tag_ZN20NodesRelationsDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NodesRelationsDialog",
        "timedUpdatePositions",
        "",
        "on_cmdZoom1_clicked",
        "on_cmdZoomIn_clicked",
        "on_cmdZoomOut_clicked",
        "startTimer",
        "on_cmdReset_clicked",
        "on_forceSlider_valueChanged",
        "on_radiusSlider_valueChanged",
        "on_stiffnessSlider_valueChanged",
        "on_dampingSlider_valueChanged",
        "on_springLengthSlider_valueChanged",
        "on_cmdBrowseFile_clicked",
        "on_chkViewOnlySelected_clicked",
        "onExportCmd",
        "on_cmdLoadBlack_clicked",
        "on_cmdLoadWhitelist_clicked",
        "on_exportCSV_clicked",
        "on_cmdResetLists_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'timedUpdatePositions'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdZoom1_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdZoomIn_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdZoomOut_clicked'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startTimer'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdReset_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_forceSlider_valueChanged'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_radiusSlider_valueChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_stiffnessSlider_valueChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dampingSlider_valueChanged'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_springLengthSlider_valueChanged'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdBrowseFile_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkViewOnlySelected_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onExportCmd'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdLoadBlack_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdLoadWhitelist_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_exportCSV_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdResetLists_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NodesRelationsDialog, qt_meta_tag_ZN20NodesRelationsDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NodesRelationsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NodesRelationsDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NodesRelationsDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20NodesRelationsDialogE_t>.metaTypes,
    nullptr
} };

void NodesRelationsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NodesRelationsDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->timedUpdatePositions(); break;
        case 1: _t->on_cmdZoom1_clicked(); break;
        case 2: _t->on_cmdZoomIn_clicked(); break;
        case 3: _t->on_cmdZoomOut_clicked(); break;
        case 4: _t->startTimer(); break;
        case 5: _t->on_cmdReset_clicked(); break;
        case 6: _t->on_forceSlider_valueChanged(); break;
        case 7: _t->on_radiusSlider_valueChanged(); break;
        case 8: _t->on_stiffnessSlider_valueChanged(); break;
        case 9: _t->on_dampingSlider_valueChanged(); break;
        case 10: _t->on_springLengthSlider_valueChanged(); break;
        case 11: _t->on_cmdBrowseFile_clicked(); break;
        case 12: _t->on_chkViewOnlySelected_clicked(); break;
        case 13: _t->onExportCmd(); break;
        case 14: _t->on_cmdLoadBlack_clicked(); break;
        case 15: _t->on_cmdLoadWhitelist_clicked(); break;
        case 16: _t->on_exportCSV_clicked(); break;
        case 17: _t->on_cmdResetLists_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *NodesRelationsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NodesRelationsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20NodesRelationsDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int NodesRelationsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
