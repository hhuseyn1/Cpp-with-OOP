#include <iostream>
#include <vector>
#include <array>
#include <list> //double linked
#include <forward_list> //single linked
#include <queue> 
#include <map> //map multi map unordered map
#include <set>  //set multi set unordered map tree mentiqi ile ishleyirler
#include <unordered_set>  
#include <unordered_map>  

using namespace std;

//template<typename T>
//class myVector:public vector<T> {
//public:
//    void doSomet() {
//        cout << "Do somet" << endl;
//    }
//
//};
//
//int main(){
//    
//    myVector<int>vec;
//    vec.doSomet();
//    
//
//
//}


int main() {

	map<int, string>dictionary;
	dictionary.insert({1,"Purple"});
	dictionary.insert({2,"Red"});
	dictionary.insert({3,"Green"});
	for (auto& pair : dictionary){
		cout << pair.first << ' ';
		cout<<pair.second<<endl;
	}


	map<char, float(*)(float, float)>calc;
	calc['+'] = Add;
	calc['-'] = Subtract;
	calc['/'] = Multiply;
	calc['*'] = Divide;

	float a, b;
	char op;

	while (true){
		cin >> a >> op >> b;
		cout << calc[op](a, b) << endl;

	}



}













