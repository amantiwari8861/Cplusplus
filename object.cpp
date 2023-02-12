#include<iostream>
using namespace std;

class Node
{
    public:
        int data;

        Node()
        {
            data=50;
            cout<<"default constructor"<<endl;
        }
};

int main()
{
    // Node n1;
    // cout<<"data is "<<n1.data<<endl;

    // Node *n1=new Node();
    // cout<<"data is "<<n1->data<<endl;

    Node *n1=NULL;
    n1=new Node();
    cout<<"data is "<<n1->data<<endl;

    return 0;
}
