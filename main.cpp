#include <QApplication>
#include "mainwindow.h"
#include <QCoreApplication>
#include "udp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


  //  client.SendMessage();

    return a.exec();
}
