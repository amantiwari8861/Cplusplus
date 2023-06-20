#include <iostream>
#include <fstream>
#include <string>
class NRailways
{
private:
	char pnr[6];
	char pname[30];
	char date_departure[9];
	char to[40];
	char from[40];
	char status;
	int No_of_Seats;
public:
	NRailways()
	{
		pnr[0]='\0';
		pname[0]='\0';
		date_departure[0]='\0';
		to[0]='\0';
		from[0]='\0';
		status=' ';
		No_of_Seats=0;
	}


	void print()
	{
		cout<<"\n\n PNR Number		:\t"<<pnr;
		cout<<"\n Passenger Name	:\t"<<pname;
		cout<<"\n Date of Departure	:\t"<<date_departure;
		cout<<"\n Destination To	:\t"<<to;
		cout<<"\n             From	:\t"<<from;
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
		cout << endl << "Enter Status of Booking\t";
		cin >> status;
		cout << endl << "Enter # of Seats Reserved:\t";
		cin >> No_of_Seats;
	}
	char getstatus()
	{
		return status;
	}
	char *getpnr()
	{
		return pnr;
	}
	void setstatus()
	{
		char choice;
		cout<<"\n\n Do you want to cancel the Booking?\t";
		cin>>choice;
		if(choice=='y' || choice=='Y')
			status='R';
	}
};
int main()
{
	int ch;
	while(1)
	{
		cout<< "\n \n Northern Railway System\n";
		cout<< "\n 1. Enter Passenger Details\n";
		cout<< "\n 2. Query Passenger Details \n";
		cout<< "\n 3. Cancel the Booking \n";
		cout<< "\n 4. Print Confirmed Booking List\n";
		cout << "\n Enter your choice (0-4)\t";
		cin>>ch;
		
		if(ch==1)
		{
			NRailways object;
			fstream ofile("booking1.dat",ios::app); 
			cout << "Enter Passenger Details " << endl;
			object.get();
			ofile.write((char *)&object,sizeof(object));
			ofile.close(); 
		}
		if(ch==2)
		{
			NRailways object;
			ifstream ifile("booking1.dat");
			char pnr[6];
			cout<<"\n\n Enter the PNR Number:\t";
			cin>>pnr;
			ifile.seekg(0,ios::beg);
			ifile.read((char *)&object, sizeof(object));
		      	while(ifile) //Read Till The End Of The File
		      	{
			     char temp[6];
			     strcpy(temp,object.getpnr());
			     if(strcmp(temp,pnr)==0)
			     {
			             object.print();
				     break;
			     }
		             ifile.read((char *)&object, sizeof(object));
			}
		    	ifile.close();
		}
		if(ch==3)
		{
			NRailways o;
			fstream ie("booking1.dat",ios::in|ios::out);
			char pnr[6];
			int pos;
			cout<<"\n\n Enter the PNR Number:\t";
			cin>>pnr;
			ie.read((char *)&o, sizeof(o));
		      	while(ie) //Read Till The End Of The File
		      	{
			     char temp[6];
			     pos=ie.tellg();
			     strcpy(temp,o.getpnr());
			     if(strcmp(temp,pnr)==0)
			     {
			             o.setstatus();
				     ie.seekp(pos-sizeof(o),ios::beg);
				     ie.write((char*)&o,sizeof(o));
    				     ie.close();
				     break;
			     }
			    else
		             ie.read((char *)&o, sizeof(o));
			}
			ie.close();
		}
		if(ch==4)
		{
			NRailways object;
			ifstream ifile("booking1.dat");
			ifile.read((char *)&object, sizeof(object));
		      	while(ifile) //Read Till The End Of The File
		      	{
if(object.getstatus()=='C'||object.getstatus()=='c')
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
