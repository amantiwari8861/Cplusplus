#include<iostream>
using namespace std;

class Person
{
    private:
    int age;
    float height;
    public:

    void setAge(int a)//setter/mutator
    {
        age = a;
    }
    int getAge()//getter/accessor
    {
        return age;
    }
    void setHeight(float h)
    {
        height = h;
    }
    float getHeight()
    {
        return height;
    }
};
int main()
{
    Person aman;
    aman.setAge(24);
    aman.setHeight(5.6);
    cout << "Age: " << aman.getAge() << endl;
    cout << "Height: " << aman.getHeight() << endl;

    return 0;
}