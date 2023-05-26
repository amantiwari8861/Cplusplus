#include<iostream>
#include<conio.h>
using namespace std;

class MyNum
{
	int number;
	public:
	MyNum();
	MyNum(int);
	MyNum operator+(MyNum);
	void display();
};
MyNum::MyNum()
{
	number=0;
}
MyNum::MyNum(int num)
{
	number=num;
}
MyNum MyNum::operator+(MyNum N)
{
	MyNum temp;
	temp.number=number+N.number;
	return temp;
}
void MyNum::display()
{
cout<<number<<endl;
}
int main()
{
MyNum num1(100);
MyNum num2(50);
MyNum num3;
num3=num1+num2;
num1.display();
num2.display();
num3.display();
return 0;
}

