#include<iostream>
using namespace std;

class Parent1
{
    public:
    int p1=100;
    void display()
    {
        cout<<"hii i am parent 1 "<<endl;
    }
};
class Child1:public Parent1
{
    public:
    int p2=200;
    void display()
    {
        cout<<"hii i am child 1 "<<endl;
    }
    void callParent()
    {
        cout<<"calling by child1 callParent fxn "<<endl;
        Parent1::display();
    }
};
class Child2:public Parent1
{
    public:
    int p3=300;
    void display()
    {
        cout<<"hii i am child 2 "<<endl;
    }
};
class SubChild: public Child1,public Child2
{
    public:
    int cdata=500;
    void display()
    {
        cout<<"hii i am sub child "<<endl;
    }
    void callBothParents()
    {
        cout<<"calling by Subchild callBothParents fxn "<<endl;
        Child1::display();
        Child2::display();
    }
};

int main()
{
    SubChild sub;
    sub.display();
    sub.Child1::display();
    sub.Child2::display();
    // sub.Parent1::display();
    // a child class can call only the immidiate parent class
    //same rule in multilevel inheritance   . ambiguity(duvidha)
    sub.callParent();
    sub.callBothParents();
    return 0;
}

