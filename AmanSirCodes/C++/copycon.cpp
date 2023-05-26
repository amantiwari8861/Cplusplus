#include<iostream>
using namespace std;
class fun
{
	private:
	int x,y;					
	public: 
	fun()
	{
	}   						
	fun(int a,int b)	 //2 parameters 	
	{
		x=a;
		y=b;
	}
	fun(fun &fxnobject)
	{
		cout<<"copy constructor"<<endl;
		 x=fxnobject.x;
		 y=fxnobject.y;
	}
	void display()
	{
		cout<<"the value of x is "<<x<<" and y is " <<y<<endl;
		//cout<<"value of a="<<a<<endl;
		//cout<<"value of b="<<b<<endl;
	}
};
int main()
{
	fun obj1(10,20); //2 parameters 
	fun obj2(obj1);
	fun obj3(obj2);
	fun obj4;
	obj4=obj1;
	
	//system("cls");
	obj1.display();
	obj2.display();
	obj3.display();
	obj4.display();
	return 0;
}
