#include<iostream>
using namespace std;

class A
{
	int ab;
	public:
	void acc()
	{
		cout<<"hii i am A"<<endl;
	}
};
class B:public A
{
	int ba;
	public:
	void bcc()
	{
		cout<<"hii i am B"<<endl;
	}
};
class C:public A
{
	int ca;
	public:
	void ccc()
	{
		cout<<"hii i am C"<<endl;
	}
};
class D:public B,public C
{
	int da;
	public:
	void dcc()
	{
		cout<<"hii i am D"<<endl;
	}
};
int main()
{
	D chi;
	chi.B::acc();
	chi.bcc();
	chi.ccc();
	chi.dcc();
	return 0;
}
