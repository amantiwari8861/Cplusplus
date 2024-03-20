#include<iostream> 
using namespace std;
void add(int,int);
// void add(int a,int num2); //also valid
//type 2 fxn : with argument no return type
int main()
{
    int a=10,b=20;
    cout<<"before calling in main \n";
    add(a,b);
    // cout<<" sum = "<<sum<<" \n"; //error sum undeclared
    cout<<"after calling in main \n";
    return 0;
}
void add(int a,int num2)//variable name may be same or different
{
    int sum=a+num2;//local variable
    cout<<"the sum is "<<sum<<" in add fxn \n";    
}