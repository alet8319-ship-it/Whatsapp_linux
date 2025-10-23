/****************************************************************************
** Meta object code from reading C++ file 'webenginepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "webenginepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webenginepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebEnginePage_t {
    QByteArrayData data[31];
    char stringdata0[636];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebEnginePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebEnginePage_t qt_meta_stringdata_WebEnginePage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WebEnginePage"
QT_MOC_LITERAL(1, 14, 32), // "handleFeaturePermissionRequested"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 14), // "securityOrigin"
QT_MOC_LITERAL(4, 63, 23), // "QWebEnginePage::Feature"
QT_MOC_LITERAL(5, 87, 7), // "feature"
QT_MOC_LITERAL(6, 95, 18), // "handleLoadFinished"
QT_MOC_LITERAL(7, 114, 2), // "ok"
QT_MOC_LITERAL(8, 117, 24), // "javaScriptConsoleMessage"
QT_MOC_LITERAL(9, 142, 44), // "WebEnginePage::JavaScriptCons..."
QT_MOC_LITERAL(10, 187, 5), // "level"
QT_MOC_LITERAL(11, 193, 7), // "message"
QT_MOC_LITERAL(12, 201, 6), // "lineId"
QT_MOC_LITERAL(13, 208, 8), // "sourceId"
QT_MOC_LITERAL(14, 217, 28), // "handleAuthenticationRequired"
QT_MOC_LITERAL(15, 246, 10), // "requestUrl"
QT_MOC_LITERAL(16, 257, 15), // "QAuthenticator*"
QT_MOC_LITERAL(17, 273, 4), // "auth"
QT_MOC_LITERAL(18, 278, 33), // "handleProxyAuthenticationRequ..."
QT_MOC_LITERAL(19, 312, 9), // "proxyHost"
QT_MOC_LITERAL(20, 322, 38), // "handleRegisterProtocolHandler..."
QT_MOC_LITERAL(21, 361, 40), // "QWebEngineRegisterProtocolHan..."
QT_MOC_LITERAL(22, 402, 7), // "request"
QT_MOC_LITERAL(23, 410, 29), // "handleSelectClientCertificate"
QT_MOC_LITERAL(24, 440, 36), // "QWebEngineClientCertificateSe..."
QT_MOC_LITERAL(25, 477, 19), // "clientCertSelection"
QT_MOC_LITERAL(26, 497, 25), // "fullScreenRequestedByPage"
QT_MOC_LITERAL(27, 523, 27), // "QWebEngineFullScreenRequest"
QT_MOC_LITERAL(28, 551, 34), // "injectPreventScrollWheelZoomH..."
QT_MOC_LITERAL(29, 586, 25), // "injectFullWidthJavaScript"
QT_MOC_LITERAL(30, 612, 23) // "injectNewChatJavaScript"

    },
    "WebEnginePage\0handleFeaturePermissionRequested\0"
    "\0securityOrigin\0QWebEnginePage::Feature\0"
    "feature\0handleLoadFinished\0ok\0"
    "javaScriptConsoleMessage\0"
    "WebEnginePage::JavaScriptConsoleMessageLevel\0"
    "level\0message\0lineId\0sourceId\0"
    "handleAuthenticationRequired\0requestUrl\0"
    "QAuthenticator*\0auth\0"
    "handleProxyAuthenticationRequired\0"
    "proxyHost\0handleRegisterProtocolHandlerRequested\0"
    "QWebEngineRegisterProtocolHandlerRequest\0"
    "request\0handleSelectClientCertificate\0"
    "QWebEngineClientCertificateSelection\0"
    "clientCertSelection\0fullScreenRequestedByPage\0"
    "QWebEngineFullScreenRequest\0"
    "injectPreventScrollWheelZoomHelper\0"
    "injectFullWidthJavaScript\0"
    "injectNewChatJavaScript"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebEnginePage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       8,    4,   77,    2, 0x09 /* Protected */,
      14,    2,   86,    2, 0x08 /* Private */,
      18,    3,   91,    2, 0x08 /* Private */,
      20,    1,   98,    2, 0x08 /* Private */,
      23,    1,  101,    2, 0x08 /* Private */,
      26,    1,  104,    2, 0x08 /* Private */,
      28,    0,  107,    2, 0x08 /* Private */,
      29,    0,  108,    2, 0x08 /* Private */,
      30,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::Int, QMetaType::QString,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 16,   15,   17,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 16, QMetaType::QString,   15,   17,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WebEnginePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebEnginePage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleFeaturePermissionRequested((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QWebEnginePage::Feature(*)>(_a[2]))); break;
        case 1: _t->handleLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->javaScriptConsoleMessage((*reinterpret_cast< WebEnginePage::JavaScriptConsoleMessageLevel(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 3: _t->handleAuthenticationRequired((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 4: _t->handleProxyAuthenticationRequired((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->handleRegisterProtocolHandlerRequested((*reinterpret_cast< QWebEngineRegisterProtocolHandlerRequest(*)>(_a[1]))); break;
        case 6: _t->handleSelectClientCertificate((*reinterpret_cast< QWebEngineClientCertificateSelection(*)>(_a[1]))); break;
        case 7: _t->fullScreenRequestedByPage((*reinterpret_cast< QWebEngineFullScreenRequest(*)>(_a[1]))); break;
        case 8: _t->injectPreventScrollWheelZoomHelper(); break;
        case 9: _t->injectFullWidthJavaScript(); break;
        case 10: _t->injectNewChatJavaScript(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebEnginePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWebEnginePage::staticMetaObject>(),
    qt_meta_stringdata_WebEnginePage.data,
    qt_meta_data_WebEnginePage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebEnginePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebEnginePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebEnginePage.stringdata0))
        return static_cast<void*>(this);
    return QWebEnginePage::qt_metacast(_clname);
}

int WebEnginePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEnginePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
