#include <iostream>
#include <fstream>
#include <string>
class NRailways
{
private:
	string pnr;
	string pname;
	string date_departure;
	string to;
	string from;
	char status;
	int No_of_Seats;
public:
	void print()
	{
		cout<<"\n\n PNR Number		:\t"<<pnr;
		cout<<"\n Passenger Name	:\t"<<pname;
		cout<<"\n Date of Departure	:\t"<<date_departure;
		cout<<"\n Destination To	:\t"<<to;
		cout<<"\n From	:\t"<<from;
		cout<<"\n Status of Booking	:\t"<<status;
		cout<<"\n # of Seats Reserved	:\t"<<No_of_Seats;		
	}
	void get()
	{
		cout << "Enter the PNR Number:\t";
		cin >> pnr;
		cout << endl << "Enter Passenger Name:\t";
		cin>>pname;
		cout << endl << "Enter Date of Departure: \t";
		cin >> date_departure;
		cout << endl << "From:\t";
		cin>>from;
		cout << endl << "To:\t ";
		cin>>to;
		cout << endl << "Enter C for confirmation status of Booking:\t";
		cin >> status;
		cout << endl << "Enter # of Seats Reserved:\t";
		cin >> No_of_Seats;
	}
	char getstatus()
	{
		return status;
	}
};
int main()
{
	int ch;
	NRailways object;
	while(1)
	{
		cout<< "\n \n Northern Railway System\n";
		cout<< "\n 1. Enter Passenger Details \n";
		cout << "\n 2. Print Confirmed Booking List \n";
		cout << "\n Enter your choice (0-2)\t";
		cin>>ch;
		
		if(ch==1)
		{
			ofstream ofile("booking.dat"); 
			char reply = 'Y';
			while(reply == 'Y' || reply == 'y') 
			{
			cout << "Enter Passenger Details " << endl;
			object.get();
			ofile.write((char *)&object,sizeof(object)); 
			cout << "Do you wish to continue ?[Y/N]";
			cin >> reply;
		}
		ofile.close(); 
	}
	if(ch==2)
	{
			ifstream ifile("booking.dat");
			ifile.read((char *)&object, sizeof(object));
		      while(ifile) //Read Till The End Of The File
		      {
			     if(object.getstatus()=='C')
			             object.print();
		             ifile.read((char *)&object, sizeof(object));
		      }	
		ifile.close();
	}
	if(ch==0)
		break;
}
return 0;
}
