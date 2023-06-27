#include "board.h"

board::board()
{
       for (int i = 0; 8 > i; i++) {
            card temp;
            temp.type = "parrot";
            temp.value = i + 1;
            parrot.push_back(temp);
        }
       for (int i = 0; 8 > i; i++) {
            card temp;
            temp.type = "treasure";
            temp.value = i + 1;
            treasure.push_back(temp);
        }
        for (int i = 0; 8 > i; i++) {
            card temp;
            temp.type = "naghshe";
            temp.value = i + 1;
            naghshe.push_back(temp);
        }
        for (int i = 0; 8 > i; i++) {
            card temp;
            temp.type = "hokm";
            temp.value = i + 1;
            hokm.push_back(temp);
        }
        for (int i = 0; 4 > i; i++) {
            card temp;
            temp.type = "queen";
            temp.value = -1;
            queen.push_back(temp);
        }
        for (int i = 0; 4 > i; i++) {
            card temp;
            temp.type = "skull";
            temp.value = -2;
            skull.push_back(temp);
        }
        for (int i = 0; 8 > i; i++) {
            card temp;
            temp.type = "dozde";
            temp.value = -3;
            dozde_daryayi.push_back(temp);
        }
        for (auto x : parrot)
            allCards.push_back(x);
        for (auto x : treasure)
            allCards.push_back(x);
        for (auto x : naghshe)
            allCards.push_back(x);
        for (auto x : hokm)
            allCards.push_back(x);
        for (auto x : queen)
            allCards.push_back(x);
        for (auto x : skull)
            allCards.push_back(x);
        for (auto x : dozde_daryayi)
            allCards.push_back(x);
}

QList<card>board::get_parrotCard() {
      return parrot;
  }
  QList<card>board::get_treasureCard() {
      return treasure;
  }
  QList<card>board::get_naghsheCard() {
      return naghshe;
  }
  QList<card>board::get_hokmCard() {
      return hokm;
  }
  QList<card>board::get_queenCard() {
      return queen;
  }
  QList<card>board::get_skullCard() {
      return skull;
  }
  QList<card>board::get_dozdCard() {
      return dozde_daryayi;
  }
  QVector<card>&board::get_allcard() {
      return allCards;
  }
  board::   ~board(){}
