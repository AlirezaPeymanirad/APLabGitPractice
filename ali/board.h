#ifndef BOARD_H
#define BOARD_H
#include <QMainWindow>
#include "card.h"

class board
{
public:
    board();
    QList<card>get_parrotCard();
    QList<card>get_treasureCard();
    QList<card>get_naghsheCard();
    QList<card>get_hokmCard();
    QList<card>get_queenCard();
    QList<card>get_skullCard();
    QList<card>get_dozdCard();
    QVector<card>&get_allcard();
      ~board();

private:
    QList<card>parrot;
    QList<card>treasure;
    QList<card>naghshe;
    QList<card>hokm;
    QList<card>queen;
    QList<card>skull;
    QList<card>dozde_daryayi;
    QVector<card> allCards;
};

#endif // BOARD_H
