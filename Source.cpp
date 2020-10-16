#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
#include "RegisteredCustomer.h"
using namespace std;

int main() {
	RegisteredCustomer *cus1;

	cus1 = new RegisteredCustomer("silva","hello@gmail.com","09384134","46/23 ave lane","OIJDJS#");
	cus1->displayInfo();

	return 0;
	
}