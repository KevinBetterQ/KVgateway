#include "socketclient.h"
#include "QDebug"

SocketClient::SocketClient()
{
    IP = "192.168.0.139";
    PORT = 6666;

    socket = new QTcpSocket(this);
    socket->connectToHost(QHostAddress(IP), PORT);

}

QString SocketClient::readmsg(){
    QString msg = socket->readAll();
    qDebug("%s",msg);
    return msg;
}

void SocketClient::sendmsg(QString msg){
    socket->write(msg.toAscii());
    socket->flush();
}

