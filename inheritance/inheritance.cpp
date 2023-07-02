#include<iostream>
using namespace std;

//single inheritance
class Parent
{
    private:
    int creditcardDetails=123466;
    public:
    int id=101;
    static string kuch_bhi;
    string name="Parent Name";
    void pfxn()
    {
        cout<<"hello i am parent fxn \n";
    }
    void run();
};
string Parent::kuch_bhi="hello";
void Parent::run()
{
    cout<<"i am run method body ";
}

class Child : public Parent
{
    int marks;
    public:
    int id=105;
    string cname="Child Name";
    void cfxn()
    {
        cout<<"hello i am child fxn \n";
    }
};
int main()
{
    Child obj;
    obj.cfxn();
    obj.pfxn();
    // cout<<"parent credit card detail :"<<obj.creditcardDetails; //inaccisible
    cout<<"parent name :"<<obj.name<<endl;
    cout<<"child name  :"<<obj.cname<<endl;
    obj.run();
    cout<<obj.id<<endl;  //child
    cout<<Parent::kuch_bhi;
    // cout<<Parent::id<<endl; //error
    return 0;
}

