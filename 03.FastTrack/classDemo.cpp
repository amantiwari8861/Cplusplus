#include<iostream>
using namespace std;

class Book
{
    public:
    int id;
    char name[30];

    void getbooksDetails()
    {
        cout<<"enter id name :\n";
        cin>>id;
        cin>>name;
    }
    void showBookDetails()
    {
        cout<<"======== book Details ========="<<endl;
        cout<<"Book id :"<<id<<endl;
        cout<<"Book name :"<<name<<endl;
    }
};
int main()
{
    
    Book bk;
    bk.getbooksDetails();
    bk.showBookDetails();


    return 0;
}
