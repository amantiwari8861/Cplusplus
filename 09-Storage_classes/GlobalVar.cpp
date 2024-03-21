#include<iostream> 
using namespace std;

int num=10;// Global variable

void Show()
{
    // cout<<"the value of a ="<<a<<" in Show fxn \n"; //error
    cout<<"value of num in show fxn "<<num<<endl;
}
int main()
{
    int a=10; //local variable
    // cout<<"the value of a ="<<a<<" in main fxn \n";
    // num=56;
    Show();
    cout<<"value of num in main fxn "<<num;
    return 0;
}