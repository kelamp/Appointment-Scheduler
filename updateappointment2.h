#ifndef UPDATEAPPOINTMENT2_H
#define UPDATEAPPOINTMENT2_H

#include <QDialog>
#include "updateapp.h"
namespace Ui {
class UpdateAppointment2;
}

class UpdateAppointment2 : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateAppointment2(string* name, QWidget *parent = nullptr);
    ~UpdateAppointment2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::UpdateAppointment2 *ui;
    string *appointmentName;
};

#endif // UPDATEAPPOINTMENT2_H
