#include<iostream> 
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int *ptr;
    // ptr=&arr[0];
    ptr=arr;
    // ptr=&arr[2];
    cout<<"the address of arr[0] is:"<<&arr[0]<<endl;
    cout<<"the address in ptr is "<<ptr<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"the value at "<<i<<" position is "<<*ptr<<endl;
        ptr++;
    }
    return 0;
}
