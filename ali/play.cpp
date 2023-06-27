#include "play.h"
#include "ui_play.h"

play::play(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::play)
{
    ui->setupUi(this);
    ui->cardButton_1->hide();    ui->cardlabel_1->hide();       ui->wincardlabel_10->hide();
    ui->cardButton_10->hide();   ui->cardlabel_10->hide();       ui->wincardlabel_12->hide();
    ui->cardButton_11->hide();   ui->cardlabel_11->hide();      ui->wincardlabel_14->hide();
    ui->cardButton_12->hide();   ui->cardlabel_12->hide();      ui->wincardlabel_1->hide();
    ui->cardButton_13->hide();   ui->cardlabel_13->hide();      ui->wincardlabel_11->hide();
    ui->cardButton_14->hide();   ui->cardlabel_14->hide();       ui->wincardlabel_13->hide();
    ui->cardButton_2->hide();    ui->cardlabel_9->hide();       ui->wincardlabel_2->hide();
    ui->cardButton_3->hide();    ui->cardlabel_2->hide();       ui->wincardlabel_3->hide();
    ui->cardButton_4->hide();    ui->cardlabel_3->hide();       ui->wincardlabel_5->hide();
    ui->cardButton_5->hide();    ui->cardlabel_4->hide();       ui->wincardlabel_4->hide();
    ui->cardButton_6->hide();    ui->cardlabel_5->hide();       ui->wincardlabel_6->hide();
    ui->cardButton_7->hide();    ui->cardlabel_6->hide();       ui->wincardlabel_7->hide();
    ui->cardButton_8->hide();    ui->cardlabel_7->hide();       ui->wincardlabel_8->hide();
    ui->cardButton_9->hide();    ui->cardlabel_8->hide();       ui->wincardlabel_9->hide();
    ui->losecardlardlabel_1->hide();    ui->played_label_1->hide();
    ui->losecardlardlabel_10->hide();   ui->played_label_2->hide();
    ui->losecardlardlabel_11->hide();
    ui->losecardlardlabel_12->hide();
    ui->losecardlardlabel_13->hide();
    ui->losecardlardlabel_2->hide();
    ui->losecardlardlabel_14->hide();
    ui->losecardlardlabel_3->hide();
    ui->losecardlardlabel_5->hide();
    ui->losecardlardlabel_4->hide();
    ui->losecardlardlabel_6->hide();
    ui->losecardlardlabel_7->hide();
    ui->losecardlardlabel_8->hide();
    ui->losecardlardlabel_9->hide();
}

play::~play()
{
    delete ui;
}

void play::on_pushButton_play_clicked()
{
   gPlayer.set_predict_win( ui->lineEdit_predicet->text().toInt());

}


void play::on_pushButton_start_clicked()
{
     gPlayer.set_coin(gPlayer.get_coin()-50);
     game game;
     game.howStart();
     if(gPlayer.get_role()=="server"){
         if(gserver.get_data()=="Start"){
             gPlayer.set_start(1);
         }
         else{
             gserver.writeClient(QString::number(gPlayer.get_stratCard().get_value()));
             int a = gserver.get_data().toInt();
             if(a<gPlayer.get_stratCard().get_value()){
                 gPlayer.set_start(1);
             }
         }
         int r = gPlayer.get_stratCard().get_value();
         QString c = QString::number(r);
         QString b = "border-image: url(:/parrot"+c;
         QString d = b+".png)";
          qInfo()<<d;
          ui->played_label_1->show();
          ui->played_label_1->setStyleSheet(d);
           r = gserver.get_data().toInt();
           c = QString::number(r);
           b = "border-image: url(:/parrot"+c;
           d = b+".png)";
           qInfo()<<d;
           ui->played_label_2->show();
           ui->played_label_2->setStyleSheet(d);

     }
     else{

        int a= gclient.get_data().toInt();
        if(a<gPlayer.get_stratCard().get_value()){
            gPlayer.set_start(1);
        }
        else{
            gclient.writeClient("Start");
        }
        int r = gPlayer.get_stratCard().get_value();
        QString c = QString::number(r);
        QString b = "border-image: url(:/parrot"+c;
        QString d = b+".png)";
         qInfo()<<d;
         ui->played_label_1->show();
         ui->played_label_1->setStyleSheet(d);
          r = gclient.get_data().toInt();
          c = QString::number(r);
          b = "border-image: url(:/parrot"+c;
          d = b+".png)";
          qInfo()<<d;
          ui->played_label_2->show();
          ui->played_label_2->setStyleSheet(d);
     }
}

