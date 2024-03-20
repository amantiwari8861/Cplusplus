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
    // for(auto itr=friends.begin();itr!=friends.end();itr++)
    // {
    //     cout<<*itr<<endl;
    // }
    // for (string fri:friends)
    // {
    //     cout<<fri<<endl;
    // }
    // for (auto fri:friends)
    // {
    //     cout<<fri<<endl;
    // }
    // list<int> mylist={1,2,3,4};
    // for (auto e:mylist)
    // {
    //     cout<<e<<endl;
    // }

    return 0;
}
