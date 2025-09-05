#include "viewappointments.h"
#include "ui_viewappointments.h"
#include "mainwindow.h"
ViewAppointments::ViewAppointments(AppointmentApp a, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewAppointments)
    , appointments(a)
{
    ui->setupUi(this);
}

ViewAppointments::~ViewAppointments()
{
    delete ui;
}
void ViewAppointments::update_appts(AppointmentApp updatedApp){
    appointments.appts = updatedApp.appts;
}

void ViewAppointments::set_text(){
    //    cout << " in this function" << endl;
    QString allAppoinmentsString = QString::fromStdString(appointments.getAllAppointments());
    ui->label->setText(allAppoinmentsString);
}


void ViewAppointments::on_pushButton_clicked()
{
    close();
}

