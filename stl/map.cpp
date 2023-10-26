#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,string> aadhar;
    aadhar.insert(make_pair("name","Aman Tiwari"));
    aadhar.insert(make_pair("age","24"));
    aadhar.insert(make_pair("address","Noida 62"));
    aadhar.insert(make_pair("aadhar No","123456789"));
    aadhar.insert(make_pair("1name","Aman Tiwari"));
    aadhar.insert(make_pair("Name","Aman Tiwari"));
    aadhar.insert(make_pair("name","Krishna Tiwari"));

    for(pair<string,string>  entry:aadhar)
    {
        cout<<entry.first <<" : "<<entry.second<<endl;
    }
    return 0;
}
