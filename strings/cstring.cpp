#include<iostream>
// #include<cstring>
#include<string.h>
using namespace std;

int main()
{
    // char name[30]="hello aman tiwari";
    // cout<<name<<endl;
    // cout<<strlen(name)<<endl;

    // string namez="Aman Tiwari";
    // cout<<strlen(namez); //error bcz strlen is made for only character arrays(char *) 
    // char name1[]="Aman";
    // char name2[]="Tiwari";

    // strcat(name1,name2);

    // cout<<name2;

    // char name[30];
    // cout<<"enter the name:";
    // // cin>>name; //one word
    // cin.getline(name,30);

    // cout<<name;

    // string name;
    // cout<<"enter the name:";
    // // cin>>name;
    // getline(cin,name);

    // // cout<<name<<endl;
    // string lname=" Tiwari";

    // name=name+lname;

    // cout<<"after concating :"<<name;

    string name1="aman";
    string name2="aman";

    // if (name1<name2)
    // {
    //     cout<<name1<<" is less than "<<name2<<endl;
    // }
    // else if (name1>name2)
    // {
    //     cout<<name1<<" is greater than "<<name2<<endl;
    // }
    // else
    // {
    //     cout<<"both are same";
    // }


    if(name1==name2)
    {
        cout<<"both are same"<<endl;
    }

    cout<<name1.length();
    return 0;
}
