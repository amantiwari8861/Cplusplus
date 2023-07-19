#include<iostream>
using namespace std;
//class -> class is a set of object which shares a common structure and behaviour
//class -> blue print(attribute and behaviour)

class Car
{
    string chasisNo;
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
    }
};
int main()
{
    Car car1;//object (Real world entity)
    car1.showCarDetails();

    return 0;
}
