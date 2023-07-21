#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "include/firms.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_File_Exit_triggered();


    void on_firms_btn_triggered();

private:
    Ui::MainWindow *ui;
    Firms *firms;

};
#endif // MAINWINDOW_H
