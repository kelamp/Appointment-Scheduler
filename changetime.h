#ifndef CHANGETIME_H
#define CHANGETIME_H

#include <QDialog>
#include "appointmentapp.h"

namespace Ui {
class ChangeTime;
}

class ChangeTime : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeTime(AppointmentApp a, QWidget *parent = nullptr);
    ~ChangeTime();
    AppointmentApp get_App_Time();
    void set_label_1();
    void set_label_2();
    void set_label_3();
    Ui::ChangeTime *ui;

private slots:
    void on_pushButton_4_clicked();
    void updateslottime(int n, string m);


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:

    AppointmentApp appointmentstime;
};

#endif // CHANGETIME_H
