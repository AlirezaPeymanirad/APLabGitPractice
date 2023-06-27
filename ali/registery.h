#ifndef REGISTERY_H
#define REGISTERY_H

#include <QMainWindow>
#include "player.h"
#include "menue.h"
namespace Ui {
class Registery;
}

class Registery : public QMainWindow
{
    Q_OBJECT

public:
    explicit Registery(QWidget *parent = nullptr);
    ~Registery();

private slots:
    void on_login_btn_clicked();

private:
    Ui::Registery *ui;
    menue *menuForm;
};

#endif // REGISTERY_H
