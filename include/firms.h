#ifndef FIRMS_H
#define FIRMS_H

#include <QMainWindow>

namespace Ui {
class Firms;
}

class Firms : public QMainWindow
{
    Q_OBJECT

public:
    explicit Firms(QWidget *parent = nullptr);
    ~Firms();

private:
    Ui::Firms *ui;
};

#endif // FIRMS_H
