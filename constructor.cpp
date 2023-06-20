#include<iostream>
#include<string.h>
using namespace std;

class Building
{
    public:
    int floors;
    int rooms;
    string address;

    void input(int f,int r,string addr)
    {
       floors=f;
       rooms=r;
       address=addr;
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
    int floors;
    int rooms;
    string address;
 
    cout<<"Enter the Details "<<endl;
    cout<<"Enter no. of rooms"<<endl;
    cin>>rooms;
    cout<<"Enter no. of floors"<<endl;
    cin>>floors;
    fflush(stdin);
    cout<<"Enter no. of address"<<endl;
    getline(cin,address);

    Building b1;
    b1.input(floors,rooms,address);
    b1.showDetails();

    return 0;
}
