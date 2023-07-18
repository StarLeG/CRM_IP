#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("CRM \"Индивидуальный предпиниматель\"");
    w.show();
    return a.exec();
}
