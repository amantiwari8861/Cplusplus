#include <iostream>
using namespace std;

class Car
{
    int speed = 50;
public:
    int price = 100000;
    void print()
    {
        cout << "Speed: " << speed << endl;
    }
};
int main()
{
    Car c;
    // cout<<"the speed of the car is :"<<c.speed;
    cout << "the price of the car is :" << c.price << "\n";
    c.print();

    Car c1;
    c1.print();

    return 0;
}