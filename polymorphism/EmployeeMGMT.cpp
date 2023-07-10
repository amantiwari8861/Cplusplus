#include<iostream>
using namespace std;

class Employee
{
    public:
    double salary;

    virtual void calculateSalary(float hours)
    {
        salary=50*hours;
    }
    void showDetails()
    {
        cout<<"Employee Salary is "<<salary<<endl;
    }
};
class Intern:public Employee
{
    public:
    void calculateSalary(float hours)
    {
        salary=100*hours;
    }
};
class PermanentEmployee:public Employee
{
    public:
    void calculateSalary(float hours)
    {
        salary=200*hours;
    }
};
int main()
{
    string degn;
    float hours;
    cout<<"Which type of employee u r :";
    getline(cin,degn);
    cout<<"how many Hours u worked :";
    cin>>hours;

    Employee *emp;
    if(degn=="intern")
    {
        cout<<"Intern salary is "<<endl;
        Intern i;
        emp=&i;
    }
    else if (degn=="permanent")
    {
        cout<<"Permanent salary is "<<endl;
        PermanentEmployee p;
        emp=&p;
    }
    else
    {
        cout<<"Normal Employee "<<endl;
        Employee e;
        emp=&e;
    }
    emp->calculateSalary(hours);
    emp->showDetails();
    return 0;
}