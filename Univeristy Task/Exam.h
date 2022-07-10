#pragma once
class Exam{
    string _date; 
    float _point;
    Lesson _lesson;
public:
    Exam() = default;
    Exam(string date,float point,Lesson lesson) {
        _date = date;
        _point = point;
        _lesson = lesson;
    }

    string getDate() { return _date; }
    float getPoint() { return _point; }
    Lesson getLesson() { return _lesson; }
    friend ostream& operator<<(ostream& output, const Exam& exam);
};
ostream& operator<<(ostream& output, const Exam& exam) {
    cout <<"Date: " << exam._date << endl;
    cout << "Point: " << exam._point << endl;
    cout <<"Lesson: " << exam._lesson << endl;

    return output;
}