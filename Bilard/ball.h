#ifndef BALL_H
#define BALL_H
#include <QWidget>

class Ball
{
public:
    int r,x,y;
    QColor color;
    void Draw(QWidget*); //****

};
class WhiteBall : public Ball
{
public:
    float deltaX,deltaY,length;
    void move(int);

};

#endif // BALL_H
