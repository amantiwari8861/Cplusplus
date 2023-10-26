#include<iostream>
using namespace std;

class Employee
{
    public:
    float hours;
    double salary;
    virtual void calculateSalary(float hours)=0;
    virtual void showSalaryDetails()=0;
};
class Intern:public Employee
{
    public:
    void calculateSalary(float hours)
    {
        this->hours=hours;
        salary=30*hours*30;
    }
    void getTravelAllowance()
    {
        cout<<"we are getting 3000 travel allowance \n";
    }
    void showSalaryDetails()
    {
        cout<<"\tThe salary details of intern \n";
        cout<<"Amount of "<<hours<<" Hours "<<30*hours<<endl;
        cout<<"Salary Per Month "<<salary<<endl;
        cout<<"Also getting Travel Allowance of 3k\n";
    }
};
class PermanentEmployee:public Employee
{
    public:
    void calculateSalary(float hours)
    {
        this->hours=hours;
        salary=200*hours*30;
    }
    void getHealthInsurance()
    {
        cout<<"we are getting health insurance of 5Lac. \n";
    }
    void showSalaryDetails()
    {
        cout<<"\tThe salary details of intern \n";
        cout<<"Amount of "<<hours<<" Hours "<<30*hours<<endl;
        cout<<"Salary Per Month "<<salary<<endl;
        cout<<"Also getting Health insurance of 5Lac.\n";
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
        Intern i;
        emp=&i;
    }
    else if (degn=="permanent")
    {
        PermanentEmployee p;
        emp=&p;
    }
    else
    {
        cout<<"Emloyee designation not defined in system \n";
    }
    
    emp->calculateSalary(hours);
    emp->showSalaryDetails();
    // emp->getTravelAllowance(); //parent type (Employee)  reference variable can't access child non overridden data
    return 0;
}