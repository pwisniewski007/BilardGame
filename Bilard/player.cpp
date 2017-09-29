#include <QPainter>
#include <QWidget>
#include "player.h"

void Player::Draw(QWidget *widget3)
{
    QPainter painter(widget3);
    QPoint point(x1,y1);
    QPoint point2(x2,y2);
    painter.drawLine(point,point2);

}
