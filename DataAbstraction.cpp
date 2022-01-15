#include<iostream>
using namespace std;

//data abstraction
class bike
{
    private :
    int num=80;
    public:
    void setnum(int num)
    {
        this->num=num;
    }
    void display()
    {
        cout<<"the num is "<<num;
    }
};
int main()
{
    bike b1;
    // cout<<b1.num;
    // b1.setnum(500);

    b1.display();
    return 0;
}
