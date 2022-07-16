#include <iostream>
using namespace std;

template<typename T>
class Shared_Ptr {
	T* _ptr;
public:
	Shared_Ptr() = default;
	Shared_Ptr(T* ptr){
		_ptr = ptr;
		cout << "Constructor ->" << endl;
	}

void reset() {
	delete _ptr;
	_ptr = nullptr;
}

void swap(T& other){
	this->swap(other);
}

T* get() {
	return _ptr;
}

T& operator*() {
	return this->*_ptr;
}

T& operator->() {
	return this->_ptr;
}
T& operator[](int i) {
	return _ptr[i];
 }

Shared_Ptr(Shared_Ptr<T>& other) noexcept {
	cout << "Copy ConstructorS\n";
	_ptr = other._ptr;
	other._ptr = nullptr;
}

Shared_Ptr<T>& operator=(Shared_Ptr<T>& other) noexcept {
	cout << "Copy Assign Operator\n";
	_ptr = other._ptr;
	other._ptr = nullptr;
	return *this;
}


~Shared_Ptr(){
	delete _ptr;
	cout << "Destructor ->" << endl;
}

};


class Rectangle {
	int _length;
	int _width;
public:
	Rectangle() = default;
	Rectangle(int length,int width){
		_length=length;
		_width=width;
	}

	int getArea() { return _length * _width; }

};
int main(){
	Shared_Ptr<Rectangle>rect;
	Shared_Ptr<Rectangle>rect2;
	rect.get();
	rect.swap(*rect2);
	rect[1];
	rect.reset();

}
