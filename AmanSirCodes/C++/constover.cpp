#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class constover
{
	public:
	void constover2(int x)
	{
		cout<<"this is 1 constr"<<endl;
		cout<<x<<endl;
		
	}
	//number of arguments/parameters must be different
	void constover2(int x,int y)
	{
		cout<<"this is 2 constr"<<endl;
		cout<<x<<endl;
		cout<<y<<endl;
	}
	void constover2(int x,int y,int z)
	{
		cout<<"this is 3 constr"<<endl;
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<z<<endl;
	}
	void constover2(int x,int y,char y)
	{
		cout<<"this is 4 constr"<<endl;
		cout<<x<<endl;
		cout<<y<<endl;
		cout<<ze<<endl;
	}

};
int main()
{
	constover on;
	on.constover2(10);
	on.constover2(10,20);
	on.constover2(10,20,30);
		on.constover2(10,80,'B');
	return 0;
}

	
