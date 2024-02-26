#include<iostream>
using namespace std;

class Mammals
{
    float weight=300;
    public:
    string bloodType;
    string reproduceMethod;
    Mammals()
    {
        bloodType="Warm";
        reproduceMethod="Birth";
        cout<<"Mammal Created"<<endl;
    }
    void showMammalsProperty()
    {
        cout<<" =========== Mammal Details =========="<<endl;
        cout<<" Blood Type :"<<bloodType<<endl;
        cout<<" Reproduce Process :"<<reproduceMethod<<endl;
    }
};
class Humans :public Mammals
{
    public:
    int legs;
    Humans()
    {
        legs=2;
        cout<<"Human Created"<<endl;
    }
    void showHumanProperty()
    {
        cout<<"=======Human Details==========="<<endl;
        cout<<" Legs :"<<legs<<endl;
    }
};
int main()
{
    
    Humans men;
    men.showMammalsProperty();
    men.showHumanProperty();
    cout<<men.bloodType<<endl;
    cout<<men.weight<<endl;
    return 0;
}