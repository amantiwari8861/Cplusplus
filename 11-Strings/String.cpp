#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    // char arr[]={'A','M','A','N','\0'}; //the sequence of characters are called string
    // char arr[]="Aman Tiwari";
    // string arr="Aman tiwari";//non-primitive or derived data type
    // cout<<arr;

    // char arr[100];
    // cout<<"enter ur name(charr):";
    // // cin>>arr;
    // cin.getline(arr,100);
    // cout<<"The name is :"<<arr<<endl;
    // cout<<"size of character      Array:"<<strlen(arr)<<endl;
    // cout<<"lowercase of character Array:"<<strlwr(arr)<<endl;
    // cout<<"uppercase of character Array:"<<strupr(arr)<<endl;
    // cout<<"reverse of character   Array:"<<strrev(arr)<<endl;
    // cout<<"Concatenate of character   Array:"<<strcat(arr," Singh")<<endl;


    string strArr;
    cout<<"enter ur name(string):";
    // cin>>strArr;
    getline(cin,strArr);
    cout<<"The name is :"<<strArr<<endl;
    // cout<<"size of string:"<<strlen(strArr)<<endl;//error
    cout<<"size of string:"<<strArr.length()<<endl;

    strArr.


    return 0;
}
