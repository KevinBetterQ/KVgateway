#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QList>

class SocketClient : public QObject
{
    Q_OBJECT
public:
    explicit SocketClient();
    QString readmsg();
    void sendmsg(QString msg);

signals:

public slots:

public:
    QTcpSocket *socket;
    QString IP;
    int PORT;
};
#endif // SOCKETCLIENT_H
