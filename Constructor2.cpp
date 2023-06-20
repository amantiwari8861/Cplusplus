#include<iostream>
#include<string.h>
using namespace std;

class Building
{
    public:
    int floors;
    int rooms;
    string address;

    Building()
    {
        cout<<"Hello i am default constructor"<<endl;
        address="Noida 62";
    }
    Building(int floors,int r,string addr)
    {
        this -> floors=floors;//
        rooms=r;
        address=addr;
    }
    ~Building()
    {
        cout<<"Deconstructor invoked"<<endl;
    }
    // void input(int f,int r,string addr)
    // {
    //    floors=f;
    //    rooms=r;
    //    address=addr;
    // }
    void showDetails()
    {
        cout<<"--------------- Building Details -----------------"<<endl;
        cout<<" Floors : "<<floors<<endl;
        cout<<" Rooms : "<<rooms<<endl;
        cout<<" Address : "<<address<<endl;
    }
};

int main()
{
    int floors;
    int rooms;
    string address;
 
    // cout<<"Enter the Details "<<endl;
    // cout<<"Enter no. of rooms"<<endl;
    // cin>>rooms;
    // cout<<"Enter no. of floors"<<endl;
    // cin>>floors;
    // fflush(stdin);
    // cout<<"Enter no. of address"<<endl;
    // getline(cin,address);

    // Building b1;
    // Building b1;
    // b1.input(floors,rooms,address);
    Building b1(5,50,"noida 62 india");
    b1.showDetails();

    // Building b2;
    // b2.showDetails();

    return 0;
}
