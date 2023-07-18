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
