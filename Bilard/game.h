#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include "table.h"
class Game : public QWidget
{
public:
    void paintEvent(QPaintEvent*);
    Table tablePool;
    Game(int a_Height,int a_Width);
};


#endif // GAME_H
