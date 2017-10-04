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


};

#endif // BALL_H
