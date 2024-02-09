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
class Humans :public Mammals
{
    public:
    int legs;
    Humans()
    {
        cout<<"Human Created"<<endl;
        legs=2;
    }
    void showHumanProperty()
    {
        cout<<"=======Human Details==========="<<endl;
        cout<<" Legs :"<<legs<<endl;
    }
};
class Dogs :public Mammals
{
    public:
    bool isLoyal;
    Dogs()
    {
        cout<<"Dog Created"<<endl;
        isLoyal=true;
    }
    void showDogsProperty()
    {
        cout<<"=======Dogs Details==========="<<endl;
        cout<<" Is Loyal :"<<isLoyal<<endl;
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
   Leopard l;
   Dogs d;
   Cats c;
   Humans h;
   
   
    return 0;
}