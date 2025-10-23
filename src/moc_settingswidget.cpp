/****************************************************************************
** Meta object code from reading C++ file 'settingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "settingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsWidget_t {
    QByteArrayData data[90];
    char stringdata0[1921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsWidget_t qt_meta_stringdata_SettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsWidget"
QT_MOC_LITERAL(1, 15, 17), // "updateWindowTheme"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "updatePageTheme"
QT_MOC_LITERAL(4, 50, 11), // "muteToggled"
QT_MOC_LITERAL(5, 62, 7), // "checked"
QT_MOC_LITERAL(6, 70, 20), // "autoPlayMediaToggled"
QT_MOC_LITERAL(7, 91, 16), // "userAgentChanged"
QT_MOC_LITERAL(8, 108, 12), // "userAgentStr"
QT_MOC_LITERAL(9, 121, 8), // "initLock"
QT_MOC_LITERAL(10, 130, 18), // "changeLockPassword"
QT_MOC_LITERAL(11, 149, 11), // "dictChanged"
QT_MOC_LITERAL(12, 161, 4), // "dict"
QT_MOC_LITERAL(13, 166, 17), // "spellCheckChanged"
QT_MOC_LITERAL(14, 184, 31), // "notificationPopupTimeOutChanged"
QT_MOC_LITERAL(15, 216, 6), // "notify"
QT_MOC_LITERAL(16, 223, 7), // "message"
QT_MOC_LITERAL(17, 231, 11), // "zoomChanged"
QT_MOC_LITERAL(18, 243, 20), // "zoomMaximizedChanged"
QT_MOC_LITERAL(19, 264, 18), // "appAutoLockChanged"
QT_MOC_LITERAL(20, 283, 19), // "updateFullWidthView"
QT_MOC_LITERAL(21, 303, 7), // "refresh"
QT_MOC_LITERAL(22, 311, 21), // "updateDefaultUAButton"
QT_MOC_LITERAL(23, 333, 8), // "engineUA"
QT_MOC_LITERAL(24, 342, 17), // "appLockSetChecked"
QT_MOC_LITERAL(25, 360, 22), // "setCurrentPasswordText"
QT_MOC_LITERAL(26, 383, 3), // "str"
QT_MOC_LITERAL(27, 387, 16), // "loadDictionaries"
QT_MOC_LITERAL(28, 404, 12), // "dictionaries"
QT_MOC_LITERAL(29, 417, 12), // "clearAllData"
QT_MOC_LITERAL(30, 430, 21), // "autoAppLockSetChecked"
QT_MOC_LITERAL(31, 452, 27), // "updateAppLockPasswordViewer"
QT_MOC_LITERAL(32, 480, 24), // "appAutoLockingSetChecked"
QT_MOC_LITERAL(33, 505, 11), // "toggleTheme"
QT_MOC_LITERAL(34, 517, 11), // "eventFilter"
QT_MOC_LITERAL(35, 529, 3), // "obj"
QT_MOC_LITERAL(36, 533, 7), // "QEvent*"
QT_MOC_LITERAL(37, 541, 5), // "event"
QT_MOC_LITERAL(38, 547, 10), // "closeEvent"
QT_MOC_LITERAL(39, 558, 12), // "QCloseEvent*"
QT_MOC_LITERAL(40, 571, 13), // "keyPressEvent"
QT_MOC_LITERAL(41, 585, 10), // "QKeyEvent*"
QT_MOC_LITERAL(42, 596, 1), // "e"
QT_MOC_LITERAL(43, 598, 9), // "cachePath"
QT_MOC_LITERAL(44, 608, 21), // "persistentStoragePath"
QT_MOC_LITERAL(45, 630, 28), // "showSetApplockPasswordDialog"
QT_MOC_LITERAL(46, 659, 9), // "isChildOf"
QT_MOC_LITERAL(47, 669, 2), // "Of"
QT_MOC_LITERAL(48, 672, 4), // "self"
QT_MOC_LITERAL(49, 677, 16), // "applyThemeQuirks"
QT_MOC_LITERAL(50, 694, 30), // "on_appAutoLockcheckBox_toggled"
QT_MOC_LITERAL(51, 725, 27), // "on_applock_checkbox_toggled"
QT_MOC_LITERAL(52, 753, 39), // "on_autoLockDurationSpinbox_va..."
QT_MOC_LITERAL(53, 793, 4), // "arg1"
QT_MOC_LITERAL(54, 798, 32), // "on_autoPlayMediaCheckBox_toggled"
QT_MOC_LITERAL(55, 831, 33), // "on_automaticThemeCheckBox_tog..."
QT_MOC_LITERAL(56, 865, 42), // "on_changeDefaultDownloadLocat..."
QT_MOC_LITERAL(57, 908, 42), // "on_chnageCurrentPasswordPushB..."
QT_MOC_LITERAL(58, 951, 48), // "on_closeButtonActionComboBox_..."
QT_MOC_LITERAL(59, 1000, 5), // "index"
QT_MOC_LITERAL(60, 1006, 33), // "on_defaultUserAgentButton_cli..."
QT_MOC_LITERAL(61, 1040, 35), // "on_dictComboBox_currentIndexC..."
QT_MOC_LITERAL(62, 1076, 27), // "on_enableSpellCheck_toggled"
QT_MOC_LITERAL(63, 1104, 34), // "on_minimizeOnTrayIconClick_to..."
QT_MOC_LITERAL(64, 1139, 28), // "on_muteAudioCheckBox_toggled"
QT_MOC_LITERAL(65, 1168, 31), // "on_notificationCheckBox_toggled"
QT_MOC_LITERAL(66, 1200, 40), // "on_notificationCombo_currentI..."
QT_MOC_LITERAL(67, 1241, 42), // "on_notificationTimeOutspinBox..."
QT_MOC_LITERAL(68, 1284, 37), // "on_resetAppAutoLockPushButton..."
QT_MOC_LITERAL(69, 1322, 23), // "on_setUserAgent_clicked"
QT_MOC_LITERAL(70, 1346, 32), // "on_showPermissionsButton_clicked"
QT_MOC_LITERAL(71, 1379, 30), // "on_showShortcutsButton_clicked"
QT_MOC_LITERAL(72, 1410, 25), // "on_startMinimized_toggled"
QT_MOC_LITERAL(73, 1436, 35), // "on_styleComboBox_currentTextC..."
QT_MOC_LITERAL(74, 1472, 35), // "on_themeComboBox_currentTextC..."
QT_MOC_LITERAL(75, 1508, 26), // "on_tryNotification_clicked"
QT_MOC_LITERAL(76, 1535, 30), // "on_useNativeFileDialog_toggled"
QT_MOC_LITERAL(77, 1566, 36), // "on_userAgentLineEdit_editingF..."
QT_MOC_LITERAL(78, 1603, 32), // "on_userAgentLineEdit_textChanged"
QT_MOC_LITERAL(79, 1636, 23), // "on_viewPassword_clicked"
QT_MOC_LITERAL(80, 1660, 29), // "on_zoomMinusMaximized_clicked"
QT_MOC_LITERAL(81, 1690, 20), // "on_zoomMinus_clicked"
QT_MOC_LITERAL(82, 1711, 28), // "on_zoomPlusMaximized_clicked"
QT_MOC_LITERAL(83, 1740, 19), // "on_zoomPlus_clicked"
QT_MOC_LITERAL(84, 1760, 29), // "on_zoomResetMaximized_clicked"
QT_MOC_LITERAL(85, 1790, 20), // "on_zoomReset_clicked"
QT_MOC_LITERAL(86, 1811, 23), // "themeSwitchTimerTimeout"
QT_MOC_LITERAL(87, 1835, 20), // "updateAutomaticTheme"
QT_MOC_LITERAL(88, 1856, 32), // "on_fullWidthViewCheckbox_toggled"
QT_MOC_LITERAL(89, 1889, 31) // "on_deletePersistentData_clicked"

    },
    "SettingsWidget\0updateWindowTheme\0\0"
    "updatePageTheme\0muteToggled\0checked\0"
    "autoPlayMediaToggled\0userAgentChanged\0"
    "userAgentStr\0initLock\0changeLockPassword\0"
    "dictChanged\0dict\0spellCheckChanged\0"
    "notificationPopupTimeOutChanged\0notify\0"
    "message\0zoomChanged\0zoomMaximizedChanged\0"
    "appAutoLockChanged\0updateFullWidthView\0"
    "refresh\0updateDefaultUAButton\0engineUA\0"
    "appLockSetChecked\0setCurrentPasswordText\0"
    "str\0loadDictionaries\0dictionaries\0"
    "clearAllData\0autoAppLockSetChecked\0"
    "updateAppLockPasswordViewer\0"
    "appAutoLockingSetChecked\0toggleTheme\0"
    "eventFilter\0obj\0QEvent*\0event\0closeEvent\0"
    "QCloseEvent*\0keyPressEvent\0QKeyEvent*\0"
    "e\0cachePath\0persistentStoragePath\0"
    "showSetApplockPasswordDialog\0isChildOf\0"
    "Of\0self\0applyThemeQuirks\0"
    "on_appAutoLockcheckBox_toggled\0"
    "on_applock_checkbox_toggled\0"
    "on_autoLockDurationSpinbox_valueChanged\0"
    "arg1\0on_autoPlayMediaCheckBox_toggled\0"
    "on_automaticThemeCheckBox_toggled\0"
    "on_changeDefaultDownloadLocationPb_clicked\0"
    "on_chnageCurrentPasswordPushButton_clicked\0"
    "on_closeButtonActionComboBox_currentIndexChanged\0"
    "index\0on_defaultUserAgentButton_clicked\0"
    "on_dictComboBox_currentIndexChanged\0"
    "on_enableSpellCheck_toggled\0"
    "on_minimizeOnTrayIconClick_toggled\0"
    "on_muteAudioCheckBox_toggled\0"
    "on_notificationCheckBox_toggled\0"
    "on_notificationCombo_currentIndexChanged\0"
    "on_notificationTimeOutspinBox_valueChanged\0"
    "on_resetAppAutoLockPushButton_clicked\0"
    "on_setUserAgent_clicked\0"
    "on_showPermissionsButton_clicked\0"
    "on_showShortcutsButton_clicked\0"
    "on_startMinimized_toggled\0"
    "on_styleComboBox_currentTextChanged\0"
    "on_themeComboBox_currentTextChanged\0"
    "on_tryNotification_clicked\0"
    "on_useNativeFileDialog_toggled\0"
    "on_userAgentLineEdit_editingFinished\0"
    "on_userAgentLineEdit_textChanged\0"
    "on_viewPassword_clicked\0"
    "on_zoomMinusMaximized_clicked\0"
    "on_zoomMinus_clicked\0on_zoomPlusMaximized_clicked\0"
    "on_zoomPlus_clicked\0on_zoomResetMaximized_clicked\0"
    "on_zoomReset_clicked\0themeSwitchTimerTimeout\0"
    "updateAutomaticTheme\0"
    "on_fullWidthViewCheckbox_toggled\0"
    "on_deletePersistentData_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      71,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  369,    2, 0x06 /* Public */,
       3,    0,  370,    2, 0x06 /* Public */,
       4,    1,  371,    2, 0x06 /* Public */,
       6,    1,  374,    2, 0x06 /* Public */,
       7,    1,  377,    2, 0x06 /* Public */,
       9,    0,  380,    2, 0x06 /* Public */,
      10,    0,  381,    2, 0x06 /* Public */,
      11,    1,  382,    2, 0x06 /* Public */,
      13,    1,  385,    2, 0x06 /* Public */,
      14,    0,  388,    2, 0x06 /* Public */,
      15,    1,  389,    2, 0x06 /* Public */,
      17,    0,  392,    2, 0x06 /* Public */,
      18,    0,  393,    2, 0x06 /* Public */,
      19,    0,  394,    2, 0x06 /* Public */,
      20,    1,  395,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  398,    2, 0x0a /* Public */,
      22,    1,  399,    2, 0x0a /* Public */,
      24,    1,  402,    2, 0x0a /* Public */,
      25,    1,  405,    2, 0x0a /* Public */,
      27,    1,  408,    2, 0x0a /* Public */,
      29,    0,  411,    2, 0x0a /* Public */,
      30,    1,  412,    2, 0x0a /* Public */,
      31,    0,  415,    2, 0x0a /* Public */,
      32,    1,  416,    2, 0x0a /* Public */,
      33,    0,  419,    2, 0x0a /* Public */,
      34,    2,  420,    2, 0x09 /* Protected */,
      38,    1,  425,    2, 0x09 /* Protected */,
      40,    1,  428,    2, 0x09 /* Protected */,
      43,    0,  431,    2, 0x08 /* Private */,
      44,    0,  432,    2, 0x08 /* Private */,
      45,    0,  433,    2, 0x08 /* Private */,
      46,    2,  434,    2, 0x08 /* Private */,
      49,    0,  439,    2, 0x08 /* Private */,
      50,    1,  440,    2, 0x08 /* Private */,
      51,    1,  443,    2, 0x08 /* Private */,
      52,    1,  446,    2, 0x08 /* Private */,
      54,    1,  449,    2, 0x08 /* Private */,
      55,    1,  452,    2, 0x08 /* Private */,
      56,    0,  455,    2, 0x08 /* Private */,
      57,    0,  456,    2, 0x08 /* Private */,
      58,    1,  457,    2, 0x08 /* Private */,
      60,    0,  460,    2, 0x08 /* Private */,
      61,    1,  461,    2, 0x08 /* Private */,
      62,    1,  464,    2, 0x08 /* Private */,
      63,    1,  467,    2, 0x08 /* Private */,
      64,    1,  470,    2, 0x08 /* Private */,
      65,    1,  473,    2, 0x08 /* Private */,
      66,    1,  476,    2, 0x08 /* Private */,
      67,    1,  479,    2, 0x08 /* Private */,
      68,    0,  482,    2, 0x08 /* Private */,
      69,    0,  483,    2, 0x08 /* Private */,
      70,    0,  484,    2, 0x08 /* Private */,
      71,    0,  485,    2, 0x08 /* Private */,
      72,    1,  486,    2, 0x08 /* Private */,
      73,    1,  489,    2, 0x08 /* Private */,
      74,    1,  492,    2, 0x08 /* Private */,
      75,    0,  495,    2, 0x08 /* Private */,
      76,    1,  496,    2, 0x08 /* Private */,
      77,    0,  499,    2, 0x08 /* Private */,
      78,    1,  500,    2, 0x08 /* Private */,
      79,    0,  503,    2, 0x08 /* Private */,
      80,    0,  504,    2, 0x08 /* Private */,
      81,    0,  505,    2, 0x08 /* Private */,
      82,    0,  506,    2, 0x08 /* Private */,
      83,    0,  507,    2, 0x08 /* Private */,
      84,    0,  508,    2, 0x08 /* Private */,
      85,    0,  509,    2, 0x08 /* Private */,
      86,    0,  510,    2, 0x08 /* Private */,
      87,    0,  511,    2, 0x08 /* Private */,
      88,    1,  512,    2, 0x08 /* Private */,
      89,    0,  515,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QStringList,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 36,   35,   37,
    QMetaType::Void, 0x80000000 | 39,   37,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QObjectStar,   47,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void SettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateWindowTheme(); break;
        case 1: _t->updatePageTheme(); break;
        case 2: _t->muteToggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->autoPlayMediaToggled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->userAgentChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->initLock(); break;
        case 6: _t->changeLockPassword(); break;
        case 7: _t->dictChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->spellCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->notificationPopupTimeOutChanged(); break;
        case 10: _t->notify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->zoomChanged(); break;
        case 12: _t->zoomMaximizedChanged(); break;
        case 13: _t->appAutoLockChanged(); break;
        case 14: _t->updateFullWidthView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->refresh(); break;
        case 16: _t->updateDefaultUAButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->appLockSetChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setCurrentPasswordText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->loadDictionaries((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 20: _t->clearAllData(); break;
        case 21: _t->autoAppLockSetChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->updateAppLockPasswordViewer(); break;
        case 23: _t->appAutoLockingSetChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->toggleTheme(); break;
        case 25: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 27: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 28: { QString _r = _t->cachePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->persistentStoragePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->showSetApplockPasswordDialog(); break;
        case 31: { bool _r = _t->isChildOf((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->applyThemeQuirks(); break;
        case 33: _t->on_appAutoLockcheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_applock_checkbox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_autoLockDurationSpinbox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_autoPlayMediaCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_automaticThemeCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_changeDefaultDownloadLocationPb_clicked(); break;
        case 39: _t->on_chnageCurrentPasswordPushButton_clicked(); break;
        case 40: _t->on_closeButtonActionComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_defaultUserAgentButton_clicked(); break;
        case 42: _t->on_dictComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->on_enableSpellCheck_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_minimizeOnTrayIconClick_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_muteAudioCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_notificationCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_notificationCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_notificationTimeOutspinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->on_resetAppAutoLockPushButton_clicked(); break;
        case 50: _t->on_setUserAgent_clicked(); break;
        case 51: _t->on_showPermissionsButton_clicked(); break;
        case 52: _t->on_showShortcutsButton_clicked(); break;
        case 53: _t->on_startMinimized_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_styleComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->on_themeComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->on_tryNotification_clicked(); break;
        case 57: _t->on_useNativeFileDialog_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->on_userAgentLineEdit_editingFinished(); break;
        case 59: _t->on_userAgentLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->on_viewPassword_clicked(); break;
        case 61: _t->on_zoomMinusMaximized_clicked(); break;
        case 62: _t->on_zoomMinus_clicked(); break;
        case 63: _t->on_zoomPlusMaximized_clicked(); break;
        case 64: _t->on_zoomPlus_clicked(); break;
        case 65: _t->on_zoomResetMaximized_clicked(); break;
        case 66: _t->on_zoomReset_clicked(); break;
        case 67: _t->themeSwitchTimerTimeout(); break;
        case 68: _t->updateAutomaticTheme(); break;
        case 69: _t->on_fullWidthViewCheckbox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->on_deletePersistentData_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::updateWindowTheme)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::updatePageTheme)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::muteToggled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::autoPlayMediaToggled)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::userAgentChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::initLock)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::changeLockPassword)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::dictChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::spellCheckChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::notificationPopupTimeOutChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::notify)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::zoomChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::zoomMaximizedChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::appAutoLockChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SettingsWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWidget::updateFullWidthView)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsWidget.data,
    qt_meta_data_SettingsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 71)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 71;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 71)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 71;
    }
    return _id;
}

// SIGNAL 0
void SettingsWidget::updateWindowTheme()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsWidget::updatePageTheme()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SettingsWidget::muteToggled(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsWidget::autoPlayMediaToggled(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingsWidget::userAgentChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SettingsWidget::initLock()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SettingsWidget::changeLockPassword()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void SettingsWidget::dictChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SettingsWidget::spellCheckChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SettingsWidget::notificationPopupTimeOutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void SettingsWidget::notify(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SettingsWidget::zoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void SettingsWidget::zoomMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void SettingsWidget::appAutoLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void SettingsWidget::updateFullWidthView(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
