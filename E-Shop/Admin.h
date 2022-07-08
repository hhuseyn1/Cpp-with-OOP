#pragma once
class Admin {
public:
	static int _staticId;
	int _id;
	string _username;
	string _password;
	Admin(string username, string password){
		    _id=_staticId++;
			_username=username;
			_password=password;
	}

	int getId() { return _id; }
	string getUsername() { return _username; }
	string getPassword() { return _password; }
};

int Admin::_staticId = 0;