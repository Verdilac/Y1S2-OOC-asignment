#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include "Appointment.h"
using namespace std;



class Payment
{
private:
	string paymentId;
	string appointmentId;
	string customerId;
	double amount;

public:
	Payment();
	Payment(string ppayId, string pappointId, string pcustomId, double pamount);
	void displayInfo();



};

