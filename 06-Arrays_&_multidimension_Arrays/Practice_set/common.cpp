#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,34,567,84,43,5,23,98,13,3};
    int arr2[]={87,43,56,78,9,43,5,23,98,13,3};

    int len1=sizeof(arr)/sizeof(int);
    int len2=sizeof(arr2)/sizeof(int);

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (arr[i]==arr2[j])
            {
                cout<<"common element found!! "<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}