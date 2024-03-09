#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter age:";
    cin>>age;
    try
    {
        if (age<=0)
        {
            throw runtime_error("age must be valid!");
        }
        else
        {
            cout<<"Valid Age!!\n";
        } 
    }
    catch(exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    cout<<"After error codes\n";   
    cout<<"After error codes\n";   
    cout<<"After error codes\n";   
    cout<<"After error codes\n";   

    return 0;
}
