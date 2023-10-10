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
    void showDetails()
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
        cout<<"Human Created"<<endl;
        legs=2;
    }
    void showHumanProperty()
    {
        cout<<"=======Human Details==========="<<endl;
        cout<<" Legs :"<<legs<<endl;
    }
};
int main()
{
    
    Humans women;
    women.showDetails();
    women.showHumanProperty();
    // cout<<women.bloodType<<endl;
    // cout<<women.weight<<endl;
    return 0;
}
