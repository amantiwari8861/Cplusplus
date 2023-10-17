#include<iostream>
using namespace std;
class CopyDemo
{
    int a;
    int b;
    public:
        CopyDemo(int x, int y)
        {
            a = x;
            b = y;
        }
        CopyDemo(const CopyDemo &obj) //copy constructor
        {
            a = obj.a; //setting local variable to the value of the global variable
            b = obj.b;
            // obj.a=99;
        }
        void display()
        {
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
        ~CopyDemo()
        {
            cout<<"hii i am deconstructor "<<endl;
        }
};
int main()
{
    CopyDemo obj1(10,20);
    cout<<"in object 1"<<endl;
    obj1.display();
    
    CopyDemo obj2(obj1);    // Copy Constructor is called
    cout<<"in object 2"<<endl;
    obj2.display();

    obj1.display();
    return 0;
}
