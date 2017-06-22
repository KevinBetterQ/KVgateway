#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qsqldatabase.h>
#include <qtcpserver.h>
#include "socketclient.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //add background
    QPixmap pixmap(QString::fromUtf8("/home/SKZH/back.png"));//当前文件夹下面的图片
    QPalette palette = this->palette();
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);

    //ui part
    ui->setupUi(this);

    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);

    ui->lcd_humi->setNumDigits(8);
    ui->lcd_humi->setPalette(Qt::black);
    ui->lcd_temp->setNumDigits(8);
    ui->lcd_temp->setPalette(Qt::black);
    ui->lcd_lig->setNumDigits(8);
    ui->lcd_lig->setPalette(Qt::black);


    pe_black.setColor(QPalette::WindowText,Qt::black);
    pe_red.setColor(QPalette::WindowText,Qt::red);

    serial_server = new SerialService();

    temp_humi_light = new Temp_Humi_Light();
    motor = new Motor();

    //signals and slots
    connect(serial_server->getTimer(), SIGNAL(timeout()), this, SLOT(readTimer()));
    serial_server->openCom();

    ui->lcd_temp->display(24);
    ui->lcd_humi->display(17);
    ui->lcd_lig->display(QString::number(167.0, 'f', 1));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readTimer()
{
    QByteArray buff;
    serial_server->readFromSerial(buff);
    if(buff.isEmpty())
        return;
    processMsg(buff);
}


void MainWindow::updateTempHumiLig()
{
    ui->lcd_temp->display(temp_humi_light->getTemperature());
    ui->lcd_humi->display(temp_humi_light->getHumidity());
    ui->lcd_lig->display(QString::number(temp_humi_light->getLight(), 'f', 1));
}

void MainWindow::on_btn_motor_f_clicked()
{
    ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_BLACK);
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_BLACK);
    motor->setState(1);
    serial_server->writeToSerial(Motor::MSG_MOTOR_FORE);
}

void MainWindow::on_btn_motor_b_clicked()
{
    ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_BLACK);
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_BLACK);
    motor->setState(2);
    serial_server->writeToSerial(Motor::MSG_MOTOR_BACK);
}

void MainWindow::on_btn_motor_stop_clicked()
{
    ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
    ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_BLACK);
    ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_BLACK);
    motor->setState(0);
    serial_server->writeToSerial(Motor::MSG_MOTOR_STOP);

}


void MainWindow::processMsg(QByteArray &msg)
{
    //温湿亮度
    if(msg[3] == 0x02 && msg[4] == 0x01)
    {
        temp_humi_light->setValue(msg);
        updateTempHumiLig();
    }
}






