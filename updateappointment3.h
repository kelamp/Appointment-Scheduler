#ifndef UPDATEAPPOINTMENT3_H
#define UPDATEAPPOINTMENT3_H

#include <QDialog>
#include "updateapp.h"
namespace Ui {
class UpdateAppointment3;
}

class UpdateAppointment3 : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateAppointment3(string* name, QWidget *parent = nullptr);
    ~UpdateAppointment3();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::UpdateAppointment3 *ui;
    string *appointmentName;
};

#endif // UPDATEAPPOINTMENT3_H
