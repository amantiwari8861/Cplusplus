// C++ program to demonstrate function overriding
#include <iostream>
using namespace std;

class Base 
{
   public:
    virtual void print() 
    {
        cout << "Base Function" << endl;
    }
    void parentFxn(){
        cout<<"Hello i am parent Fxn"<<endl;
    }
};
class Derived : public Base 
{
   public:
    void print() 
    {
        cout << "Derived Function" << endl;
    }
    void childFxn(){
        cout<<"Hello i am child Fxn"<<endl;
    }
};

int main() 
{
    Derived derived1;
    // derived1.print();

    // Derived derived2;
    // derived2.Base::print();

    Base base;
    // base.print();


    Base *b1; //Base class type pointer or reference variable
    b1=&derived1;
    b1 -> print(); //Derived 
    b1 ->parentFxn();
    // b1->childFxn(); //error

    b1 -> Base::print();
    // b1=&base;
    // b1 -> print(); // Base

/* 
    when u don't use virtual function and even though ptr points to a Derived object,
    it is actually of Base type. So, it calls the member function of Base.
    In order to override the Base function instead of accessing it, 
    we need to use virtual functions in the Base class. 
*/
    return 0;
}