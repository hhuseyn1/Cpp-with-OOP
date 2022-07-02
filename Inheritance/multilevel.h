#pragma once

class Person {
public:
	string _name;
	string _surname;
	short _age;
	Person()=default;
	Person(string name,string surname,short age) {
		_name = name;
		_surname = surname;
		_age = age;
	}
	void print() {
	cout<<"Name: "<<_name<<endl;
	cout<<"Surname: "<<_surname<<endl;
	cout<<"Age: "<<_age<<endl;
	}



};

class Employer :public Person{
public:
	float _salary;
	int _workExp;
	Employer() = default;
	Employer(string name, string surname, short age, float salary, int workExp) :Person(name, surname, age) {
		_salary = salary;
		_workExp = workExp;
	}
	void print() {
		Person::print();
		cout<<"Salary: "<<_salary<<endl;
		cout<<"workExp: "<<_workExp<<endl;
	}



};
class Teacher :public Employer{
public:
	string _subject;
	Teacher()=default;
	Teacher(string name, string surname, short age, float salary, int workExp,string subject) :Employer(name, surname, age,salary,workExp){
		_subject = subject;
	}
	void print() {
		Employer::print();
		cout << "Subject: " << _subject << endl;
	}
};

void main(){
	Teacher t1{ "Huseyn","Hemidov",18,1000,2,"Chemistry" };
	t1.print();


}
