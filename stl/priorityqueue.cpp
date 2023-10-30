#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // priority_queue<int> numbers;//max heap priority queue (by default)
    priority_queue<int, vector<int>, greater<int>> numbers;//min heap priority queue

    numbers.push(4);
    numbers.push(3);
    numbers.push(5);
    numbers.push(6);
    numbers.push(10);
    numbers.push(2);

    cout<<"The Data is \n";
    while(!numbers.empty())
    {
        cout<<numbers.top()<<endl;
        numbers.pop();
    }    
    return 0;
}
/*
vector<int> and greater<int> are template arguments used when declaring the priority_queue. Let's break down what each of them means:

vector<int>:

This is specifying the underlying container that the priority_queue will use to store its elements. In this case, it's a vector of integers (int).
A vector is a dynamic array that can grow and shrink in size. It allows random access to its elements.
greater<int>:

This is a comparator function object that determines the order of elements in the priority_queue.
greater<int> is a predefined function object in C++'s standard library. It represents the "greater than" comparison for integers.
When used as a comparator in a priority_queue, it causes the smallest element to have the highest priority (i.e., it turns the priority_queue into a min-heap).
So, when you write priority_queue<int, vector<int>, greater<int>>, you are declaring a priority_queue of integers (int), using a vector as the underlying container, and using greater<int> as the comparator to create a min-heap.

This combination ensures that the smallest element will be at the top of the priority_queue.
*/