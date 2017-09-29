#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include "game.h"
#include "table.h"
#include "ball.h"

Game::Game(int a_Height, int a_Width, int r1)
{
    table1.height = a_Height;
    table1.width = a_Width;

    int centerX=250-(4*r1);
    int centerY=100;


    int howManyBalls = 1;
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<howManyBalls; j++)
        {
            bilard_balls[i+j+1].r = r1;
            bilard_balls[i+j+1].x = centerX;
            bilard_balls[i+j+1].y = centerY;
        }

        centerX+=2*r1;

        howManyBalls++;
    }


}

void Game::paintEvent(QPaintEvent* event)
{
    table1.Draw(this);

    for (int i=0; i<15; i++)
        bilard_balls[i].Draw(this);

    player1.Draw(this);

}

void Game::mousePressEvent(QMouseEvent* event)
{
    player1.x1 = event->x();
    player1.y1 = event->y();

}

void Game::mouseReleaseEvent(QMouseEvent* event2)
{
    player1.x2 = event2->x();
    player1.y2 = event2->y();

    repaint();


}
