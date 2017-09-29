#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include "table.h"
#include "ball.h"
#include "player.h"
class Game : public QWidget
{
public:

    Table table1;
    Ball bilard_balls[15];
    Player player1;

    Game(int a_Height, int a_Width, int r1);

    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
};


#endif // GAME_H
