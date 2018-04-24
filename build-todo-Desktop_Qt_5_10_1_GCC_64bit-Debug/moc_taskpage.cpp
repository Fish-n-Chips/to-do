/****************************************************************************
** Meta object code from reading C++ file 'taskpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../todo/taskpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_taskPage_t {
    QByteArrayData data[19];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_taskPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_taskPage_t qt_meta_stringdata_taskPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "taskPage"
QT_MOC_LITERAL(1, 9, 12), // "force_rename"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 7), // "newFile"
QT_MOC_LITERAL(5, 36, 8), // "openFile"
QT_MOC_LITERAL(6, 45, 10), // "saveAsFile"
QT_MOC_LITERAL(7, 56, 8), // "saveFile"
QT_MOC_LITERAL(8, 65, 21), // "on_new_task_b_clicked"
QT_MOC_LITERAL(9, 87, 8), // "new_task"
QT_MOC_LITERAL(10, 96, 9), // "task_name"
QT_MOC_LITERAL(11, 106, 9), // "task_desc"
QT_MOC_LITERAL(12, 116, 11), // "remove_task"
QT_MOC_LITERAL(13, 128, 2), // "id"
QT_MOC_LITERAL(14, 131, 11), // "change_task"
QT_MOC_LITERAL(15, 143, 4), // "desc"
QT_MOC_LITERAL(16, 148, 6), // "status"
QT_MOC_LITERAL(17, 155, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(18, 187, 4) // "arg1"

    },
    "taskPage\0force_rename\0\0name\0newFile\0"
    "openFile\0saveAsFile\0saveFile\0"
    "on_new_task_b_clicked\0new_task\0task_name\0"
    "task_desc\0remove_task\0id\0change_task\0"
    "desc\0status\0on_comboBox_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_taskPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    2,   72,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      14,    4,   80,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,   15,   16,   13,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void taskPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        taskPage *_t = static_cast<taskPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->force_rename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->newFile(); break;
        case 2: _t->openFile(); break;
        case 3: _t->saveAsFile(); break;
        case 4: _t->saveFile(); break;
        case 5: _t->on_new_task_b_clicked(); break;
        case 6: _t->new_task((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->remove_task((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->change_task((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (taskPage::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&taskPage::force_rename)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject taskPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_taskPage.data,
      qt_meta_data_taskPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *taskPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *taskPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_taskPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int taskPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void taskPage::force_rename(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
