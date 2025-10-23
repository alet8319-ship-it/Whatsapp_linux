/********************************************************************************
** Form generated from reading UI file 'automatictheme.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATICTHEME_H
#define UI_AUTOMATICTHEME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutomaticTheme
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTimeEdit *sunrise;
    QTimeEdit *sunset;
    QPushButton *refresh;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;

    void setupUi(QWidget *AutomaticTheme)
    {
        if (AutomaticTheme->objectName().isEmpty())
            AutomaticTheme->setObjectName(QString::fromUtf8("AutomaticTheme"));
        AutomaticTheme->resize(466, 113);
        verticalLayout = new QVBoxLayout(AutomaticTheme);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AutomaticTheme);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(AutomaticTheme);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        sunrise = new QTimeEdit(AutomaticTheme);
        sunrise->setObjectName(QString::fromUtf8("sunrise"));

        gridLayout->addWidget(sunrise, 1, 1, 1, 1);

        sunset = new QTimeEdit(AutomaticTheme);
        sunset->setObjectName(QString::fromUtf8("sunset"));

        gridLayout->addWidget(sunset, 2, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        refresh = new QPushButton(AutomaticTheme);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(refresh->sizePolicy().hasHeightForWidth());
        refresh->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/refresh-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon);

        horizontalLayout_2->addWidget(refresh);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cancel = new QPushButton(AutomaticTheme);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/arrow-go-back-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel->setIcon(icon1);

        horizontalLayout->addWidget(cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save = new QPushButton(AutomaticTheme);
        save->setObjectName(QString::fromUtf8("save"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/save-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon2);

        horizontalLayout->addWidget(save);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AutomaticTheme);

        QMetaObject::connectSlotsByName(AutomaticTheme);
    } // setupUi

    void retranslateUi(QWidget *AutomaticTheme)
    {
        AutomaticTheme->setWindowTitle(QCoreApplication::translate("AutomaticTheme", "Form", nullptr));
        label->setText(QCoreApplication::translate("AutomaticTheme", "Sunrise", nullptr));
        label_2->setText(QCoreApplication::translate("AutomaticTheme", "Sunset", nullptr));
        refresh->setText(QCoreApplication::translate("AutomaticTheme", "  Refresh ", nullptr));
        cancel->setText(QCoreApplication::translate("AutomaticTheme", "Disable and Close", nullptr));
        save->setText(QCoreApplication::translate("AutomaticTheme", "  Enable and Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutomaticTheme: public Ui_AutomaticTheme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATICTHEME_H
