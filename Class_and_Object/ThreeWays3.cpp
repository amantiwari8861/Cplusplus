#include<iostream>
using namespace std;

class Car
{
    string chasisNo="6532%6h@dsbchj";
    public:
    string color;
    string model;
    string fueltype;
    
    //constuctor is a special type of function which is used to initialize the data member or member function of a class (it has same name as class name and doesn't have any return type and it automatically called during creation of object)
    Car()
    {
        cout<<"Hello i am default constructor"<<endl;
    }
    Car(string color,string m,string f,string chasis)
    {
        this->color=color;// this->color represents global variable color
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
    Car car1("Red","Bugatti chiron","Hybrid","jhg@6565hgjGH");
    car1.showCarDetails();

    return 0;
}
