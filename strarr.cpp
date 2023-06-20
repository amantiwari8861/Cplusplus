#include<iostream>
using namespace std;
struct employee
{
    int empid;
    char name[10];
};
int main()
{
    struct employee emp[10];

    emp[0].empid=10;
    emp[1].empid=20;

    strcpy(emp[0].name,"abcd");
    strcpy(emp[2].name,"abcd2");

    struct employee *empptr;
    empptr=&emp[0];
    cout<<empptr->empid<<" "<<empptr->name;

    return 0;
}
