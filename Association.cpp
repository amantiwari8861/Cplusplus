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
    Address address;
    Address address2;
    public:
    Employee(int id,string name)
    {
        this->id=id;
        this->name=name;
    }
    void setAddress()
    {
        address.setAddress();
        address2.setAddress();
    }
    void display()
    {
        cout<<"id = "<<id<<" name = "<<name<<endl;
        // cout<<"Address 1:"<<endl;
        // showAddress(address);
        // cout<<"Address 2:"<<endl;
        // showAddress(address2);
        address.showAddress();
        address2.showAddress();
    }
    // void showAddress(Address address)
    // {
    //     cout<<"city = "<<address.city<<" state = "<<address.state<<" zip = "<<address.zip<<endl;
    // }
};
int main()
{
    Employee emp(1,"Aman");
    emp.setAddress();
    emp.display();
    return 0;
}