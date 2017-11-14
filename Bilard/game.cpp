#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QColor>
#include <windows.h>
#include "game.h"
#include "table.h"
#include "ball.h"

Game::Game(int a_Height, int a_Width, int x,int y,int r1)
{
// ------------------------- setting table start position
    table1.height = a_Height;
    table1.width = a_Width;
    table1.x=x;
    table1.y=y;

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

    for (int i=0; i<this->HowManyBalls; i++)
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
void Game::checkCollisionWithTable()
{
    if(wball.x-wball.r<=table1.x)
    {
        wball.deltaX = -wball.deltaX;
    }
    else if(wball.x+wball.r>=table1.x+table1.width)
    {
        wball.deltaX=-wball.deltaX;
    }
    else if(wball.y-wball.r<=table1.y)
    {
        wball.deltaY=-wball.deltaY;

    }
    else if(wball.y+wball.r>=table1.y+table1.height)
    {
            wball.deltaY=-wball.deltaY;

    }
}
void Game::checkBallCollisions()
{

}

void Game::mouseReleaseEvent(QMouseEvent* event3) // setting mouse release event
{


    int x = player1.x1-player1.x2;
    int y = player1.y1-player1.y2;

    wball.length =  sqrt(x*x+y*y);
    wball.deltaX =x/wball.length;
    wball.deltaY = y/wball.length;
    int Speed = wball.length/5;

    while(Speed>0)
    {

      // wball.x+=deltaX*Speed;
      // wball.y+=deltaY*Speed;//
       wball.move(Speed);
       checkCollisionWithTable();
       checkBallCollisions();
        Speed--;
        repaint();
        Sleep(50);

    }



    player1.x1=wball.x;
    player1.y1=wball.y;
    repaint();


}
