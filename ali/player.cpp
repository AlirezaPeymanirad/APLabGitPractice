#include "player.h"

player::player()
{
    turn = 0;
    predict_win = 0;
    coin = 1000;
    win = 0;
    lose = 0;
}
player::   player( const player&c){
    username=c.username;
    password=c.password;
    phoneNumber=c.phoneNumber;
    profile=c.profile;
    coin=c.coin;
    win=c.win;
    lose=c.lose;
    turn=c.turn;
    predict_win=c.predict_win;
     start=c.start;
         takeWin=c.takeWin;
        playerCard=c.playerCard;
        winCard=c.winCard;
         playedCard=c.playedCard;
}
player::~player(){}
void player:: set_playerCard(card c) {
    playerCard.push_back(c);
}
QList<card>&player:: get_playerCards() {
    return playerCard;
}
void player:: set_winCard(card c) {
    winCard.push_back(c);
}
QList<card> & player::get_winCards() {
    return winCard;
}
void player:: delete_playCard() {
    QList<card>::iterator it;
    for (it = playerCard.begin(); it != playerCard.end(); it++) {
        if (it->type == playedCard.get_type() && it->value == playedCard.get_value()) {
            playerCard.erase(it);
            break;
        }
    }
}
//start
void player:: set_start(int s) {
    start = s;
}
int player:: get_start() {
    return start;
}
//username
void player:: set_username(QString s) {
    username = s;
}
QString player:: get_username() {
    return username;
}
//password
void player:: set_password(QString s) {
    password = s;
}
QString player:: get_password() {
    return password;
}
//phone
void player:: set_phoneNumber(QString s) {
    phoneNumber = s;
}
QString player:: get_phoneNumber() {
    return phoneNumber;
}
//profile
void player:: set_profile(QString s) {
    profile = s;
}
QString player:: get_profile() {
    return profile;
}
//win
void player:: set_win(int s) {
    win = s;
}
int player:: get_win() {
    return win;
}
//lose
void player:: set_lose(int s) {
    lose = s;
}
int player:: get_lose() {
    return lose;
}
//predictWin
void player:: set_predict_win(int s) {
    predict_win = s;
}
int player:: get_predict_win() {
    return predict_win;
}
//takeWin
void player:: set_takeWin(int s) {
    takeWin = s;
}
int & player:: get_takeWin() {
    return takeWin;
}
//coin
void player:: set_coin(long int s) {
    coin = s;
}
long int player:: get_coin() {
    return coin;
}
//playedCard
void player:: set_playedCard(card c) {
    playedCard = c;
}
card player:: get_playedCard() {
    return playedCard;
}
QTextStream &operator >>(QTextStream& in, player &p){
    in >> p.username>>p.password>>p.phoneNumber>>p.coin>>p.win>>p.lose;
    return in;
}
QTextStream &operator <<(QTextStream& out,const player &p){
    out<<p.username<<" "<<p.password<<" "<<p.phoneNumber<<" "<<p.coin<<" "<<p.win<<" "<<p.lose;
    return out;
}
card player:: get_stratCard(){
    return startCard;
}
void player:: set_StratCard(card a){
    startCard=a;
}
QString player:: get_role(){
    return role;
}
void player:: set_role(QString a){
    role=a;
}

QVector<player> filePlayer;
player gPlayer;
