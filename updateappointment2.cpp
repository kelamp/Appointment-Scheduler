#include "updateappointment2.h"
#include "ui_updateappointment2.h"
#include <QMessageBox>
#include "updateapp.h"

UpdateAppointment2::UpdateAppointment2(string* name, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpdateAppointment2)
{
    ui->setupUi(this);
    appointmentName = name;
}

UpdateAppointment2::~UpdateAppointment2()
{
    delete ui;
}


void UpdateAppointment2::on_pushButton_2_clicked()
{
    close();
}


void UpdateAppointment2::on_pushButton_clicked()
{
    QString Name = ui->LineEditName->text();
    QMessageBox::information(this, "Submitted", "Name has been registered succesfully!");
    *appointmentName = Name.toStdString();
    close();
}

