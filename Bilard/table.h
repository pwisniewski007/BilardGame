#ifndef TABLE_H
#define TABLE_H
#include<QWidget>
class Table
{
public:
    int height;
    int width;

    Table(int a_height = 100,int a_width=300);
    void Draw(QWidget*);
};

#endif // TABLE_H
