#include "Personnel.h"
#include "Employee.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;


Employee::Employee(string pname, string pemail, string pphone, string paddress, string pempID, double psalary, string pspecialization) 
	:Personnel(pname, pemail, pphone, paddress) {
	empID = pempID;
	salary = psalary;
	specialization = pspecialization;
}

void Employee::displayInfo() {
	cout << name << endl << email << endl << phone << endl << address << endl << empID << endl<<salary<<endl<<specialization<<endl;
}