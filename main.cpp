#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("CRM \"Индивидуальный предпиниматель\"");
    w.show();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("..\\CRM_IP\\db\\firm.db");
    if(!db.open())
    {
        qDebug() << "Cannot open database:" << db.lastError();
    }
    else
    {
        qDebug() << "Open database:" << db.databaseName();
    }
    return a.exec();
}
