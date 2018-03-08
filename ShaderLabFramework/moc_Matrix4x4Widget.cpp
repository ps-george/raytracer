/****************************************************************************
** Meta object code from reading C++ file 'Matrix4x4Widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/Matrix4x4Widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Matrix4x4Widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Matrix4x4Widget_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Matrix4x4Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Matrix4x4Widget_t qt_meta_stringdata_Matrix4x4Widget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Matrix4x4Widget"
QT_MOC_LITERAL(1, 16, 13), // "matrixChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "matrix"
QT_MOC_LITERAL(4, 38, 15), // "updateSpinBoxes"
QT_MOC_LITERAL(5, 54, 6), // "set3x3"
QT_MOC_LITERAL(6, 61, 6), // "set4x4"
QT_MOC_LITERAL(7, 68, 12) // "updateMatrix"

    },
    "Matrix4x4Widget\0matrixChanged\0\0matrix\0"
    "updateSpinBoxes\0set3x3\0set4x4\0"
    "updateMatrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Matrix4x4Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       5,    0,   45,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QMatrix4x4,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QMatrix4x4,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Matrix4x4Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Matrix4x4Widget *_t = static_cast<Matrix4x4Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matrixChanged((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 1: _t->updateSpinBoxes((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 2: _t->set3x3(); break;
        case 3: _t->set4x4(); break;
        case 4: _t->updateMatrix(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Matrix4x4Widget::*_t)(QMatrix4x4 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix4x4Widget::matrixChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Matrix4x4Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Matrix4x4Widget.data,
      qt_meta_data_Matrix4x4Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Matrix4x4Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Matrix4x4Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Matrix4x4Widget.stringdata0))
        return static_cast<void*>(const_cast< Matrix4x4Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Matrix4x4Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Matrix4x4Widget::matrixChanged(QMatrix4x4 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
