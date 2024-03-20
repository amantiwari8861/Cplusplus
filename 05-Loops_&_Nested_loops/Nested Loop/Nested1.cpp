#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<" Chapter "<<i<<endl;
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         cout<<"\tPara "<<j;
    //         Sleep(1000);
    //     }
    //     cout<<"\n";
    // }


    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            // Sleep(1000);
            cout<<"i="<<i<<" j="<<j<<"   ";
        }
        cout<<"\n";   
    }      
      
    return 0;
}
