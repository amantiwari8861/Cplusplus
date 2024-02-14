#include<iostream>
using namespace std;

void add(int num)
{
    cout<<"in add function at "<<num<<" \n";
    add(num+1);
}
int main()
{
    //Recursion is a technique in which a function calls itself.
    int num=10;
    add(num);
    
    return 0;
}