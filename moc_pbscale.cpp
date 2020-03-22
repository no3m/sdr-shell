/****************************************************************************
** Meta object code from reading C++ file 'pbscale.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pbscale.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pbscale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PassBandScale[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      33,   14,   14,   14, 0x05,
      51,   14,   14,   14, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PassBandScale[] = {
    "PassBandScale\0\0set_lower_pb(int)\0"
    "set_upper_pb(int)\0movement(int)\0"
};

void PassBandScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PassBandScale *_t = static_cast<PassBandScale *>(_o);
        switch (_id) {
        case 0: _t->set_lower_pb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->set_upper_pb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->movement((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PassBandScale::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PassBandScale::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PassBandScale,
      qt_meta_data_PassBandScale, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PassBandScale::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PassBandScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PassBandScale::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PassBandScale))
        return static_cast<void*>(const_cast< PassBandScale*>(this));
    return QWidget::qt_metacast(_clname);
}

int PassBandScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PassBandScale::set_lower_pb(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PassBandScale::set_upper_pb(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PassBandScale::movement(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
