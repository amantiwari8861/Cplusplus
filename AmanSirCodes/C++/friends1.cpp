#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class Friends
{
	int i;
	char name[5][20];
	public:
	void setname()
	{
	
	cout<<"enter the friends name"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>name[i];
	}
	}
	void getname()
	{
	
		cout<<"my friends are"<<endl;
		for(i=0;i<5;i++)
		puts(name[i]);
	
	}
	
};
int main()
{
	Friends  fri;
	fri.setname();
	fri.getname();
	return 0;
}