#include<iostream>
using namespace std;

class stringLite
{
    string msg;
    public:
    stringLite()
    {
        msg = "Hello World";
    }
    stringLite(string msg)
    {
        this->msg = msg;
    }
    void showMsg()
    {
        cout<<"msg: "<<msg<<endl;
    }
};

stringLite s4("vikash");
