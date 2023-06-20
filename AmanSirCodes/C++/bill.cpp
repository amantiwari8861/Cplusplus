#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class bill
{
	char name[20],address[10],email[10];
	int invoice,DOB,quantity;
	
	public:
	void setname()
	{
		cout<<"enter the Name"<<endl;
		cin>>name ;
	}
	void setinvoice()
	{
		cout<<"enter the invoice"<<endl;
		cin>>invoice ;
	}
	void setemail()
	{
		cout<<"enter the email"<<endl;
		cin>>email ;
	}
	void setaddress()
	{
		cout<<"enter the address"<<endl;
		cin>>address ;
	}
	void setDOB()
	{
		cout<<"enter the DOB"<<endl;
		cin>>DOB ;
	}
	void setquantity()
	{
		cout<<"enter the quantity"<<endl;
		cin>>quantity ;
	}
	
	void display()
	{
		cout<<"full bill details"<<endl;
		cout<<name<<endl;
		cout<<address<<endl;
		cout<<invoice<<endl;
		cout<<DOB<<endl;
		cout<<quantity<<endl;
		cout<<email<<endl;
		
    }
};

int main()
{
	bill bi;
	bi.setname();
	bi.setDOB();
	bi.setquantity();
	bi.setaddress();
	bi.setemail();
	bi.setinvoice();
	bi.display();
	

return 0;
}

