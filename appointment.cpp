#include "appointment.h"

Appointment::Appointment() {}
Appointment::Appointment(string t) {
    time = t;
}
Appointment::Appointment(string n, string t) {
    time = t;
    name = n;
}
string *Appointment::getName() {return &name;}
string *Appointment::getTime(){return &time;}
void Appointment::setName(string n) { name = n;}
void Appointment::setTime(string t) {time = t;}
string Appointment::getApptString() {
    if (name.empty()) {
        return "There is no appointment @ " + *getTime() + "\n";
    }
    else {
        return *getName() + " has an appointment @ "+ *getTime() + '\n';
    }
}
