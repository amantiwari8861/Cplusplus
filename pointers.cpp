#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;  // & represents address of 
    cout<<"the value in variable num is"<<num<<" at address "<<&num<<endl;
    // syntax:  datatype *pointername;
    int *ptr; //pointer stores the address of another variable
    //this pointer can store the address of int datatype variable
    // char *ptr2;
    ptr=&num;
    // * represents the value at address
    cout<<"the value in pointer ptr is "<<ptr<<endl; //6684188
    cout<<"the address of ptr pointer is"<<&ptr<<endl;//6684168
    cout<<"the value at address in pointer ptr is "<<*ptr<<endl;
    // int *ptr3=NULL; // null pointer
    int **dptr;
    dptr=&ptr;
    cout<<"the value in double pointer is "<<dptr<<endl;
    cout<<"the value at address dptr "<<*dptr<<endl;
    cout<<"the value at address of variable in dptr "<<**dptr<<endl;
    cout<<"the address of dptr"<<&dptr<<endl;
    return 0;
}
