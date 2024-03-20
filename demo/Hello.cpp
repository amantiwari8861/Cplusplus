#include<iostream>
using namespace std;

//structure or blue print (attribute and behaviour)
class Car
{
    public:
    int noOfwheels;
    string color;
    double speed;
    Car()  //constructor
    {
        speed=180;
        color="Red";
        noOfwheels=4;
    }
    void accelerate()
    {
        cout<<"Running the car at "<<speed<<" Speed"<<endl;
    }
};

int main()
{
    //OOPs
    //   softwware development methodology

    Car shahidKiCar;
    Car amanKiCar;

    cout<<shahidKiCar.color<<endl;
    shahidKiCar.color="PINK";
    cout<<shahidKiCar.color<<endl;

    cout<<amanKiCar.color;

    shahidKiCar.accelerate();

    amanKiCar.speed=300;
    amanKiCar.accelerate();


    return 0;
}