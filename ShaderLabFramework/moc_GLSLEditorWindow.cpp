/****************************************************************************
** Meta object code from reading C++ file 'GLSLEditorWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/GLSLEditorWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLSLEditorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLSLEditorWindow_t {
    QByteArrayData data[16];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLSLEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLSLEditorWindow_t qt_meta_stringdata_GLSLEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GLSLEditorWindow"
QT_MOC_LITERAL(1, 17, 9), // "updateLog"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "displayLog"
QT_MOC_LITERAL(4, 39, 16), // "updateUniformTab"
QT_MOC_LITERAL(5, 56, 19), // "updateShaderProgram"
QT_MOC_LITERAL(6, 76, 14), // "compileAndLink"
QT_MOC_LITERAL(7, 91, 18), // "savePipelineAction"
QT_MOC_LITERAL(8, 110, 20), // "savePipelineAsAction"
QT_MOC_LITERAL(9, 131, 12), // "loadPipeline"
QT_MOC_LITERAL(10, 144, 18), // "loadFromFileAction"
QT_MOC_LITERAL(11, 163, 16), // "saveToFileAction"
QT_MOC_LITERAL(12, 180, 21), // "exitApplicationAction"
QT_MOC_LITERAL(13, 202, 19), // "documentWasModified"
QT_MOC_LITERAL(14, 222, 6), // "saveAs"
QT_MOC_LITERAL(15, 229, 5) // "about"

    },
    "GLSLEditorWindow\0updateLog\0\0displayLog\0"
    "updateUniformTab\0updateShaderProgram\0"
    "compileAndLink\0savePipelineAction\0"
    "savePipelineAsAction\0loadPipeline\0"
    "loadFromFileAction\0saveToFileAction\0"
    "exitApplicationAction\0documentWasModified\0"
    "saveAs\0about"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLSLEditorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    0,   87,    2, 0x06 /* Public */,
       4,    0,   88,    2, 0x06 /* Public */,
       5,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   90,    2, 0x0a /* Public */,
       7,    0,   91,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x0a /* Public */,
      11,    0,   95,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,
      14,    0,   98,    2, 0x0a /* Public */,
      15,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void GLSLEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLSLEditorWindow *_t = static_cast<GLSLEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->displayLog(); break;
        case 2: _t->updateUniformTab(); break;
        case 3: _t->updateShaderProgram(); break;
        case 4: _t->compileAndLink(); break;
        case 5: { bool _r = _t->savePipelineAction();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->savePipelineAsAction();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->loadPipeline();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->loadFromFileAction(); break;
        case 9: { bool _r = _t->saveToFileAction();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->exitApplicationAction(); break;
        case 11: _t->documentWasModified(); break;
        case 12: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->about(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLSLEditorWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLSLEditorWindow::updateLog)) {
                *result = 0;
            }
        }
        {
            typedef void (GLSLEditorWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLSLEditorWindow::displayLog)) {
                *result = 1;
            }
        }
        {
            typedef void (GLSLEditorWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLSLEditorWindow::updateUniformTab)) {
                *result = 2;
            }
        }
        {
            typedef void (GLSLEditorWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLSLEditorWindow::updateShaderProgram)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject GLSLEditorWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GLSLEditorWindow.data,
      qt_meta_data_GLSLEditorWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLSLEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLSLEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLSLEditorWindow.stringdata0))
        return static_cast<void*>(const_cast< GLSLEditorWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GLSLEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void GLSLEditorWindow::updateLog(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLSLEditorWindow::displayLog()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GLSLEditorWindow::updateUniformTab()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void GLSLEditorWindow::updateShaderProgram()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
