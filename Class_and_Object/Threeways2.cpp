#include<iostream>
using namespace std;

class Car
{
    string chasisNo="6532%6h@dsbchj";
    public:
    string color;
    string model;
    string fueltype;
    
    void input(string c,string m,string f,string chasis)
    {
        color=c;
        model=m;
        fueltype=f;
        chasisNo=chasis;
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
    Car car1;//object (Real world entity)
    car1.input("Red","Bugatti chiron","Hybrid","jhg@6565hgjGH");
    car1.showCarDetails();

    return 0;
}
