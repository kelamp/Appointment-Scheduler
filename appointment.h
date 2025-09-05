#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include <iostream>

using namespace std;

class Appointment
{
    string name;
    string time;
public:
    Appointment();
    Appointment(string n, string t);
    Appointment(string t);

    // get name/time
    // set name/time
    //comments on what the function does
    string *getName();
    void setName(string n);

    string *getTime();
    void setTime(string t);
    string getApptString();


};

#endif // APPOINTMENT_H
