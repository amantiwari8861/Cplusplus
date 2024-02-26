#include<iostream>
using namespace std;

//OOPs -> object oriented programming system  (software development methodology which relates to real world)
//class -> blueprint  (class is a set of object which shares a common structure and behaviour)

class Building
{
    //attributes and behaviour
    double l,b,height;
    int noOfFloors,noOfRooms;
    string color;
    public:

    Building() //constructor is a special type of method which is used to initialize the data members or member function of a class
    {
        color="grey";
        cout<<"Hii i am default constructor!\n";
    }
    Building(int f,int r) //3rd way to set values in class members(variables)
    {
        noOfFloors=f;
        noOfRooms=r;
    }
    void addUtilities()
    {
        cout<<"adding lift in building\n";
    }
    void inputData() //2nd way to set values in class members(variables)
    {
        cout<<"Enter building details :\n";
        cout<<"Enter length:";
        cin>>l;
        cout<<"Enter breadth:";
        cin>>b;
        cout<<"Enter height:";
        cin>>height;
    }
    void showData()
    {
        cout<<"******* Building Details ********\n";
        cout<<"Length :"<<l<<endl;
        cout<<"Breadth :"<<b<<endl;
        cout<<"Height :"<<height<<endl;
        cout<<"Color :"<<color<<endl;
        cout<<"No. of Floors :"<<noOfFloors<<endl;
        cout<<"No. of Rooms :"<<noOfRooms<<endl;
    }

};
int main()
{
    Building b1;
    // b1.addUtilities();
    // cout<<b1.color;

    // Building b2;
    // b2.color="pink"; //1st way to set values in class members(variables)
    // cout<<b2.color<<endl;

    // Building b3;
    // b3.inputData();
    // b3.showData();
    // b3.showData();
    // b3.showData();

    Building b5(10,100);
    b5.showData();

    return 0;
}
