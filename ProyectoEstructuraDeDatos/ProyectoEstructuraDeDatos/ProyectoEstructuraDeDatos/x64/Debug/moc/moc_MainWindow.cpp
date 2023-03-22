/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainWindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[31];
    char stringdata5[30];
    char stringdata6[19];
    char stringdata7[18];
    char stringdata8[20];
    char stringdata9[25];
    char stringdata10[17];
    char stringdata11[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "on_toolbarbutton_clicked"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 27),  // "on_crearlistabutton_clicked"
        QT_MOC_LITERAL(65, 30),  // "on_editararchivobutton_clicked"
        QT_MOC_LITERAL(96, 29),  // "on_guardarlistabutton_clicked"
        QT_MOC_LITERAL(126, 18),  // "on_agregar_clicked"
        QT_MOC_LITERAL(145, 17),  // "on_buscar_clicked"
        QT_MOC_LITERAL(163, 19),  // "on_eliminar_clicked"
        QT_MOC_LITERAL(183, 24),  // "on_listaEnlazada_clicked"
        QT_MOC_LITERAL(208, 16),  // "on_queue_clicked"
        QT_MOC_LITERAL(225, 16)   // "on_stack_clicked"
    },
    "MainWindow",
    "on_toolbarbutton_clicked",
    "",
    "on_crearlistabutton_clicked",
    "on_editararchivobutton_clicked",
    "on_guardarlistabutton_clicked",
    "on_agregar_clicked",
    "on_buscar_clicked",
    "on_eliminar_clicked",
    "on_listaEnlazada_clicked",
    "on_queue_clicked",
    "on_stack_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    0,   83,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_toolbarbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_crearlistabutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_editararchivobutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_guardarlistabutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_agregar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buscar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_eliminar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listaEnlazada_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_queue_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stack_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_toolbarbutton_clicked(); break;
        case 1: _t->on_crearlistabutton_clicked(); break;
        case 2: _t->on_editararchivobutton_clicked(); break;
        case 3: _t->on_guardarlistabutton_clicked(); break;
        case 4: _t->on_agregar_clicked(); break;
        case 5: _t->on_buscar_clicked(); break;
        case 6: _t->on_eliminar_clicked(); break;
        case 7: _t->on_listaEnlazada_clicked(); break;
        case 8: _t->on_queue_clicked(); break;
        case 9: _t->on_stack_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
