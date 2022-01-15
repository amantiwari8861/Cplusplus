#include<iostream>
using namespace std;
class Building
{
    public:
    // Building()
    // {
    //     cout<<"hii i am a default constructor"<<endl;
    // }
    // Building(int a)
    // {
    //     cout<<"i am 1 argument constructor \n";
    //     num2=a;
    // }
    Building(int a,int num2)
    {
        cout<<"i am 1 argument constructor \n";
        //num2=num2; gives 0
        /*left side(global variable)*/this->num2=num2;//right side(local variable)
        num1=a;
    }
    // int num1=100;
    int num1;
    int num2;
    void display()
    {
        cout<<"num = "<<num1<<" num2 = "<<num2<<endl;
    }
};
int main()
{
    // Building obj,obj2;
    // Building obj(20);
    // Building obj2(78);
    Building obj(10,100);
    Building obj2(20,210);
    obj.display();
    obj2.display();
    return 0;
}
