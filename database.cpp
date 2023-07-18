#include "database.h"

bool creatConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("..\\CRM_IP\\db\\firm.db");
    if(!db.open())
    {
        qDebug() << "Cannot open database:" << db.lastError();
        return 1;
    }
    else
    {
        qDebug() << "Open database:" << db.databaseName();
        return 0;
    }
}
