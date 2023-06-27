#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
class Client :public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);
    int isconnect(QString a);
    void writeClient(QString data);
    QString get_data();
private:
    QTcpSocket *socket;
    QByteArray data;
private slots:
    void readyread();

};

extern Client gclient;
#endif // CLIENT_H
