#include<iostream>
using namespace std;
int main()
{
    int num=10;

    // cout<<++num<<endl;
    // cout<<num<<endl;

    // cout<<num++<<endl;
    // cout<<num<<endl;

    int num2=num++;// num=11,num2=10
    
    // cout<<num<<endl;
    // cout<<num2<<endl;
    
    int num3=num++ + ++num2 + num;
    //11 + ++num2 + num   //num=12
    //11+ 11 +num
    // 11 + 11 + 12 => 34
    cout<<"Num3 :"<<num3;

    return 0;
}