#include<iostream> 
using namespace std;
void Show()
{
    int a=10;
    static int b=10;
    cout<<"the value of a ="<<++a<<" and b="<<++b<<endl;
    cout<<"the value of a ="<<++a<<" and b="<<++b<<endl;
}
int main()
{
    Show();
    Show();
    Show();
    Show();
    Show();
    return 0;
}