#include <iostream>
using namespace std;

//Smart Pointers
//auto_ptr
 
//weak_ptr
//unique_ptr
//shared_ptr

class Entity {
    int _value;
public:
    Entity(int value) { _value = value;
    cout << "Konstructor" << endl; }
    void doSomething() { cout << "Do something" << endl; }
    ~Entity(){ cout << "Destructor" << endl; }

};

void foo(Entity obj) {
    cout << "foo function" << endl;
}

template <typename T>
class SmartPointer {
    T* _ptr;
public:
    SmartPointer(T* ptr=NULL){
        cout << "Constructor->" << endl;
        _ptr = ptr;
    }

    void reset() {
        delete _ptr;
        _ptr = NULL;
    }

    void relaese() {
        _ptr = NULL;
    }

    T* get() {
        return _ptr;
    }


    SmartPointer(SmartPointer<T>& right) noexcept {
        cout << "Copy ConstructorS\n";
        _ptr = right._ptr;
        right._ptr = NULL;

    }

    SmartPointer<T>& operator=(SmartPointer<T>& right) noexcept {
        cout << "Copy Assign Operator\n";
        _ptr = right._ptr;
        right._ptr = NULL;
        return *this;
    }


    T& operator*() {
        return *_ptr;
    }

    T& operator->() {
        return _ptr;
    }

    ~SmartPointer(){
        cout << "Destructor->" << endl;
        delete _ptr;
    }
    
};

class Rectangle { 
int length; 
int breadth; 

public:
    Rectangle() = default;
    Rectangle(int l, int b){  
        length = l;
        breadth = b;
    }

    int getArea(){
        return length * breadth;
    }

    
};



int main(){


    {
       /* auto ptrEnt = new Entity(10);
        auto_ptr<Entity>ptr(ptrEnt);
        (*ptr).doSomething();
     */
        //ptr.reset();
        //ptr.relase();
        

    //auto_ptr<Entity>ptr1(new Entity(10));//ekvivalenti-> int* ptr

    /*auto_ptr<int>ptr1(new int(42));
    auto_ptr<int>ptr2 = ptr1;


    Entity* ptr = ptr1.get();
    (*ptr).doSomething();*/

   /* int* ptr1 = new int(42);
    int* ptr2 = ptr1;

    delete ptr1;*/
    
   /* Entity e;
    foo(e);*/
    }
        
    {

        //unique_ptr<Rectangle> P1(new Rectangle(20, 5));
        //cout << P1->getArea() << endl; 

        //// unique_ptr<Rectangle> P2(P1);  
        //unique_ptr<Rectangle> P2;
        //
        //P2 = move(P1);
        //cout << P2->getArea() << endl;


    }
    
    {
        shared_ptr<Rectangle> P1(new Rectangle(20, 5)); // create shared //ptr P1  

        cout << P1->getArea() << endl;
        
        shared_ptr<Rectangle> P2;
        P2 = P1;

       
        cout << P2->getArea() << endl;

         
        cout << P1->getArea() << endl;

    
        cout << P1.use_count() << endl;   

    }
    


}
 