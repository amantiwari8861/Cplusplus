#include<iostream>
using namespace std;

class parent
{
	public:
	virtual void print()
	{
		cout<<"print parent class"<<endl;
	}
	void show()
	{
		cout<<"show parent class"<<endl;
	}
};
class derived:public parent
{
	public:
	void print()
	{
		cout<<"print derived class"<<endl;
	}
	void show()
	{
		cout<<"show derived class"<<endl;
	}
};
int main()
{
	parent *par;
	derived d;
	par=&d;
	par->print();
	par->show();
	return 0;

}