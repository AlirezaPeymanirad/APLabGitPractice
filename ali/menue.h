#ifndef MENUE_H
#define MENUE_H
#pragma once
#include <QMainWindow>
#include "editprofile.h"
#include "role.h"
class MainWindow;
namespace Ui {
class menue;
}

class menue : public QMainWindow
{
    Q_OBJECT

public:
    explicit menue(QWidget *parent = nullptr);
    ~menue();

private slots:

    void on_edit_btn_clicked();

    void on_exit_btn_clicked();

    void on_play_btn_clicked();

private:
    Ui::menue *ui;
    editprofile *edit;
    MainWindow * temp;
    role *roleShow;
};

#endif // MENUE_H
