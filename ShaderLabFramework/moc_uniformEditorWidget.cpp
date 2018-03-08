/****************************************************************************
** Meta object code from reading C++ file 'uniformEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/uniformEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uniformEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UniformEditorWidget_t {
    QByteArrayData data[23];
    char stringdata0[443];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UniformEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UniformEditorWidget_t qt_meta_stringdata_UniformEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UniformEditorWidget"
QT_MOC_LITERAL(1, 20, 8), // "updateGL"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "textureBrowse"
QT_MOC_LITERAL(4, 44, 19), // "updateShaderProgram"
QT_MOC_LITERAL(5, 64, 20), // "updateUniformsSignal"
QT_MOC_LITERAL(6, 85, 24), // "uniformComboBoxActivated"
QT_MOC_LITERAL(7, 110, 5), // "index"
QT_MOC_LITERAL(8, 116, 13), // "updateUniform"
QT_MOC_LITERAL(9, 130, 5), // "value"
QT_MOC_LITERAL(10, 136, 21), // "updateUniformVector2D"
QT_MOC_LITERAL(11, 158, 21), // "updateUniformVector3D"
QT_MOC_LITERAL(12, 180, 21), // "updateUniformVector4D"
QT_MOC_LITERAL(13, 202, 22), // "updateUniformMatrix3x3"
QT_MOC_LITERAL(14, 225, 22), // "updateUniformMatrix4x4"
QT_MOC_LITERAL(15, 248, 20), // "updateUniformDisplay"
QT_MOC_LITERAL(16, 269, 28), // "updateUniformDisplayVector2D"
QT_MOC_LITERAL(17, 298, 28), // "updateUniformDisplayVector3D"
QT_MOC_LITERAL(18, 327, 28), // "updateUniformDisplayVector4D"
QT_MOC_LITERAL(19, 356, 29), // "updateUniformDisplayMatrix3x3"
QT_MOC_LITERAL(20, 386, 29), // "updateUniformDisplayMatrix4x4"
QT_MOC_LITERAL(21, 416, 17), // "updateTexturePath"
QT_MOC_LITERAL(22, 434, 8) // "filePath"

    },
    "UniformEditorWidget\0updateGL\0\0"
    "textureBrowse\0updateShaderProgram\0"
    "updateUniformsSignal\0uniformComboBoxActivated\0"
    "index\0updateUniform\0value\0"
    "updateUniformVector2D\0updateUniformVector3D\0"
    "updateUniformVector4D\0updateUniformMatrix3x3\0"
    "updateUniformMatrix4x4\0updateUniformDisplay\0"
    "updateUniformDisplayVector2D\0"
    "updateUniformDisplayVector3D\0"
    "updateUniformDisplayVector4D\0"
    "updateUniformDisplayMatrix3x3\0"
    "updateUniformDisplayMatrix4x4\0"
    "updateTexturePath\0filePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UniformEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    2,  115,    2, 0x06 /* Public */,
       4,    0,  120,    2, 0x06 /* Public */,
       5,    0,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  122,    2, 0x0a /* Public */,
       8,    1,  125,    2, 0x0a /* Public */,
       8,    1,  128,    2, 0x0a /* Public */,
      10,    1,  131,    2, 0x0a /* Public */,
      11,    1,  134,    2, 0x0a /* Public */,
      12,    1,  137,    2, 0x0a /* Public */,
      13,    1,  140,    2, 0x0a /* Public */,
      14,    1,  143,    2, 0x0a /* Public */,
      15,    1,  146,    2, 0x0a /* Public */,
      15,    1,  149,    2, 0x0a /* Public */,
      16,    1,  152,    2, 0x0a /* Public */,
      17,    1,  155,    2, 0x0a /* Public */,
      18,    1,  158,    2, 0x0a /* Public */,
      19,    1,  161,    2, 0x0a /* Public */,
      20,    1,  164,    2, 0x0a /* Public */,
      21,    1,  167,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QVector4D,    9,
    QMetaType::Void, QMetaType::QVector4D,    9,
    QMetaType::Void, QMetaType::QVector4D,    9,
    QMetaType::Void, QMetaType::QMatrix4x4,    9,
    QMetaType::Void, QMetaType::QMatrix4x4,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QVector4D,    9,
    QMetaType::Void, QMetaType::QVector4D,    9,
    QMetaType::Void, QMetaType::QVector4D,    9,
    QMetaType::Void, QMetaType::QMatrix4x4,    9,
    QMetaType::Void, QMetaType::QMatrix4x4,    9,
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void UniformEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UniformEditorWidget *_t = static_cast<UniformEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGL(); break;
        case 1: _t->textureBrowse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->updateShaderProgram(); break;
        case 3: _t->updateUniformsSignal(); break;
        case 4: _t->uniformComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateUniform((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->updateUniform((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateUniformVector2D((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 8: _t->updateUniformVector3D((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 9: _t->updateUniformVector4D((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 10: _t->updateUniformMatrix3x3((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 11: _t->updateUniformMatrix4x4((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 12: _t->updateUniformDisplay((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->updateUniformDisplay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateUniformDisplayVector2D((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 15: _t->updateUniformDisplayVector3D((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 16: _t->updateUniformDisplayVector4D((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 17: _t->updateUniformDisplayMatrix3x3((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 18: _t->updateUniformDisplayMatrix4x4((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 19: _t->updateTexturePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UniformEditorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UniformEditorWidget::updateGL)) {
                *result = 0;
            }
        }
        {
            typedef void (UniformEditorWidget::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UniformEditorWidget::textureBrowse)) {
                *result = 1;
            }
        }
        {
            typedef void (UniformEditorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UniformEditorWidget::updateShaderProgram)) {
                *result = 2;
            }
        }
        {
            typedef void (UniformEditorWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UniformEditorWidget::updateUniformsSignal)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject UniformEditorWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UniformEditorWidget.data,
      qt_meta_data_UniformEditorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UniformEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UniformEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UniformEditorWidget.stringdata0))
        return static_cast<void*>(const_cast< UniformEditorWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UniformEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void UniformEditorWidget::updateGL()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UniformEditorWidget::textureBrowse(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UniformEditorWidget::updateShaderProgram()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void UniformEditorWidget::updateUniformsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
