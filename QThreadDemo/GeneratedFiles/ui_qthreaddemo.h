/********************************************************************************
** Form generated from reading UI file 'qthreaddemo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHREADDEMO_H
#define UI_QTHREADDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QThreadDemoClass
{
public:
    QWidget *centralWidget;
    QPushButton *Btn_stop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QThreadDemoClass)
    {
        if (QThreadDemoClass->objectName().isEmpty())
            QThreadDemoClass->setObjectName(QStringLiteral("QThreadDemoClass"));
        QThreadDemoClass->resize(600, 400);
        centralWidget = new QWidget(QThreadDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Btn_stop = new QPushButton(centralWidget);
        Btn_stop->setObjectName(QStringLiteral("Btn_stop"));
        Btn_stop->setGeometry(QRect(440, 260, 75, 23));
        QThreadDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QThreadDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QThreadDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QThreadDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QThreadDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QThreadDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QThreadDemoClass->setStatusBar(statusBar);

        retranslateUi(QThreadDemoClass);

        QMetaObject::connectSlotsByName(QThreadDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QThreadDemoClass)
    {
        QThreadDemoClass->setWindowTitle(QApplication::translate("QThreadDemoClass", "QThreadDemo", 0));
        Btn_stop->setText(QApplication::translate("QThreadDemoClass", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class QThreadDemoClass: public Ui_QThreadDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHREADDEMO_H
