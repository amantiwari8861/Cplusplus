#include<iostream>
#include<conio.h>
using namespace std;

class objcount
{
	
	int store;
	 int count;
	public:
      objcount()
	{
		count++;
	}
	// void setcount()
	// {
		// store=count;
	// }
	
	void showcount()
	{
			cout<<count<<endl;
	}
};
int objcount::count;
int main()
{
		objcount obj1,obj2,obj3,obj4,obj5;
		// obj1.setcount();
		// obj1.showcount();
		// obj2.setcount();
		obj2.showcount();	
		return 0;
}