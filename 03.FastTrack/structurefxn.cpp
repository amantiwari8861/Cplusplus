#include <iostream>
#include <cstring>
using namespace std;
class Books
{
    // private:
    char name[30];
    public:
    int id;
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
    //     int id;
    //     char name[20];
    //     float price;
    //     void getAuthorDetails()
    //     {
    //         cout << "yashwant kanetkar" << endl;
    //     }
    // };

    Books b;
    b.id = 56;
    b.price=500;
    strcpy(b.name,"let us c");
    b.getAuthorDetails();

    cout << b.id << endl;
    // cout<<b.name<<endl;
    // cout<<b.price<<endl;
    return 0;
}
