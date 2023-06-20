#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class ferrari
{    
	char name[30];
	float price;
	int model;
	public:
	void setname()
	{
		cout<<"enter the name"<<endl;
		cin>>name;
	}
	void setprice()
	{
		cout<<"enter the price"<<endl;
		cin>>price;
	}
	void setmodel()
	{
		cout<<"enter the model no."<<endl;
		cin>>model;
	}
	void display()
	{		cout<<"information of car"<<endl;
			cout<<name<<endl;
			cout<<price<<endl;
			cout<<model<<endl;
	}
	
};
int main()
{
	ferrari fer;
	fer.setname();
	fer.setprice();
	fer.setmodel();
	fer.display();
	return 0;
}