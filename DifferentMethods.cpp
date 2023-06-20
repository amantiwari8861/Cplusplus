#include<iostream>
#include<string.h>
using namespace std;

class Building
{
    public:
    int floors;
    int rooms;
    string address;

    void input()
    {
        cout<<"Enter the Details "<<endl;
        cout<<"Enter no. of rooms"<<endl;
        cin>>rooms;
        cout<<"Enter no. of floors"<<endl;
        cin>>floors;
        fflush(stdin);
        cout<<"Enter no. of address"<<endl;
        getline(cin,address);
    }
    void showDetails()
    {
        cout<<"--------------- Building Details -----------------"<<endl;
        cout<<" Rooms : "<<rooms<<endl;
        cout<<" Floors : "<<floors<<endl;
        cout<<" Address : "<<address<<endl;
    }
};

int main()
{
    Building b1;
    // b1.floors=4;
    b1.input();
    b1.showDetails();

    return 0;
}
