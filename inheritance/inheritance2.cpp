#include<iostream>
using namespace std;

class Parent1
{
    public:
    int id=101;
    void p1fxn()
    {
        cout<<"hello i am parent1 fxn \n";
    }
};
class Parent2
{
    public:
    int id=102;
    void p2fxn()
    {
        cout<<"hello i am parent2 fxn \n";
    }
};
class Parent3
{
    public:
    int id=103;
    void p3fxn()
    {
        cout<<"hello i am parent3 fxn \n";
    }
};
class child : public Parent1,public Parent2,public Parent3
{
    public:
    int id=105;
    void cfxn()
    {
        cout<<"hello i am child fxn \n";
    }
};


int main()
{
    child cobj;
    cobj.cfxn();
    cobj.p1fxn();
    cobj.p2fxn();
    cobj.p3fxn();
    cout<<"child id :"<<cobj.id<<endl;
    cout<<"parent1 id :"<<cobj.Parent1::id<<endl;
    cout<<"parent2 id :"<<cobj.Parent2::id<<endl;
    cout<<"parent3 id :"<<cobj.Parent3::id<<endl;

    return 0;
}
