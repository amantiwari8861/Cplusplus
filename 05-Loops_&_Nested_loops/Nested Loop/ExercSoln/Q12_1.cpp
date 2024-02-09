#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int sp = 5-i; sp > 1; sp--)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
