#include<iostream>
using namespace std;
struct node
{
    int data;
    // char name[20];
    string name;
    node *next;
};
int main()
{
    struct node *node1;
    cout<<"size of node is "<<sizeof(struct node)<<endl;
    node1=(struct node*)malloc(sizeof(struct node));
    node1->data=101;
    node1->name="Aayush";
    // strcpy(node1->name,"Aman");
    node1->next=NULL;

    cout<<"data is "<<node1->data<<endl;
    cout<<"name is "<<node1->name<<endl;
    return 0;
}
