#include<iostream> 
using namespace std;
void counting(int);
int main()
{
    int a=1;
    cout<<"before calling counting function \n";
    counting(a);
    cout<<"after counting function \n";
    return 0;
}
void counting(int a)
{
    if (a<=10)
    {    
        cout<<"in add function at "<<a<<endl;
        if(a==5)
        {
            return;
        }
        counting(a+1); 
    }
}
//h.w psuedocode,reverse counting by recursion