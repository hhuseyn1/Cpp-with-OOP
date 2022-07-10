#pragma once
class Lesson {
	string _name;
public:
	Lesson() = default;
	Lesson(string name) {
		_name = name;
	}
	string getLessonName() { return _name; }
	friend ostream& operator<<(ostream& output, const Lesson& lesson);
};
ostream& operator<<(ostream& output, const Lesson& lesson)
{
	cout << lesson._name;
	return output;
}