#include <iostream>
using namespace std;
class Car
{    
    private:
    int speed;
    public:
    void setSpeed(int s)
    {
        speed = s;
    }
    // void print()
    // {
    //     cout << "Speed: " << speed << endl;
    // }
    int getSpeed()
    {
        return speed;
    }
};
int main()
{
    Car c;
    c.setSpeed(90);
    // c.print();
    cout<<"the speed of the car is :"<<c.getSpeed()<<"\n";
    Car c2;
    c2.setSpeed(100);
    // c2.print();
    cout<<"the speed of the car is :"<<c2.getSpeed()<<"\n";
    return 0;
}