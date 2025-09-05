#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

/*     AppointmentApp ab;
   ab.appts[0].setName("toby");
cout << "--------------------\n";
cout <<  ab.getAllAppointments() << endl;
    return 0;
*/
}

