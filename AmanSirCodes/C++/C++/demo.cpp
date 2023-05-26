#include<iostream>
// using std::cout;
// using std::cin;
using namespace std;
int main()
{
    int i,j;
    string name;
    cout<<"hello world : ";
    // cin>>i>>j>>name;
    cin>>i>>j;
    fflush(stdin);
    getline(cin,name);
    cout<<"the value of i is = "<<sizeof(i)<<" ."<<j<<" "<<name;
    return 0;
}