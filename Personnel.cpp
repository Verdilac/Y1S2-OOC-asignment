#include<iostream>
#include <cstring>
#include <string>
#include "Personnel.h"
using namespace std;

Personnel::Personnel() {
	cout << "deff con" << endl;
}

Personnel::Personnel(string pname,string pemail,string pphone,string paddress) {
	name = pname;
	email = pemail;
	phone = pphone;
	address = paddress;

}


