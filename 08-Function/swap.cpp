#include<iostream>
using namespace std;
void swap(int num1,int num2) //call by value or pass by value
{
    int c;
    c=num1;
    num1=num2;
    num2=c;
    cout<<"the value in swap fxn num1="<<num1<<" and num2="<<num2<<"\n"; //20 10
}
int main()
{
    int num1,num2;
    cout<<"enter 2 numbers \n";
    cin>>num1>>num2;//10 20
    cout<<"the value before swapping in main num1="<<num1<<"  and num2="<<num2<<"\n";//10 20
    swap(num1,num2);//call by value
    cout<<"the value after swapping in main num1="<<num1<<"  and num2="<<num2<<"\n"; //20 10 ?
    return 0;
}