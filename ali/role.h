#ifndef ROLE_H
#define ROLE_H

#include <QMainWindow>
#include "client.h"
#include "server.h"
#include "player.h"
#include "play.h"
namespace Ui {
class role;
}

class role : public QMainWindow
{
    Q_OBJECT

public:
    explicit role(QWidget *parent = nullptr);
    ~role();

private slots:
    void on_server_btn_clicked();

    void on_client_btn_clicked();

    void on_connect_btn_clicked();

    void on_go_btn_clicked();

    void on_wait_btn_clicked();

private:
    Ui::role *ui;
    play* temp;


};

#endif // ROLE_H
