#include <iostream>
using namespace std;
#include<fstream>
#include<vector>
#include<string>
#include "Applier.h"
#include "Company.h"



int main() {
	Applier* cv1 = new Applier("Huseyn", 18, "IT", "Empty1");
	Applier* cv2 = new Applier("Huseyn", 18, "Design", "Empty2");


	Company company;
	company.hireUp(cv1);
	company.hireUp(cv2);

	company.writeToFile("company.txt");

	company.showAllCV();

	company.readToFile("company.txt");

}