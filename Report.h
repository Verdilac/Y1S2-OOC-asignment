#pragma once
#include "Product.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
class Report
{
private:
	Product *pr;
	string reportid;


public:
	Report();
	Report(string zreportid, Product *zpr);
	void access();

};

