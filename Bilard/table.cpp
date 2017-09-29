#include "table.h"
#include <QPainter>
#include <QWidget>
Table::Table(int a_height, int a_width)
{
    height = a_height;
    width = a_width;
}

void Table::Draw(QWidget *widget)
{
    QPainter painter(widget);
    QRect rect(0,0,this->width,this->height);
    painter.drawRect(rect);
}
