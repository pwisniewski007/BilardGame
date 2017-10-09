#include "mainwindow.h"
#include <QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Game BilardGame(350,700,200,150,10);
    w.setCentralWidget(&BilardGame);
    w.setFixedSize(1100,750);
    w.show();

    return a.exec();
}
