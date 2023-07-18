#ifndef COUNTERPARTIES_H
#define COUNTERPARTIES_H

#include <QDialog>

namespace Ui {
class Counterparties;
}

class Counterparties : public QDialog
{
    Q_OBJECT

public:
    explicit Counterparties(QWidget *parent = nullptr);
    ~Counterparties();

private:
    Ui::Counterparties *ui;
};

#endif // COUNTERPARTIES_H
