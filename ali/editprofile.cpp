#include "editprofile.h"
#include "ui_editprofile.h"
#include "menue.h"

editprofile::editprofile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::editprofile)
{
    ui->setupUi(this);
    ui->username_edt->setText(gPlayer.get_username());
    ui->password_edt-> setText(gPlayer.get_password());
    ui->phone_edt->setText(gPlayer.get_phoneNumber());
}

editprofile::~editprofile()
{
    delete ui;
}

void editprofile::on_change_btn_clicked()
{
    QVector<player>::Iterator it;
    for(it=filePlayer.begin();it!=filePlayer.end();it++){
        if(it->get_username()==gPlayer.get_username()&&it->get_phoneNumber()==gPlayer.get_phoneNumber()&&it->get_password()==gPlayer.get_password()){
            it->set_username(ui->username_edt->text());
            it->set_phoneNumber(ui->phone_edt->text());
            it->set_password(ui->password_edt->text());
            gPlayer.set_username(ui->username_edt->text());
            gPlayer.set_phoneNumber(ui->phone_edt->text());
            gPlayer.set_password(ui->password_edt->text());
        }
    }
    player player;

    QFile file("player.txt");
    if(file.open(QIODevice::WriteOnly)){
        for(it=filePlayer.begin();it!=filePlayer.end();it++){
            player=*it;
        QTextStream stream (&file);
        stream<<player;
        }
    }
    meno = new menue;
    meno->show();
    hide();
}

