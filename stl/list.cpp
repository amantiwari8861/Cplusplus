#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<string> friends;

    friends.push_back("krishna");
    friends.push_back("ravi");
    friends.push_back("Vishal");
    friends.push_back("vishal");
    friends.push_back("1vishal");
    friends.push_front("eklavya");
    friends.push_back("aayushi");
    friends.push_back("Aman");

    friends.sort();

    cout<<"All friends \n";
    for (string fri:friends)
    {
        cout<<fri<<endl;
    }

    return 0;
}
