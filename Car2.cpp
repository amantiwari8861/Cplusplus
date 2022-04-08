#include <iostream>
using namespace std;
class Car
{
    private:
    int speed;    
    public:
    int carid;
    void print()
    {
        cout << "Speed: " << speed << endl;
    }
    protected:
    string model;
};
int main()
{
    Car c;
    cout<<"enter the car speed :";
    cin>>c.speed;
    c.print();
    Car c2;
    cout<<"enter the car2 speed :";
    cin>>c2.speed;
    c2.print();

    return 0;
}