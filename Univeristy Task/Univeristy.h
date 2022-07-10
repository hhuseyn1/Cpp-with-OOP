#pragma once
class Univeristy {
	string _name;
	string _location;
	vector<Student>_students;
	vector<Teacher>_teachers;
public:
	Univeristy() = default;
	Univeristy(string name,string location){
	_name=name;
	_location=location;
	}
	string getName() { return _name; }
	string getLocation() { return _location; }
	vector<Student>& getStudents() { return _students; }
	vector<Teacher>& getTeachers() { return _teachers; }
	void showAllstudents() {
		for (size_t i = 0; i < _students.size(); i++){
			cout << _students[i] << endl;
		}
	}
	void showAllteachers() {
		for (size_t i = 0; i < _teachers.size(); i++){
			cout << _teachers[i] << endl;
		}
	}


	double getUniversityscore(){
		double sum = 0;
		for (size_t i = 0; i < _students.size(); i++){
			sum += _students[i].getScore();
		}
		return sum/_students.size();
	};
	 
	double getPayment(){
		double studentSum = 0;
		double teacherSum = 0;
		for (size_t i = 0; i < _students.size(); i++){
			studentSum += _students[i].getMoney();
		}
		for (size_t i = 0; i < _teachers.size(); i++){
			teacherSum += _teachers[i].getSalary();
		}
		return (teacherSum + studentSum);
	}

};