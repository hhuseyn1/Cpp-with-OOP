#pragma once
class Bank{
	string _name;
	string _location;
	string _popularity;
	vector<BankCard>_bankcards;
public:
	Bank() = default;
	Bank(string name,string location,string popularity){
	  _name=name;
	  _location=location;
	  _popularity=popularity;
	}
	string getName() { return _name; }
	string getLocation() { return _location; }
	string getPopularity() { return _popularity; }
	vector<BankCard>& getBankcards() { return _bankcards; }

};
