// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base {
   public:
    virtual void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    // derived1.print();

    // Derived derived2;
    // derived2.Base::print();

    Base base;
    base.print();


    Base *b1;
    b1=&derived1;
    b1 -> print(); //Derived 

    b1=&base;
    b1 -> print(); // Base
/* 
    when u don't use virtual function and even though ptr points to a Derived object,
    it is actually of Base type. So, it calls the member function of Base.
    In order to override the Base function instead of accessing it, 
    we need to use virtual functions in the Base class. 
*/
    return 0;
}