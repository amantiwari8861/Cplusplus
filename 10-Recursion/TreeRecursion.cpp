#include<iostream>
using namespace std;

void counting(int a)
{
    if (a<=3)
    {    
        cout<<"a="<<a<<endl;
        counting(a+1); 
        counting(a+1); 
    }
    else
    {
        return;
    }
}
int main()
{
    counting(1);
    return 0;
}