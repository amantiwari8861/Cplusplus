#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //vector,list,set,stack,queue,priority queue,map

    stack<string> box; //stack follows last in first out (LIFO)
    
    box.push("C"); 
    box.push("C++"); 
    box.push("Java"); 
    box.push("C#"); 
    box.push("Go lang"); 
    box.push("Swift"); 
    box.push("Python"); 
    box.push("Java"); 
    box.push("Core Java");
    box.push("Advance Java");

    cout<<"All Books :\n";
    // while(box.empty()!=true)
    while(!box.empty())
    {
        cout<<box.top()<<endl;
        box.pop();
    }
    return 0;
}
