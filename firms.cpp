#include "firms.h"
#include "ui_firms.h"

Firms::Firms(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Firms)
{
    ui->setupUi(this);
}

Firms::~Firms()
{
    delete ui;
}

void Firms::on_exit_btn_triggered()
{
    this->close();
}

