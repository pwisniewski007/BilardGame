#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include "table.h"
#include "ball.h"
class Game : public QWidget
{
public:
    void paintEvent(QPaintEvent*);

    Table table1;
    Ball bilard_balls[15];

    Game(int a_Height, int a_Width, int r1);

};


#endif // GAME_H
