#include "Product.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

Product::Product() {

}

Product::Product(string zproductDetails, string zproductID, int zquantity, string zdateOfExpiry, double zprice) {
	productDetails = zproductDetails;
	productID = zproductID;
	quantity = zquantity;
	dateOfExpiry = zdateOfExpiry;
	price = zprice;
}


void Product::display() {
	cout << productDetails << endl << productID << endl;
}
string Product::getProductID() {
	return productID;
}
