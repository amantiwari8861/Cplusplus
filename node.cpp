#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        string name;
        Node *next;
};
int main()
{
    Node *node1=new Node();
    node1->data=101;
    node1->name="Aayush";
    node1->next=NULL;
    cout<<"data is "<<node1->data<<endl;
    cout<<"name is "<<node1->name<<endl;    
    return 0;
}
