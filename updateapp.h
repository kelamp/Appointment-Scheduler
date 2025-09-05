#ifndef UPDATEAPP_H
#define UPDATEAPP_H

#include "appointmentapp.h"
#include <QDialog>

namespace Ui {
class UpdateApp;
}

class UpdateApp : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateApp(AppointmentApp a, QWidget *parent = nullptr);
    ~UpdateApp();
    //create function to set label
    void set_label_1();
    void set_label_2();
    void set_label_3();

    void updateslotname(int n, string m);
    void update_appts(AppointmentApp updatedApp);

    AppointmentApp get_Apps();
    Ui::UpdateApp *ui;

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();



    void on_pushButton_destroyed();

private:
    AppointmentApp appointments;
};

#endif // UPDATEAPP_H
