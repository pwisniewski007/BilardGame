#ifndef BALL_H
#define BALL_H
#include <QWidget>

class Ball
{
public:
    int r,x,y;
    QColor color;
    float deltaX,deltaY,length;
    void move(int);
    void Draw(QWidget*); //****

};


#endif // BALL_H
