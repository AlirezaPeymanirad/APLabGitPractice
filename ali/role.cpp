#include "role.h"
#include "ui_role.h"

role::role(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::role)
{
    ui->setupUi(this);
    ui->label_server->hide();
    ui->connect_btn->hide();
    ui->getip_edt->hide();
    ui->setip_lbl->hide();
    ui->go_btn->hide();
    ui->wait_btn->hide();
    ui->showUsername_lbl->hide();
    ui->label_temp->hide();
}

role::~role()
{
    delete ui;
}

void role::on_server_btn_clicked()
{
    gserver.is_connect();
    ui->label_server->show();
    ui->setip_lbl->show();
    ui->server_btn->setEnabled(false);
    ui->client_btn->setEnabled(false);
    ui->label_temp->show();
    ui->showUsername_lbl->show();
    ui->wait_btn->show();
    ui->setip_lbl->setText(gserver.getIp().toString());
}


void role::on_client_btn_clicked()
{
    ui->connect_btn->show();
    ui->getip_edt->show();
    ui->label_temp->show();
    ui->server_btn->setEnabled(false);
    ui->client_btn->setEnabled(false);

}


void role::on_connect_btn_clicked()
{
    if(gclient.isconnect(ui->getip_edt->text())==1){
        ui->label_temp->setStyleSheet("font: 600 14pt 'Sitka Banner Semibold'; color:#2E8B57");
       ui->label_temp->setText("connect");
       gclient.writeClient(gPlayer.get_username());

       hide();
    }
    else{
        ui->label_temp->setText("Not connect");
    }

    temp=new play;
    temp->show();

}

void role::on_go_btn_clicked()
{
    temp=new play;
    temp->show();
    hide();

}

void role::on_wait_btn_clicked()
{
    if(!gserver.get_data().isEmpty()){
        ui->label_temp->setStyleSheet("font: 600 14pt 'Sitka Banner Semibold'; color:#2E8B57");
        ui->label_temp->setText("connect");
        ui->showUsername_lbl->setText(gserver.get_data()+" is Ready");
        ui->wait_btn->hide();
        ui->go_btn->show();
    }
}

