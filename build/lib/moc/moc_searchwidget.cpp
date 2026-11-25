/****************************************************************************
** Meta object code from reading C++ file 'searchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/search/searchwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12SearchWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SearchWidget::qt_create_metaobjectdata<qt_meta_tag_ZN12SearchWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SearchWidget",
        "find",
        "",
        "openAdvancedSearch",
        "count",
        "hiding",
        "searchTextCleared",
        "searchNext",
        "searchPrev",
        "replaceAll",
        "replaceSkipAndGotoNext",
        "replaceSkipAndGotoPrevious",
        "replaceReplaceAndGotoNext",
        "replaceReplaceAndGotoPrevious",
        "searchTextChanged",
        "text",
        "onFindText",
        "onCountTextOccurrences",
        "onOpenAdvancedResultPanel",
        "onCloseSearchPanelClicked",
        "clearSearchText",
        "enableSearchItems",
        "onItemsChanged",
        "key",
        "onSaveAsSearchlet",
        "onManageSearchlets",
        "onSearchNext",
        "onSearchPrev",
        "onReplReplNext",
        "onReplReplPrev",
        "onReplSkipNext",
        "onReplSkipPrev",
        "onReplaceAll"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'find'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openAdvancedSearch'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'count'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hiding'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchTextCleared'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchNext'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchPrev'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replaceAll'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replaceSkipAndGotoNext'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replaceSkipAndGotoPrevious'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replaceReplaceAndGotoNext'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'replaceReplaceAndGotoPrevious'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'searchTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'onFindText'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCountTextOccurrences'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onOpenAdvancedResultPanel'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCloseSearchPanelClicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearSearchText'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableSearchItems'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onItemsChanged'
        QtMocHelpers::SlotData<void(const int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 23 },
        }}),
        // Slot 'onSaveAsSearchlet'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onManageSearchlets'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSearchNext'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSearchPrev'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplReplNext'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplReplPrev'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplSkipNext'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplSkipPrev'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReplaceAll'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SearchWidget, qt_meta_tag_ZN12SearchWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SearchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SearchWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SearchWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12SearchWidgetE_t>.metaTypes,
    nullptr
} };

void SearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SearchWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->find(); break;
        case 1: _t->openAdvancedSearch(); break;
        case 2: _t->count(); break;
        case 3: _t->hiding(); break;
        case 4: _t->searchTextCleared(); break;
        case 5: _t->searchNext(); break;
        case 6: _t->searchPrev(); break;
        case 7: _t->replaceAll(); break;
        case 8: _t->replaceSkipAndGotoNext(); break;
        case 9: _t->replaceSkipAndGotoPrevious(); break;
        case 10: _t->replaceReplaceAndGotoNext(); break;
        case 11: _t->replaceReplaceAndGotoPrevious(); break;
        case 12: _t->searchTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->onFindText(); break;
        case 14: _t->onCountTextOccurrences(); break;
        case 15: _t->onOpenAdvancedResultPanel(); break;
        case 16: _t->onCloseSearchPanelClicked(); break;
        case 17: _t->clearSearchText(); break;
        case 18: _t->enableSearchItems(); break;
        case 19: _t->onItemsChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->onSaveAsSearchlet(); break;
        case 21: _t->onManageSearchlets(); break;
        case 22: _t->onSearchNext(); break;
        case 23: _t->onSearchPrev(); break;
        case 24: _t->onReplReplNext(); break;
        case 25: _t->onReplReplPrev(); break;
        case 26: _t->onReplSkipNext(); break;
        case 27: _t->onReplSkipPrev(); break;
        case 28: _t->onReplaceAll(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::find, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::openAdvancedSearch, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::count, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::hiding, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::searchTextCleared, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::searchNext, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::searchPrev, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::replaceAll, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::replaceSkipAndGotoNext, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::replaceSkipAndGotoPrevious, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::replaceReplaceAndGotoNext, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (SearchWidget::*)()>(_a, &SearchWidget::replaceReplaceAndGotoPrevious, 11))
            return;
    }
}

const QMetaObject *SearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12SearchWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void SearchWidget::find()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchWidget::openAdvancedSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SearchWidget::count()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SearchWidget::hiding()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SearchWidget::searchTextCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SearchWidget::searchNext()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SearchWidget::searchPrev()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SearchWidget::replaceAll()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void SearchWidget::replaceSkipAndGotoNext()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void SearchWidget::replaceSkipAndGotoPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SearchWidget::replaceReplaceAndGotoNext()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void SearchWidget::replaceReplaceAndGotoPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
