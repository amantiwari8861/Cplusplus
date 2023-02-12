#include<iostream>
using namespace std;

int main()
{
    int term,sum=0;
    cout<<"enter the term:";
    cin>>term;

    for (int i = 1; i <= term; i++)
    {
        // sum=sum+i;
        if (i%2 == 0)
        {
            cout<<i<<" is even "<<endl;
        }
        else
        {
            cout<<i<<" is odd "<<endl;
        }       
    }

    // cout<<" the sum of "<<term<<" term is "<<sum;
    

    return 0;
}
