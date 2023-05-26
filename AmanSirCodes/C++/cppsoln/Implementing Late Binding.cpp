#include <iostream>
class Person
{
	protected:
	char name[20];
	char dateOfBirth[12];
	char city[20];
	char phoneNo[15];
	public:	virtual void accept()
	{
		cout<< endl << "First Name: ";
		cin>>name;
		cout << endl << "Date of Birth: ";
		cin >> dateOfBirth;
		cout << endl << "City: ";
		cin>>city;
		cout << endl << "Residence phone number: ";
		cin >> phoneNo;
	}
	virtual void display()
	{
	cout << endl << "First Name       : " << name;
	cout << endl << "Date of birth    : " << dateOfBirth;
	cout << endl << "City             : " << city;
	cout << endl << "Residence number : " << phoneNo;
	}};
class Customer : public Person
{
	private: 
    char billingAddress[30];
     float amountOutstanding;
	public:	void accept()
	{
		cout << endl << endl << "ENTER CUSTOMER'S DETAILS";
		Person::accept();
		cout << endl << "Customer's billing address: ";	
	cin>>billingAddress;
		cout << endl << "Amount due: ";
				cin >> amountOutstanding;
	}
	virtual void display()
	{
		cout << endl << endl << "CUSTOMER'S DETAILS ";
		Person::display();
		cout << endl << "Billing address   : " << billingAddress;
		cout << endl << "Outstanding amount: " << amountOutstanding << endl;
	}};
class Dealer : public Person
{
	private:
     char shopAddress[30];
     int numSold;
	public:	void accept()
	{ 
          cout << endl << endl << "ENTER DEALER'S DETAILS";
           Person::accept();
           cout << endl << "Shop address      : ";
	   cin>>shopAddress;
           cout << endl << "Number Sold       : ";
           cin >> numSold;
	}
	void display()
	{ 
          cout << endl << endl << "DEALER'S DETAILS ";
           Person::display(); 
          cout << endl << "Shop address      : " << shopAddress;
           cout << endl << "Number sold       : "<< numSold << endl;
	}};
int main()
{
     Person *ptr;
     ptr = new Customer;
	ptr->accept();
	ptr->display();
	ptr = new Dealer;
	ptr->accept();
	ptr->display();
     return 0;
}