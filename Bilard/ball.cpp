#include "ball.h"
#include<QPainter>
Ball::Ball(int r1, int x1, int y1)
{
    r=r1;
    x=x1;
    y=y1;
}

void Ball::Draw(QWidget *widget2) //****
{
    QPainter painter(widget2);
    QPoint point(x,y);
    painter.drawEllipse(point,this->r,this->r);
}


