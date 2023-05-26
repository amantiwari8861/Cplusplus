#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

static int v=10;
class staticExample
{
	int data;
	static int v;
	public:
	void display()
	{
	   cout<<"value of static="<<v<<endl;
	}
};
		int staticExample::v=20;
		
class second
{	
public:	void sec(){cout<<"value of static in 2 is ="<<v<<endl;}
	
};
class third
{
	public:	void thi(){cout<<"value of static in 2 is ="<<v<<endl;}
	
};
class fourth
{
	public:	 void four(){cout<<"value of static in 2 is ="<<v<<endl;}

};

	
	int main()
	{
		staticExample obj;
		obj.display();
		second obj1;
		third obj2;
		fourth obj3;
		obj1.sec();
		obj2.thi();
		obj3.four();
		return 0;
	}
	