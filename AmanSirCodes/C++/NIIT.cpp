#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class NIIT
{
	char name[25];
	char dob[10];
	char billad[50];
	char city[25];
	double amout;
	int phno[13][1];
	int mob[12][1];
	
	public:
	
	void Name()
	{
		cout<<"Enter ur name"<<endl;
		gets(name);
	}
	void DOB()
	{
		cout<<"Enter ur DOB"<<endl;
		cin>>dob;
	}
	void Address()
	{
		cout<<"Enter ur address"<<endl;
		cin>>billad;
	}
	void City()
	{
		cout<<"Enter ur city"<<endl;
		cin>>city;
	}

	void Amount()
	{
		cout<<"Enter ur amount outstanding"<<endl;
		cin>>amout;
	}
		void Phone()
	{
		cout<<"Enter ur phone no."<<endl;
		cin>>phno[13][1];
		cout<<endl;
	}
	void Mobile()
	{
		cout<<"Enter ur mobile no."<<endl;
		cin>>mob[12][1];
	}
	
	void display()
	{
		cout<<"Here is the detail of the student"<<endl;
		cout<<puts(name)<<endl;
		cout<<"DOB:"<<dob<<endl;
		cout<<"Billing address:"<<billad<<endl;
		cout<<"City:"<<city<<endl;
		cout<<"Oustanding amount:"<<amout<<endl;
		cout<<"Phone no:"<<phno[13][1]<<endl;
		cout<<"Moblie no:"<<mob[12][1]<<endl;
	}
};
int main()
{
	NIIT niit;
	niit.Name();
	niit.Mobile();
	niit.DOB();
	niit.Address();
	niit.City();
	niit.Amount();
	niit.Phone();
	niit.display();
	return 0;
}

		