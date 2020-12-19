#include "mainwindow.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Alpha Bank Limited");
    w.setFixedSize(940,580);
    //w.setStyleSheet("background-image: url(C:/Users/MAINUDDIN/Downloads/kamrul_bro.jpg); background-repeat: none; background-position: midpointcenter;");
    w.show();
    return a.exec();
}

