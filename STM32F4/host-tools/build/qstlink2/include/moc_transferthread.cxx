/****************************************************************************
** Meta object code from reading C++ file 'transferthread.h'
**
** Created: Thu May 2 23:36:18 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qstlink2/include/transferthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_transferThread[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x05,
      42,   40,   15,   15, 0x05,
      62,   40,   15,   15, 0x05,
      89,   81,   15,   15, 0x05,
     104,   40,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     121,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_transferThread[] = {
    "transferThread\0\0p\0sendProgress(quint32)\0"
    "s\0sendStatus(QString)\0sendError(QString)\0"
    "enabled\0sendLock(bool)\0sendLog(QString)\0"
    "halt()\0"
};

const QMetaObject transferThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_transferThread,
      qt_meta_data_transferThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &transferThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *transferThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *transferThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_transferThread))
        return static_cast<void*>(const_cast< transferThread*>(this));
    return QThread::qt_metacast(_clname);
}

int transferThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendProgress((*reinterpret_cast< const quint32(*)>(_a[1]))); break;
        case 1: sendStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: sendError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: sendLock((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: sendLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: halt(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void transferThread::sendProgress(const quint32 & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void transferThread::sendStatus(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void transferThread::sendError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void transferThread::sendLock(const bool & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void transferThread::sendLog(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
