#pragma once
class Product {
public:
	static int _staticId;
	int _id ;
	string _name;
	double _price;
	string _color;
	Product(string name, double price, string color){
		_id = _staticId++;
		_name = name;
		_price = price;
		_color = color;
}

	int getId() { return _id; }
	string getName() { return _name; }
	string getColor() { return _color; }
	double getPrice() { return _price; }

	friend ostream& operator<<(ostream& output, const Product& product);
};
int Product::_staticId = 0;
ostream& operator<<(ostream& output, const Product& product)
{
	cout << "Id: " << product._id << endl;
	cout << "Name: " << product._name << endl;
	cout << "Price: " << product._price << endl;
	cout << "Color: " << product._color << endl;

	return output;
}

class ProductItem {
public:
	static int _staticId;
	int _id;
	int _quantity;
	Product* _product;
	ProductItem(int quantity, Product* product) {
		_id = _staticId++;
		_quantity = quantity;
		_product = product;
	}

	int getId() { return _id; }
	int getQuantity() { return _quantity; }
	double TotalPrice() { return _product->getPrice() * _quantity; }
	//Product getProduct() { return *_product; }
	friend ostream& operator<<(ostream& output, const ProductItem& product);
};
ostream& operator<<(ostream& output, const ProductItem& product) {
	cout << "Product Item info: " << endl;
	cout << "Id: " << product._id << endl;
	cout << "Name: " << product._product->getName() << endl;
	cout << "Color: " << product._product->getColor() << endl;
	cout << "Price: " << product._product->getPrice() << endl;
	cout<< "Quantity: " << product._quantity << endl;
	return output;
}
int ProductItem::_staticId = 0;