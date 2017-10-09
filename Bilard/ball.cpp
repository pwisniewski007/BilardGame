#include "ball.h"
#include <QPainter>

void Ball::Draw(QWidget *widget2) //****
{
    QPainter painter(widget2);
    QPoint point(x,y);

   // QColor color(QColor::yellow());
    Qt::BrushStyle style = Qt::SolidPattern;
    QBrush brush(this->color, style);
    painter.setBrush(brush);

    painter.drawEllipse(point,this->r,this->r);
}
void WhiteBall::move( int Speed)
{
    this->x+=this->deltaX*Speed;
    this->y+=this->deltaY*Speed;
}


