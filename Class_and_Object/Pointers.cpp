#include<iostream>
using namespace std;
int main()
{
    int num=99;
    cout<<"the value of num is "<<num<<endl;
    cout<<"the address of num is "<<&num<<endl;

    int *ptr; //declaration of pointer
    ptr=&num;

    cout<<"the value of ptr is "<<ptr<<endl;    
    cout<<"the value at address of ptr is "<<*ptr<<endl;
    *ptr=55;
    cout<<"the value of num is "<<num<<endl;
    return 0;
}
