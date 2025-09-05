#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "updateapp.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setting name
    viewer = new ViewAppointments(appointments);
    updater = new UpdateApp(appointments);
    interstellar = new ChangeTime(appointments);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete viewer;
}

//check appointments
void MainWindow::on_Option1_clicked()
{
    AppointmentApp temp, tempNames, tempTime;
    tempNames =  updater->get_Apps();
    //works only for name, not sure how to rewrite to get it to change time.
    tempTime = interstellar->get_App_Time();

    for (int i =  0; i < 3; i++) {
        temp.appts[i].setName(*tempNames.appts[i].getName());
        temp.appts[i].setTime(*tempTime.appts[i].getTime());
    }
    //REMEBER TO UPDATE APPOINTMENTS BEFORE SET TEXT
    //something like viewer->update_appt(appts);
    viewer->update_appts(temp);
    viewer->set_text();
    //Shows ViewAppointment ui window
    viewer->show();
    //hide();
}

void MainWindow::on_Option2_clicked()
{
   // AppointmentApp temp;
    AppointmentApp temp, tempNames, tempTime;
    tempNames =  updater->get_Apps();
    tempTime = interstellar->get_App_Time();

    for (int i =  0; i < 3; i++) {
        temp.appts[i].setName(*tempNames.appts[i].getName());
        temp.appts[i].setTime(*tempTime.appts[i].getTime());
    }
    //temp = interstellar->get_App_Time();
    //need to change labels on all buttons
    updater->update_appts(temp);
    updater->set_label_1();
    updater->set_label_2();
    updater->set_label_3();
    //Show UpdateApp ui window.
    //updater->;
    updater->show();
    //hide();
    // aftert this window closes, call updater->getAppointments to get the new AppointmentApp
// then call viewer->updateAppts to update viewer's appointmentApp

}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Exit", "Thank you for using group 4's message app!");
    close();
}


//BUTTON FOR THIS IS HIDDEN IN THE RIGHT :D
void MainWindow::on_Option3_clicked()
{
    interstellar->set_label_1();
    interstellar->set_label_2();
    interstellar->set_label_3();
    interstellar->show();
}

