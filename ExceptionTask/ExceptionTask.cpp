#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

// Database elave olunsun
void deleteUserById(const int& id);//eger bele bir id istifadechi yoxdursa exception atilsin
void hashUserDataById(const int& id);//gonderilen id deki istifadechinin butun melumatlari hash olunsun(string olanlar)digerleri qalsin


class Exception {
	string _message;
	int _line;
	string _source;
	string _time;
public:
	Exception(string message,int line,string source,string time){
		//_message = (string)exception::what();
		_line = line;
		_source = source;
		_time = time;
	}



}; 
class DatabaseException : public Exception {};
class InvalidArgumentException :public Exception {};


class User {
	int _id;
	string _username;
	string _password;
	string _name;
	string _surname;

public:
	void show() const;
	string getUsername() { return _username; }
};

class Database {
	vector<User>users;
public:
	void addUser(const User& user) {
		users.push_back(user);
	}
	User& getUserByUsername(string username) {
		for (size_t i = 0; i < users.size(); i++) {
			if (users[i].getUsername() == username)
				return users[i];
		}
	}
	void updateUser(User& olduser, const User& newuser) {
		for (size_t i = 0; i < users.size(); i++){
			if (users[i] == olduser)
				users[i] = newuser;
		}
	}
};



class Registration {
	Database _database;
public:
	Registration(const Database& database) {
		_database = database;
	}


	//eger bu username istifadechi yoxdursa error atsin
	//eger username varsa amma password yanlishdirsa error atsin
	void signIn(string username, string password);


	//Eger istifadechi varsa hemen username de throw DatabaseException
	//Eger username xarakter sayi 6 dan kichikdirse InvalidArgumentException
	//Eger username ilk herf kichikdirse InvalidArgumentException
	//Eger password xarakter sayi 6 dan kichikdirse InvalidArgumentException
	//Eger name xarakter sayi 3 dan kichikdirse InvalidArgumentException
	//Eger surname xarakter sayi 4 dan kichikdirse InvalidArgumentException
	void signUp(string username, string password, string name, string surname);
};


class StartUp {
public:
	static void Start() {
		Database db;
		Registration twitter(db);

		// twitter.getDatabase().addUser(user);

		//mainde yazilacaq her shey burda yazilsin.
	}




};



void main() {
	StartUp::Start();


	system("pause");
}