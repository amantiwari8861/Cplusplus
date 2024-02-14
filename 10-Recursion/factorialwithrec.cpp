#include <iostream>
using namespace std;
int factorial(int num);

int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num; // 4
    int result = factorial(num);//4*3*2*1 =24
    cout<<"the factorial of "<<num<<" is "<<result;
    return 0;
}
int factorial(int num)
{
    if(num==0 || num==1) //termination condition (base condition)
        return 1;
    else 
        return num * factorial(num - 1);
}
// Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// Write a program in C to Print Fibonacci Series using recursion.