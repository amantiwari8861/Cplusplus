#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int sp = 5-1; sp > i; sp--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        for (int k = i; k > 0; k--)
        {
            cout<<k;
        }
        cout<<"\n";
    }
    
    

    return 0;
}
