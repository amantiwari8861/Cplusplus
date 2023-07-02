#include<iostream>
using namespace std;

class mammal
{
    public:
    string bloodType;
    string reproduceMethod;

    mammal()
    {
        bloodType="warm";
        reproduceMethod="birth";
    }
    void showMammalsProperty()
    {
        cout<<"==================== Mammal Property ==================="<<endl;
        cout<<" Blood Type :"<<bloodType<<endl;
        cout<<" Reproduce Method :"<<reproduceMethod<<endl;
    }
};
class Animal
{
    public:

    void showAnimalProp()
    {
        cout<<"Animal property "<<endl;
    }
};
class dog:public mammal,public Animal
{
    public:
    int legs;
    dog()
    {
        legs=4;
    }
    void showDogProperty()
    {
        cout<<"========== Dog property =========="<<endl;
        cout<<"Legs :"<<legs<<endl;
    }
};
int main()
{
    dog tommy;
    tommy.showMammalsProperty();
    tommy.showDogProperty();
    tommy.showAnimalProp();
    return 0;
}
