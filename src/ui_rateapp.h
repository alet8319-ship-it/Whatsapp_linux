/********************************************************************************
** Form generated from reading UI file 'rateapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATEAPP_H
#define UI_RATEAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RateApp
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *rateNowBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *rateOnGithub;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *donate;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *donate_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *laterBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *alreadyDoneBtn;

    void setupUi(QWidget *RateApp)
    {
        if (RateApp->objectName().isEmpty())
            RateApp->setObjectName(QString::fromUtf8("RateApp"));
        RateApp->resize(477, 257);
        verticalLayout = new QVBoxLayout(RateApp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RateApp);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(RateApp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rateNowBtn = new QPushButton(RateApp);
        rateNowBtn->setObjectName(QString::fromUtf8("rateNowBtn"));

        horizontalLayout_2->addWidget(rateNowBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(RateApp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        rateOnGithub = new QPushButton(RateApp);
        rateOnGithub->setObjectName(QString::fromUtf8("rateOnGithub"));

        horizontalLayout_2->addWidget(rateOnGithub);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        donate = new QPushButton(RateApp);
        donate->setObjectName(QString::fromUtf8("donate"));

        horizontalLayout_3->addWidget(donate);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_5 = new QLabel(RateApp);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        donate_2 = new QPushButton(RateApp);
        donate_2->setObjectName(QString::fromUtf8("donate_2"));

        horizontalLayout_3->addWidget(donate_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        laterBtn = new QPushButton(RateApp);
        laterBtn->setObjectName(QString::fromUtf8("laterBtn"));

        horizontalLayout->addWidget(laterBtn);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        alreadyDoneBtn = new QPushButton(RateApp);
        alreadyDoneBtn->setObjectName(QString::fromUtf8("alreadyDoneBtn"));
        alreadyDoneBtn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(alreadyDoneBtn);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(RateApp);

        QMetaObject::connectSlotsByName(RateApp);
    } // setupUi

    void retranslateUi(QWidget *RateApp)
    {
        RateApp->setWindowTitle(QCoreApplication::translate("RateApp", "Form", nullptr));
        label->setText(QCoreApplication::translate("RateApp", "Rate this app", nullptr));
        label_2->setText(QCoreApplication::translate("RateApp", "<html><head/><body><p>If you enjoy using this app, would you mind taking a moment to rate it?</p><p>It won't take more than a minute. Thanks you for your support!</p></body></html>", nullptr));
        rateNowBtn->setText(QCoreApplication::translate("RateApp", "  Rate in Store", nullptr));
        label_4->setText(QCoreApplication::translate("RateApp", "Or", nullptr));
        rateOnGithub->setText(QCoreApplication::translate("RateApp", "Star rate Github repo", nullptr));
        donate->setText(QCoreApplication::translate("RateApp", "Donate via PayPal ", nullptr));
        label_5->setText(QCoreApplication::translate("RateApp", "Or", nullptr));
        donate_2->setText(QCoreApplication::translate("RateApp", "Donate via OpenCollective", nullptr));
        laterBtn->setText(QCoreApplication::translate("RateApp", "Later", nullptr));
        alreadyDoneBtn->setText(QCoreApplication::translate("RateApp", "  Already Done  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RateApp: public Ui_RateApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATEAPP_H
