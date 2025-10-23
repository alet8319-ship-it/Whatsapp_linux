/********************************************************************************
** Form generated from reading UI file 'downloadwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADWIDGET_H
#define UI_DOWNLOADWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include "widgets/elidedlabel/elidedlabel.h"

QT_BEGIN_NAMESPACE

class Ui_DownloadWidget
{
public:
    QGridLayout *m_topLevelLayout;
    ElidedLabel *srcUrl;
    QProgressBar *progressBar;
    ElidedLabel *dstName;
    QHBoxLayout *horizontalLayout;
    QPushButton *openButton;
    QPushButton *cancelButton;

    void setupUi(QFrame *DownloadWidget)
    {
        if (DownloadWidget->objectName().isEmpty())
            DownloadWidget->setObjectName(QString::fromUtf8("DownloadWidget"));
        DownloadWidget->resize(526, 99);
        DownloadWidget->setStyleSheet(QString::fromUtf8(""));
        m_topLevelLayout = new QGridLayout(DownloadWidget);
        m_topLevelLayout->setObjectName(QString::fromUtf8("m_topLevelLayout"));
        m_topLevelLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        srcUrl = new ElidedLabel(DownloadWidget);
        srcUrl->setObjectName(QString::fromUtf8("srcUrl"));
        srcUrl->setStyleSheet(QString::fromUtf8(""));

        m_topLevelLayout->addWidget(srcUrl, 1, 0, 1, 3);

        progressBar = new QProgressBar(DownloadWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8(""));
        progressBar->setValue(24);

        m_topLevelLayout->addWidget(progressBar, 2, 0, 1, 3);

        dstName = new ElidedLabel(DownloadWidget);
        dstName->setObjectName(QString::fromUtf8("dstName"));
        QFont font;
        font.setBold(true);
        dstName->setFont(font);

        m_topLevelLayout->addWidget(dstName, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openButton = new QPushButton(DownloadWidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openButton->sizePolicy().hasHeightForWidth());
        openButton->setSizePolicy(sizePolicy);
        openButton->setStyleSheet(QString::fromUtf8(""));
        openButton->setFlat(false);

        horizontalLayout->addWidget(openButton);

        cancelButton = new QPushButton(DownloadWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy);
        cancelButton->setStyleSheet(QString::fromUtf8(""));
        cancelButton->setFlat(false);

        horizontalLayout->addWidget(cancelButton);


        m_topLevelLayout->addLayout(horizontalLayout, 0, 2, 1, 1);


        retranslateUi(DownloadWidget);

        QMetaObject::connectSlotsByName(DownloadWidget);
    } // setupUi

    void retranslateUi(QFrame *DownloadWidget)
    {
        srcUrl->setText(QCoreApplication::translate("DownloadWidget", "TextLabel", nullptr));
        dstName->setText(QCoreApplication::translate("DownloadWidget", "TextLabel", nullptr));
#if QT_CONFIG(tooltip)
        openButton->setToolTip(QCoreApplication::translate("DownloadWidget", "Open file using system application", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)DownloadWidget;
    } // retranslateUi

};

namespace Ui {
    class DownloadWidget: public Ui_DownloadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADWIDGET_H
