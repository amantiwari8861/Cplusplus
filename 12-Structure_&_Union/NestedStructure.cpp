#include<iostream>
#include<cstring>
using namespace std;

struct Employee
{
    int id;
    char name[30];
    double salary;
};
typedef struct
{
    int companyId;
    struct Employee emps[100];
    char address[100];
}Company;
int main()
{
    Company comp1;
    comp1.companyId=1001;
    cout<<"enter company address:";
    // cin>>comp1.address;
    cin.getline(comp1.address,100);
    comp1.emps[0].id=201;
    strcpy(comp1.emps[0].name,"Aman Tiwari");
    

    // cout<<"the company id is :"<<comp1.companyId<<endl;
    // cout<<"the company address is :"<<comp1.address<<endl;
    // cout<<"the company's employee 0 id is :"<<comp1.emps[0].id<<endl;
    // cout<<"the company's employee 0 name is :"<<comp1.emps[0].name<<endl;

    Company *cmp;
    cmp=&comp1;

    Company comp2={100,{{1,"Aman",50000},{2,"Naman",25000}},"imarticus noida 62"};
    cmp=&comp2;

    cout<<"the company id is :"<<cmp->companyId<<endl;
    cout<<"the company address is :"<<cmp->address<<endl;
    cout<<"the company's employee 0 id is :"<<cmp->emps[0].id<<endl;
    cout<<"the company's employee 0 name is :"<<cmp->emps[0].name<<endl;
    cout<<"the company's employee 1 id is :"<<cmp->emps[1].id<<endl;
    cout<<"the company's employee 2 name is :"<<cmp->emps[1].name<<endl;

    return 0;
}
