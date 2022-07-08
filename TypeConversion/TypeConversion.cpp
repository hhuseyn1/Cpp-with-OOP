#include <iostream>
#include <string>
//#include <typeinfo>

using namespace std;

//// Type Conversion
// 1) implicit 2) explicit 
 
// Type Conversion Operators in C++

// static_cast
// dynamic_cast
// const_cast
// reinterpret_cast




 class Employee {
 protected:
 	int id = 0;
 public:
 	Employee() = default;
 	Employee(int id) : id(id) {};
 
 	int getId() { return id; }
 };
 
 
 class Police : public Employee {
 public:
 	Police(int id) : Employee(id) {};
 	int getValue() { return id * 100; }
 };
 
 
 class Teacher : public Employee {
 public:
 	Teacher(int id) : Employee(id) {};
 	string method1() { return "Sport is health"; }
 	string method2() { return "Put your mask"; }
 };
 
 
 int main()
 {
 	Employee e(1);
 	Police p(2);
 	Teacher t(3);
 
 
 	 Employee e1 = p;
 	 cout << e1.getId() << endl;
 
 	// Police downCast = (Police)e1; // invalid
 	 
 	 Employee ePtr = p;
 	 cout << ePtr.getId() << endl;
 	 
 	 
 	 Police& downCast = (Police&)ePtr;
 	 cout << downCast.getValue() << endl;
 
 }








//int main() {
//
// float f = 12.5f;
// int number = static_cast<int>(f);
// cout << number << endl;
//
//}


//class Int {
//	int x;
//
//public:
//	Int(int x): x(x){}
//
//	explicit operator string() {
//		return to_string(x);
//	}
//};
//
//
//int main() {
//	Int obj(10);
//	string s = (string)obj;
//
//	string s1 = static_cast<string>(obj);
//
//	cout << s << endl;
//}










// class Employee {
// protected:
// 	int id = 0;
// public:
// 	Employee() = default;
// 	Employee(int id) : id(id) {};
// 
// 	int getId() { return id; }
// };
// 
// class Teacher : private Employee {
// public:
// 	Teacher(int id) : Employee(id) {};
// 	string method1() { return "Idman saglamliqdi"; }
// 	string method2() { return "Maskavi tax"; }
// };
// 
// 
// int main()
// {
// 	// Teacher t(10);
// 	// Employee e = static_cast<Employee>(t);
// 
// 
// 	// // Teacher t2 = static_cast<Teacher>(e); // invalid
// 	// Teacher* t3 = static_cast<Teacher*>(&e);
// 	// Teacher& t4 = static_cast<Teacher&>(e);
// 
// 
// 	// Teacher* t5 = (Teacher*)&e;
// 	// cout << t5->getId() << endl;
// }











// // dynamic_cast
// 
// 
// 
// 
// class ButtonBase {
// public:
// 	string Content = "";
// 	string Location = "";
// 
// 	virtual void Click() { cout << "ButtonBase Click\n"; }
// 
// 	virtual ~ButtonBase() = 0{};
// };
// 
// 
// class Button : public ButtonBase {
// public:
// 	void Click() { cout << "Button Click\n"; }
// };
// 
// class CheckBox : public ButtonBase {
// public:
// 	void Click() { cout << "CheckBox Click\n"; }
// };
// 
// class RadioButton : public ButtonBase {
// public:
// 	void Click() { cout << "RadioButton Click\n"; }
// };
// 
// 
// 
// // dynamic_cast
// 
// int main() 
// {
// 	ButtonBase** buttons = new ButtonBase * []
// 	{
// 		new Button(),
// 		new CheckBox(),
// 		new RadioButton(),
// 		new CheckBox(),
// 		new Button(),
// 		new CheckBox(),
// 		new RadioButton()
// 	};
// 
// 	int n = 7;
// 
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		if(dynamic_cast<CheckBox*>(buttons[i]) != NULL)
// 			buttons[i]->Click();
// 	}
// }


// polymorphic class - non polymorphic class









// // const_cast
// 
// 
// void show(int*& data) {
// 	*data = 100;
// 	cout << *data << endl;
// }
// 
// 
// int main() {
// 	const int number = 10;
// 	const int* ptr = &number;
// 
// 	show(const_cast<int*&>(ptr));
// 	cout << *ptr << endl;
// 
// 
// 	// int* newPtr = const_cast<int*>(ptr);
// 	// *newPtr = 100;
// 	// 
// 	// 
// 	// // Undefined behavior
// 	// cout << number << endl;
// 	// cout << *ptr << endl;
// 	// cout << *newPtr << endl;
// }





// class A {
// public:
// 	int value;
// 
// 	A(int v) : value(v) {}
// 
// 	void show() const {
// 		(const_cast<A*>(this))->value = 100;
// 
// 		cout << value << endl;
// 	}
// };
// 
// 
// 
// void main() {
// 	A a(10);
// 	a.show();
// 	cout << a.value << endl;
// }










// reinterpret_cast


//
//struct Samsung {
//	int a;
//	int b;
//	bool isCancel;
//	char symbol;
//};

//
//void main()
//{
//	Samsung s;
//
//	s.a = 5;
//	s.b = 100;
//	s.isCancel = true;
//	s.symbol = 'A';
//
//	int* v = reinterpret_cast<int*>(&s);
//	cout << *v << endl;
//
//	v++;
//
//	v = reinterpret_cast<int*>(v);
//	cout << *v << endl;
//
//	v++;
//
//	bool* b = reinterpret_cast<bool*>(v);
//	cout << *b << endl;
//
//	b++;
//
//	char* c = reinterpret_cast<char*>(b);
//	cout << *c << endl;
//}