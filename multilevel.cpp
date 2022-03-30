#include<iostream>
using namespace std;

class GrandParent
{
    public:
    int id=101;
    void gpfxn()
    {
        cout<<"hello i am grandparent fxn \n";
    }
};
class Parent : public GrandParent
{
    public:
    int id=102;
    void pfxn()
    {
        cout<<"hello i am parent fxn \n";
    }
};
class Child : public Parent
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
    Child cobj;
    cobj.cfxn();
    cobj.pfxn();
    cobj.gpfxn();
    cout<<"child id :"<<cobj.id<<endl;
    cout<<"parent id :"<<cobj.id<<endl;
    cout<<"grandparent id :"<<cobj.id<<endl;
    

    return 0;
}