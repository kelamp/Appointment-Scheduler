#include "updateappointment1.h"
#include "ui_updateappointment1.h"
#include <QMessageBox>
#include "updateapp.h"

UpdateAppointment1::UpdateAppointment1(string* name, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateAppointment1)
{
    appointmentName = name;
    ui->setupUi(this);
}

UpdateAppointment1::~UpdateAppointment1()
{
    delete ui;
}

// create a function to return the Qstring from user input called getUserName

void UpdateAppointment1::on_pushButton_clicked()
{
    QString Name = ui->LineEditName->text();
    QMessageBox::information(this, "Submitted", "Name has been registered succesfully!");
    *appointmentName = Name.toStdString();
    close();
}

void UpdateAppointment1::on_pushButton_2_clicked()
{
    close();
}

