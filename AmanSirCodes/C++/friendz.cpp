#include<iostream>
#include<conio.h>
using std::cout;
using std::endl;

class my
{
	int a;
	friend class my2;
};
class my2
{
	public:
	void display()
	{
	 my m;
	 m.a=10;
	 cout<<m.a<<endl;
	}
};

int main()
{
	my2 n;
	n.display();
	return 0;
}