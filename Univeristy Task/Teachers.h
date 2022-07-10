#pragma once
class Teacher {
	string _name;
	string _surname;
	short _age;
	vector<Group> _groups;
	string _department;
	float _salary;
	BankCard _bankcard;
public:
    Teacher() = default;
	Teacher(string name,string surname,short age,string department,float salary,BankCard bankcard){
		_name=name;
		_surname=surname;
		_age=age;
		_department=department;
		_salary=salary;
		_bankcard= bankcard;
	}

    string getName() { return _name; }
    string getSurname() { return _surname; }
    short getAge() { return _age; }
    vector<Group>& getGroups() { return _groups; }
    string getDepartment() { return _department; }
    float getSalary() { return _salary; }
    BankCard getBankcard() { return _bankcard; }

    friend ostream& operator<<(ostream& output, const Teacher& teachers);
};
ostream& operator<<(ostream& output, const Teacher& teachers){
    cout << "----- Teacher -----" << endl;
    cout << "Name: " << teachers._name << endl;
    cout << "Surname: " << teachers._surname << endl;
    cout << "Age: " << teachers._age << endl;
    cout << "Department: " << teachers._department << endl;
    cout<< "Salary: " << teachers._salary << endl;
    cout << "Groups: ";
    for (size_t i = 0; i < 1; i++){
        cout << teachers._groups[i]<< endl;
    }
    cout << "BankCard: " << teachers._bankcard<< endl;
    return output;
}
