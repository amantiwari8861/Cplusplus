#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
int main()
{
    long max, count;
    cout << "Enter the max value to find prime:" << endl;
    cin >> max;

    Node *head = NULL;
    Node *last = NULL;
    for (int num = 1; num <= max; num++)
    {
        count = 0;
        for (int i = 1; i <= max; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            // cout << "prime no:" << num << endl;
            Node *temp = new Node(num);
            if (head == NULL)
            {
                head = temp;
                last = head;
            }
            else
            {
                last->next = temp;
                last = last->next;
            }
        }
    }
    cout << "Prime numbers are: " << endl;

    while (head != NULL)
    {
        cout <<head->data ;
        head = head->next;
    }
    return 0;
}