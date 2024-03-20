#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter array size:";
    cin>>size;

    int arr[size];
    cout<<"Enter "<<size<<" Values in array\n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The max is :"<<max;
    
    return 0;
}