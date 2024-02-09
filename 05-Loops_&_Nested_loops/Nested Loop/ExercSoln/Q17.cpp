#include<iostream>
using namespace std;
int main()
{
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            if (((i==2 || i==3) && (j>=3 && j<8  || j>=14 && j<=18)) || ((i==6 || i==7) && (j>=5 && j<=14)))
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<"\n";
    }
    

    return 0;
}
