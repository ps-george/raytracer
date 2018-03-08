/****************************************************************************
** Meta object code from reading C++ file 'Vector4Widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/Vector4Widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vector4Widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Vector4Widget_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Vector4Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Vector4Widget_t qt_meta_stringdata_Vector4Widget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Vector4Widget"
QT_MOC_LITERAL(1, 14, 13), // "vectorChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "vector"
QT_MOC_LITERAL(4, 36, 15), // "updateSpinBoxes"
QT_MOC_LITERAL(5, 52, 5), // "set2D"
QT_MOC_LITERAL(6, 58, 5), // "set3D"
QT_MOC_LITERAL(7, 64, 5), // "set4D"
QT_MOC_LITERAL(8, 70, 12), // "updateVector"
QT_MOC_LITERAL(9, 83, 3) // "val"

    },
    "Vector4Widget\0vectorChanged\0\0vector\0"
    "updateSpinBoxes\0set2D\0set3D\0set4D\0"
    "updateVector\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Vector4Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       5,    0,   50,    2, 0x0a /* Public */,
       6,    0,   51,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x0a /* Public */,
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector4D,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QVector4D,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void Vector4Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Vector4Widget *_t = static_cast<Vector4Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vectorChanged((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 1: _t->updateSpinBoxes((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 2: _t->set2D(); break;
        case 3: _t->set3D(); break;
        case 4: _t->set4D(); break;
        case 5: _t->updateVector((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Vector4Widget::*_t)(QVector4D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Vector4Widget::vectorChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Vector4Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vector4Widget.data,
      qt_meta_data_Vector4Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Vector4Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vector4Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Vector4Widget.stringdata0))
        return static_cast<void*>(const_cast< Vector4Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Vector4Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Vector4Widget::vectorChanged(QVector4D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
