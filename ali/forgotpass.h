#ifndef FORGOTPASS_H
#define FORGOTPASS_H
#include <QMainWindow>
#include "menue.h"
#include "player.h"
namespace Ui {
class ForgotPass;
}

class ForgotPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForgotPass(QWidget *parent = nullptr);
    ~ForgotPass();

private slots:
    void on_login_btn_clicked();

private:
    Ui::ForgotPass *ui;
    menue *menuForm;
};

#endif // FORGOTPASS_H
