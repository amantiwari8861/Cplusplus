#include<iostream>
using namespace std;

class Employee
{
    private://access specifiers
    long creditCardNumber;
    protected:
    int property;
    public:
    int id;
    Employee(){creditCardNumber=0;property=0;}
    void show2()
    {
        cout << "Credit Card Number: " << creditCardNumber << endl;
        cout << "Property: " << property << endl;
        cout << "ID: " << id << endl;
    }
};
class Manager : public Employee
{
    public:
    void show()
    {
        // cout << "Credit Card Number: " << creditCardNumber << endl;
        property = 100;
        cout << "Property: " << property << endl;
        cout << "ID: " << id << endl;
    }
};
int main()
{
    // Employee e;
    // e.id = 101;
    // e.property = 20000;
    // e.creditCardNumber = 667474389;
    // e.show2();
    // Manager m;
    // m.creditCardNumber = 667474389;
    // m.property = 30000;//main is not child of Employee
    // m.id = 102;
    // m.show();
    return 0;
}