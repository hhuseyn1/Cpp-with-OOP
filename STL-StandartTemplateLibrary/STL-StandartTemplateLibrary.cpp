#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
using namespace std;
#include "Array.h"


int main()
{
	cout << left;
	vector<string>container;

	container.reserve(4);

	cout << "Size: " << container.size() << endl;
	cout << "Capacity: " << container.capacity() << endl;

	cout << endl;
	container.push_back("Eminem");
	container.push_back("Leyla");
	container.push_back("Renad");
	container.push_back("Huseyn");

	for (auto& i : container) {
		cout << setw(20) << "Student -> " << i << endl;
	}

	container.erase(container.begin());

	cout << "\n=========== After ===========\n" << endl;
	for (auto& i : container) {
		cout << setw(20) << "Student -> " << i << endl;
	}
	container.shrink_to_fit();
	cout << endl;
	cout << "Size: " << container.size() << endl;
	cout << "Capacity: " << container.capacity() << endl;

	/*Array<string, 4> arr;*/

	// arr.fill("Empty");

	/*arr[0] = "Eminem";
	arr[1] = "Leyla";
	arr.at(2) = "Renad";
	arr[3] = "Huseyn";*/


	/*
		for (auto i = arr.begin(); i != arr.end(); i++)
			cout << *i << endl;
	*/


	/*
		for (auto& i : arr)
			cout << i << endl;
	*/





	// // arr[4] = "Isa"; // range_error

	/*
		try
		{
			arr[4] = "Isa";
		}
		catch (const range_error& ex)
		{
			cout << "Ex: " << ex.what() << endl;
		}
	*/






	/*cout << *(arr.end() - 1) << endl;
	cout << *(arr.begin() + 1) << endl;*/

	// cout << *arr.begin() << endl;
	// cout << arr.data()[0] << endl;
	// cout << arr.data()[1] << endl;
	// cout << arr[2] << endl;
	// cout << arr.at(3) << endl;
}

