#ifndef APPOINTMENTAPP_H
#define APPOINTMENTAPP_H

#include "appointment.h"
#include <vector>
using namespace std;

class AppointmentApp
{
public:
    vector<Appointment> appts;


    AppointmentApp();
    //destructor

    // update the name for slot x
    void editApptName(int slotNum, string name);

    // idk what parameters you need fill it out yourself
    void editApptTime(int slotNum, string time);

    string getAllAppointments();

};


#endif // APPOINTMENTAPP_H
