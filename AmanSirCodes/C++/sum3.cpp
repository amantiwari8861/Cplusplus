#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class input
{		
	
	public:
	int max(int,int);
	float max(float,float);
};	
int input::max(int x,int y)
{
	cout<<x<<endl<<y<<endl;
	return 0;
}
float input::max(float x,float y)
{
	cout<<x<<endl<<y<<endl;
	return 0;
}
int main()
{
	input obj;
	obj.max(10,20);
	obj.max(2.4f,1.2f);
	return 0;
}
	
