#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,24,67,8,99,46,79223,10,2,24,99};
    int len=sizeof(arr)/sizeof(int);
    int count;

    for (int i = 0; i < len; i++)
    {
        count=0;
        for (int j = 0; j < len; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if (!(count>1))
        {
            cout<<arr[i]<<" is unique\n";
        }
    }
    




    return 0;
}