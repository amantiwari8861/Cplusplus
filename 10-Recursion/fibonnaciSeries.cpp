#include<iostream> 
using namespace std;
int fibonnaci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if (num==1)
    {
        return 1;
    }
    else
    {
        return fibonnaci(num-1)+fibonnaci(num-2);
    }  
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout<<fibonnaci(i)<<" ";
    }
    return 0;
}
// https://www.baeldung.com/cs/recursion-looping