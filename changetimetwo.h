#ifndef CHANGETIMETWO_H
#define CHANGETIMETWO_H

#include <QDialog>
#include "changetime.h"

namespace Ui {
class changetimetwo;
}

class changetimetwo : public QDialog
{
    Q_OBJECT

public:
    explicit changetimetwo(string* Time, QWidget *parent = nullptr);
    ~changetimetwo();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::changetimetwo *ui;
    string *appointmentTime;
};

#endif // CHANGETIMETWO_H
