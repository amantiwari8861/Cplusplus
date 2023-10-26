#include<iostream>
#include<cstring>
// #include<string.h>
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

    // strcat(name1," ");
    // strcat(name1,name2);

    // cout<<name1;

    // char name[30];
    // cout<<"enter the name:";
    // // cin>>name; //one word
    // cin.getline(name,30);
    // cout<<name;

    // string name;
    // cout<<"enter the name:";
    // // cin>>name; //one word
    // getline(cin,name);

    // cout<<name<<endl;

    // string lname=" Tiwari";

    // name=name+lname;

    // cout<<"after concating :"<<name;

    string name1="aman";
    // string name2="aman";

    // cout<< (name1==name2) <<endl;

    // if (name1<name2) // 65-97 => -32
    // {
    //     cout<<name1<<" is less than "<<name2<<endl;
    // }
    // else if (name1>name2) //97-65 => 32
    // {
    //     cout<<name1<<" is greater than "<<name2<<endl;
    // }
    // else //97-97 =>0
    // {
    //     cout<<"both are same";
    // }


    // if(name1==name2)
    // {
    //     cout<<"both are same"<<endl;
    // }
    // cout<<name1.length()<<endl;

    // const char *nameNew=name1.c_str();
    // cout<<nameNew<<endl;


    char newName[30];
    for (int i = 0; i < name1.length(); i++)
    {
        newName[i]=name1.at(i);
        cout<<newName[i];
    }
    newName[name1.length()]='\0';

    string str2(newName);

    cout<<"\n"+str2+"\n";

    cout<<name1.substr(0,2);

    return 0;
}
