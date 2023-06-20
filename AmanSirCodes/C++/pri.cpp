#include<iostream>
#include<conio.h>
using std::cout;
using std::endl;
 
 class daddy
{
	private:
	void dad()
	{
		 int a=10;
		 cout<<a<<endl; 
		cout<<"i am parent"<<endl;
	}
	
};

class baby:private daddy
{
	
	private:
	void child()
	{
	 cout<<"i am child"<<endl;
	}
};

	int main()
	{
		baby b;
		b.dad();
		b.child();
		return 0;
	}