#pragma once
#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
#include "RegisteredCustomer.h"
using namespace std;


class RegisteredCustomer : public Personnel
{
private:
	string customerId;
public:
	RegisteredCustomer();
	RegisteredCustomer(string pname, string pemail, string pphone, string paddress, string pcusid);
	//we dont need  to explictly mention the inheritance here.thats done in implementation.
		



		void registerCustomer();
		void displayInfo();

	};

