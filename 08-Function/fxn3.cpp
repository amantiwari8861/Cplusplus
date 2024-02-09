#include<iostream> 
using namespace std;
int add();
//type 3 fxn : no argument with return type
int main()
{
    cout<<"before calling in main \n";
    int sum=add();
    cout<<"the value of sum is "<<sum<<" in main \n";
    return 0;
}
int add()
{
    int a=10,b=20;
    cout<<" in add fxn  \n";
    return (a+b);
}