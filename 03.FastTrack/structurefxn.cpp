#include<iostream>
#include<cstring>
using namespace std;

    class Books
    {
        public:
        int id;
        char name[30];
        float price;

        void getAuthorDetails()
        {
            cout<<"yashwant kanetkar"<<endl;
        }
    };

int main()
{

    // struct Books
    // {
    //     char name[20];
    //     int id;
    //     float price;
    // };
    
    Books b;
    b.id=56;
    b.getAuthorDetails();
    // strcpy(b.name,"let us c");
    // b.price=500;

    cout<<b.id<<endl;
    // cout<<b.name<<endl;
    // cout<<b.price<<endl;





    return 0;
}
