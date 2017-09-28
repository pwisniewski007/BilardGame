#include "mainwindow.h"
#include <QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Game BilardGame(200,400,5);
    w.setCentralWidget(&BilardGame);
    w.show();

    return a.exec();
}
