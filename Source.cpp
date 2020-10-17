#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
#include "RegisteredCustomer.h"
#include "Employee.h"
#include "Appointment.h"
#include "Payment.h"
using namespace std;

int main() {
	RegisteredCustomer *cus1;

	cus1 = new RegisteredCustomer("silva","hello@gmail.com","09384134","46/23 ave lane","OIJDJS#");
	cus1->displayInfo();

	Employee *emp1;

	emp1 = new Employee("heshan", "heshan@gmail.com", "0132414124", "78 lotus lane", "KPFOKJ349", 7890000.00, "Hair Dresser");
	emp1->displayInfo();
	Appointment *a1;


	a1 = new Appointment("Pay122223", "H22344", "399330030D", 2500, "9/12/2020", "Hair Cutting", "In-Saloon");
	a1->appointmentInfo();



	return 0;
	
	
}