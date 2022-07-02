//#pragma once
//
//class Doctor {
//public:
//	string _name, _position;
//	int _salary;
//	Doctor() = default;
//	Doctor(string name, string position, int salary)
//	{
//		_name = name;
//		_position = position;
//		_salary = salary;
//	}
//	void print() {
//		cout << "Name: " << _name << endl;
//		cout << "Position: " << _position << endl;
//		cout << "Salary: " << _salary << endl;
//	}
//
//
//};
//
//class HeartDoc : public Doctor {
//public:
//	size_t _height;
//	HeartDoc() = default;
//	HeartDoc(string name, string position, int salary, size_t height) :Doctor(name, position, salary)
//	{
//		_height = height;
//	}
//	void print() {
//		Doctor::print();
//		cout << "Height: " << _height << endl;
//	};
//
//};
//class BrainDoc : public Doctor {
//public:
//	size_t _weight;
//	BrainDoc() = default;
//	BrainDoc(string name, string position, int salary, size_t weight) :Doctor(name, position, salary)
//	{
//		_weight = weight;
//	}
//	void print() {
//		Doctor::print();
//		cout << "Weight: " << _weight << endl;
//	};
//
//};
//class EyeDoctor : public Doctor {
//public:
//	size_t _expYear;
//	EyeDoctor() = default;
//	EyeDoctor(string name, string position, int salary, size_t expYear) :Doctor(name, position, salary)
//	{
//		_expYear = expYear;
//	}
//	void print() {
//		Doctor::print();
//		cout << "exp Year: " << _expYear << endl;
//	};
//
//};
//
//void main() {
//	BrainDoc bd{ "Huseyn","Brain",2200,70 };
//	bd.print();
//	cout << "---------Next Doctor---------" << endl;
//	EyeDoctor ed{ "Huseyn","Eye",2200,5 };
//	bd.print();
//	cout << "---------Next Doctor---------" << endl;
//	HeartDoc hd{ "Huseyn","Heart",2200,176 };
//	bd.print();
//	cout << "---------Next Doctor---------" << endl;
//
//}