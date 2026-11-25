/****************************************************************************
** Meta object code from reading C++ file 'anotifier.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/modules/services/anotifier.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'anotifier.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13MainMenuBlockE_t {};
} // unnamed namespace

template <> constexpr inline auto MainMenuBlock::qt_create_metaobjectdata<qt_meta_tag_ZN13MainMenuBlockE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainMenuBlock"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainMenuBlock, qt_meta_tag_ZN13MainMenuBlockE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainMenuBlock::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MainMenuBlockE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MainMenuBlockE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13MainMenuBlockE_t>.metaTypes,
    nullptr
} };

void MainMenuBlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainMenuBlock *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *MainMenuBlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainMenuBlock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13MainMenuBlockE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainMenuBlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN9ANotifierE_t {};
} // unnamed namespace

template <> constexpr inline auto ANotifier::qt_create_metaobjectdata<qt_meta_tag_ZN9ANotifierE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ANotifier",
        "newWindowRequested",
        "",
        "codePageToolsRequested",
        "encodingToolsRequested",
        "sessionRequested",
        "splitFileRequested",
        "viewMapRequested",
        "raiseWindowsRequested",
        "quitRequested",
        "onActivated",
        "QSystemTrayIcon::ActivationReason",
        "reason",
        "onMessageClicked",
        "onNewWindow",
        "onEncodingTools",
        "onCodePageTools",
        "onManageSessions",
        "onSplitFile",
        "onViewMapXml",
        "onRaiseWindow",
        "onQuit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newWindowRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'codePageToolsRequested'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'encodingToolsRequested'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sessionRequested'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'splitFileRequested'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewMapRequested'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'raiseWindowsRequested'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'quitRequested'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onActivated'
        QtMocHelpers::SlotData<void(QSystemTrayIcon::ActivationReason)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'onMessageClicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNewWindow'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onEncodingTools'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCodePageTools'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onManageSessions'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSplitFile'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onViewMapXml'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onRaiseWindow'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onQuit'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ANotifier, qt_meta_tag_ZN9ANotifierE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ANotifier::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ANotifierE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ANotifierE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9ANotifierE_t>.metaTypes,
    nullptr
} };

void ANotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ANotifier *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newWindowRequested(); break;
        case 1: _t->codePageToolsRequested(); break;
        case 2: _t->encodingToolsRequested(); break;
        case 3: _t->sessionRequested(); break;
        case 4: _t->splitFileRequested(); break;
        case 5: _t->viewMapRequested(); break;
        case 6: _t->raiseWindowsRequested(); break;
        case 7: _t->quitRequested(); break;
        case 8: _t->onActivated((*reinterpret_cast<std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 9: _t->onMessageClicked(); break;
        case 10: _t->onNewWindow(); break;
        case 11: _t->onEncodingTools(); break;
        case 12: _t->onCodePageTools(); break;
        case 13: _t->onManageSessions(); break;
        case 14: _t->onSplitFile(); break;
        case 15: _t->onViewMapXml(); break;
        case 16: _t->onRaiseWindow(); break;
        case 17: _t->onQuit(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::newWindowRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::codePageToolsRequested, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::encodingToolsRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::sessionRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::splitFileRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::viewMapRequested, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::raiseWindowsRequested, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ANotifier::*)()>(_a, &ANotifier::quitRequested, 7))
            return;
    }
}

const QMetaObject *ANotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ANotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9ANotifierE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Notifier"))
        return static_cast< Notifier*>(this);
    return QObject::qt_metacast(_clname);
}

int ANotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ANotifier::newWindowRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ANotifier::codePageToolsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ANotifier::encodingToolsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ANotifier::sessionRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ANotifier::splitFileRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ANotifier::viewMapRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ANotifier::raiseWindowsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ANotifier::quitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
