#include<iostream>
#include<iomanip>
using namespace std;

class Building
{
    public:
    int floors;
    int rooms;
    string address;
    string buildersCompanyName;
    float price;

    Building() //default constructor or non-parameterized constructor
    {
        //constructor is a special type of function which is used to initialize the datamembers of a class
        cout<<"hello i am default constructor!!\n";
        buildersCompanyName="XYZ builders";
    }
    // Building(int f,int r):Building()
    Building(int f,int r)
    {
        floors=f;
        rooms=r;
    }
    Building(int f,int r,string bcn)
    {
        floors=f;
        rooms=r;
        buildersCompanyName=bcn;
    }
    void showDetails()
    {
        cout<<"\nbuilding details"<<endl;
        cout<<"Rooms :"<<rooms<<endl;
        cout<<"Floors :"<<floors<<endl;
        cout<<"Build Comp. :"<<buildersCompanyName<<endl;
    }
};
int main()
{
    Building b;
    b.showDetails();
    b.price=56.452981;

    cout<<fixed<<setprecision(2)<<b.price;

    // Building b2(3,15);
    // b2.showDetails();

    // Building b3(15,4,"ABC builders");
    // b3.showDetails();

    // Building buildings[10];
    // buildings[0].showDetails();

    return 0;
}
