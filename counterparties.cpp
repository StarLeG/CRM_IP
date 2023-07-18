#include "counterparties.h"
#include "ui_counterparties.h"

Counterparties::Counterparties(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Counterparties)
{
    ui->setupUi(this);

}

Counterparties::~Counterparties()
{
    delete ui;
}

void Counterparties::on_AddNote_Btn_clicked()
{

}


void Counterparties::on_DelNote_Btn_clicked()
{

}


void Counterparties::on_ChangeNote_Btn_clicked()
{

}


void Counterparties::on_Exit_Btn_clicked()
{
    close();
}

