#include "menue.h"
#include "ui_menue.h"
#include "mainwindow.h"

menue::menue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menue)
{
    ui->setupUi(this);
    ui->username_lbl->setText(gPlayer.get_username());
    ui->coin_lbl->setText(QString::number(gPlayer.get_coin()));
    ui->win_lbl->setText(QString::number(gPlayer.get_win()));
    ui->lose_lbl->setText(QString::number(gPlayer.get_lose()));
}

menue::~menue()
{
    delete ui;
}


void menue::on_edit_btn_clicked()
{
    edit = new editprofile();
    edit->show();
    hide();

}


void menue::on_exit_btn_clicked()
{
    temp=new MainWindow;
    hide();
    temp->show();

}


void menue::on_play_btn_clicked()
{
  roleShow = new role;
  roleShow->show();
}

