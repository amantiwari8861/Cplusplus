#include<iostream>
#include<conio.h>
//using namespace std;

class smartphone
{
	 int phone[5][2];
	public:
	void accept()
	{
		for(int r=0;r<5;r++)
		{
			cout<<"enter the 1st mobile no."<<endl;
			cin>>phone[r][0];
			cout<<"enter the billing amount"<<endl;
			cin>>phone[r][1];
		}
	}
	void display()
	{
		for(int r=0;r<5;r++)
		{
			cout<<"phone no is"<<phone[r][0]<<endl;
			cout<<"\t"<<"billing amount is"<<phone[r][1]<<endl;
		}
	}
};
int main()
{
smartphone sp;
sp.accept();
sp.display();
return 0;
}
