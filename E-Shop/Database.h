#pragma once

class Database {
	vector<Admin> admins;
	vector<Customer> customers;
	vector<ProductItem>_productitem;
	vector<Product>_product;
public:

	void ShowAllProducts()
	{
		for (size_t i = 0; i < _productitem.size(); i++)
		{
			cout << _productitem[i] << endl;
		}
	}

	void UpdateProduct() {
		int id;
		int newPrice;
		string newName, newColor;
		cout << "\t\t\t\t\t\tEnter product id : ";
		cin >> id;
		for (size_t i = 0; i < _productitem.size(); i++)
		{
			if (_productitem[i].getId() == id)
			{
				cout << "Name: " << endl;
				cin >> newName;
				cout << "Price: " << endl;
				cin >> newPrice;
				cout << "Color: " << endl;
				cin >> newColor;
				_product[i]._name = newName;
				_product[i]._color = newColor;
				_product[i]._price = newPrice;
			}
		}
	}
};