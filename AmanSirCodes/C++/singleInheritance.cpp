#include<iostream>
using namespace std;

class Mammal
{
    public:
    string bloodType="Warm";
    string reproduction="birth";
    void showMammalsproperty()
    {
        cout<<"Showing Mammals Property \n";
        cout<<bloodType<<endl;
        cout<<reproduction<<endl;
    }
};
class cats:public Mammal{

};

class Humans : public Mammal
{
    public:
    int legs=2;
    int hands=2;

    void showHumansProperty()
    {
        cout<<"Human's Property \n";
        cout<<"Legs :"<<legs<<endl;
        cout<<"Hands :"<<hands<<endl;
    }
};
int main()
{
    // Mammal m;
    Humans h;
    // m.showMammalsproperty();
    h.showMammalsproperty();
    h.showHumansProperty();

    return 0;
}
