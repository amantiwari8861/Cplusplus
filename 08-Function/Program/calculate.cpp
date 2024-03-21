#include <iostream>
using namespace std;

void add(int,int);
void sub(int,int);
void multi(int,int);
void div2(int,int);
void mod(int,int);

int main()
{
    int num1, num2;
    char op;
    cout<<"Enter first and second number = ";
    cin>>num1>>num2;
    cout<<"Enter any operater = ";
    cin>>op;

    switch (op)
    {
    case '+':
        add(num1, num2);
        break;

    case '-':
        sub(num1, num2);
        break;

    case '*':
        multi(num1, num2);
        break;

    case '/':
        div2(num1, num2);
        break;

    case '%':
        mod(num1, num2);
        break;

    default:
    cout<<"Invalid !!";
        break;
    }
    return 0;
}
void add(int num1, int num2)
{
    int sum = num1 + num2;
    cout<<num1<<"+"<<num2<<" "<<sum;
}

void sub(int num1, int num2)
{
    int sum = num1 - num2;
    cout<<num1<<"-"<<num2<<" "<<sum;
}

void multi(int num1, int num2)
{
    int sum = num1 * num2;
    cout<<num1<<"*"<<num2<<" "<<sum;
}

void div2(int num1, int num2)
{
    int sum = num1 / num2;
    cout<<num1<<"/"<<num2<<" "<<sum;
}

void mod(int num1, int num2)
{
    int sum = num1 % num2;
    cout<<num1<<"%"<<num2<<" "<<sum;
}