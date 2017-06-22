/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Jun 6 14:06:41 2017
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame_2;
    QPushButton *btn_motor_f;
    QPushButton *btn_motor_b;
    QPushButton *btn_motor_stop;
    QFrame *frame_4;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcd_temp;
    QLCDNumber *lcd_humi;
    QLCDNumber *lcd_lig;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QLabel *label_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 482);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(180, 250, 331, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        btn_motor_f = new QPushButton(frame_2);
        btn_motor_f->setObjectName(QString::fromUtf8("btn_motor_f"));
        btn_motor_f->setGeometry(QRect(10, 10, 301, 31));
        btn_motor_b = new QPushButton(frame_2);
        btn_motor_b->setObjectName(QString::fromUtf8("btn_motor_b"));
        btn_motor_b->setGeometry(QRect(10, 50, 301, 31));
        btn_motor_stop = new QPushButton(frame_2);
        btn_motor_stop->setObjectName(QString::fromUtf8("btn_motor_stop"));
        btn_motor_stop->setGeometry(QRect(10, 90, 301, 31));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(180, 70, 331, 151));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 41, 17));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 50, 31, 17));
        lcd_temp = new QLCDNumber(frame_4);
        lcd_temp->setObjectName(QString::fromUtf8("lcd_temp"));
        lcd_temp->setGeometry(QRect(140, 10, 111, 23));
        lcd_humi = new QLCDNumber(frame_4);
        lcd_humi->setObjectName(QString::fromUtf8("lcd_humi"));
        lcd_humi->setGeometry(QRect(140, 50, 111, 23));
        lcd_lig = new QLCDNumber(frame_4);
        lcd_lig->setObjectName(QString::fromUtf8("lcd_lig"));
        lcd_lig->setGeometry(QRect(140, 100, 111, 23));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 100, 31, 17));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(230, 0, 201, 41));
        lineEdit->setReadOnly(true);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 310, 71, 31));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(100, 120, 71, 31));
        MainWindow->setCentralWidget(centralWidget);
        frame_2->raise();
        frame_4->raise();
        lineEdit->raise();
        label_10->raise();
        label_11->raise();
        btn_motor_b->raise();
        btn_motor_stop->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        btn_motor_f->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221", 0, QApplication::UnicodeUTF8));
        btn_motor_b->setText(QApplication::translate("MainWindow", "\351\200\206\345\220\221", 0, QApplication::UnicodeUTF8));
        btn_motor_stop->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("MainWindow", "\345\237\272\344\272\216\347\211\251\350\201\224\347\275\221\350\257\225\351\252\214\347\216\257\345\242\203\347\232\204\346\243\200\346\265\213\346\216\247\345\210\266", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\346\216\247\345\210\266\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\346\243\200\346\265\213\357\274\232", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
