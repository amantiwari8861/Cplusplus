#include<iostream>
using namespace std;

class Parent1
{
    public:
    int p1=100;
};
class Parent2
{
    public:
    int p2=200;
};
class Parent3
{
    public:
    int p3=300;
};
class child: public Parent1,public Parent2,public Parent3
{
    public:
    int cdata=500;
};

int main()
{
    child ch;
    cout<<" p1 : "<<ch.p1<<endl;
    cout<<" p2 : "<<ch.p2<<endl;
    cout<<" p3 : "<<ch.p3<<endl;
    cout<<" cdata : "<<ch.cdata<<endl;
    return 0;
}

