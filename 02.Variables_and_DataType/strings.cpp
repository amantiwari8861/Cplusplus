#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;

    cin.ignore();
    // char ch;
    string name;
    cout<<"enter ur name :";
    // cin>>ch;//for gettting one character(letter)
    // cin>>name;//for gettting one word 
    getline(cin,name); //for gettting full sentence

    cout<<" your name is "<<name;
    cout<<" the number is "<<num;

    return 0;
}
