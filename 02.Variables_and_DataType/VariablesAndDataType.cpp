#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    // byte b=255;//only in new version i.e ()
    // cout<<"The value of b is "<<(int)b<<" and size in memory is "<<sizeof(b)<<" bytes."<<endl;

    // 1 byte = 8 bits
    //-2^7 to 2^7 - 1
    // -128 to 127

    // system("clear");
    // cout<<sizeof(short int)<<" Bytes"<<endl;

    // short int a=32767;//signed is implicitly defined
    // signed short int b=32767; // -32768 to 32767
    // unsigned short int c=65535;// 0 to 65535

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;

    // int y = 2147483647;
    // signed int x=2147483647;// -2^31 to to 2^31 -1
    // unsigned int z=4294967295;// 2^32 - 1

    // cout<<x<<endl;
    // cout<<y<<endl;
    // cout<<z<<endl;
    // cout<<sizeof( long int)<<" Bytes"<<endl;
    // cout<<sizeof(long long int)<<" Bytes"<<endl;

    // signed long int x=(long int)(9223372037*pow(10,9))-1;
    // long int y = (long int)(9223372037*pow(10,9))-1;
    // unsigned long int z=1844674407*pow(10,10);

    // cout<<x<<endl;
    // cout<<y<<endl;
    // cout<<z<<endl;

    // cout<<sizeof(double)<<" Bytes"<<endl;
    // double xy=1.7*pow(10,308);
    // cout<<setprecision(16);
    // double xy=4.65748433378568;
    // cout<<" xy = "<<xy<<endl;
    // cout<<sizeof(long double)<<" Bytes"<<endl;
    
    // cout<<sizeof(bool)<<" Bit"<<endl;

    // bool isAlive=true;
    // cout<<" is Alive :"<<isAlive<<endl;

    string name,name2="Aman Tiwari";
    cout<<"enter ur name:";
    // cin>>name; // one word
    getline(cin,name);// whole sentence

    cout<<"my name is "<<name<<endl;
    cout<<"my name is "<<name2<<endl;

    return 0;
}
