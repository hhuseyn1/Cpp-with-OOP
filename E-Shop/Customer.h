#pragma once

class Customer {
	static int _staticID;
	int _id;
	string _name;
	string _password;

public:

	Customer(string name, string password) {

		_id = _staticID++;
		_name = name;
		_password = password;
	}

	int getId(){ return _id; }
	string getUsername(){ return _name; }
	string getPassword() { return _password; }
	


};
int Customer::_staticID = 0;