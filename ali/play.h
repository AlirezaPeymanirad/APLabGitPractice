#ifndef PLAY_H
#define PLAY_H

#include <QMainWindow>
#include "player.h"
#include "server.h"
#include "client.h"
#include "game.h"
namespace Ui {
class play;
}

class play : public QMainWindow
{
    Q_OBJECT

public:
    explicit play(QWidget *parent = nullptr);
    ~play();

private slots:
    void on_pushButton_play_clicked();

    void on_pushButton_start_clicked();

private:
    Ui::play *ui;
};

#endif // PLAY_H
