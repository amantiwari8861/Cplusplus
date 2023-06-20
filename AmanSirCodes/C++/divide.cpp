#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	try
	{
	int a=10,b=0,c;
	if(b==0)
	{
		throw "divide by 0";
	}
	else
	{
		cout<<"hllo\n";
		cout<<"hllo\n";
		cout<<"hllo\n";
		c=a/b;
		cout<<"c="<<c;
	//	suspicious code
		cout<<"hllo\n";
		cout<<"hllo\n";
		cout<<"hllo\n";
	}
	}
	catch(...)
	{
		cout<<"default exception\n";
	}
	return 0;
}
