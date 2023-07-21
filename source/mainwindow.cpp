#include "include/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_File_Exit_triggered()
{

    QApplication::quit();
}


void MainWindow::on_directories_counterparties_triggered()
{
    firms = new Firms;
    firms->show();
}

