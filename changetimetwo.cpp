#include "changetimetwo.h"
#include "ui_changetimetwo.h"
#include <QMessageBox>
#include "changetime.h"

changetimetwo::changetimetwo(string* Time, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changetimetwo)
{
    ui->setupUi(this);
    appointmentTime = Time;
}

changetimetwo::~changetimetwo()
{
    delete ui;
}

void changetimetwo::on_pushButton_2_clicked()
{
    close();
}


void changetimetwo::on_pushButton_clicked()
{
    QString Name = ui->LineEditName->text();
    QMessageBox::information(this, "Submitted", "Time has been registered succesfully!");
    *appointmentTime = Name.toStdString();
    close();
}

