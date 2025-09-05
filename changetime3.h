#ifndef CHANGETIME3_H
#define CHANGETIME3_H

#include <QDialog>
#include "changetime.h"

namespace Ui {
class changetime3;
}

class changetime3 : public QDialog
{
    Q_OBJECT

public:
    explicit changetime3(string* Time, QWidget *parent = nullptr);
    ~changetime3();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::changetime3 *ui;
    string *appointmentTime;
};

#endif // CHANGETIME3_H
