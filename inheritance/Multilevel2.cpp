#include<iostream>
using namespace std;
class Mammals
{
    float weight=98;
    public:
    string bloodType;
    string reproduceMethod;
    Mammals()
    {
        bloodType="Warm";
        reproduceMethod="Birth";
        cout<<"Mammal Created"<<endl;
    }
    void showMammalProperty()
    {
        cout<<" =========== Mammal Details =========="<<endl;
        cout<<" Blood Type :"<<bloodType<<endl;
        cout<<" Reproduce Process :"<<reproduceMethod<<endl;
    }
};
class Cats :public Mammals
{
    public:
    int legs;
    bool isTailAvailable;
    Cats()
    {
        legs=4;
        isTailAvailable=true;
        cout<<"Cat Created"<<endl;
    }
    void showCatProperty()
    {
        cout<<"==========Cat Details========"<<endl;
        cout<<"Legs :"<<legs<<endl;
        cout<<"Is tail Available  :"<<isTailAvailable<<endl;

    }
};
class Leopard:public Cats
{
    public:
    float speed;
    Leopard()
    {
        speed=140;
        cout<<"Leopard Created "<<endl;
    }
    void showLeopardProperty()
    {
        cout<<"==========Leopard Details========"<<endl;
        cout<<"Speed  :"<<speed;
    }
};
int main()
{
    Leopard simba;
    simba.showMammalProperty();
    simba.showCatProperty();
    simba.showLeopardProperty();
    return 0;
}