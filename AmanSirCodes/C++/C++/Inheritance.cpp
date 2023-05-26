#include<iostream>
using namespace std;

class Student
{
    public:
    int id;
    string name;
    void setData(int id,string name)
    {
        this -> id=id;
        this -> name=name;
    }
    void showDetails()
    {
        cout<<"the student id is :"<<id<<"\n and the name is "<<name<<endl;
    }
};


int main()
{
    Student s1,s2,s3;
    s1.setData(101,"Aman tiwari");
    s2.setData(102,"NAman tiwari");
    s3.setData(103,"ChAman tiwari");


    s1.showDetails();
    s2.showDetails();
    s3.showDetails();


    // s1.id=200;
    // cout<<"the student is "<<s1.id<<"\n";
    // cout<<"the student is "<<s1.id<<endl;

    return 0;
}