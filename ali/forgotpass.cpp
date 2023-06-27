#include "forgotpass.h"
#include "ui_forgotpass.h"

ForgotPass::ForgotPass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForgotPass)
{
    ui->setupUi(this);
    ui->warning_lbl->hide();
}

ForgotPass::~ForgotPass()
{
    delete ui;
}

void ForgotPass::on_login_btn_clicked()
{
    QVector<player>::Iterator iter;
    for(iter=filePlayer.begin();iter!=filePlayer.end();++iter){
        if(ui->phone_edt->text()==iter->get_phoneNumber()){
            gPlayer = *iter;
            menuForm = new menue;
            menuForm->show();
            hide();
            break;
        }
    }
    ui->warning_lbl->show();

}

