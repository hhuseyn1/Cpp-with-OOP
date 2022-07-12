#pragma once

class Penalty {
	int _id;
	string _text;
	string _datetime;
	float _price;
	string _location;

public:
	Penalty() = default;
	Penalty(int id, string text, string datetime, float price, string location) {
		_id = id;
		_text = text;
		_datetime = datetime;
		_price = price;
		_location = location;
	}

	int getId() { return _id; }
	string getText() { return _text; }
	string getDateTime() { return _datetime; }
	float getPrice() { return _price; }
	string getLocation() { return _location; }

	friend ostream& operator<<(ostream& output, const Penalty& penalty);

};
ostream& operator<<(ostream& output, const Penalty& penalty) {
	cout << "Id: " << penalty._id << endl;
	cout << "Text: " << penalty._text << endl;
	cout << "Datetime: " << penalty._datetime << endl;
	cout << "Price: " << penalty._price << endl;
	cout << "Location: " << penalty._location << endl;
	return output;
}
