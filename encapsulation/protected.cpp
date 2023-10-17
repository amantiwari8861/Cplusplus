#include<iostream>
using namespace std;

class Teacher
{
    private: //same class
        int creditcardno;
        int cvv;
    protected: //same class & child class
        long mobileno;
        double salary;
    public:
        string name;
        string address;
        void inputData()
        {
            cout<<"Enter salary :";
            cin>>salary;
            cout<<"Enter name :";
            cin>>name;
        }
};
class PartTimeTeacher:public Teacher
{
    public:
    void displayTeacherSalary()
    {
        cout<<"Salary is :"<<salary;
    }
};
int main()
{
    // Teacher t1;
    // cout<<t1.cvv;
    // cout<<t1.mobileno;
    PartTimeTeacher pt;
    pt.name="xyz";
    // cout<<pt.cvv;
    // cout<<pt.salary;
    pt.inputData();
    pt.displayTeacherSalary();
    
    return 0;
}