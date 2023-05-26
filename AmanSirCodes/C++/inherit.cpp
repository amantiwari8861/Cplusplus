#include<iostream>
#include<conio.h>
using std::cout;
using namespace std;
 
 class daddy
{
	public:
	int a;
	daddy()
	{
		a=10;
	}
	void dad()
	{
		 
		cout<<a<<endl; 
		cout<<"i am parent"<<endl;
	}
	
};

class baby:public daddy
{
	public:
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