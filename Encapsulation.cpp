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
    void setHeight(float h)
    {
        height = h;
    }
    int getAge()//getter/accessor
    {
        return age;
    }
    float getHeight()
    {
        return height;
    }
};

int main()
{
    Person p;
    p.setAge(20);
    p.setHeight(5.5);
    cout << "Age: " << p.getAge() << endl;
    cout << "Height: " << p.getHeight() << endl;

    return 0;
}