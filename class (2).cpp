#include<iostream>
using namespace std;

class Building
{
    public:
    int noOfRooms;
    int floors;
    string address;

    void lift()
    {
        cout<<"i have lift system";
    }
    void swimmingPool()
    {
        cout<<"i have Swiming pool";
    }
    void showDetails()
    {
        cout<<"-------------Details------------"<<endl;
        cout<<noOfRooms<<endl;
        cout<<floors<<endl;
        cout<<address<<endl;
    }
};
int main()
{
    Building b1;
    b1.noOfRooms=20;
    b1.floors=3;
    b1.address="niit 62 noida ";
    b1.showDetails();
    b1.lift();
    b1.swimmingPool();

    Building b2;

    return 0;
}
// OOPs -> software development methodology
// Object oriented programming system