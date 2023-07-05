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
    void fxn1(char a)
    {
        cout<<"calling fxn1(char a)"<<a<<endl;
    }
    void fxn1(int b,int c)
    {
        cout<<"calling fxn1(int b,int c)"<<b<<" "<<c<<endl;   
    }
    void fxn1(float b,double c)
    {
        cout<<"calling fxn1(float b,int c)"<<b<<" "<<c<<endl;   
    }
    void fxn1(short b,long c)
    {
        cout<<"calling fxn1(short b,long c)"<<b<<" "<<c<<endl;   
    }
};
int main()
{
    Car obj;
    obj.fxn1();
    obj.fxn1(10);
    obj.fxn1('a');
    obj.fxn1(10,20);
    obj.fxn1(10.5f,20.0);
    obj.fxn1((short)10,20L);
    return 0;
}
//polymorphism : 
//      poly : many
//      morphs : forms

// static polymorphism (compile time polymorphism or early binding) 
//      eg. function overloading,constructor overloading and operator overloading
// dynamic polymorphism (runtime polymorphism or late binding)
//      eg. overriding