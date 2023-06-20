#include<iostream>
class student
{
public:

void accept(int marks[10][6])
{ 
for(int r=0;r<10;r++)
{
	cout<<endl<<"_________________________________"<<endl;
	for (int c=0;c<6;c++)
	{
		cout<<"Enter the marks for student no. "<<r+1<<"  subject "<<c+1<<"  ";
		cin>>marks[r][c];

	}
}
}

void displaytotalmarks(int marks[10][6])
{
int total;
cout<<endl<<"Display the Marks of all the students"<<endl;
for(int r=0;r<10;r++)
{
total=0;
cout<<endl;
	for (int c=0;c<6;c++)
	{
	cout<<marks[r][c]<<"  ";
	total=total+marks[r][c];
	
	}
     cout<<total;
}
}

};

int main()
{
int marks[10][6];
student object;
object.accept(marks);
object.displaytotalmarks(marks);
}

