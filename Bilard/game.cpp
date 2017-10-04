#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QColor>
#include "game.h"
#include "table.h"
#include "ball.h"

Game::Game(int a_Height, int a_Width, int r1)
{
// ------------------------- setting table start position
    table1.height = a_Height;
    table1.width = a_Width;

// ------------------------- setting balls start positions

    int centerX=650;//600-(4*r1);
    int centerY=325;//250;
    int centerTempY;
    int ballCounter = 0;

    int RowCounter = 0;
    while(ballCounter<HowManyBalls)
    {
        int tmpY1 = centerY-(RowCounter*r1);
        int tmpY2 = centerY+(RowCounter*r1);

            for(int tmpY =tmpY1;tmpY<=tmpY2;tmpY+=(r1*2))
            {
                centerTempY = tmpY;
                bilard_balls[ballCounter].r = r1;
                bilard_balls[ballCounter].x = centerX;
                bilard_balls[ballCounter].y = centerTempY;

                bilard_balls[ballCounter].color = Qt::red;
                ballCounter++;
            }

            RowCounter++;
        centerX+=2*r1;
    }

// ----------------------- setting white ball color and start position
    QColor col;
    wball.color=Qt::white;
    wball.r = r1;
    wball.x = 380;
    wball.y = 325;//250;

// ----------------------- setting player start position

    player1.x1 = wball.x;
    player1.y1 = wball.y;


}

void Game::paintEvent(QPaintEvent* event)
{
    table1.Draw(this); // table drawing

    for (int i=0; i<15; i++)
        bilard_balls[i].Draw(this); // bilard balls drawing

    player1.Draw(this); // player drawing

    wball.Draw(this); // white ball drawing

}

void Game::mousePressEvent(QMouseEvent* event) // setting mouse press event
{
    player1.x2 = event->x();
    player1.y2 = event->y();

    repaint();
}

void Game::mouseMoveEvent(QMouseEvent* event2) // setting mouse move event
{
    player1.x2 = event2->x();
    player1.y2 = event2->y();

    repaint();
}

void Game::mouseReleaseEvent(QMouseEvent* event3) // setting mouse release event
{
    int x1 = player1.x1;
    int y1 = player1.y1;

    int x2 = player1.x2;
    int y2 = player1.y2;

    int xx = x2-x1;
    int yy = y2-y1;
    while((wball.x != 0) || (wball.y != 0))
    {
        //{-1,-1}
        wball.x+=xx;
        wball.y+=yy;

        repaint();
    }

}
