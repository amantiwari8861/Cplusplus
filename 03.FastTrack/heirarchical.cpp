#include<iostream>
using namespace std;

class Mammal
{
    public:
    string bloodType;
    string reproduceMethod;
    Mammal()
    {
        cout<<"mammal created \n";
        bloodType="Warm";
        reproduceMethod="Birth";
    }
    void showMammalDetails()
    {
        cout<<"============== Mammal Details =================\n";
        cout<<"Blood Type :"<<bloodType<<endl;
        cout<<"Reproduce Method :"<<reproduceMethod<<endl;
    }
};
class Cat :public Mammal
{
    public:
    int legs;
    bool isTailAvailable;
    Cat()
    {
        cout<<"Cat Created \n";
        legs=4;
        isTailAvailable=true;
    }
    void showCatProperty()
    {
       
        cout<<"============== cat Details =================\n";
        cout<<"Legs :"<<legs<<endl;
        cout<<"Is tail available :"<<isTailAvailable<<endl;
    }
};
class Human : public Mammal
{
    public:
    int legs;
    Human()
    {
        cout<<"Human Created\n";
        legs=2;
    }
    void showHumansProperty()
    {
        cout<<" =========Humans Property ============\n";
        cout<<legs;
    }

};
class Dog : public Mammal
{
    public:
    int legs;
    Dog()
    {
        cout<<"Dog Created\n";
        legs=4;
    }
    void showDogProperty()
    {
        cout<<" =========Dog Property ============\n";
        cout<<"Legs :"<<legs;
    }

};
class Leopard:public Cat 
{
    float speed;
    public:
    Leopard()
    {
        cout<<"Leopard Created \n";
        speed=150.5;
    }
    void showLeopardProperty()
    {
        
        cout<<"============== Leopard Details =================\n";
        cout<<"Speed :"<<speed<<endl;
    }
};

int main()
{

    Leopard l;
    Dog d;
    
    return 0;
}
