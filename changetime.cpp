#include "changetime.h"
#include "ui_changetime.h"
#include "mainwindow.h"
#include "changetime1.h"
#include "changetimetwo.h"
#include "changetime3.h"

ChangeTime::ChangeTime(AppointmentApp a, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ChangeTime)
{
    ui->setupUi(this);
}

ChangeTime::~ChangeTime()
{
    delete ui;
}

void ChangeTime::set_label_1(){
    string time = *appointmentstime.appts[0].getTime();
    ui->pushButton->setText(QString::fromStdString(time));
}
void ChangeTime::set_label_2(){
    //ui->pushButton_2->setText();
    string time = *appointmentstime.appts[1].getTime();
    ui->pushButton_2->setText(QString::fromStdString(time));
}

void ChangeTime::set_label_3(){
    // ui->pushButton_3->setText();
    string time = *appointmentstime.appts[2].getTime();
    ui->pushButton_3->setText(QString::fromStdString(time));
}

//haha funny to get new updated time for appts in appointments time i think?
void ChangeTime::updateslottime(int n, string m){
    appointmentstime.appts[n].setTime(m);
}
//function to return haha funny updated time
AppointmentApp ChangeTime::get_App_Time(){
    return appointmentstime;
}


void ChangeTime::on_pushButton_4_clicked()
{
    close();
}


void ChangeTime::on_pushButton_clicked()
{
    changetime1 *changeTime1;
    changeTime1 = new changetime1(appointmentstime.appts[0].getTime(), this);
    close();
    changeTime1->show();
}


void ChangeTime::on_pushButton_2_clicked()
{
    changetimetwo *changeTimeTwo;
    changeTimeTwo = new changetimetwo(appointmentstime.appts[1].getTime(), this);
    close();
    changeTimeTwo->show();
}


void ChangeTime::on_pushButton_3_clicked()
{
    changetime3 *changeTime3;
    changeTime3 = new changetime3(appointmentstime.appts[2].getTime(), this);
    close();
    changeTime3->show();
}

