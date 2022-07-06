#pragma once

class Applier {
public:

	string _name = "";
	int _age = 0;
	string _speciality = "";
	string _text = "";

	Applier() = default;
	Applier(string name, int age, string specialty, string text) {
		_name = name;
		_age = age;
		_speciality = specialty;
		_text = text;
	}

	string getName() { return _name; }
	int getAge() { return _age; }
	string getSpeciality() { return _speciality; }
	string getText() { return _text; }

	void cv()
	{
		cout << "Name: " << _name << endl;
		cout << "Age: " << _age << endl;
		cout << "Speciality: " << _speciality << endl;
		cout << "Text: " << _text << endl;

	}

};