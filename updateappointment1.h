#ifndef UPDATEAPPOINTMENT1_H
#define UPDATEAPPOINTMENT1_H

#include <QDialog>
#include "updateapp.h"
namespace Ui {
class UpdateAppointment1;
}

class UpdateAppointment1 : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateAppointment1(string *name, QWidget *parent = nullptr);
    ~UpdateAppointment1();

private slots:
    void on_pushButton_clicked();

    void on_UpdateAppointment1_destroyed();
    void on_pushButton_2_clicked();

private:
    Ui::UpdateAppointment1 *ui;
    string *appointmentName;
};

#endif // UPDATEAPPOINTMENT1_H
