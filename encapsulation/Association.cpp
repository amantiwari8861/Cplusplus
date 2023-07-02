#include<iostream>
using namespace std;

class Address
{
    
    string city;
    string state;
    int zip;
    public:
    void setAddress()
    {
        cout<<"Enter city: ";
        cin>>city;
        cout<<"Enter state: ";
        cin>>state;
        cout<<"Enter zip: ";
        cin>>zip;
    }
    void showAddress()
    {
        cout<<"City: "<<city<<endl;
        cout<<"State: "<<state<<endl;
        cout<<"Zip: "<<zip<<endl;
    }
};
class Employee
{
    
    int id;
    string name;
    Address localAddress;
    Address permanentAddress;
    public:
    Employee(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void setAddress()
    {
        localAddress.setAddress();
        permanentAddress.setAddress();
    }
    void display()
    {
        cout<<"id = "<<id<<" name = "<<name<<endl;
        // cout<<"Address 1:"<<endl;
        // showAddress(localAddress);
        // cout<<"Address 2:"<<endl;
        // showAddress(permanentAddress);
        localAddress.showAddress();
        permanentAddress.showAddress();
    }
    void showAddress(Address localAddress)
    {
        cout<<"city = "<<localAddress.city<<" state = "<<localAddress.state<<" zip = "<<localAddress.zip<<endl;
    }
};
int main()
{
    Employee emp(1,"Aman");
    emp.setAddress();
    emp.display();
    return 0;
}