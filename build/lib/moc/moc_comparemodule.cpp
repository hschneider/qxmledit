/****************************************************************************
** Meta object code from reading C++ file 'comparemodule.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/compare/comparemodule.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comparemodule.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9DiffModelE_t {};
} // unnamed namespace

template <> constexpr inline auto DiffModel::qt_create_metaobjectdata<qt_meta_tag_ZN9DiffModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "DiffModel"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DiffModel, qt_meta_tag_ZN9DiffModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject DiffModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9DiffModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9DiffModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9DiffModelE_t>.metaTypes,
    nullptr
} };

void DiffModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DiffModel *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *DiffModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiffModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9DiffModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int DiffModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13CompareModuleE_t {};
} // unnamed namespace

template <> constexpr inline auto CompareModule::qt_create_metaobjectdata<qt_meta_tag_ZN13CompareModuleE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CompareModule",
        "on_treeLeft_currentItemChanged",
        "",
        "QTreeWidgetItem*",
        "current",
        "previous",
        "on_treeRight_currentItemChanged",
        "on_cmdBrowse_clicked",
        "on_cmdBrowseFile1_clicked",
        "on_comboFiles_activated",
        "text",
        "on_comboFilesFile1_activated",
        "on_cmdCompare_clicked",
        "on_cmdCopyToClipboard_clicked",
        "on_mapLeft_userChangedSelection",
        "newValue",
        "on_mapRight_userChangedSelection",
        "on_differenceTable_clicked",
        "QModelIndex",
        "index",
        "on_gotoFirst_clicked",
        "on_gotoPrev_clicked",
        "on_gotoNext_clicked",
        "on_gotoLast_clicked",
        "on_chkCompareText_stateChanged",
        "state",
        "on_chkCompareComments_stateChanged",
        "on_chkDenormalizeEOL_stateChanged",
        "on_cmdZoomIn_clicked",
        "on_cmdZoomOut_clicked",
        "on_cmdZoom1_clicked",
        "on_cmdDump_clicked",
        "startAction"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_treeLeft_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Slot 'on_treeRight_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Slot 'on_cmdBrowse_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdBrowseFile1_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboFiles_activated'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'on_comboFilesFile1_activated'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'on_cmdCompare_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdCopyToClipboard_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_mapLeft_userChangedSelection'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'on_mapRight_userChangedSelection'
        QtMocHelpers::SlotData<void(int)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'on_differenceTable_clicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
        // Slot 'on_gotoFirst_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_gotoPrev_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_gotoNext_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_gotoLast_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_chkCompareText_stateChanged'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_chkCompareComments_stateChanged'
        QtMocHelpers::SlotData<void(int)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 25 },
        }}),
        // Slot 'on_chkDenormalizeEOL_stateChanged'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'on_cmdZoomIn_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdZoomOut_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdZoom1_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cmdDump_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'startAction'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CompareModule, qt_meta_tag_ZN13CompareModuleE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject CompareModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CompareModuleE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CompareModuleE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13CompareModuleE_t>.metaTypes,
    nullptr
} };

void CompareModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CompareModule *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_treeLeft_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 1: _t->on_treeRight_currentItemChanged((*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 2: _t->on_cmdBrowse_clicked(); break;
        case 3: _t->on_cmdBrowseFile1_clicked(); break;
        case 4: _t->on_comboFiles_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_comboFilesFile1_activated((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_cmdCompare_clicked(); break;
        case 7: _t->on_cmdCopyToClipboard_clicked(); break;
        case 8: _t->on_mapLeft_userChangedSelection((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_mapRight_userChangedSelection((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_differenceTable_clicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->on_gotoFirst_clicked(); break;
        case 12: _t->on_gotoPrev_clicked(); break;
        case 13: _t->on_gotoNext_clicked(); break;
        case 14: _t->on_gotoLast_clicked(); break;
        case 15: _t->on_chkCompareText_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_chkCompareComments_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_chkDenormalizeEOL_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_cmdZoomIn_clicked(); break;
        case 19: _t->on_cmdZoomOut_clicked(); break;
        case 20: _t->on_cmdZoom1_clicked(); break;
        case 21: _t->on_cmdDump_clicked(); break;
        case 22: _t->startAction(); break;
        default: ;
        }
    }
}

const QMetaObject *CompareModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CompareModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13CompareModuleE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CompareModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
