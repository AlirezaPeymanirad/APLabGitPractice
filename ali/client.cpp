#include "client.h"

Client::Client(QObject *parent)
    : QObject{parent}
{
}

int Client::isconnect(QString a){
    socket = new QTcpSocket(this);
    QHostAddress ip;
    ip.setAddress(a);
    socket->connectToHost(ip,8080);
    if(socket->waitForConnected(-1)){

       return 1;
    }
    else{
        return 0;
    }
}
void Client::readyread(){
    data = socket->readAll();
}

QString Client::get_data(){
    return data;
}

void Client::writeClient(QString data){
    QByteArray a  = data.toLatin1();
    socket->write(a);
    socket->flush();
}
Client gclient;
