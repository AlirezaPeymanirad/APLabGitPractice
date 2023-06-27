#include "registery.h"
#include "ui_registery.h"
#include <QFile>
Registery::Registery(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Registery)
{
    ui->setupUi(this);
}

Registery::~Registery()
{
    delete ui;
}

void Registery::on_login_btn_clicked()
{
 player player;
 player.set_username(ui->username_edt->text());
 player.set_password(ui->password_edt->text());
 player.set_phoneNumber(ui->phoneNumber_edt->text());
 QFile file("player.txt");
 if(file.open(QIODevice::Append)){
     QTextStream stream (&file);
     stream<<player;
 }
filePlayer.push_back(player);
gPlayer = player;
menuForm = new menue;
menuForm->show();
hide();

}

