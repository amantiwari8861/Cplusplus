#include<iostream>
using namespace std;
class Building
{
    int floor;
    int room;
    public:
    Building()
    {
        cout<<"\nDefault constructor";
        floor=0;
        room=0;
    }
    Building(int f,int r)
    {
        floor=f;
        room=r;
        cout<<"\nParameterized constructor";
    }
    void print()
    {
        cout<<"\nFloor:"<<floor<<"\nRoom:"<<room;
    }
};
int main()
{
    
    Building b1= Building();
    b1.print();
    // Building b2= Building(2,3);
    Building b2(10,20);
    b2.print();
    return 0;
}