#pragma once

#include<iostream>
#include <cstring>
#include <string>
using namespace std;

// THE ANCESTOR CLASS 

class Personnel
{
protected:
	string name;
	string email;
	string phone;
	string address;

public:
	Personnel();
	Personnel(string pname,string pemail,string pphone, string paddress);
	void displayInfo();


};

