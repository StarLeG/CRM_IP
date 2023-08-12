#include "database.h"



DataBase::DataBase(QObject *parent) : QObject(parent)
{

}

DataBase::~DataBase()
{

}
//********************************************************************************

/* Метод для подключения к базе данных
 * */
void DataBase::connectToDataBase()
{
    /* Перед подключением к базе данных производим проверку на её существование.
     * В зависимости от результата производим открытие базы данных или её восстановление
     * */
    if(!QFile::exists("db//crmip.db")){
        qDebug() << "Нет подключения к базе данных";
        this->restoreDataBase();
    } else {

        //this->openDataBase();
        qDebug() << "Подключение к базе данных: Успешно.";
    }
}

/* Метод восстановления базы данных
 * */
bool DataBase::restoreDataBase()
{
    qDebug() << "Восстановливю базу данных";

    QDir dir;
    dir.mkdir("db");

    QFile DB ("db//crmip.db");
    DB.open(QIODevice::WriteOnly);
    DB.close();

    // Если база данных открылась ...
    if(this->openDataBase()){
        // Производим восстановление базы данных

       return (this->createTable()) ? true : false;
        qDebug() << "OK";
    } else {
        qDebug() << "База данных отсутствует.";

        return false;
    }
    return false;
}

/* Метод для открытия базы данных
 * */
bool DataBase::openDataBase()
{
    /* База данных открывается по заданному пути
     * и имени базы данных, если она существует
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(DATABASE_HOSTNAME);
    db.setDatabaseName("db//" DATABASE_NAME);
    if(db.open()){
        return true;
    } else {
        return false;
    }
}

/* Метод закрытия базы данных
 * */
void DataBase::closeDataBase()
{
    db.close();
}

/* Метод для создания таблицы в базе данных
 * */
bool DataBase::createTable()
{
    /* В данном случае используется формирование сырого SQL-запроса
     * с последующим его выполнением.
     * */
    QSqlQuery query;
    QString str = "CREATE TABLE firms ( "
                        "id INTEGER PRIMARY KEY NOT NULL, "
                        "firms_name VARCHAR(255), "
                        "firm_adress VARCHAR(255), "
                        "firm_unn INTEGER(10), "
                        "firm_rs INTEGER (30) "
                  ");";
    if(!query.exec(str))
    {
        qDebug() << "Не могу создать таблицу" << " firms.";
        return false;
    }
    qDebug() << "Таблица \"firms\" создана успешно.";
    return true;

}
