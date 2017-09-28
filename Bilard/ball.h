#ifndef BALL_H
#define BALL_H
#include <QWidget>

class Ball
{
public:
    int r,x,y;

    Ball(int r1=5, int x1=10, int y1=10);
    void Draw(QWidget*); //****

};

#endif // BALL_H
