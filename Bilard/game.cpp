#include<QWidget>
#include<QPainter>
#include "game.h"
#include "table.h"
#include "ball.h"
void Game::paintEvent(QPaintEvent* event)
{
    table1.Draw(this);

    for (int i=0; i<15; i++)
        bilard_balls[i].Draw(this);

}

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
