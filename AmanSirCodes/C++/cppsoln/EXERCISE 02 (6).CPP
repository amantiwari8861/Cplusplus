//Chapter 07: Exercise 02-Program to illustrate the concept of structure pointers.

#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

struct employee                           //structure declaration
{
	int empno;
	char empname[30];
	float salbasic;
	float exp;
};

void display (employee *emp);            //function prototype declaration
void increase (employee *emp);           //function prototype declaration

int main()
{
	clrscr();
	employee employee1, *empptr;

	cout<<endl<<"Enter employee number: ";
	cin>>employee1.empno;
	cout<<"Enter employee name: ";
	gets(employee1.empname);
	cout<<"Enter employee basic salary: ";
	cin>>employee1.salbasic;
	cout<<"Enter employee's experience (in years): ";
	cin>>employee1.exp;

	empptr=&employee1;	//store the address of employee1 in pointer type variable

	cout<<endl<<"Employee details before increase in salary";
	display(empptr);        //function call to display the employee details
	increase(empptr);       //function call to increase the employee salary

	cout<<endl<<endl<<"Employee details after increase in salary";
	display(empptr);       //function call to increase the employee salary

	getch();
	return 0;
}

void display(employee *emp)     //function definition
{
	int length = strlen(emp->empname);
	cout<<endl<<"Employee Number: "<<emp->empno;
	cout<<endl<<"Employee Name: ";
	cout.write(emp->empname, length);
	cout<<endl<<"Employee Basic Salary: "<<emp->salbasic;
	cout<<endl<<"Employee's Experience: "<<emp->exp;
}

void increase(employee *emp)   // function definition
{
	if (emp->exp >= 10)
		emp->salbasic = emp->salbasic + 500;
}
        


