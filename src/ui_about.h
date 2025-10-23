/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *centerWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QWidget *info;
    QVBoxLayout *verticalLayout_3;
    QLabel *appNameDesc;
    QLabel *version;
    QLabel *desc2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *donate;
    QPushButton *rate;
    QHBoxLayout *horizontalLayout;
    QPushButton *more_apps;
    QPushButton *source_code;
    QPushButton *debugInfoButton;
    QTextBrowser *debugInfoText;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(522, 487);
        verticalLayout_2 = new QVBoxLayout(About);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        centerWidget = new QWidget(About);
        centerWidget->setObjectName(QString::fromUtf8("centerWidget"));
        verticalLayout_5 = new QVBoxLayout(centerWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        topWidget = new QWidget(centerWidget);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(topWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, 12, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(topWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/app/icon-256.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        info = new QWidget(topWidget);
        info->setObjectName(QString::fromUtf8("info"));
        verticalLayout_3 = new QVBoxLayout(info);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        appNameDesc = new QLabel(info);
        appNameDesc->setObjectName(QString::fromUtf8("appNameDesc"));
        appNameDesc->setWordWrap(true);
        appNameDesc->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(appNameDesc);

        version = new QLabel(info);
        version->setObjectName(QString::fromUtf8("version"));

        verticalLayout_3->addWidget(version);

        desc2 = new QLabel(info);
        desc2->setObjectName(QString::fromUtf8("desc2"));

        verticalLayout_3->addWidget(desc2);


        horizontalLayout_2->addWidget(info);


        verticalLayout_5->addWidget(topWidget);

        widget = new QWidget(centerWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8(" QWidget#widget\n"
"       {\n"
"         background-image:url(:/icons/texture.png), linear-gradient(hsla(0,0%,32%,.99), hsla(0,0%,27%,.95));\n"
"        selection-background-color:#3d8ec9;\n"
"        selection-color: black; background-clip: border;\n"
"        border-image: none; outline: 0;}"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        donate = new QPushButton(widget);
        donate->setObjectName(QString::fromUtf8("donate"));

        horizontalLayout_3->addWidget(donate);

        rate = new QPushButton(widget);
        rate->setObjectName(QString::fromUtf8("rate"));

        horizontalLayout_3->addWidget(rate);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        more_apps = new QPushButton(widget);
        more_apps->setObjectName(QString::fromUtf8("more_apps"));

        horizontalLayout->addWidget(more_apps);

        source_code = new QPushButton(widget);
        source_code->setObjectName(QString::fromUtf8("source_code"));

        horizontalLayout->addWidget(source_code);


        verticalLayout_4->addLayout(horizontalLayout);

        debugInfoButton = new QPushButton(widget);
        debugInfoButton->setObjectName(QString::fromUtf8("debugInfoButton"));

        verticalLayout_4->addWidget(debugInfoButton);


        verticalLayout_5->addWidget(widget);

        debugInfoText = new QTextBrowser(centerWidget);
        debugInfoText->setObjectName(QString::fromUtf8("debugInfoText"));
        debugInfoText->setMinimumSize(QSize(0, 150));
        debugInfoText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);

        verticalLayout_5->addWidget(debugInfoText);


        verticalLayout_2->addWidget(centerWidget);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Form", nullptr));
        label->setText(QString());
        appNameDesc->setText(QCoreApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">WhatSie</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">WhatsApp Web Client for Linux Desktop.</p></body></html>", nullptr));
        version->setText(QCoreApplication::translate("About", "-", nullptr));
        desc2->setText(QCoreApplication::translate("About", "<html><head/><body><p><span style=\" font-weight:600;\">Designed &amp; Developed by:</span> Keshav Bhatt </p><p><span style=\" font-weight:600;\">Email: </span>keshavnrj@gmail.com</p><p><span style=\" font-weight:600;\">Website:</span> http://ktechpit.com</p></body></html>", nullptr));
        donate->setText(QCoreApplication::translate("About", "Donate PayPal", nullptr));
        rate->setText(QCoreApplication::translate("About", "Rate in Store", nullptr));
        more_apps->setText(QCoreApplication::translate("About", "More Applications", nullptr));
        source_code->setText(QCoreApplication::translate("About", "Source Code", nullptr));
        debugInfoButton->setText(QCoreApplication::translate("About", "Debug Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
