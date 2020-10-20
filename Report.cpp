#include "Report.h"
#include "Product.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

Report::Report() {
	cout << "default constructor";
}

Report::Report(string zreportid, Product *zpr) {
	//using the pointer which points to the product object in the product class.
	reportid = zreportid;
	pr = zpr;
}
void Report::access() {
	pr->display();
}