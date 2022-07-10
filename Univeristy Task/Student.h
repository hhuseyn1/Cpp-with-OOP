#pragma once
class Student {
	string _speciality;
	float _score;
	float _money;
	BankCard _bankcard;
	vector<Exam>_exams;
public:
	string _name;
	string _surname;
	Student() = default;
	Student(string name,string surname,string speciality,float score,float money,BankCard bankcard){
	_name=name;
	_surname=surname;
	_speciality=speciality;
	_score=score;
	_money=money;
	_bankcard = bankcard;
	}
	string getName() { return _name; }
	string getSurname() { return _surname; }
	string getSpeciality() { return _speciality; }
	vector<Exam>& getExams() { return _exams; }
	double getMoney() { return _money; }
	double getScore() { return _score; }
	BankCard getBankcard() { return _bankcard; }
	float showBalance() { return _bankcard.getBalance(); }
	friend ostream& operator<<(ostream& output, const Student& student);
};
	ostream& operator<<(ostream& output, const Student& student)
	{
		cout << "----- Student ----- " << endl;
		cout << "Name: " << student._name << endl;
		cout << "Surname: " << student._surname << endl;
		cout << "Speciality: " << student._speciality << endl;
		cout << "Score: " << student._score << endl;
		cout << "Money: " << student._money << endl;
		cout << "----- Bankcard ----- " <<endl;
		cout << student._bankcard << endl;
		cout << "------- Exams -------" << endl;
	for (size_t i = 0; i < student._exams.size(); i++){
		cout << student._exams[i] << endl;
	}
	return output;
	}