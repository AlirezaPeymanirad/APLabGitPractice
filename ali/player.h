#ifndef PLAYER_H
#define PLAYER_H
#include <QMainWindow>
#include "card.h"
#include <qlist.h>
#include <QDataStream>
#include <QDateTime>

class player
{
public:
    player();
    void set_playerCard(card c);
         player( const player&);
        QList<card>& get_playerCards();
        void set_winCard(card c) ;
        QList<card> &get_winCards();
        void delete_playCard();
        //start
        void set_start(int s);
        int get_start();
        //username
        void set_username(QString s);
        QString get_username();
        //password
        void set_password(QString s);
        QString get_password();
        //phone
        void set_phoneNumber(QString s);
        QString get_phoneNumber();
        //profile
        void set_profile(QString s);
        QString get_profile();
        //win
        void set_win(int s);
        int get_win();
        //lose
        void set_lose(int s);
        int get_lose();
        //predictWin
        void set_predict_win(int s);
        int get_predict_win();
        //takeWin
        void set_takeWin(int s);
        int & get_takeWin();
        //coin
        void set_coin(long int s);
        long int get_coin();
        //playedCard
        void set_playedCard(card c);
        card get_playedCard();

        card get_stratCard();
        void set_StratCard(card a);
        QString get_role();
        void set_role(QString a);
        friend QTextStream &operator >>(QTextStream& in, player &p);
        friend QTextStream &operator <<(QTextStream& out, const player &p);
        ~player();
private:
     QString username;
    QString password;
    QString phoneNumber;
    QString profile;
    QString role;
    long int coin;
    int win;
    int lose;
    int turn;
    int predict_win;
    int start;
    int takeWin;//dast hai borde
    QList<card>playerCard;//card hai ke dare
    QList<card>winCard;//card hai borde
    card playedCard;//card bazi shode
    card startCard;

};
extern QVector <player> filePlayer;
extern player gPlayer;
#endif // PLAYER_H
