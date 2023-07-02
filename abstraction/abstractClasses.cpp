#include<iostream>
#include "myheader.h"
using namespace std;

class Vehicle
{
    public:
    void fxn()
    {
        cout<<"hii i am a vehicle \n";
    }
    virtual void color()=0;// pure virtual function
};
class Bike:public Vehicle 
{
    public:
    void fxn2()
    {
        cout<<" child fxn \n";
    }
    void color()
    {
        cout<<"green \n";
    }
};
int main()
{
    Bike b1;
    b1.fxn();
    b1.color();
    b1.fxn2();
    cout<<"the value of num is "<<num<<endl;
    return 0;
}

