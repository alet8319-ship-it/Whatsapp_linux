/********************************************************************************
** Form generated from reading UI file 'permissiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMISSIONDIALOG_H
#define UI_PERMISSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PermissionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *featuresTableWidget;

    void setupUi(QWidget *PermissionDialog)
    {
        if (PermissionDialog->objectName().isEmpty())
            PermissionDialog->setObjectName(QString::fromUtf8("PermissionDialog"));
        PermissionDialog->resize(485, 311);
        verticalLayout = new QVBoxLayout(PermissionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        featuresTableWidget = new QTableWidget(PermissionDialog);
        if (featuresTableWidget->columnCount() < 2)
            featuresTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        featuresTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        featuresTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        featuresTableWidget->setObjectName(QString::fromUtf8("featuresTableWidget"));
        featuresTableWidget->horizontalHeader()->setVisible(false);

        verticalLayout->addWidget(featuresTableWidget);


        retranslateUi(PermissionDialog);

        QMetaObject::connectSlotsByName(PermissionDialog);
    } // setupUi

    void retranslateUi(QWidget *PermissionDialog)
    {
        PermissionDialog->setWindowTitle(QCoreApplication::translate("PermissionDialog", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = featuresTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PermissionDialog", "Feature", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = featuresTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PermissionDialog", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PermissionDialog: public Ui_PermissionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMISSIONDIALOG_H
