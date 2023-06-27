#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QFile file("player.txt");
    player player;
    file.open(QIODevice::ReadOnly);
    QTextStream stream(&file);
    while(!stream.atEnd()){
        stream>>player;
        filePlayer.push_back(player);
        if(stream.status()==QTextStream::Ok){}
        else{
            break;
        }
    }
    file.close();
    return a.exec();
}
