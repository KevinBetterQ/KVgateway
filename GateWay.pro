#-------------------------------------------------
#
# Project created by QtCreator 2016-07-14T19:11:35
# @auther: wushaoling sdust China
# @desc:implements the function of control or read
#       temperature\light\humidity\ultrasound\relay\touch\smoke\motor\shake and so on
#       enddevice
# @linux version: Linux skzh 3.0.8-EmbedSky #7 PREEMPT Tue Sep 2 17:34:43 CST 2014 armv7l GNU/Linux
# @make: make clean qmake-arm make
# @running: ./GateWay -qws
# @version: 1.0
#-------------------------------------------------

QT       += core gui network sql

TARGET = GateWay
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    serialservice.cpp \
    temp_humi_light.cpp \
    motor.cpp \
    enddevice.cpp \
    socketclient.cpp

HEADERS  += mainwindow.h \
    posix_qextserialport.h \
    qextserialbase.h \
    serialservice.h \
    temp_humi_light.h \
    motor.h \
    enddevice.h \
    socketclient.h

FORMS    += mainwindow.ui
