#include "Personnel.h"
#include "RegisteredCustomer.h"

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

RegisteredCustomer::RegisteredCustomer() {
	cout << "defatult const" << endl;
}

RegisteredCustomer::RegisteredCustomer(string pname, string pemail, string pphone, string paddress, string pcusid):Personnel(pname, pemail, pphone, paddress)
{
	customerId = pcusid;
	//rest of the arguments that are passed to these parameters are handles by the Overloaded Constructor of the parent class.
}
void RegisteredCustomer::displayInfo() {
	cout << name << endl << email << endl << phone << endl << address << endl<<customerId<<endl;
}