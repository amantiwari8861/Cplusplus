#include<iostream>
#include<string.h>
using namespace std;

class Car
{
    public:
        string modelNo;
        string brand;
        string color;
        float price;
        float enginePower;

    void getCarDetails()
    {
        cout<<"=======Enter Car Details ==============\n";
        cout<<"Enter model no :";
        // cin>>modelNo;
        getline(cin,modelNo);
        cout<<"Enter Brand :";
        getline(cin,brand);
        cout<<"Enter Color :";
        getline(cin,color);
        cout<<"Enter Price :";
        cin>>price;
        cout<<"Enter Engine HP :";
        cin>>enginePower;
    }
    void showdetails()
    {
        cout<<"=================Car details ================\n";
        cout<<"model No :"<<modelNo<<endl;
        cout<<"Color :"<<color<<endl;
        cout<<"Brand :"<<brand<<endl;
        cout<<"Price :"<<price<<endl;
        cout<<"Engine HP :"<<enginePower<<endl;   
    }

};
int main()
{
    Car obj;
    // obj.showdetails();
    // obj.getCarDetails();
    obj.modelNo="Buggati veyron";
    obj.brand="Buggati";
    obj.color="Black";
    obj.price=10005600.5;
    obj.enginePower=900;

    // cout<<"model No :"<<obj.modelNo<<endl;
    // cout<<"Color :"<<obj.color<<endl;
    // cout<<"Brand :"<<obj.brand<<endl;
    // cout<<"Price :"<<obj.price<<endl;
    // cout<<"Engine HP :"<<obj.enginePower<<endl;
    obj.showdetails();

    cout<<"--------------------------------------------------------------"<<endl;
    Car obj2;
    obj2.modelNo="BMW A7";
    obj2.brand="BMW";
    obj2.color="Black";
    obj2.price=600999.5;
    obj2.enginePower=600;

    // cout<<"model No :"<<obj2.modelNo<<endl;
    // cout<<"Color :"<<obj2.color<<endl;
    // cout<<"Brand :"<<obj2.brand<<endl;
    // cout<<"Price :"<<obj2.price<<endl;
    // cout<<"Engine HP :"<<obj2.enginePower<<endl;
    obj2.showdetails();


    return 0;
}
