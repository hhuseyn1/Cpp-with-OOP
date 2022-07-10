#pragma once
class Group {
	string _name;
	vector<Student> _students;
	vector<Lesson>_lessons;
public:
    Group() = default;
    Group(string name){
        _name = name;
    }
	string getName() { return _name; }
	vector<Student>& getStudents() { return _students; };
	vector<Lesson>& getLessons() { return _lessons; };
    friend ostream& operator<<(ostream& output, const Group& group);
};
ostream& operator<<(ostream& output, const Group& group){
    cout << "Name: " << group._name << endl;
    cout << "Students: ";
    for (size_t i = 0; i < group._students.size(); i++){
        cout << group._students[i]._name << ' ' << group._students[i]._surname << endl;
    }
    cout << "Lessons: ";
    for (size_t i = 0; i < group._lessons.size(); i++){
        cout << group._lessons[i] << endl;
    }
    return output;
}