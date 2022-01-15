#include<iostream>
using namespace std;
int add(int,int);

int main()
{
    int num=10,num2=50,num3=90;
    cout<<"before calling "<<endl;
    int result=add(num,num2); //calling 
    cout<<"after fxn :"<<result<<endl;
    return 0;
}
int add(int num,int num3)
{
    cout<<"adding fxn "<<num<<" "<<num3<<endl;
    return num*num3;
}

// 1. no argument no return type 
// 1. no argument with return type 
// 1. with argument no return type 
// 1. with argument and return type 
