#include<iostream> 
using namespace std;
int add(int,int);
// int add(int a,int num2);
//type 4 fxn : with argument and return type
int main()
{
    int a=10,b=20;
    cout<<"before calling in main \n";
    int sum=add(a,b);
    cout<<"the sum is "<<sum<<" in main \n";
    return 0;
}
int add(int a,int num2)
{
    cout<<" in add fxn  \n";
    return (a+num2);
}
//Note : if we put the function body above the main then we don't need to declare it
//h.w make a calculator using switch and function