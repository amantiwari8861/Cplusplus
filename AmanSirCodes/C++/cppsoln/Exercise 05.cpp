//Chapter 02: Exercise 04-Calcultating the number of distinction holders and
// number of failed students by using Arrays of Functions.
#include <iostream>                       	//for clrscr() and getch()
#include <conio.h>
using namespace std;
struct studentresult       			//declaring the structure
{
	float Phy_Marks, Chem_Marks, Maths_Marks;
}studentarray[50];


void student(int size)              		//defining the function
{
float average;
int nstud_dist=0, nstud_fail=0;

//clrscr();
for(int i=0;i<size;i++)
{
	average =( studentarray[i].Phy_Marks+ studentarray[i].Chem_Marks+ studentarray[i].Maths_Marks)/3;
	if (average>=70) nstud_dist ++;
	else if (average < 35) nstud_fail ++;
}
cout<<endl<<"Number of students who are distinction holders: "<<nstud_dist;
cout<<endl<<"Number of students who have failed: "<<nstud_fail;
}
int main()        			//Main funtion
{
//clrscr();
int count;
cout<<"Enter the number of students:";cin>>count;
for (int i=0;i<count;i++)
{
cout<<"\n Enter the details of "<<i<<" student";
cout<<"\nMarks in Physics: ";
cin>>studentarray[i].Phy_Marks;
cout<<"\nMarks in Chemistry: ";
cin>>studentarray[i].Chem_Marks;
cout<<"\nMarks in Math: ";
cin>>studentarray[i].Maths_Marks;
}
student(count);    			//calling the function student

getch();
return 0;

}





