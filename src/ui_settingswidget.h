/********************************************************************************
** Form generated from reading UI file 'settingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *headerWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *label_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QComboBox *styleComboBox;
    QFrame *line_4;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QCheckBox *automaticThemeCheckBox;
    QComboBox *themeComboBox;
    QFrame *line_2;
    QGridLayout *gridLayout_8;
    QComboBox *notificationCombo;
    QPushButton *tryNotification;
    QLabel *label_16;
    QCheckBox *notificationCheckBox;
    QLabel *label_14;
    QSpinBox *notificationTimeOutspinBox;
    QFrame *line_3;
    QGridLayout *gridLayout;
    QComboBox *dictComboBox;
    QCheckBox *useNativeFileDialog;
    QCheckBox *muteAudioCheckBox;
    QCheckBox *autoPlayMediaCheckBox;
    QCheckBox *enableSpellCheck;
    QCheckBox *startMinimized;
    QCheckBox *minimizeOnTrayIconClick;
    QCheckBox *fullWidthViewCheckbox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *userAgentLineEdit;
    QPushButton *setUserAgent;
    QPushButton *defaultUserAgentButton;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *zoomMinus;
    QDoubleSpinBox *zoomFactorSpinBox;
    QPushButton *zoomPlus;
    QFrame *line_5;
    QPushButton *zoomReset;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *zoomMinusMaximized;
    QDoubleSpinBox *zoomFactorSpinBoxMaximized;
    QPushButton *zoomPlusMaximized;
    QFrame *line_6;
    QPushButton *zoomResetMaximized;
    QGridLayout *gridLayout_6;
    QComboBox *closeButtonActionComboBox;
    QLabel *label_9;
    QLabel *label;
    QPushButton *showShortcutsButton;
    QLabel *label_10;
    QPushButton *showPermissionsButton;
    QGridLayout *gridLayout_3;
    QCheckBox *applock_checkbox;
    QLabel *label_19;
    QPushButton *chnageCurrentPasswordPushButton;
    QCheckBox *appAutoLockcheckBox;
    QSpinBox *autoLockDurationSpinbox;
    QPushButton *resetAppAutoLockPushButton;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *current_password;
    QPushButton *viewPassword;
    QGridLayout *gridLayout_7;
    QLineEdit *defaultDownloadLocation;
    QLabel *label_18;
    QPushButton *changeDefaultDownloadLocationPb;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QPushButton *deletePersistentData;
    QLabel *label_5;
    QLabel *cookieSize;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *bottomLine;
    QVBoxLayout *verticalLayout_4;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QString::fromUtf8("SettingsWidget"));
        SettingsWidget->resize(651, 841);
        verticalLayout = new QVBoxLayout(SettingsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        headerWidget = new QWidget(SettingsWidget);
        headerWidget->setObjectName(QString::fromUtf8("headerWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headerWidget->sizePolicy().hasHeightForWidth());
        headerWidget->setSizePolicy(sizePolicy);
        headerWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(headerWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(headerWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"padding: 8px 0px 8px 8px;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/icons/app/icon-48.png")));

        horizontalLayout_7->addWidget(label_6);

        label_7 = new QLabel(headerWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding: 0px 8px 0px 8px;\n"
"background:transparent;\n"
"}"));
        label_7->setTextFormat(Qt::PlainText);

        horizontalLayout_7->addWidget(label_7);


        verticalLayout->addWidget(headerWidget, 0, Qt::AlignTop);

        scrollArea = new QScrollArea(SettingsWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 635, 760));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_4 = new QGridLayout(groupBox_8);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        styleComboBox = new QComboBox(groupBox_8);
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        horizontalLayout->addWidget(styleComboBox);


        gridLayout_4->addLayout(horizontalLayout, 8, 0, 1, 1);

        line_4 = new QFrame(groupBox_8);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(0, 1));
        line_4->setMaximumSize(QSize(16777215, 1));
        line_4->setStyleSheet(QString::fromUtf8("background-color: rgba(63, 129, 216, 48);"));
        line_4->setFrameShadow(QFrame::Raised);
        line_4->setFrameShape(QFrame::HLine);

        gridLayout_4->addWidget(line_4, 11, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        automaticThemeCheckBox = new QCheckBox(groupBox_8);
        automaticThemeCheckBox->setObjectName(QString::fromUtf8("automaticThemeCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(automaticThemeCheckBox->sizePolicy().hasHeightForWidth());
        automaticThemeCheckBox->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(automaticThemeCheckBox, 0, 1, 1, 1);

        themeComboBox = new QComboBox(groupBox_8);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/moon-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        themeComboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/lightbulb-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        themeComboBox->addItem(icon1, QString());
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));

        gridLayout_5->addWidget(themeComboBox, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 9, 0, 1, 1);

        line_2 = new QFrame(groupBox_8);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(0, 1));
        line_2->setMaximumSize(QSize(16777215, 1));
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgba(63, 129, 216, 48);"));
        line_2->setFrameShadow(QFrame::Raised);
        line_2->setFrameShape(QFrame::HLine);

        gridLayout_4->addWidget(line_2, 4, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        notificationCombo = new QComboBox(groupBox_8);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/categories/featured.png"), QSize(), QIcon::Normal, QIcon::Off);
        notificationCombo->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/categories/devices-and-iot.png"), QSize(), QIcon::Normal, QIcon::Off);
        notificationCombo->addItem(icon3, QString());
        notificationCombo->setObjectName(QString::fromUtf8("notificationCombo"));

        gridLayout_8->addWidget(notificationCombo, 0, 1, 1, 1);

        tryNotification = new QPushButton(groupBox_8);
        tryNotification->setObjectName(QString::fromUtf8("tryNotification"));
        sizePolicy2.setHeightForWidth(tryNotification->sizePolicy().hasHeightForWidth());
        tryNotification->setSizePolicy(sizePolicy2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/categories/science.png"), QSize(), QIcon::Normal, QIcon::Off);
        tryNotification->setIcon(icon4);

        gridLayout_8->addWidget(tryNotification, 0, 2, 1, 1);

        label_16 = new QLabel(groupBox_8);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_8->addWidget(label_16, 0, 0, 1, 1);

        notificationCheckBox = new QCheckBox(groupBox_8);
        notificationCheckBox->setObjectName(QString::fromUtf8("notificationCheckBox"));

        gridLayout_8->addWidget(notificationCheckBox, 1, 0, 1, 1);

        label_14 = new QLabel(groupBox_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_8->addWidget(label_14, 1, 1, 1, 1);

        notificationTimeOutspinBox = new QSpinBox(groupBox_8);
        notificationTimeOutspinBox->setObjectName(QString::fromUtf8("notificationTimeOutspinBox"));
        notificationTimeOutspinBox->setMinimum(2);
        notificationTimeOutspinBox->setMaximum(20);

        gridLayout_8->addWidget(notificationTimeOutspinBox, 1, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_8, 0, 0, 1, 1);

        line_3 = new QFrame(groupBox_8);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(0, 1));
        line_3->setMaximumSize(QSize(16777215, 1));
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgba(63, 129, 216, 48);"));
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setFrameShape(QFrame::HLine);

        gridLayout_4->addWidget(line_3, 7, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dictComboBox = new QComboBox(groupBox_8);
        dictComboBox->setObjectName(QString::fromUtf8("dictComboBox"));

        gridLayout->addWidget(dictComboBox, 1, 1, 1, 1);

        useNativeFileDialog = new QCheckBox(groupBox_8);
        useNativeFileDialog->setObjectName(QString::fromUtf8("useNativeFileDialog"));

        gridLayout->addWidget(useNativeFileDialog, 3, 0, 1, 1);

        muteAudioCheckBox = new QCheckBox(groupBox_8);
        muteAudioCheckBox->setObjectName(QString::fromUtf8("muteAudioCheckBox"));

        gridLayout->addWidget(muteAudioCheckBox, 2, 0, 1, 1);

        autoPlayMediaCheckBox = new QCheckBox(groupBox_8);
        autoPlayMediaCheckBox->setObjectName(QString::fromUtf8("autoPlayMediaCheckBox"));

        gridLayout->addWidget(autoPlayMediaCheckBox, 2, 1, 1, 1);

        enableSpellCheck = new QCheckBox(groupBox_8);
        enableSpellCheck->setObjectName(QString::fromUtf8("enableSpellCheck"));

        gridLayout->addWidget(enableSpellCheck, 1, 0, 1, 1);

        startMinimized = new QCheckBox(groupBox_8);
        startMinimized->setObjectName(QString::fromUtf8("startMinimized"));

        gridLayout->addWidget(startMinimized, 3, 1, 1, 1);

        minimizeOnTrayIconClick = new QCheckBox(groupBox_8);
        minimizeOnTrayIconClick->setObjectName(QString::fromUtf8("minimizeOnTrayIconClick"));

        gridLayout->addWidget(minimizeOnTrayIconClick, 4, 0, 1, 1);

        fullWidthViewCheckbox = new QCheckBox(groupBox_8);
        fullWidthViewCheckbox->setObjectName(QString::fromUtf8("fullWidthViewCheckbox"));

        gridLayout->addWidget(fullWidthViewCheckbox, 4, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        userAgentLineEdit = new QLineEdit(groupBox_8);
        userAgentLineEdit->setObjectName(QString::fromUtf8("userAgentLineEdit"));

        horizontalLayout_3->addWidget(userAgentLineEdit);

        setUserAgent = new QPushButton(groupBox_8);
        setUserAgent->setObjectName(QString::fromUtf8("setUserAgent"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/categories/utilities.png"), QSize(), QIcon::Normal, QIcon::Off);
        setUserAgent->setIcon(icon5);

        horizontalLayout_3->addWidget(setUserAgent);

        defaultUserAgentButton = new QPushButton(groupBox_8);
        defaultUserAgentButton->setObjectName(QString::fromUtf8("defaultUserAgentButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/arrow-go-back-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        defaultUserAgentButton->setIcon(icon6);

        horizontalLayout_3->addWidget(defaultUserAgentButton);


        gridLayout_4->addLayout(horizontalLayout_3, 15, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_12->addWidget(label_15);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        zoomMinus = new QPushButton(groupBox_8);
        zoomMinus->setObjectName(QString::fromUtf8("zoomMinus"));
        sizePolicy2.setHeightForWidth(zoomMinus->sizePolicy().hasHeightForWidth());
        zoomMinus->setSizePolicy(sizePolicy2);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomMinus->setIcon(icon7);

        horizontalLayout_2->addWidget(zoomMinus);

        zoomFactorSpinBox = new QDoubleSpinBox(groupBox_8);
        zoomFactorSpinBox->setObjectName(QString::fromUtf8("zoomFactorSpinBox"));
        sizePolicy2.setHeightForWidth(zoomFactorSpinBox->sizePolicy().hasHeightForWidth());
        zoomFactorSpinBox->setSizePolicy(sizePolicy2);
        zoomFactorSpinBox->setAlignment(Qt::AlignCenter);
        zoomFactorSpinBox->setReadOnly(true);
        zoomFactorSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_2->addWidget(zoomFactorSpinBox);

        zoomPlus = new QPushButton(groupBox_8);
        zoomPlus->setObjectName(QString::fromUtf8("zoomPlus"));
        sizePolicy2.setHeightForWidth(zoomPlus->sizePolicy().hasHeightForWidth());
        zoomPlus->setSizePolicy(sizePolicy2);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomPlus->setIcon(icon8);

        horizontalLayout_2->addWidget(zoomPlus);

        line_5 = new QFrame(groupBox_8);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setMinimumSize(QSize(1, 0));
        line_5->setMaximumSize(QSize(1, 16777215));
        line_5->setStyleSheet(QString::fromUtf8("background-color: rgba(63, 129, 216, 48);"));
        line_5->setFrameShadow(QFrame::Raised);
        line_5->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(line_5);

        zoomReset = new QPushButton(groupBox_8);
        zoomReset->setObjectName(QString::fromUtf8("zoomReset"));
        sizePolicy2.setHeightForWidth(zoomReset->sizePolicy().hasHeightForWidth());
        zoomReset->setSizePolicy(sizePolicy2);
        zoomReset->setIcon(icon6);

        horizontalLayout_2->addWidget(zoomReset);


        horizontalLayout_12->addLayout(horizontalLayout_2);


        gridLayout_9->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, -1);
        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_13->addWidget(label_17);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        zoomMinusMaximized = new QPushButton(groupBox_8);
        zoomMinusMaximized->setObjectName(QString::fromUtf8("zoomMinusMaximized"));
        sizePolicy2.setHeightForWidth(zoomMinusMaximized->sizePolicy().hasHeightForWidth());
        zoomMinusMaximized->setSizePolicy(sizePolicy2);
        zoomMinusMaximized->setIcon(icon7);

        horizontalLayout_4->addWidget(zoomMinusMaximized);

        zoomFactorSpinBoxMaximized = new QDoubleSpinBox(groupBox_8);
        zoomFactorSpinBoxMaximized->setObjectName(QString::fromUtf8("zoomFactorSpinBoxMaximized"));
        sizePolicy2.setHeightForWidth(zoomFactorSpinBoxMaximized->sizePolicy().hasHeightForWidth());
        zoomFactorSpinBoxMaximized->setSizePolicy(sizePolicy2);
        zoomFactorSpinBoxMaximized->setAlignment(Qt::AlignCenter);
        zoomFactorSpinBoxMaximized->setReadOnly(true);
        zoomFactorSpinBoxMaximized->setButtonSymbols(QAbstractSpinBox::NoButtons);

        horizontalLayout_4->addWidget(zoomFactorSpinBoxMaximized);

        zoomPlusMaximized = new QPushButton(groupBox_8);
        zoomPlusMaximized->setObjectName(QString::fromUtf8("zoomPlusMaximized"));
        sizePolicy2.setHeightForWidth(zoomPlusMaximized->sizePolicy().hasHeightForWidth());
        zoomPlusMaximized->setSizePolicy(sizePolicy2);
        zoomPlusMaximized->setIcon(icon8);

        horizontalLayout_4->addWidget(zoomPlusMaximized);

        line_6 = new QFrame(groupBox_8);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setMinimumSize(QSize(1, 0));
        line_6->setMaximumSize(QSize(1, 16777215));
        line_6->setStyleSheet(QString::fromUtf8("background-color: rgba(63, 129, 216, 48);"));
        line_6->setFrameShadow(QFrame::Raised);
        line_6->setFrameShape(QFrame::VLine);

        horizontalLayout_4->addWidget(line_6);

        zoomResetMaximized = new QPushButton(groupBox_8);
        zoomResetMaximized->setObjectName(QString::fromUtf8("zoomResetMaximized"));
        sizePolicy2.setHeightForWidth(zoomResetMaximized->sizePolicy().hasHeightForWidth());
        zoomResetMaximized->setSizePolicy(sizePolicy2);
        zoomResetMaximized->setIcon(icon6);

        horizontalLayout_4->addWidget(zoomResetMaximized);


        horizontalLayout_13->addLayout(horizontalLayout_4);


        gridLayout_9->addLayout(horizontalLayout_13, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_9, 12, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        closeButtonActionComboBox = new QComboBox(groupBox_8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/window-2-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButtonActionComboBox->addItem(icon9, QString());
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/shut-down-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButtonActionComboBox->addItem(icon10, QString());
        closeButtonActionComboBox->setObjectName(QString::fromUtf8("closeButtonActionComboBox"));

        gridLayout_6->addWidget(closeButtonActionComboBox, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 1, 0, 1, 1);

        label = new QLabel(groupBox_8);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        showShortcutsButton = new QPushButton(groupBox_8);
        showShortcutsButton->setObjectName(QString::fromUtf8("showShortcutsButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/share-forward-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        showShortcutsButton->setIcon(icon11);

        gridLayout_6->addWidget(showShortcutsButton, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 2, 0, 1, 1);

        showPermissionsButton = new QPushButton(groupBox_8);
        showPermissionsButton->setObjectName(QString::fromUtf8("showPermissionsButton"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/categories/security.png"), QSize(), QIcon::Normal, QIcon::Off);
        showPermissionsButton->setIcon(icon12);

        gridLayout_6->addWidget(showPermissionsButton, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 10, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        applock_checkbox = new QCheckBox(groupBox_8);
        applock_checkbox->setObjectName(QString::fromUtf8("applock_checkbox"));

        gridLayout_3->addWidget(applock_checkbox, 0, 0, 1, 1);

        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        chnageCurrentPasswordPushButton = new QPushButton(groupBox_8);
        chnageCurrentPasswordPushButton->setObjectName(QString::fromUtf8("chnageCurrentPasswordPushButton"));
        chnageCurrentPasswordPushButton->setIcon(icon5);

        gridLayout_3->addWidget(chnageCurrentPasswordPushButton, 2, 2, 1, 1);

        appAutoLockcheckBox = new QCheckBox(groupBox_8);
        appAutoLockcheckBox->setObjectName(QString::fromUtf8("appAutoLockcheckBox"));

        gridLayout_3->addWidget(appAutoLockcheckBox, 1, 0, 1, 1);

        autoLockDurationSpinbox = new QSpinBox(groupBox_8);
        autoLockDurationSpinbox->setObjectName(QString::fromUtf8("autoLockDurationSpinbox"));
        autoLockDurationSpinbox->setMinimum(8);
        autoLockDurationSpinbox->setMaximum(14400);

        gridLayout_3->addWidget(autoLockDurationSpinbox, 1, 1, 1, 1);

        resetAppAutoLockPushButton = new QPushButton(groupBox_8);
        resetAppAutoLockPushButton->setObjectName(QString::fromUtf8("resetAppAutoLockPushButton"));
        resetAppAutoLockPushButton->setIcon(icon6);

        gridLayout_3->addWidget(resetAppAutoLockPushButton, 1, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        current_password = new QLineEdit(groupBox_8);
        current_password->setObjectName(QString::fromUtf8("current_password"));
        current_password->setEchoMode(QLineEdit::Password);
        current_password->setReadOnly(true);

        horizontalLayout_5->addWidget(current_password);

        viewPassword = new QPushButton(groupBox_8);
        viewPassword->setObjectName(QString::fromUtf8("viewPassword"));
        sizePolicy2.setHeightForWidth(viewPassword->sizePolicy().hasHeightForWidth());
        viewPassword->setSizePolicy(sizePolicy2);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/eye-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewPassword->setIcon(icon13);

        horizontalLayout_5->addWidget(viewPassword);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 5, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        defaultDownloadLocation = new QLineEdit(groupBox_8);
        defaultDownloadLocation->setObjectName(QString::fromUtf8("defaultDownloadLocation"));
        defaultDownloadLocation->setReadOnly(true);

        gridLayout_7->addWidget(defaultDownloadLocation, 0, 1, 1, 1);

        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_7->addWidget(label_18, 0, 0, 1, 1);

        changeDefaultDownloadLocationPb = new QPushButton(groupBox_8);
        changeDefaultDownloadLocationPb->setObjectName(QString::fromUtf8("changeDefaultDownloadLocationPb"));
        sizePolicy2.setHeightForWidth(changeDefaultDownloadLocationPb->sizePolicy().hasHeightForWidth());
        changeDefaultDownloadLocationPb->setSizePolicy(sizePolicy2);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/folder-download-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        changeDefaultDownloadLocationPb->setIcon(icon14);

        gridLayout_7->addWidget(changeDefaultDownloadLocationPb, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_7, 3, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_8);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_3 = new QVBoxLayout(groupBox_7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        label_11->setFont(font1);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        deletePersistentData = new QPushButton(groupBox_7);
        deletePersistentData->setObjectName(QString::fromUtf8("deletePersistentData"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/delete-bin-3-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        deletePersistentData->setIcon(icon15);

        gridLayout_2->addWidget(deletePersistentData, 1, 2, 1, 1);

        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        cookieSize = new QLabel(groupBox_7);
        cookieSize->setObjectName(QString::fromUtf8("cookieSize"));
        cookieSize->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cookieSize, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_13, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout_5->addWidget(groupBox_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        bottomLine = new QWidget(SettingsWidget);
        bottomLine->setObjectName(QString::fromUtf8("bottomLine"));
        bottomLine->setMinimumSize(QSize(6, 0));
        bottomLine->setMaximumSize(QSize(16777215, 6));
        bottomLine->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 207, 156);"));
        verticalLayout_4 = new QVBoxLayout(bottomLine);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));

        verticalLayout->addWidget(bottomLine);


        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QCoreApplication::translate("SettingsWidget", "Form", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("SettingsWidget", "Settings", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("SettingsWidget", "General settings", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsWidget", "Widget Style", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsWidget", "Widget Theme", nullptr));
#if QT_CONFIG(tooltip)
        automaticThemeCheckBox->setToolTip(QCoreApplication::translate("SettingsWidget", "<html><head/><body><p>Based on your system timezone and location.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        automaticThemeCheckBox->setText(QCoreApplication::translate("SettingsWidget", "Automatic", nullptr));
        themeComboBox->setItemText(0, QCoreApplication::translate("SettingsWidget", "Dark", nullptr));
        themeComboBox->setItemText(1, QCoreApplication::translate("SettingsWidget", "Light", nullptr));

        notificationCombo->setItemText(0, QCoreApplication::translate("SettingsWidget", "Native notification", nullptr));
        notificationCombo->setItemText(1, QCoreApplication::translate("SettingsWidget", "Customized notification", nullptr));

        tryNotification->setText(QCoreApplication::translate("SettingsWidget", "  Try", nullptr));
        label_16->setText(QCoreApplication::translate("SettingsWidget", "Notification type", nullptr));
        notificationCheckBox->setText(QCoreApplication::translate("SettingsWidget", "Disable Notifications Popup", nullptr));
        label_14->setText(QCoreApplication::translate("SettingsWidget", "Popup timeout", nullptr));
        notificationTimeOutspinBox->setSuffix(QCoreApplication::translate("SettingsWidget", " Secs", nullptr));
#if QT_CONFIG(tooltip)
        dictComboBox->setToolTip(QCoreApplication::translate("SettingsWidget", "Spell checker Language", nullptr));
#endif // QT_CONFIG(tooltip)
        useNativeFileDialog->setText(QCoreApplication::translate("SettingsWidget", "Use Native File Dialog", nullptr));
        muteAudioCheckBox->setText(QCoreApplication::translate("SettingsWidget", "Mute Audio from Page", nullptr));
        autoPlayMediaCheckBox->setText(QCoreApplication::translate("SettingsWidget", "Disable Auto Playback of Media", nullptr));
        enableSpellCheck->setText(QCoreApplication::translate("SettingsWidget", "Enable Spell Checker", nullptr));
        startMinimized->setText(QCoreApplication::translate("SettingsWidget", "Minimize in tray on start", nullptr));
        minimizeOnTrayIconClick->setText(QCoreApplication::translate("SettingsWidget", "Show/Hide on clicking tray Icon (if supported)", nullptr));
#if QT_CONFIG(tooltip)
        fullWidthViewCheckbox->setToolTip(QCoreApplication::translate("SettingsWidget", "Expand the view to full width of window", nullptr));
#endif // QT_CONFIG(tooltip)
        fullWidthViewCheckbox->setText(QCoreApplication::translate("SettingsWidget", "Full width view", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsWidget", "User Agent", nullptr));
        setUserAgent->setText(QCoreApplication::translate("SettingsWidget", "  Set", nullptr));
#if QT_CONFIG(tooltip)
        defaultUserAgentButton->setToolTip(QCoreApplication::translate("SettingsWidget", "Reset to default", nullptr));
#endif // QT_CONFIG(tooltip)
        defaultUserAgentButton->setText(QString());
        label_15->setText(QCoreApplication::translate("SettingsWidget", "Zoom factor when normal", nullptr));
#if QT_CONFIG(tooltip)
        zoomMinus->setToolTip(QCoreApplication::translate("SettingsWidget", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomMinus->setText(QString());
#if QT_CONFIG(tooltip)
        zoomPlus->setToolTip(QCoreApplication::translate("SettingsWidget", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomPlus->setText(QString());
#if QT_CONFIG(tooltip)
        zoomReset->setToolTip(QCoreApplication::translate("SettingsWidget", "reset", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomReset->setText(QString());
        label_17->setText(QCoreApplication::translate("SettingsWidget", "Zoom factor when maximized/fullscreen", nullptr));
#if QT_CONFIG(tooltip)
        zoomMinusMaximized->setToolTip(QCoreApplication::translate("SettingsWidget", "Zoom Out", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomMinusMaximized->setText(QString());
#if QT_CONFIG(tooltip)
        zoomPlusMaximized->setToolTip(QCoreApplication::translate("SettingsWidget", "Zoom In", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomPlusMaximized->setText(QString());
#if QT_CONFIG(tooltip)
        zoomResetMaximized->setToolTip(QCoreApplication::translate("SettingsWidget", "reset", nullptr));
#endif // QT_CONFIG(tooltip)
        zoomResetMaximized->setText(QString());
        closeButtonActionComboBox->setItemText(0, QCoreApplication::translate("SettingsWidget", "Minimize to tray", nullptr));
        closeButtonActionComboBox->setItemText(1, QCoreApplication::translate("SettingsWidget", "Quit", nullptr));

        label_9->setText(QCoreApplication::translate("SettingsWidget", "Global shortcuts", nullptr));
        label->setText(QCoreApplication::translate("SettingsWidget", "Close button action", nullptr));
        showShortcutsButton->setText(QCoreApplication::translate("SettingsWidget", "  Show shortcuts", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsWidget", "Permissions", nullptr));
        showPermissionsButton->setText(QCoreApplication::translate("SettingsWidget", "  Show permissions", nullptr));
#if QT_CONFIG(tooltip)
        applock_checkbox->setToolTip(QCoreApplication::translate("SettingsWidget", "<html><head/><body><p>Enable lock screen.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        applock_checkbox->setText(QCoreApplication::translate("SettingsWidget", "Enable App lock on start", nullptr));
        label_19->setText(QCoreApplication::translate("SettingsWidget", "Current Password", nullptr));
#if QT_CONFIG(tooltip)
        chnageCurrentPasswordPushButton->setToolTip(QCoreApplication::translate("SettingsWidget", "Change password", nullptr));
#endif // QT_CONFIG(tooltip)
        chnageCurrentPasswordPushButton->setText(QCoreApplication::translate("SettingsWidget", "Change", nullptr));
        appAutoLockcheckBox->setText(QCoreApplication::translate("SettingsWidget", "Enable auto locking after", nullptr));
        autoLockDurationSpinbox->setSuffix(QCoreApplication::translate("SettingsWidget", " Secs", nullptr));
#if QT_CONFIG(tooltip)
        resetAppAutoLockPushButton->setToolTip(QCoreApplication::translate("SettingsWidget", "Change password", nullptr));
#endif // QT_CONFIG(tooltip)
        resetAppAutoLockPushButton->setText(QCoreApplication::translate("SettingsWidget", "Reset", nullptr));
        current_password->setText(QString());
#if QT_CONFIG(tooltip)
        viewPassword->setToolTip(QCoreApplication::translate("SettingsWidget", "View password", nullptr));
#endif // QT_CONFIG(tooltip)
        viewPassword->setText(QString());
        label_18->setText(QCoreApplication::translate("SettingsWidget", "Default Download location", nullptr));
#if QT_CONFIG(tooltip)
        changeDefaultDownloadLocationPb->setToolTip(QCoreApplication::translate("SettingsWidget", "Change Download Location", nullptr));
#endif // QT_CONFIG(tooltip)
        changeDefaultDownloadLocationPb->setText(QCoreApplication::translate("SettingsWidget", "Change", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("SettingsWidget", "Storage ", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsWidget", "Property", nullptr));
        deletePersistentData->setText(QCoreApplication::translate("SettingsWidget", "  Clear (requires restart)", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("SettingsWidget", "<html><head/><body><p>Persistent data includes persistent cookies, HTML5 local storage, and visited links.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("SettingsWidget", "Persistent data", nullptr));
        cookieSize->setText(QCoreApplication::translate("SettingsWidget", "-", nullptr));
        label_12->setText(QCoreApplication::translate("SettingsWidget", "Size", nullptr));
        label_13->setText(QCoreApplication::translate("SettingsWidget", "Action", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
