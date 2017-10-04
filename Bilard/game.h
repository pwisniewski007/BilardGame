#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include "table.h"
#include "ball.h"
#include "player.h"
class Game : public QWidget
{
public:
    const static int HowManyBalls = 15;

    Table table1;
    Ball bilard_balls[Game::HowManyBalls];
    Player player1;
    WhiteBall wball;

    Game(int a_Height, int a_Width, int r1);

    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
};


#endif // GAME_H
