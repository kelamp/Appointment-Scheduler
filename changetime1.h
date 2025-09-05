#ifndef CHANGETIME1_H
#define CHANGETIME1_H

#include <QDialog>
#include "changetime.h"

namespace Ui {
class changetime1;
}

class changetime1 : public QDialog
{
    Q_OBJECT

public:
    explicit changetime1(string* Time, QWidget *parent = nullptr);
    ~changetime1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changetime1 *ui;
    string *appointmentTime;
};

#endif // CHANGETIME1_H
