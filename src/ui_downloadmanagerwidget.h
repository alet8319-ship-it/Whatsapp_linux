/********************************************************************************
** Form generated from reading UI file 'downloadmanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADMANAGERWIDGET_H
#define UI_DOWNLOADMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadManagerWidget
{
public:
    QVBoxLayout *m_topLevelLayout;
    QScrollArea *m_scrollArea;
    QWidget *m_items;
    QVBoxLayout *m_itemsLayout;
    QLabel *m_zeroItemsLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clear_all_downlads;
    QPushButton *open_download_dir;

    void setupUi(QWidget *DownloadManagerWidget)
    {
        if (DownloadManagerWidget->objectName().isEmpty())
            DownloadManagerWidget->setObjectName(QString::fromUtf8("DownloadManagerWidget"));
        DownloadManagerWidget->resize(589, 363);
        DownloadManagerWidget->setMinimumSize(QSize(400, 250));
        DownloadManagerWidget->setStyleSheet(QString::fromUtf8(""));
        m_topLevelLayout = new QVBoxLayout(DownloadManagerWidget);
        m_topLevelLayout->setObjectName(QString::fromUtf8("m_topLevelLayout"));
        m_topLevelLayout->setSizeConstraint(QLayout::SetNoConstraint);
        m_scrollArea = new QScrollArea(DownloadManagerWidget);
        m_scrollArea->setObjectName(QString::fromUtf8("m_scrollArea"));
        m_scrollArea->setStyleSheet(QString::fromUtf8(""));
        m_scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        m_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        m_scrollArea->setWidgetResizable(true);
        m_items = new QWidget();
        m_items->setObjectName(QString::fromUtf8("m_items"));
        m_items->setGeometry(QRect(0, 0, 569, 310));
        m_items->setStyleSheet(QString::fromUtf8(""));
        m_itemsLayout = new QVBoxLayout(m_items);
        m_itemsLayout->setSpacing(2);
        m_itemsLayout->setObjectName(QString::fromUtf8("m_itemsLayout"));
        m_itemsLayout->setContentsMargins(3, 3, 3, 3);
        m_zeroItemsLabel = new QLabel(m_items);
        m_zeroItemsLabel->setObjectName(QString::fromUtf8("m_zeroItemsLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_zeroItemsLabel->sizePolicy().hasHeightForWidth());
        m_zeroItemsLabel->setSizePolicy(sizePolicy);
        m_zeroItemsLabel->setAlignment(Qt::AlignCenter);

        m_itemsLayout->addWidget(m_zeroItemsLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        m_itemsLayout->addItem(verticalSpacer);

        m_scrollArea->setWidget(m_items);

        m_topLevelLayout->addWidget(m_scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clear_all_downlads = new QPushButton(DownloadManagerWidget);
        clear_all_downlads->setObjectName(QString::fromUtf8("clear_all_downlads"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/close-fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_all_downlads->setIcon(icon);

        horizontalLayout->addWidget(clear_all_downlads);

        open_download_dir = new QPushButton(DownloadManagerWidget);
        open_download_dir->setObjectName(QString::fromUtf8("open_download_dir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/folder-open-line.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_download_dir->setIcon(icon1);

        horizontalLayout->addWidget(open_download_dir);


        m_topLevelLayout->addLayout(horizontalLayout);


        retranslateUi(DownloadManagerWidget);

        QMetaObject::connectSlotsByName(DownloadManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *DownloadManagerWidget)
    {
        DownloadManagerWidget->setWindowTitle(QCoreApplication::translate("DownloadManagerWidget", "Downloads", nullptr));
        m_zeroItemsLabel->setText(QCoreApplication::translate("DownloadManagerWidget", "No downloads", nullptr));
#if QT_CONFIG(tooltip)
        clear_all_downlads->setToolTip(QCoreApplication::translate("DownloadManagerWidget", "Clear download list", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_all_downlads->setText(QCoreApplication::translate("DownloadManagerWidget", "Clear all", nullptr));
#if QT_CONFIG(tooltip)
        open_download_dir->setToolTip(QCoreApplication::translate("DownloadManagerWidget", "Open download directory in file manager", nullptr));
#endif // QT_CONFIG(tooltip)
        open_download_dir->setText(QCoreApplication::translate("DownloadManagerWidget", "Open Download directory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadManagerWidget: public Ui_DownloadManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADMANAGERWIDGET_H
