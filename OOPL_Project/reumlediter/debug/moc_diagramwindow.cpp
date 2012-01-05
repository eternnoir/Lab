/****************************************************************************
** Meta object code from reading C++ file 'diagramwindow.h'
**
** Created: Mon Dec 5 12:39:59 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/diagramwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_diagramwindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,
      72,   14,   14,   14, 0x08,
     106,   14,   14,   14, 0x08,
     137,   14,   14,   14, 0x08,
     162,   14,   14,   14, 0x08,
     189,   14,   14,   14, 0x08,
     211,   14,   14,   14, 0x08,
     238,   14,   14,   14, 0x08,
     267,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_diagramwindow[] = {
    "diagramwindow\0\0on_selectButton_clicked()\0"
    "on_associationButton_clicked()\0"
    "on_generalizationButton_clicked()\0"
    "on_compositionButton_clicked()\0"
    "on_classButton_clicked()\0"
    "on_usecaseButton_clicked()\0"
    "on_GUButton_clicked()\0on_actionGroup_triggered()\0"
    "on_actionUngruop_triggered()\0"
    "on_actionEdit_Name_triggered()\0"
};

const QMetaObject diagramwindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_diagramwindow,
      qt_meta_data_diagramwindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &diagramwindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *diagramwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *diagramwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_diagramwindow))
        return static_cast<void*>(const_cast< diagramwindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int diagramwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_selectButton_clicked(); break;
        case 1: on_associationButton_clicked(); break;
        case 2: on_generalizationButton_clicked(); break;
        case 3: on_compositionButton_clicked(); break;
        case 4: on_classButton_clicked(); break;
        case 5: on_usecaseButton_clicked(); break;
        case 6: on_GUButton_clicked(); break;
        case 7: on_actionGroup_triggered(); break;
        case 8: on_actionUngruop_triggered(); break;
        case 9: on_actionEdit_Name_triggered(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
