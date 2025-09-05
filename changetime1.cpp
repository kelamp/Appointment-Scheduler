#include "changetime1.h"
#include "ui_changetime1.h"
#include <QMessageBox>
#include "changetime.h"

changetime1::changetime1(string* Time, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changetime1)
{
    ui->setupUi(this);
    appointmentTime = Time;
}

changetime1::~changetime1()
{
    delete ui;
}



void changetime1::on_pushButton_clicked()
{
    QString Name = ui->LineEditName->text();
    QMessageBox::information(this, "Submitted", "Time has been registered succesfully!");
    *appointmentTime = Name.toStdString();
    close();
}

void changetime1::on_pushButton_2_clicked()
{
    close();
}

