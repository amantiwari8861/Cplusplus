//Chapter 02: Practice Questions 01-Dealer
#include <iostream>
class Dealer
{
	char firstName[25];
	char lastName[25];
	char city[25];	
	char phoneNo[11];	
	public:	
	void display()	
	{		
	cout << "First Name: ";		
	cout << firstName <<"     ";
	cout <<"Last name: ";		
	cout << lastName << endl;			
	cout << "City: ";		
	cout << city<<"           ";
	cout << "Phone number: ";	
	cout << phoneNo << endl;	
	}	
	void get()	
	{		
	cout << "First name: ";	
	cin >> firstName;		
	cout << endl << "Last Name: ";		
	cin >> lastName;		
	cout << endl << "City: ";	
	cin >> city;		
	cout << endl << "Residence phone number: ";	
	cin >> phoneNo;		
	}
};

int main()
{	
Dealer d1;
d1.get();	
d1.display();
return 0;
}