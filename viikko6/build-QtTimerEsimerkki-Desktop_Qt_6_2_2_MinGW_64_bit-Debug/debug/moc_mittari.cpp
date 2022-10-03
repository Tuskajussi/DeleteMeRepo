/****************************************************************************
** Meta object code from reading C++ file 'mittari.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QtTimerEsimerkki/mittari.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mittari.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mittari_t {
    const uint offsetsAndSize[16];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mittari_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mittari_t qt_meta_stringdata_mittari = {
    {
QT_MOC_LITERAL(0, 7), // "mittari"
QT_MOC_LITERAL(8, 21), // "readTemperatureSignal"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 11), // "printSignal"
QT_MOC_LITERAL(43, 8), // "finished"
QT_MOC_LITERAL(52, 9), // "beginSlot"
QT_MOC_LITERAL(62, 15), // "temperatureSlot"
QT_MOC_LITERAL(78, 11) // "printOkSlot"

    },
    "mittari\0readTemperatureSignal\0\0"
    "printSignal\0finished\0beginSlot\0"
    "temperatureSlot\0printOkSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mittari[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    1,   51,    2, 0x06,    2 /* Public */,
       4,    0,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   55,    2, 0x0a,    5 /* Public */,
       6,    1,   56,    2, 0x0a,    6 /* Public */,
       7,    0,   59,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void,

       0        // eod
};

void mittari::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mittari *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readTemperatureSignal(); break;
        case 1: _t->printSignal((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->beginSlot(); break;
        case 4: _t->temperatureSlot((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->printOkSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mittari::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mittari::readTemperatureSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mittari::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mittari::printSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mittari::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mittari::finished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject mittari::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mittari.offsetsAndSize,
    qt_meta_data_mittari,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mittari_t
, QtPrivate::TypeAndForceComplete<mittari, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<float, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *mittari::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mittari::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mittari.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mittari::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void mittari::readTemperatureSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mittari::printSignal(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mittari::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
