#include <string>
#include <iostream>
#include <fstream>
class Customer
{
private:
	char mobileNo[11];
	char name[25];
	char dateOfBirth[9];
	char billingAddress[51];
	char city[25];
	char phoneNo[11];
	float amountOutstanding;
public:
	Customer()
	{
		mobileNo[0]='\0';
		name[0]='\0';
		dateOfBirth[0]='\0';
		billingAddress[0]='\0';
		city[0]='\0';
		phoneNo[0]='\0';
		amountOutstanding=0;
	}
	void print()
	{
		cout << endl << "Mobile phone number: ";
		cout << mobileNo << endl;
		cout << "\nName: ";
		cout << name << endl;
		cout << "\nDate of Birth: ";
		cout << dateOfBirth<<endl;	
		cout << "\n\nCustomer's billing address: ";
		cout << billingAddress<<endl;
		cout << "\nCity: ";
		cout << city << endl;
		cout << "\nResidence phone number: ";
		cout << phoneNo << endl;
		cout << "\nAmount due: ";
		cout << amountOutstanding << endl;
	}
	void get()
	{
		cout << "Mobile phone number: ";
		cin >> mobileNo;
		cin.ignore();
		cout << endl << "Name: ";
		cin.getline(name,25);
		cout << endl << "Date of Birth: ";
		cin >> dateOfBirth;
		cin.ignore();
		cout << endl << "Customer's billing address: ";
		cin.getline(billingAddress,51);
		cout << endl << "City: ";
		cin.getline(city,25);
		cout << endl << "Residence phone number: ";
		cin >> phoneNo;
		cout << endl << "Amount due: ";
		cin >> amountOutstanding;
	}
	char *getmbno()
	{
		return mobileNo;
	}
};
int main()
{
	int ch;
	Customer object;
	while(1)
	{
		cout<< "\n \n Diaz Customer Tracking System\n";
		cout<< "\n 1. Enter Customer Details\n";
		cout << "\n 2. Display all records \n";
		cout <<" \n 3. Query \n";
		cout << "\n Enter your choice (0-3)\t";
		cin>>ch;
		
		if(ch==1)
		{
			ofstream ofile("customer.dat"); 
			cout << "Enter customer details " << endl;
			object.get();
			ofile.write((char *)&object,sizeof(object)); 
			ofile.close(); 
		}
		if(ch==2)
		{
			ifstream ifile("customer.dat");
			ifile.read((char *)&object, sizeof(object));
			while(ifile) //Read Till The End Of The File
			{
		             object.print();
		             ifile.read((char *)&object, sizeof(object));
		      	}	
			ifile.close();
		}
		if(ch==3)
		{
			Customer c1;
			ifstream ie("customer.dat");
			char mbno[11];
			int pos;
			cout<<"\n\n Enter the Mobile Number:\t";
			cin>>mbno;
			ie.read((char *)&c1, sizeof(c1));
	      	while(ie) //Read Till The End Of The File
	      	{
			     char temp[11];
		     strcpy(temp,c1.getmbno());
			     if(strcmp(temp,mbno)==0)
			     {
				     c1.print();
				     break;
			     }
			    else
		             ie.read((char *)&c1, sizeof(c1));
			}
			ie.close();
		}		
		if(ch==0)
			break;
	}
	return 0;
}
