/****************************************************************************
** Meta object code from reading C++ file 'byte_converter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "byte_converter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'byte_converter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_byte_converter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      41,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_byte_converter[] = {
    "byte_converter\0\0decimal_changed(QString)\0"
    "heximal_changed(QString)\0"
};

void byte_converter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        byte_converter *_t = static_cast<byte_converter *>(_o);
        switch (_id) {
        case 0: _t->decimal_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->heximal_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData byte_converter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject byte_converter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_byte_converter,
      qt_meta_data_byte_converter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &byte_converter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *byte_converter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *byte_converter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_byte_converter))
        return static_cast<void*>(const_cast< byte_converter*>(this));
    return QDialog::qt_metacast(_clname);
}

int byte_converter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
