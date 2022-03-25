#include<iostream>
using namespace std;
class Car
{
    public:
    void fxn1()
    {
        cout<<"calling fxn1"<<endl;
    }
    void fxn1(int a)
    {
        cout<<"calling fxn1(int a)"<<a<<endl;
    }
    void fxn1(int b,int c)
    {
        cout<<"calling fxn1(int b,int c)"<<b<<" "<<c<<endl;   
    }
};
int main()
{
    Car obj;
    obj.fxn1();
    obj.fxn1(10);
    obj.fxn1(10,20);
    return 0;
}
