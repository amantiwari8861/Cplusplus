#include<iostream>
using namespace std;

int main()
{
    int digit,count=0;//5676879
    cout<<"enter the digit :";
    cin>>digit;

    // while (digit>0)
    // {
    //     count++;
    //     digit=digit/10;// 597687.9 => 597687 //0.5 => 0
    // }

    for ( count = 0; digit>0; count++)
    {
        digit=digit/10;
    }
    
    
    cout<<"total digits are "<<count;
    return 0;
}
