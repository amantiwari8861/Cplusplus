#include<iostream>
using std::cout;
using std::endl;

class A
{
	friend void fxn();
	int a;
};
class B
{
	friend void fxn();
    int b;
};
void fxn()
{
	A one;
	B two;
	one.a=5;
	two.b=6;	
	cout<<one.a<<endl<<two.b<<endl;
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
