#include "Personnel.h"
#include "Employee.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

Employee::Employee() {
	cout << "Default Constructor";
}

Employee::Employee(string pname, string pemail, string pphone, string paddress, string pempID, double psalary, string pspecialization) 
	:Personnel(pname, pemail, pphone, paddress) {

	//we are using inheritance here to access the attributes of the personnel class
	empID = pempID;
	salary = psalary;
	specialization = pspecialization;
}

void Employee::displayInfo() {
	cout << name << endl << email << endl << phone << endl << address << endl << empID << endl<<salary<<endl<<specialization<<endl<<endl;
}