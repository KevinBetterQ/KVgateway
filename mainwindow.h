#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QByteArray>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QSqlDatabase>
#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QSqlQuery>
#include <QVariantList>
#include <QSqlError>
#include <QDateTime>
#include <QTcpServer>

#include "serialservice.h"
#include "temp_humi_light.h"
#include "motor.h"
#include "socketclient.h"

#define BACKGROUND_COLOR_GREEN "background-color: rgb(0, 255, 0);"
#define BACKGROUND_COLOR_BLACK "background-color: rgb(255, 255, 255);"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateTempHumiLig();
    void processMsg(QByteArray&);

signals:


public slots:
    void readTimer();


private slots:

    void on_btn_motor_f_clicked();

    void on_btn_motor_b_clicked();

    void on_btn_motor_stop_clicked();



private:
    Ui::MainWindow *ui;
    SerialService *serial_server;

    Temp_Humi_Light *temp_humi_light;
    Motor *motor;

    QPalette pe_red;
    QPalette pe_black;



};

#endif // MAINWINDOW_H
