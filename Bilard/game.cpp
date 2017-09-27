#include<QWidget>
#include<QPainter>
#include "game.h"
#include "table.h"
void Game::paintEvent(QPaintEvent* event)
{
    tablePool.Draw(this);

}
Game::Game(int a_Height, int a_Width)
{
    tablePool.height=a_Height;
    tablePool.width=a_Width;

}
