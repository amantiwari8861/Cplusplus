#include<iostream>
using namespace std;

class Car
{
    string chasisNo="6532%6h@dsbchj";
    public:
    string color;
    string model;
    string fueltype;
    
    void showCarDetails()
    {
        cout<<" -------------------- Car Details ------------"<<endl;
        cout<<" Colour :"<<color<<endl;
        cout<<" Model :"<<model<<endl;
        cout<<" Fuel type :"<<fueltype<<endl;
        cout<<" Chasis No. :"<<chasisNo<<endl;
    }
};
int main()
{
    Car car1;//object (Real world entity)
    // car1.chasisNo="435bhbrjnf788#4@"; //error
    car1.color="Red";
    car1.model="bugatti";
    car1.fueltype="hybrid";
    car1.showCarDetails();

    return 0;
}
