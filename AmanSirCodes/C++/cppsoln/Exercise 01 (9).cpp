//Chapter 02: Exercise 01
#include<iostream>
   class Employee
{
	char firstName[25];
	char lastName[25];
	char dateOfBirth[11];
	char dateOfJoining[11];
	char city[25];
	char phoneNo[11];
	public:
	void accept()
	{
		cout<<"First name: ";	
		cin>>firstName;	
		cout<<endl<<"Last Name: ";	
		cin>>lastName;		
		cout<<endl<<"Date of Birth: ";	
		cin>>dateOfBirth;		
		cout<<endl<<"Date of Joining: ";		
		cin>>dateOfJoining;		
		cout<<endl<<"City: ";		
		cin>>city;	
		cout<<endl<<"Residence phone number: ";	
		cin>>phoneNo;		
	}
	void display()
	{
		cout<<endl<<"First name: ";	
		cout<<firstName<<endl;		
		cout<<"Last Name: ";		
		cout<<lastName<<endl;		
		cout<<"Date of Birth: ";	
		cout<<dateOfBirth<<endl;	
		cout<<"Date of Joining: ";		
		cout<<dateOfJoining<<endl;		
		cout<<"City: ";		
		cout<<city<<endl;		
		cout<<"Residence phone number: ";		
		cout<<phoneNo<<endl;	
	}
   };
   int main()
   {
    Employee e1;
    e1.accept();
    e1.display();
    return 0;
   }