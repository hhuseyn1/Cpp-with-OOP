//#pragma once
//
//class Team {
//public:
//	string _name, _position;
//	int _number;
//	Team() = default;
//	Team(string name, string position, int number)
//	{
//		_name = name;
//		_position = position;
//		_number = number;
//	}
//	void print() {
//		cout << "Name: " << _name << endl;
//		cout << "Position: " << _position << endl;
//		cout << "Number: " << _number << endl;
//	}
//
//
//};
//
//class Player : public Team {
//public:
//	size_t _height;
//	Player() = default;
//	Player(string name, string position, int number, size_t height) :Team(name, position, number)
//	{
//		_height = height;
//	}
//	void print() {
//		Team::print();
//		cout << "Our work is defending";
//	};
//
//};
//
//void main() {
//	Player p{ "Huseyn","Defender",22,176 };
//	p.print();
//
//}
