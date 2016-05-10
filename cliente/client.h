#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include <QDebug>

#include <QVERSO.pb.h>

class Client : public QObject
{
    Q_OBJECT
public:
    Client();
    Client(QString ip, int port, QString name);
    ~Client();

    void sendUpdateRoom(QString room);
    //establecer conexion
    int connectTo();

    void makeConnect(QObject *parent);

    void sentTo(QVERSO a_verso);

    void log_me_in(QString username, QString password);

    void createMessageText(QString textLine);

    void setActualRoom(const QString &actualRoom);

public slots:
    void recivedFrom();

signals:
    void messageRecive(QString message);

private:
    QTcpSocket socket_;
    QString ipServer_;
    int portServer_;
    QString userName_;
    bool connected_;
    QString actualRoom_;
};

#endif // CLIENT_H
