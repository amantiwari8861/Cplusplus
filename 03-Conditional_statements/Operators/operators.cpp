#include<iostream> 
using namespace std;
int main()
{
	//2. binary operators : in which two operands are required
		//a. arithematic operators : +,-,*,/, %(modulus)
	int num1,num2,result;
	cout<<"enter 2 values \n"; //  \n => next line
	cin>>num1>>num2;// 27 4
	
	// result=num1+num2;
	result=num1%num2; // 27%4 = 3     9%10 = ? 
	// % (modulus or mod it is used to find remainder)
	// remainder = divide waala shesh
	cout<<"the result is "<<result;
	return 0;
}