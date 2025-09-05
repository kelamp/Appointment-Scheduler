#ifndef VIEWAPPOINTMENTS_H
#define VIEWAPPOINTMENTS_H

#include <QDialog>
#include "appointmentapp.h"


namespace Ui {
class ViewAppointments;
}

class ViewAppointments : public QDialog
{
    Q_OBJECT
private:
    Ui::ViewAppointments *ui;
    AppointmentApp appointments;

public:
    explicit ViewAppointments(AppointmentApp a, QWidget *parent = nullptr);
    ~ViewAppointments();

    //create function that sets the label based on appts
    void set_text();
    //create function that updates the appts vector
    void update_appts(AppointmentApp updatedApp);

private slots:
    void on_pushButton_clicked();
};


#endif // VIEWAPPOINTMENTS_H
