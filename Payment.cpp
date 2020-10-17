#include "Appointment.h"
#include "Payment.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


//Implementing class Payment : Start
Payment::Payment() {

	cout << "default contructor payment class" << endl;

}

Payment::Payment(string ppayId, string pappointId, string pcustomId, double pamount) {

	paymentId = ppayId;
	appointmentId = pappointId;
	customerId = pcustomId;
	amount = pamount;

}

void Payment::displayInfo() {

	cout << "Payment Details" << endl;
	cout << "Payment ID : " << paymentId << endl;
	cout << "Appointment ID : " << appointmentId << endl;
	cout << "Customer ID : " << customerId << endl;
	cout << "Amount : " << amount << endl;

}
//Implementing class Payment : End