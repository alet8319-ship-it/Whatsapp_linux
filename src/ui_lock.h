/********************************************************************************
** Form generated from reading UI file 'lock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCK_H
#define UI_LOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lock
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *centerWidget;
    QHBoxLayout *horizontalLayout_8;
    QWidget *signup;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_10;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLineEdit *passcode1;
    QLineEdit *passcode2;
    QPushButton *setPass;
    QPushButton *cancelSetting;
    QLabel *caps2;
    QWidget *bottomLine_2;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *signup_warning;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QWidget *login;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QLineEdit *passcodeLogin;
    QLabel *caps1;
    QLabel *wrong;
    QWidget *bottomLine;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *moreAppsLayout;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Lock)
    {
        if (Lock->objectName().isEmpty())
            Lock->setObjectName(QString::fromUtf8("Lock"));
        Lock->resize(946, 708);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Lock->sizePolicy().hasHeightForWidth());
        Lock->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Lock);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        centerWidget = new QWidget(Lock);
        centerWidget->setObjectName(QString::fromUtf8("centerWidget"));
        horizontalLayout_8 = new QHBoxLayout(centerWidget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        signup = new QWidget(centerWidget);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setStyleSheet(QString::fromUtf8("QWidget#signup {\n"
"        	 background-image:url(:/icons/texture.png)\n"
"}"));
        verticalLayout = new QVBoxLayout(signup);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, -1, 0, 0);
        widget_2 = new QWidget(signup);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 5);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(128, 128));
        label->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/app/icon-128.png")));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_4->addWidget(label_3);

        passcode1 = new QLineEdit(widget_2);
        passcode1->setObjectName(QString::fromUtf8("passcode1"));
        passcode1->setMinimumSize(QSize(0, 30));
        passcode1->setEchoMode(QLineEdit::Password);
        passcode1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(passcode1);

        passcode2 = new QLineEdit(widget_2);
        passcode2->setObjectName(QString::fromUtf8("passcode2"));
        passcode2->setMinimumSize(QSize(0, 30));
        passcode2->setEchoMode(QLineEdit::Password);
        passcode2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(passcode2);

        setPass = new QPushButton(widget_2);
        setPass->setObjectName(QString::fromUtf8("setPass"));
        setPass->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(setPass);

        cancelSetting = new QPushButton(widget_2);
        cancelSetting->setObjectName(QString::fromUtf8("cancelSetting"));
        cancelSetting->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(cancelSetting);

        caps2 = new QLabel(widget_2);
        caps2->setObjectName(QString::fromUtf8("caps2"));
        caps2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(caps2);


        verticalLayout_10->addWidget(widget_2);

        bottomLine_2 = new QWidget(signup);
        bottomLine_2->setObjectName(QString::fromUtf8("bottomLine_2"));
        bottomLine_2->setMinimumSize(QSize(6, 0));
        bottomLine_2->setMaximumSize(QSize(16777215, 6));
        bottomLine_2->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 207, 156);\n"
"border-bottom-right-radius: 4px;\n"
"border-bottom-left-radius: 4px;"));
        verticalLayout_11 = new QVBoxLayout(bottomLine_2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));

        verticalLayout_10->addWidget(bottomLine_2);


        horizontalLayout_5->addLayout(verticalLayout_10);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        signup_warning = new QLabel(signup);
        signup_warning->setObjectName(QString::fromUtf8("signup_warning"));
        signup_warning->setAlignment(Qt::AlignCenter);
        signup_warning->setWordWrap(false);

        horizontalLayout_7->addWidget(signup_warning);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_8->addWidget(signup);

        login = new QWidget(centerWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setStyleSheet(QString::fromUtf8("QWidget#login {\n"
"        	 background-image:url(\":/icons/texture.png\")\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(login);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, -1, 0, 0);
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(128, 128));
        label_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/app/icon-128.png")));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(32, 32));
        label_5->setMaximumSize(QSize(32, 32));
        label_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/lock-2-fill.png")));
        label_5->setScaledContents(true);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout_6);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        passcodeLogin = new QLineEdit(widget);
        passcodeLogin->setObjectName(QString::fromUtf8("passcodeLogin"));
        passcodeLogin->setMinimumSize(QSize(0, 30));
        passcodeLogin->setEchoMode(QLineEdit::Password);
        passcodeLogin->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(passcodeLogin);

        caps1 = new QLabel(widget);
        caps1->setObjectName(QString::fromUtf8("caps1"));
        caps1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(caps1);

        wrong = new QLabel(widget);
        wrong->setObjectName(QString::fromUtf8("wrong"));
        wrong->setAlignment(Qt::AlignCenter);
        wrong->setWordWrap(true);

        verticalLayout_3->addWidget(wrong);


        verticalLayout_8->addWidget(widget);

        bottomLine = new QWidget(login);
        bottomLine->setObjectName(QString::fromUtf8("bottomLine"));
        bottomLine->setMinimumSize(QSize(6, 0));
        bottomLine->setMaximumSize(QSize(16777215, 6));
        bottomLine->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 207, 156);\n"
"border-bottom-right-radius: 4px;\n"
"border-bottom-left-radius: 4px;"));
        verticalLayout_9 = new QVBoxLayout(bottomLine);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));

        verticalLayout_8->addWidget(bottomLine);


        horizontalLayout_4->addLayout(verticalLayout_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_5);

        moreAppsLayout = new QVBoxLayout();
        moreAppsLayout->setObjectName(QString::fromUtf8("moreAppsLayout"));

        verticalLayout_2->addLayout(moreAppsLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_8->addWidget(login);


        horizontalLayout->addWidget(centerWidget);


        retranslateUi(Lock);

        QMetaObject::connectSlotsByName(Lock);
    } // setupUi

    void retranslateUi(QWidget *Lock)
    {
        Lock->setWindowTitle(QCoreApplication::translate("Lock", "Form", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("Lock", "Set lock passcode", nullptr));
        passcode1->setPlaceholderText(QCoreApplication::translate("Lock", "enter passcode", nullptr));
        passcode2->setPlaceholderText(QCoreApplication::translate("Lock", "enter passcode again", nullptr));
        setPass->setText(QCoreApplication::translate("Lock", "Set Pass Code", nullptr));
        cancelSetting->setText(QCoreApplication::translate("Lock", "Cancel", nullptr));
        caps2->setText(QCoreApplication::translate("Lock", "Warning: Caps Lock is On", nullptr));
        signup_warning->setText(QCoreApplication::translate("Lock", "<html><head/><body><p>Note: Passcode must be more then 3 characters and must match in both fields.</p></body></html>", nullptr));
        label_2->setText(QString());
        label_5->setText(QString());
        label_4->setText(QCoreApplication::translate("Lock", "Enter your passcode to get access", nullptr));
        passcodeLogin->setPlaceholderText(QCoreApplication::translate("Lock", "enter your passcode", nullptr));
        caps1->setText(QCoreApplication::translate("Lock", "Warning: Caps Lock is On", nullptr));
        wrong->setText(QCoreApplication::translate("Lock", "<html><head/><body><p>Wrong Passcode, Please try again.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lock: public Ui_Lock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCK_H
