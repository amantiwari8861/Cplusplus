#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //vector,list,set,stack,queue,dequeue,priority queue,map

    queue<string> stuLine;//queue follows FIFO (first in first out)

    stuLine.push("Eklavya"); 
    stuLine.push("Krishna"); 
    stuLine.push("Raj"); 
    stuLine.push("ravi"); 
    stuLine.push("Eklavya"); 
    stuLine.push("Vishal"); 
    stuLine.push("Eklavya"); 

    cout<<"Distributing Laddoo to Students \n";
    while(!stuLine.empty())
    {
        cout<<stuLine.front()<<endl;
        stuLine.pop();
    }    
    return 0;
}
