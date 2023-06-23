#include<iostream>
using namespace std;

int main()
{
    int height;
    cout<<"enter right angle triangle height:";
    cin>>height;
    
    for (int i = 0; i < height; i++)
    {
        for (int sp = height-1; sp > i; sp--)
        {
           cout<<" ";
        }
        
        for (int j = 0; j <= i; j++)
        {
         cout<<"* ";   
        }
        cout<<"\n";
    }
    return 0;
}
