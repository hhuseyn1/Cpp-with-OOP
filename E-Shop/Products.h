#pragma once

class Products {
public:

	string P_name;
	string P_color;
	string P_description;
	double P_price;
	size_t P_discount;

	Products() = default;
	Products(string Name, string Color, string Desctription, double Price) {
		GlobalID++;
		P_name = Name;
		P_color = Color;
		P_description = Desctription;
		P_price = Price;
		PRODUCTCOUNT++;
	}
	void admin();
	void customer();
	void print() {
		cout << "Id: " << GlobalID << endl;
		cout << "Name: " << P_name << endl;
		cout << "Color: " << P_color << endl;
		cout << "Price: " << P_price << endl;
		cout << "Discount: " << P_discount<< endl;
		cout << "Desctription: " << P_description << endl;
	}

};



