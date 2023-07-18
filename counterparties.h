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

private slots:
    void on_AddNote_Btn_clicked();

    void on_DelNote_Btn_clicked();

    void on_ChangeNote_Btn_clicked();

    void on_Exit_Btn_clicked();

private:
    Ui::Counterparties *ui;



};

#endif // COUNTERPARTIES_H
