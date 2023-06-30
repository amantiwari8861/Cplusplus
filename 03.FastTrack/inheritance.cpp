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
class Human : public Mammal
{
    public:
    Human()
    {
        cout<<"Human Created\n";
    }
};
int main()
{
    Human dev;
    dev.showMammalDetails();
    return 0;
}
