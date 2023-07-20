#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDate>
#include <QDebug>


#define DATABASE_HOSTNAME   "CRM_IP"
#define DATABASE_NAME       "crmip.db"
// Таблица с контрагентоми
#define TABLE "firm"; // Назание таблицы
#define TABLE_FIRM_NAME "firm_name" // Колонка с наименованием контрагента
#define TABLE_FIRM_ADRESS "firm_adress" // Колонка с адресом контрагента
#define TABLE_FIRM_UNN "firm_unn" // Колонка с УПП контрагента
#define TABLE_FIRM_RS "firm_rs" // Колонка с расчетным счетом контрагента


class DataBase: public QObject
{
    Q_OBJECT;

public:
    explicit DataBase(QObject *parent = 0);
    ~DataBase();

    // Подключение к базе данных и вставка записей в таблицу
    void connectToDataBase();

private:
    // Создание объекта базы данных
    QSqlDatabase db;

    // Внутрение методы для работы с базой данных
    bool openDataBase();        // Открытие базы данных
    bool restoreDataBase();     // Восстановление базы данных
    void closeDataBase();       // Закрытие базы данных
   // bool createTable();         // Создание базы таблицы в базе данных

public slots:
  //  bool inserIntoTable(const QVariantList &data);      // Добавление записей в таблицу
  //  bool inserIntoTable(const QString &fname, const QString &sname, const QString &nik);
   // bool removeRecord(const int id); // Удаление записи из таблицы по её id

};



#endif // DATABASE_H
