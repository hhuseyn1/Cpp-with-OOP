#include <iostream>
using namespace std;
#include <conio.h>
#include <vector>
#include "Admin.h"
#include "Customer.h"
#include "Product.h"
#include "Database.h"



int main(){
	Database d;
	Admin a{"admin","admin123"};
	Customer c{ "Huseyn","Huseyn123" };
	Product p{ "Coca Cola",1,"Red" };
	ProductItem{ 1,&p };
	int choice;
	char ch;
	string username;
	string password;
menu:
	
	cout<<"\t\t\t\t\t\tWelcome E - Shop !!!!!!!!!!"<<endl;
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	cout<<"\t\t\t\t\t\t[1]Admin"<<endl;
	cout<<"\t\t\t\t\t\t[2]Customer"<<endl;
	cout<<"\t\t\t\t\t\t[3]Exit"<<endl;
	cout<<"\t\t\t\t\t\tPlease select : ";
	cin >> choice;
	system("cls");
	switch (choice){
		case 1:
			cout << "\t\t\t\t\t\tEnter username: ";
			cin >> username;
			cout << "\t\t\t\t\t\tEnter password: ";
			ch = _getch();
			while (ch!=13){
				password.push_back(ch);	
				cout << '*';
				ch = _getch();
			}
			cout << endl;
			if (username == a.getUsername() && password == a.getPassword()) {
				int Adminchoice;
				system("cls");
				cout << "ADMIN REGISTERED" << endl;
				cout << "\t\t\t\t\t\t [1]Show all products" << endl;
				cout << "\t\t\t\t\t\t [2]Update product" << endl;
				cout << "\t\t\t\t\t\t [3]Delete product" << endl;
				cout << "\t\t\t\t\t\t Enter choice: ";
				cin >> Adminchoice;
				if (Adminchoice == 1)
					d.ShowAllProducts();
				else if (Adminchoice == 2)
					d.UpdateProduct();
			}
				
			else
				cout << "Invalid username or password !!!"<<endl;
			break;
		case 2:
			cout << "\t\t\t\t\t\tEnter username: ";
			cin >> username;
			cout << "\t\t\t\t\t\tEnter password: ";
			ch = _getch();
			while (ch != 13) {
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			cout << endl;
			if (username == c.getUsername() && password == c.getPassword()) {
				int Customerchoice;
				system("cls");
				cout << "CUSTOMER REGISTERED" << endl;
				cout << "\t\t\t\t\t\t [1]Show all products" << endl;
				cout << "\t\t\t\t\t\t [0]Exit" << endl;
				cout << "Enter choice: ";
				cin >> Customerchoice;
				if (Customerchoice == 1)
					d.ShowAllProducts();
				else if (Customerchoice == 0)
					exit(0);
			}
			break;

		case 3:
			cout << "See you later ..." << endl;
			exit(0);
			break;
	default:
		goto menu;
		break;
	}








}
