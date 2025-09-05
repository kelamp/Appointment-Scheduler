#include "changetime3.h"
#include "ui_changetime3.h"
#include <QMessageBox>
#include "changetime.h"

changetime3::changetime3(string* Time, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changetime3)
{
    ui->setupUi(this);
    appointmentTime = Time;
}

changetime3::~changetime3()
{
    delete ui;
}

void changetime3::on_pushButton_2_clicked()
{
    close();
}


void changetime3::on_pushButton_clicked()
{
    QString Name = ui->LineEditName->text();
    QMessageBox::information(this, "Submitted", "Time has been registered succesfully!");
    *appointmentTime = Name.toStdString();
    close();
}

