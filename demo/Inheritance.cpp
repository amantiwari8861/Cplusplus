#include<iostream>
using namespace std;

class Mammal
{
    public:
    string bloodType="Warm";
    string reproduceMethod="birth";
    void showMammalsProperty()
    {
        cout<<" ******* mammal property *******\n";
        cout<<"Blood Type :"<<bloodType<<endl;
        cout<<"Reproduce Method :"<<reproduceMethod<<endl;
    }
};
class Human : public Mammal 
{
    public:
    int noOfLegs=2;
    void showHumanProperty()
    {
        cout<<"No of legs :"<<noOfLegs<<endl;
    }
};
class Cat : public Mammal {};
class Dog : public Mammal 
{
    public:
    bool isLoyal=true;
    void showDogProperty()
    {
        cout<<"is loyal :"<<isLoyal<<endl;
    }
};


int main()
{
    Human aman;
    aman.showMammalsProperty();
    aman.showHumanProperty();

    Dog bolt;
    bolt.showMammalsProperty();
    bolt.showDogProperty();
    return 0;
}
