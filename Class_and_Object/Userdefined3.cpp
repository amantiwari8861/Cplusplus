#include<iostream>
using namespace std;

class Car
{
    string chasisNo="6532%6h@dsbchj";
    public:
    string color;
    string model;
    string fueltype;

    void inputDetails()
    {
        cout<<"Enter Car Details \n";
        cin>>color;
        cin>>model;
        cin>>fueltype;
        cin>>chasisNo;
    }
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
    Car car1;
    car1.inputDetails();
    car1.showCarDetails();

    return 0;
}
