/****************************************************************************
** Meta object code from reading C++ file 'sessiondetailwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sessions/widgets/sessiondetailwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessiondetailwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19SessionDetailWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionDetailWidget::qt_create_metaobjectdata<qt_meta_tag_ZN19SessionDetailWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionDetailWidget",
        "fileSelected",
        "",
        "FileModel*",
        "model",
        "fileDoubleClicked",
        "onFilesSelectionChanged",
        "QItemSelection",
        "selected",
        "deselected",
        "onAccessesSelectionChanged",
        "on_accesses_doubleClicked",
        "QModelIndex",
        "index",
        "on_files_doubleClicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fileSelected'
        QtMocHelpers::SignalData<void(FileModel *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'fileDoubleClicked'
        QtMocHelpers::SignalData<void(FileModel *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onFilesSelectionChanged'
        QtMocHelpers::SlotData<void(QItemSelection const &, QItemSelection const &)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 7, 9 },
        }}),
        // Slot 'onAccessesSelectionChanged'
        QtMocHelpers::SlotData<void(QItemSelection const &, QItemSelection const &)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 7, 9 },
        }}),
        // Slot 'on_accesses_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'on_files_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionDetailWidget, qt_meta_tag_ZN19SessionDetailWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SessionDetailWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19SessionDetailWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19SessionDetailWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19SessionDetailWidgetE_t>.metaTypes,
    nullptr
} };

void SessionDetailWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionDetailWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast<std::add_pointer_t<FileModel*>>(_a[1]))); break;
        case 1: _t->fileDoubleClicked((*reinterpret_cast<std::add_pointer_t<FileModel*>>(_a[1]))); break;
        case 2: _t->onFilesSelectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 3: _t->onAccessesSelectionChanged((*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 4: _t->on_accesses_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->on_files_doubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QItemSelection >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SessionDetailWidget::*)(FileModel * )>(_a, &SessionDetailWidget::fileSelected, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionDetailWidget::*)(FileModel * )>(_a, &SessionDetailWidget::fileDoubleClicked, 1))
            return;
    }
}

const QMetaObject *SessionDetailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionDetailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19SessionDetailWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SessionDetailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SessionDetailWidget::fileSelected(FileModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void SessionDetailWidget::fileDoubleClicked(FileModel * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
