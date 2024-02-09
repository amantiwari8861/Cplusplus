#include<iostream>
using namespace std;

int main()
{
    
    // int matr[2][3]={{1,2,3},{4,5,6}};
    // int countEven=0;
    // // cout<<matr[1][2];

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (matr[i][j]%2==0)
    //         {
    //             countEven++;
    //         }
    //     }
    // }
    // cout<<"Total even elements :"<<countEven;

    // int arr[]={10,5,67,7,78,35,57,78,84,89,323,6};
    // int len=sizeof(arr)/sizeof(int);
    string arr[]={"Aman","karan","Aayush","Raj","1Aman","aman","pankaj"};
    int len=sizeof(arr)/sizeof(string);

    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                // int temp=arr[j];
                string temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"the sorted array is :[";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
        if (i<len-1)
        {
            cout<<",";
        }
    }
    cout<<"]";
    
    //145 

    return 0;
}
