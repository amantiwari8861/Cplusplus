#include<iostream>
using namespace std;

int main()
{

//exception handling in c++
//always place the suspicious code in the try block
//exception  - it is a type of condition in which it causes the abnormality in our program
//and breaks the normal flow of our program 
    int a,b,c=0;
	cout<<"enter value of a and b :\n";
    cin>>a;
    cin>>b;
    try  //always put ur suspicious code into the try block
    {
		// if(b==0)
		// {
			// throw b;
			// cout<<"pls do not divide by zero!";
			// throw "pls do not divide by zero!";
		// }
		//if error throwed to catch block after throw statements these line won't be executed 
		c=a/b;
		cout<<"the divide is "<<c<<endl;//not executed
	}
	catch(int b)
	{
		cout<<"error occured the value of b is "<<b<<endl;
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
	}
	catch(...)
	{
		cout<<"Error Occured!!";
	}
	
	
	cout<<"hello i am after error statements "	<<endl;
	cout<<"hello i am after error statements "	<<endl;
	cout<<"hello i am after error statements "	<<endl;
	
    return 0;
}
