#include<iostream>
using namespace std;

struct Student
{
    int id;
    char name[30];
    char gender;
    float fees;
};
int main()
{
    struct Student stuArr[3000];    

    cout<<"Enter 3 student data :\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"======= Enter data of student "<<i+1<<" ======= \n";
        cout<<"Enter student id :";
        cin>>stuArr[i].id;
        cin.ignore();
        cout<<"Enter student name :";
        // cin>>stuArr[i].name;//one word
        cin.getline(stuArr[i].name,30);
        cout<<"Enter student fees :";
        cin>>stuArr[i].fees;
        cout<<"Enter student gender :";
        cin>>stuArr[i].gender;
    }

    cout<<" All student Details \n";
    for (int i = 0; i < 3; i++)
    {
        cout<<"========Student "<<i+1<<" Data ========= \n";
        cout<<"Id :"<<stuArr[i].id<<endl;
        cout<<"Name :"<<stuArr[i].name<<endl;
        cout<<"fees :"<<stuArr[i].fees<<endl;
        cout<<"Gender :"<<stuArr[i].gender<<endl;
    }
    return 0;
}