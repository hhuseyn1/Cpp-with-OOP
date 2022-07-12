#include <iostream>
#include <vector>
#include <map>
#include "Car.h"
#include "Penalty.h"
using namespace std;


int main(){
	map<Car,vector<Penalty>> penalties;
	Car c1{ "Huseyn","BMW M5","10-HH-100",2020};
	Car c2{ "Huseyn","Mercedes E-Class","22-HH-222",2009};
	Car c3{ "Huseyn","Audi Q7","33-HH-333",2021};
	penalties[c1].push_back(Penalty{ 190,"Qosha xett","23.06.2022",100,"Koroghlu" });
	penalties[c2].push_back(Penalty{ 110,"Dayanma durma","11.07.2022",100,"Nasimi" });
	penalties[c3].push_back(Penalty{ 75,"Qirmizi ishiq","30.01.2022",100,"Ganclik" });
	
	for (auto& penfirst : penalties) {
		cout << penfirst.first << endl;
		for (auto& pensec : penfirst.second){
			cout << pensec << endl;
		}
	}

}
