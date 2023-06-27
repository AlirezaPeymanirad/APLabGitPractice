#ifndef EDITPROFILE_H
#define EDITPROFILE_H
#include <QMainWindow>
#include <QFile>
#include "player.h"

class menue;
namespace Ui {
class editprofile;
}

class editprofile : public QMainWindow
{
    Q_OBJECT

public:
    explicit editprofile(QWidget *parent = nullptr);
    ~editprofile();

private slots:
    void on_change_btn_clicked();

private:
    Ui::editprofile *ui;
   menue * meno;
};

#endif // EDITPROFILE_H

