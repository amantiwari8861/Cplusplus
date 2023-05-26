#include<iostream>
using namespace std;

class parent
{
	virtual void display()
	{
		cout<<"hii i am parent"<<endl;
	}
};
class child:public parent
{
	void display()
	{
		cout<<"hii i am child of parent"<<endl;
	}
};
class childs:public child
{
	public:
	void display()
	{
		cout<<"hii i am childs the child of child"<<endl;
	}
};
int main()
{
	childs ch;
	ch.display();
}