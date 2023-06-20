#include <iostream>
class customer
{
private:
	int billingamount[5][2];
public:	
void accept_details()
	{
	for(int r=0;r<5;r=r+1)
	{
		cout<<"Enter the Mobile Number";
		cin>>billingamount[r][0];
	cout<<"Enter the billing amount";
		cin>>billingamount[r][1];
	}}
	void display_details()
	{
		for(int r=0;r<5;r=r+1)
		{
		cout<<"Mobile Number   :  "<<billingamount[r][0];
		cout<<"\t"<<"Billing Amount : "<<billingamount[r][1]<<endl;
		}
	}};
int main()
{
	customer object;
	object.accept_details();
	object.display_details();
}