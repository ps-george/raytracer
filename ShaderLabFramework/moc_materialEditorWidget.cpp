/****************************************************************************
** Meta object code from reading C++ file 'materialEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/materialEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'materialEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MaterialEditorWidget_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MaterialEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MaterialEditorWidget_t qt_meta_stringdata_MaterialEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MaterialEditorWidget"
QT_MOC_LITERAL(1, 21, 8), // "updateGL"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "updateMaterial"
QT_MOC_LITERAL(4, 46, 8), // "objectID"
QT_MOC_LITERAL(5, 55, 8), // "Material"
QT_MOC_LITERAL(6, 64, 8), // "material"
QT_MOC_LITERAL(7, 73, 17) // "updateSceneObject"

    },
    "MaterialEditorWidget\0updateGL\0\0"
    "updateMaterial\0objectID\0Material\0"
    "material\0updateSceneObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MaterialEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    2,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void MaterialEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MaterialEditorWidget *_t = static_cast<MaterialEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGL(); break;
        case 1: _t->updateMaterial((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Material(*)>(_a[2]))); break;
        case 2: _t->updateSceneObject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MaterialEditorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MaterialEditorWidget::updateGL)) {
                *result = 0;
            }
        }
        {
            typedef void (MaterialEditorWidget::*_t)(int , Material );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MaterialEditorWidget::updateMaterial)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject MaterialEditorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MaterialEditorWidget.data,
      qt_meta_data_MaterialEditorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MaterialEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaterialEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialEditorWidget.stringdata0))
        return static_cast<void*>(const_cast< MaterialEditorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MaterialEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MaterialEditorWidget::updateGL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MaterialEditorWidget::updateMaterial(int _t1, Material _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
