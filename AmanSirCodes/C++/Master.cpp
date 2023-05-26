#include<iostream>
#include<conio.h>
using std::cout;
using std::endl;

class Master
{
    int a;
	public:
	void mob()
	{
		int name;
		cout<<"Enter ur name"<<endl;
		cin>>name;
	}
    Master()
    {
        a=10;
        cout<<"a="<<a<<endl;
    }
    ~Master()
    {
        a=0;
        cout<<"deconstructor is executing";
        }
};
int main()
{
    Master obj;
    {
		int a;
        cout<<"a="<<a<<endl;
        Master obj1;
      {
        Master obj2;
      }
    }
	return 0;
    getch();
}

