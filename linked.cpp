#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        string name;
        Node *next;//self referential pointer
};
int main()
{
    Node *head,*node1,*node2,*node3;
    head=node1=node2=node3=NULL;
    node1=new Node();
    node2=new Node();
    node3=new Node();


    head=node1;
    node1->data=101;
    node1->name="Aayush";
    node1->next=node2;

    node2->data=102;
    node2->name="Aman";
    node2->next=node3;
    node3->data=103;
    node3->name="Ajay";
    node3->next=NULL;

    while (head!=NULL)
    {
       cout<<"id is "<<head->data<<endl;
        cout<<"name is "<<head->name<<endl;
        head=head->next;
    }
    
    return 0;
}
