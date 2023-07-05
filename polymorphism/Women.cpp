#include<iostream>
using namespace std;

class Women
{
    string name;
    public:
    Women(){name="Xyz";}
    void doSomething()
    {
        cout<<"eat and sleep"<<endl;
    }
    void doSomething(int money)
    {
        cout<<"going for shopping to spend "<<money<<" Rs."<<endl;
    }
    // void doSomething(int m2) //error
    // {
    //     cout<<"going for shopping to spend "<<m2<<" Rs."<<endl;
    // }
    void doSomething(float marks)
    {
        if(marks<98)
        {
            cout<<"Crying for not getting full marks "<<endl;
        }
        else
        {
            cout<<"Still not satisfied"<<endl;
        }
    }
    //to achieve overloading the no. of parameters or the data type of parameters must be different
};
int main()
{
    Women women;
    women.doSomething();
    women.doSomething(500);
    women.doSomething(95.0f);
    women.doSomething(100.0F);

    return 0;
}