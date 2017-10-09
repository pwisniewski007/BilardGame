#include "table.h"
#include <QPainter>
#include <QWidget>
Table::Table(int a_height, int a_width,int a_x,int a_y)
{
    height = a_height;
    width = a_width;
    this->x=a_x;
    this->y=a_y;
}

void Table::Draw(QWidget *widget)
{
    QPainter painter(widget);

    QRect rect(this->x,this->y,this->width,this->height);
    painter.drawRect(rect);
}
