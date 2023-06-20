#include<iostream>
#include<conio.h>
using std::cout;
using std::cin;
using std::endl;

class Friends
{
	char a[20],b[20],c[20],d[20],e[20];
	public:
	void setname()
	{
	
	cout<<"enter the friends name"<<endl;
		gets(a);
		gets(b);
		gets(c);
		gets(d);
		gets(e);
	}

	
};
int main()
{
	Friends  fri;
	fri.setname();
	fri.getname();
    return 0;
}
