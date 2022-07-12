#pragma once

class Car {
	string _owner;
	string _model;
	string _number;
	short _year;
	vector<Penalty> _py;
public:
	Car() = default;
	Car(string owner, string model, string number, short year) {
		_owner = owner;
		_model = model;
		_number = number;
		_year = year;
	}

	string getOwner() { return _owner; }
	string getModel() { return _model; }
	string getNumber() { return _number; }
	short getYear() { return _year; }
	vector <Penalty>& getPenalty() { return _py; }
	friend ostream& operator<<(ostream& output, const Car& car);
};
ostream& operator<<(ostream& output, const Car& car) {
	cout << "Owner: " << car._owner << endl;
	cout << "Model: " << car._model << endl;
	cout << "Number: " << car._number << endl;
	cout << "Year: " << car._year << endl;
	return output;
}
