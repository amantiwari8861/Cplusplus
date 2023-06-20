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
			throw "divide by 0";//you have to throw exception yourself in c++ 
			cout<<"i will not execute";
		}
		else
		{
			c=a/b;
			cout<<"c="<<c;
		}
	}
	catch(...)
	{
		cout<<"default exception\n";
	}
	cout<<"after try catch code";
	return 0;
}
