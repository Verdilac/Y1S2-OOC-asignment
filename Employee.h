#pragma once
#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
using namespace std;

class Employee:public Personnel
{
private:
	string empID;
	double salary;
	string specialization;

public:
	Employee();
	Employee(string pname, string pemail, string pphone, string paddress, string pempID, double psalary, string pspecialization);
	void displayInfo();
};

