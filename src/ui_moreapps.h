/********************************************************************************
** Form generated from reading UI file 'moreapps.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREAPPS_H
#define UI_MOREAPPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoreApps
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *loadingLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *MoreApps)
    {
        if (MoreApps->objectName().isEmpty())
            MoreApps->setObjectName(QString::fromUtf8("MoreApps"));
        MoreApps->resize(806, 141);
        horizontalLayout_2 = new QHBoxLayout(MoreApps);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        loadingLabel = new QLabel(MoreApps);
        loadingLabel->setObjectName(QString::fromUtf8("loadingLabel"));

        horizontalLayout_2->addWidget(loadingLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        retranslateUi(MoreApps);

        QMetaObject::connectSlotsByName(MoreApps);
    } // setupUi

    void retranslateUi(QWidget *MoreApps)
    {
        MoreApps->setWindowTitle(QCoreApplication::translate("MoreApps", "Form", nullptr));
        loadingLabel->setText(QCoreApplication::translate("MoreApps", "... ... ... ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoreApps: public Ui_MoreApps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREAPPS_H
