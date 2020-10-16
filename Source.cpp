#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
#include "RegisteredCustomer.h"
#include "Employee.h"
using namespace std;

int main() {
	RegisteredCustomer *cus1;

	cus1 = new RegisteredCustomer("silva","hello@gmail.com","09384134","46/23 ave lane","OIJDJS#");
	cus1->displayInfo();

	Employee *emp1;

	emp1 = new Employee("heshan", "heshan@gmail.com", "0132414124", "78 lotus lane", "KPFOKJ349", 7890000.00, "Hair Dresser");
	emp1->displayInfo();


	return 0;
	
	
}