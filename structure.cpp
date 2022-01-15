#include<iostream>
using namespace std;

struct employee
{
    int empid;
    char name[10];
}emp1;
int main()
{
    struct employee emp2,emp3;

    emp1.empid=10;
    emp2.empid=20;
    // emp1.name="Aman"; error
    // emp1.name={'a','m'}; error
    strcpy(emp1.name,"aman");
    strcpy(emp2.name,"abc");
    // cout<<emp1.empid<<"\n"<<emp1.name;

    struct employee *empptr;
    empptr=&emp2;
    cout<<empptr->empid<<empptr->name;

    

    return 0;
}
