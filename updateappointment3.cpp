#include "updateappointment3.h"
#include "ui_updateappointment3.h"
#include <QMessageBox>
#include "updateapp.h"

UpdateAppointment3::UpdateAppointment3(string* name, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateAppointment3)
{
    ui->setupUi(this);
    appointmentName = name;
}

UpdateAppointment3::~UpdateAppointment3()
{
    delete ui;
}


void UpdateAppointment3::on_pushButton_2_clicked()
{
    close();
}


void UpdateAppointment3::on_pushButton_clicked()
{
    QString Name = ui->LineEditName->text();
    QMessageBox::information(this, "Submitted", "Name has been registered succesfully!");
    *appointmentName = Name.toStdString();
    close();
}

