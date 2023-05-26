// Chapter 03: Practice Questions -Dealer class 
class Dealer
{
  	private:
	char mobileNo[11];
	char dealerName[25];
	char dealerAddress[51];
	char dealerCity[25];
	char phoneNo[11];
   	
	public:
	static int CompanyID;
	static void showID()
	{
	cout<<"The company ID is"<<CompanyID;
	}
void get()
	{
	  //code to accept the dealer details
	}
void print()
   {
    //code to print the dealer details
    cout<<"The dealer name is"<<dealerName;
   }
};
int Dealer::CompanyID=6519;
