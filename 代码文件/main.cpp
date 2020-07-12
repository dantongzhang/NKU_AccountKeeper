#include "mainwindow.h"
#include "new123.h"
#include "success123.h"
#include "knowledge.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
