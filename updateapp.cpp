#include "updateapp.h"
#include "ui_updateapp.h"
#include "mainwindow.h"
#include "updateappointment1.h"
#include "updateappointment2.h"
#include "updateappointment3.h"

UpdateApp::UpdateApp(AppointmentApp a, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateApp)
{
    ui->setupUi(this);
}

UpdateApp::~UpdateApp()
{
    delete ui;
}

void UpdateApp::update_appts(AppointmentApp updatedApp){
    appointments.appts = updatedApp.appts;
}



void UpdateApp::on_pushButton_4_clicked()
{
    close();
}

//function 1
// click on slot one to update
// call getUserName from updateAppointment1 to get the string name
// update appointsment.appts[0] to have the new name

void UpdateApp::updateslotname(int n, string m){
    appointments.appts[n].setName(m);
}

AppointmentApp UpdateApp::get_Apps(){
    return appointments;
};

void UpdateApp::set_label_1(){
    string time = *appointments.appts[0].getTime();
    ui->pushButton->setText(QString::fromStdString(time));
}
void UpdateApp::set_label_2(){
    //ui->pushButton_2->setText();
    string time = *appointments.appts[1].getTime();
    ui->pushButton_2->setText(QString::fromStdString(time));
}

void UpdateApp::set_label_3(){
   // ui->pushButton_3->setText();
    string time = *appointments.appts[2].getTime();
    ui->pushButton_3->setText(QString::fromStdString(time));
}



//create a get function to return appointments

void UpdateApp::on_pushButton_clicked()
{
    UpdateAppointment1 *updateAppointment1;
    updateAppointment1 = new UpdateAppointment1(appointments.appts[0].getName(), this);
    close();
    updateAppointment1->show();
}


void UpdateApp::on_pushButton_2_clicked()
{
    UpdateAppointment2 *updateAppointment2;
    updateAppointment2 = new UpdateAppointment2(appointments.appts[1].getName(), this);
    close();
    updateAppointment2->show();
}


void UpdateApp::on_pushButton_3_clicked()
{
    UpdateAppointment3 *updateAppointment3;
    updateAppointment3 = new UpdateAppointment3(appointments.appts[2].getName(), this);
    close();
    updateAppointment3->show();
}

