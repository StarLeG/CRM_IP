#include "mainwindow.h"

#include <QApplication>
#include "database.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DataBase dataBase;

    w.setWindowTitle("CRM \"Индивидуальный предпиниматель\"");
    w.show();

    dataBase.connectToDataBase();

    return a.exec();
}
