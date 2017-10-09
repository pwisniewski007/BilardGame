#ifndef TABLE_H
#define TABLE_H
#include<QWidget>
class Table
{
public:
    int height;
    int width;
    int x;
    int y;

    Table(int a_height = 100,int a_width=300,int x=200,int y=150);
    void Draw(QWidget*);
};

#endif // TABLE_H
