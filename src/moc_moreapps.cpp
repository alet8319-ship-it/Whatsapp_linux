/****************************************************************************
** Meta object code from reading C++ file 'moreapps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgets/MoreApps/moreapps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moreapps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoreApps_t {
    QByteArrayData data[24];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoreApps_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoreApps_t qt_meta_stringdata_MoreApps = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MoreApps"
QT_MOC_LITERAL(1, 9, 11), // "getAppsMeta"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "applyFilter"
QT_MOC_LITERAL(4, 34, 18), // "addToAppFilterList"
QT_MOC_LITERAL(5, 53, 7), // "appName"
QT_MOC_LITERAL(6, 61, 17), // "prepareAppsToShow"
QT_MOC_LITERAL(7, 79, 14), // "QList<AppItem>"
QT_MOC_LITERAL(8, 94, 5), // "bytes"
QT_MOC_LITERAL(9, 100, 8), // "showApps"
QT_MOC_LITERAL(10, 109, 13), // "setRemoteIcon"
QT_MOC_LITERAL(11, 123, 7), // "iconUrl"
QT_MOC_LITERAL(12, 131, 7), // "QLabel*"
QT_MOC_LITERAL(13, 139, 2), // "lb"
QT_MOC_LITERAL(14, 142, 18), // "getAppsToShowCount"
QT_MOC_LITERAL(15, 161, 4), // "init"
QT_MOC_LITERAL(16, 166, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(17, 189, 3), // "nam"
QT_MOC_LITERAL(18, 193, 18), // "initNetworkManager"
QT_MOC_LITERAL(19, 212, 17), // "applyRemoteFilter"
QT_MOC_LITERAL(20, 230, 15), // "remoteFilterUrl"
QT_MOC_LITERAL(21, 246, 11), // "getMaxWidth"
QT_MOC_LITERAL(22, 258, 1), // "x"
QT_MOC_LITERAL(23, 260, 1) // "y"

    },
    "MoreApps\0getAppsMeta\0\0applyFilter\0"
    "addToAppFilterList\0appName\0prepareAppsToShow\0"
    "QList<AppItem>\0bytes\0showApps\0"
    "setRemoteIcon\0iconUrl\0QLabel*\0lb\0"
    "getAppsToShowCount\0init\0QNetworkAccessManager*\0"
    "nam\0initNetworkManager\0applyRemoteFilter\0"
    "remoteFilterUrl\0getMaxWidth\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoreApps[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    1,   86,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    2,   93,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x28 /* Private | MethodCloned */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    1,  102,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x28 /* Private | MethodCloned */,
      18,    1,  106,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x28 /* Private | MethodCloned */,
      19,    1,  110,    2, 0x08 /* Private */,
      21,    2,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    0x80000000 | 7, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   20,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   22,   23,

       0        // eod
};

void MoreApps::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoreApps *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getAppsMeta(); break;
        case 1: _t->applyFilter(); break;
        case 2: _t->addToAppFilterList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QList<AppItem> _r = _t->prepareAppsToShow((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<AppItem>*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->showApps(); break;
        case 5: _t->setRemoteIcon((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QLabel*(*)>(_a[2]))); break;
        case 6: _t->setRemoteIcon((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: { int _r = _t->getAppsToShowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->init((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1]))); break;
        case 9: _t->init(); break;
        case 10: _t->initNetworkManager((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1]))); break;
        case 11: _t->initNetworkManager(); break;
        case 12: _t->applyRemoteFilter((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 13: { int _r = _t->getMaxWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLabel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoreApps::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MoreApps.data,
    qt_meta_data_MoreApps,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoreApps::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoreApps::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoreApps.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MoreApps::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
