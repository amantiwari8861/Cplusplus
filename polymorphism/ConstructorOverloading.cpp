#include<iostream>
using namespace std;

class Shape
{
    public:
    float l,b,h,r,slanth;
    Shape()
    {
        cout<<"no shape defined \n";
    }
    Shape(float l)
    {
        this->l=l;
    }
    Shape(double r)
    {
        // r=r;//error in value
        this->r=r;
    }
    Shape(float l,float b)
    {
        this->l=l;    
        this->b=b;    
    }
    Shape(float l,float b,float h)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }

};

int main()
{
    Shape circle(2.5);
    cout<<circle.r;
    Shape line(10.5f);
    Shape square(2,5);
    Shape cube(10,20,30);

    // cout<<"the length of line is "<<line.l<<endl;
    // cout<<"the length of square is "<<square.l<<" and breadth is "<<square.b<<endl;
    // cout<<"the length of cube is "<<cube.l<<", breadth is "<<cube.b<<" and height is "<<cube.h<<endl;

    return 0;
}
