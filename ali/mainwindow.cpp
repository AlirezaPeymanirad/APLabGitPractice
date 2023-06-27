#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->warning_lbl->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_btn_clicked()
{
    //login
QVector<player>::Iterator iter;
for(iter=filePlayer.begin();iter!=filePlayer.end();++iter){
    if(ui->username_edt->text()==iter->get_username() && ui->password_edt->text()==iter->get_password()){
        gPlayer = *iter;
        menuForm = new menue;
        menuForm->show();
        hide();
        break;
    }
}
ui->warning_lbl->show();

}


void MainWindow::on_pushButton_clicked()
{
    //forgot password
    temp1=new ForgotPass();
    temp1->show();
    hide();
}


void MainWindow::on_pushButton_2_clicked()
{
    //creat new account
    temp2=new Registery();
    temp2->show();
    hide();
}

