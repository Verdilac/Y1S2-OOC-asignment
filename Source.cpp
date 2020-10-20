#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
#include "RegisteredCustomer.h"
#include "Employee.h"
#include "Appointment.h"
#include "Payment.h"
#include "Product.h"
#include "Report.h"
using namespace std;

int main() {

	//Inheritance Relationship Demonstration 
	//(Personnel being the parent with two Child classes (Employee and Registered Customer) )
	
	RegisteredCustomer *cus1;

	cus1 = new RegisteredCustomer("silva","hello@gmail.com","09384134","46/23 ave lane","OIJDJS#");
	cus1->displayInfo();

	Employee *emp1;

	emp1 = new Employee("heshan", "heshan@gmail.com", "0132414124", "78 lotus lane", "KPFOKJ349", 7890000.00, "Hair Dresser");
	emp1->displayInfo();
	
	
	//Appointment  Relationship Class Demonstration (Association Relationship with Registered Customer Class)
	//Dependancy is also implemented with the product class.

	Appointment *a1;


	a1 = new Appointment("Pay122223", "H22344", "399330030D", 2500, "9/12/2020", "Hair Cutting", "In-Saloon");


	
	//Uni Directional Association Relationsip Demonstration between Product class 
	//and Report class 

	Product *p1;

	p1 = new Product("Sanitizer By Universal", "OIA-01941", 23, "2020-10-09", 291.89);

	Report *r1;

	r1 = new Report("HEJPALL09", p1);

	r1->access();

	a1->addProduct(p1);


	a1->appointmentInfo();
	

	return 0;
	
	
}