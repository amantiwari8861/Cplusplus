#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a=10,b=0,c;
		cout<<"hllo\n";
		c=a/b; //suspicious code
		cout<<"c="<<c;
		cout<<"hllo\n";
		cout<<"hllo\n";
		cout<<"hllo\n";
		
	}
	catch(...)
	{
		cout<<"default exception\n";
	}
	return 0;
}