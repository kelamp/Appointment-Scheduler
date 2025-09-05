#include "appointmentapp.h"

AppointmentApp::AppointmentApp() : appts(3) {
    this->appts[0] = Appointment("9:00 A.M.");
    this->appts[1] = Appointment("10:00 A.M.");
    this->appts[2] = Appointment("11:00 A.M.");
}
//to change the time for a slot do appts[0].time = "11:00"
string AppointmentApp::getAllAppointments(){
    string allappts = "Current Appointments\n";
    for (int i = 0; i < 3; i++){
        allappts += this->appts[i].getApptString();
    }
    return allappts;
};
