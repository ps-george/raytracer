/****************************************************************************
** Meta object code from reading C++ file 'GLSLCodeEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/GLSLCodeEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLSLCodeEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLSLCodeEditor_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLSLCodeEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLSLCodeEditor_t qt_meta_stringdata_GLSLCodeEditor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GLSLCodeEditor"
QT_MOC_LITERAL(1, 15, 16), // "updateMainWindow"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "shaderChangedCompletely"
QT_MOC_LITERAL(4, 57, 23) // "documentContentsChanged"

    },
    "GLSLCodeEditor\0updateMainWindow\0\0"
    "shaderChangedCompletely\0documentContentsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLSLCodeEditor[] = {

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
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GLSLCodeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLSLCodeEditor *_t = static_cast<GLSLCodeEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMainWindow(); break;
        case 1: _t->shaderChangedCompletely(); break;
        case 2: _t->documentContentsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLSLCodeEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLSLCodeEditor::updateMainWindow)) {
                *result = 0;
            }
        }
        {
            typedef void (GLSLCodeEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLSLCodeEditor::shaderChangedCompletely)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GLSLCodeEditor::staticMetaObject = {
    { &CodeEditor::staticMetaObject, qt_meta_stringdata_GLSLCodeEditor.data,
      qt_meta_data_GLSLCodeEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLSLCodeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLSLCodeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLSLCodeEditor.stringdata0))
        return static_cast<void*>(const_cast< GLSLCodeEditor*>(this));
    return CodeEditor::qt_metacast(_clname);
}

int GLSLCodeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CodeEditor::qt_metacall(_c, _id, _a);
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
void GLSLCodeEditor::updateMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void GLSLCodeEditor::shaderChangedCompletely()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
