#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //vector,list,set,stack,queue,dequeue,priority queue,map

    deque<string> stuLine;//queue follows FIFO (first in first out)

    stuLine.push_back("Eklavya"); 
    stuLine.push_back("Krishna"); 
    stuLine.push_back("Raj"); 
    stuLine.push_back("ravi"); 
    stuLine.push_front("Vishal"); 
    stuLine.push_front("Aman");
    stuLine.insert(stuLine.begin()+4,"Aayush"); 

    // cout<<"Distributing Laddoo to front Students \n";
    // while(!stuLine.empty())
    // {
    //     cout<<stuLine.front()<<endl;
    //     stuLine.pop_front();
    // }    
    cout<<"Distributing Laddoo to Students from last \n";
    while(!stuLine.empty())
    {
        cout<<stuLine.back()<<endl;
        stuLine.pop_back();
    }    
    return 0;
}
