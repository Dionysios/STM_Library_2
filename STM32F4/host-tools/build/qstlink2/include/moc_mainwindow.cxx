/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu May 2 23:36:18 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qstlink2/include/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x0a,
      27,   11,   11,   11, 0x0a,
      42,   40,   11,   11, 0x0a,
      68,   66,   11,   11, 0x0a,
     101,   90,   11,   11, 0x0a,
     125,  120,   11,   11, 0x0a,
     142,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     174,  166,   11,   11, 0x08,
     187,   66,   11,   11, 0x08,
     200,   11,   11,   11, 0x08,
     213,   11,   11,   11, 0x08,
     223,   11,   12,   11, 0x08,
     232,   11,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     251,   11,   11,   11, 0x08,
     261,   11,   11,   11, 0x08,
     272,   11,   11,   11, 0x08,
     284,   11,   11,   11, 0x08,
     293,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     317,   11,   11,   11, 0x08,
     330,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0bool\0Connect()\0Disconnect()\0"
    "p\0updateProgress(quint32)\0s\0"
    "updateStatus(QString)\0path,erase\0"
    "Send(QString,bool)\0path\0Receive(QString)\0"
    "eraseFlash()\0showHelp()\0enabled\0"
    "lockUI(bool)\0log(QString)\0getVersion()\0"
    "getMode()\0getMCU()\0getStatus()\0Send()\0"
    "Receive()\0ResetMCU()\0HardReset()\0"
    "RunMCU()\0HaltMCU()\0setModeJTAG()\0"
    "setModeSWD()\0on_b_sendLast_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = Connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: Disconnect(); break;
        case 2: updateProgress((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 3: updateStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: Send((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 5: Receive((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: eraseFlash(); break;
        case 7: showHelp(); break;
        case 8: lockUI((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: log((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: getVersion(); break;
        case 11: getMode(); break;
        case 12: { bool _r = getMCU();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: getStatus(); break;
        case 14: Send(); break;
        case 15: Receive(); break;
        case 16: ResetMCU(); break;
        case 17: HardReset(); break;
        case 18: RunMCU(); break;
        case 19: HaltMCU(); break;
        case 20: setModeJTAG(); break;
        case 21: setModeSWD(); break;
        case 22: on_b_sendLast_clicked(); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
