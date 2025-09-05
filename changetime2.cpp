#include "changetime2.h"
#include "ui_changetime2.h"

changetime2::changetime2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changetime2)
{
    ui->setupUi(this);
    appointmentTime = Time;
}

changetime2::~changetime2()
{
    delete ui;
}
