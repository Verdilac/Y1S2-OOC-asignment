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
	reportid = zreportid;
	pr = zpr;
}
void Report::access() {
	pr->display();
}