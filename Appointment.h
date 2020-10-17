#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include "Payment.h"
#include "Product.h"
using namespace std;

class Appointment
{
private:

	Payment *pay; //dynamic pointer of the payment class
	string date;
	string typeOfAppointment;
	string productID = "No products added yet";
	string deliveryMethod;
	

public:

	Appointment();
	Appointment(string apayId, string aappointId, string acustomId, double aamount, string adate, string atypeOfApp, string adeliveryM);
	void appointmentInfo();
	void editAppointment();
	void cancelAppointment();
	void addProduct(Product *zpr);

};

