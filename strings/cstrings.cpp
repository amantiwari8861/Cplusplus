#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    char str[] = "Hello World";
    char *p = &str[0];
    // while(*p)
    // {
    //     cout<<"at "<<(p)++<<" the value is :"<<*p<<endl;
    //     // p++;
    // }
    for (int i = 0;str[i]!='\0'; i++)
    {
        // cout<<"at "<<(p)++<<" the value is :"<<*p<<endl;
        printf(" at %d value = %c \n",p,*p);
        p++;
    }
    
    cout<<endl;

    // char str[] = "Hello World";
    // cout<<str<<endl;

    // char name[20] ;
    // cout<<"Enter your name: ";
    // // cin>>name;
    // // cin.getline(name,20);
    // fgets(name,20,stdin);

    // cout<<"\nHello "<<name<<endl;
    // cout<<strupr(name)<<endl;

    //Strings in C++

    // string name1;
    // getline(cin,name1);
    // cout<<name1<<endl;

    // string s4("aman");
    // cout<<s4<<endl;

    // string s = "aman";
    // cout<<s<<endl;

    // string s1 = "tiwari8861@gmail.com";
    // cout<<s1<<endl;
    // cout<<s1.length()<<endl;


    // cout<<s1.substr(0,5)<<endl;
    // cout<<s1.substr(1,5)<<endl;
    // cout<<s1.substr(5,5)<<endl;
    // cout<<s+" "+s1<<endl;

    // s1.replace(0,5,"Aman");
    // cout<<s1<<endl;

    // s1.replace(5,4,"Tiwari");
    // cout<<s1<<endl;
    // string s3 = "Tiwa@ri8861@gmail.com";

    // cout<<s3.find("@")<<endl;
    // cout<<s3.find("@",5)<<endl;

    // cout<<s3.find_first_of("@")<<endl;
    // cout<<s3.find_last_of("@")<<endl;

    // cout<<s3.front()<<endl;
    // cout<<s3.back()<<endl;

    // cout<<s3.at(0)<<endl;
    // cout<<s3.at(3)<<endl;

    // string s4("aman");
    // string s5("Aman");
    // cout<<s5.compare(s4)<<endl;


    // if (s5.compare(s4)==0)
    // if(s5==s4)
    // {
    //     cout<<"Same"<<endl;
    // }
    // else
    // {
    //     cout<<"Not Same"<<endl;
    // }
    // if (s4<s5)
    // {
    //     cout<<"s4 is less than s5"<<endl;
    // }
    // else
    // {
    //     cout<<"s4 is greater than s5"<<endl;
    // } 
    
    return 0;
}
