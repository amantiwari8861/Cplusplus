#include<iostream>
#include<conio.h>
using std::cout;
using std::endl;

class B two;
class A
{
	friend void fxn();
	private:
	int a=5;
};
class B
{
	friend void fxn();
	private:
	int b=6;
};
void fxn()
{
	A one;
	B two;
	one.a=5;
	two.b=6;

	cout<<one.a<<two.b<<endl;
	if(one.a>two.b)
	{
		cout<<"A is greater"<<endl;
	}
	else
	{
		cout<<"B is greater"<<endl;
	}
}

int main()
{
		cout<<"hello there"<<endl;
		fxn();
		return 0;
}
