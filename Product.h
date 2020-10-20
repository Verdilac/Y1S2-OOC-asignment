
#pragma once
#include <iostream>
#include <cstring>
#include <string>

using namespace std;


class Product
{
private:
	string productDetails;
	string productID;
	int quantity;
	string dateOfExpiry;
	double price;

public:
	Product();
	Product(string zproductDetails, string zproductID, int zquantity, string zdateOfExpiry, double zprice);
	void display();
	string getProductID();
	void issueProducts();
	void update();
};

