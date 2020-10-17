#include "Appointment.h"
#include "Payment.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//Implementing class Appointment : Start
Appointment::Appointment() {
	cout << "Default Constructor Appointment class" << endl;
}

Appointment::Appointment(string apayId, string aappointId, string acustomId, double aamount, string adate, string atypeOfApp, string adeliveryM) {

	pay = new Payment(apayId, aappointId, acustomId, aamount);
	//correct  implementation due to the transaction being uni.

	date = adate;
	typeOfAppointment = atypeOfApp;
	deliveryMethod = adeliveryM;
}

void Appointment::appointmentInfo() {

	pay->displayInfo();
	//calling the display function of the payment object.

	cout << endl;
	cout << "Appointment Details" << endl;
	cout << "Date : " << date << endl;
	cout << "Type of Appointment : " << typeOfAppointment << endl;
	cout << "Delivery Method : " << deliveryMethod << endl;

}

void Appointment::editAppointment() {}

void Appointment::cancelAppointment() {}

//Implementing class Appointment : End

