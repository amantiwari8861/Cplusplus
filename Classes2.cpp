#include<iostream>
#include<conio.h>
using namespace std;
// void add();
void add()
{
    cout<<"hii i am add fxn "<<endl;
}
struct employee
{
    int empid;
}e1;
class Building
{
    private: //by default applied in classes
    int num=50;
    public:
    int num2=80;

    void fxn()
    {
        cout<<"hi i am a fxn"<<endl;
    }
    struct empl2
    {
        int a;
    }e2={10};
};
int main()
{
    Building obj;
    // cout<<obj.num; bcz it is private
    cout<<obj.num2;
    obj.fxn();
    add();
    e1.empid=100;
    cout<<e1.empid<<"\n";
    cout<<obj.e2.a;
    getch();
    return 0;
}
