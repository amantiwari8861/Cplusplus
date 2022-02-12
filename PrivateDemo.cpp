#include<iostream>
using namespace std;

class Manager   
{
    private:
    int salary=100; 
    void showSalary()
    {
        cout<<"my salary is "<<salary;
    }
    public:
    int id=101;
    void showId(int pass)
    {
        cout<<"my id is "<<id;

        if(pass==123)
        {
            showSalary();
        }
    }

    void fxn()
    {
        cout<<AncistorHouse;
    }
    protected:
    int AncistorHouse=7658;
};
class child:public Manager
{
    public:
    void show()
    {
        cout<<AncistorHouse<<" is accessed by child ";
        // cout<<salary<<" is not accessed by child ";
    }
};


int main()
{
    Manager m;
    m.showId(567);
    // m.showSalary();
    // cout<<m.AncistorHouse;
    child ch;
    ch.show();

    return 0;
}
