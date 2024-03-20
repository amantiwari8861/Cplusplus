#include<iostream>
using namespace std;
int main()
{
    string names[3];
    // names[0]="Aman";
    // names[1]="Naman";
    // names[2]="Raman";

    cout<<"enter 5 friends name:\n";
    for (int i = 0; i < 3; i++)
    {
        // cin>>names[i];
        getline(cin,names[i]);
    }
    
    cout<<"the names are:";
    for (int i = 0; i < 3; i++)
    {
        cout<<names[i]<<",";
    }
    

    return 0;
}