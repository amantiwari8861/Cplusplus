#include<iostream>
using namespace std;

int main()
{
    // string arr[10];
    string arr[]={"Ram","Shyam","aman","raj","etc"};
    // cout<<sizeof(arr)<<endl;//160
    // cout<<sizeof(string)<<endl;//32
    // cout<<sizeof(arr)/sizeof(string)<<endl;// 160/32 => 5
    int len=sizeof(arr)/sizeof(string);
    // for (int i = 0; i < len; i++)
    // {
    //     arr[i]="Aman "+to_string(i);
    // }
    cout<<"The array is :";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
        if (i<len-1)
        {
            cout<<",";
        }
    }
    return 0;
}
