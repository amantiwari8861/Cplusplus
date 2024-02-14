#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int arr[]={1,2,3};

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for (int i = 0; i < 6; i++)
    {
        swap(arr[i],arr[i%3]);
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}
