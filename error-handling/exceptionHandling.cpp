#include<iostream>
using namespace std;

int main()
{
    //Exception :
    int a,b,result;
    cout<<"enter the value of a and b \n";
    cin>>a>>b; 
    result=a/b;
    cout<<"Result ="<<result<<endl;
    cout<<"i will never execute if exception occurs "<<endl;

    return 0;
}