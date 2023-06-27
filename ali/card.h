#ifndef CARD_H
#define CARD_H

#include <QMainWindow>
#include <QString>

class card
{
    friend class board;
    friend class player;
public:
    card();

           card(QString type, int value);
           card( const card&);
           int get_value();
           QString get_type();
           void operator =(const card& c);
           bool operator >(const card& c)const;
           bool operator == (const card & c)const;
       ~card();
private:
    QString type;
        int value;
};

#endif // CARD_H
