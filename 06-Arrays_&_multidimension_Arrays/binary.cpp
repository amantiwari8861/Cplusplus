#include<iostream>
using namespace std;
int main()
{   
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i]=10*(i+1);
    
    int lower=0,upper=9,mid,key;
    bool isFound=0;
    cout<<"enter key :";
    cin>>key;

    for (int i = 0; i < 10; i++)
    {
        mid=(lower+upper)/2;
        if (key==arr[i])
        {
            cout<<key<<" found at index position "<<i<<endl;
            isFound=1;
            break;
        }
        if (key>arr[i])
        {
            lower=mid+1;
        }
        if (key<arr[i])
        {
            upper=mid-1;
        }        
    }
    if(!isFound)
    {
        cout<<"not found in array ";
    }
   return 0;
}