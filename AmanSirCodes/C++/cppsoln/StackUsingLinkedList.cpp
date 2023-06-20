#include<iostream.h>

class Node
{
	public:
		int info;
		Node *next;
};

class Stack
{

	private:
		Node *top;

	public:
		Stack()
		{
			top = NULL;
		}

		int empty()
		{
			if (top == NULL)
				return(true);
			else
				return(false);
		}

		void push( int passed_value)
		{
			Node *temp;			

			if ( top == NULL )
			{
				top = new Node;
				top->info = passed_value;
				top->next = NULL;				 
			}
			else
			{
				temp = new Node(); 
				temp->info = passed_value;
				temp->next = top;
				top = temp;		
			}	
			cout << endl << passed_value << " pushed." << endl;	
		}

		int pop()
		{
			Node *tmp;
			tmp = top;
			top = top->next;
			int x = tmp->info;
			delete(tmp);
			return(x);
		}

		void display()
		{
			if (top == NULL)
				cout << endl << "Stack Empty." << endl;
			else
			{

				Node *currentNode;
				
				cout << endl << "The contents of the stack are:" << endl;
				
				for (currentNode = top; currentNode!=NULL; currentNode = currentNode->next)
				{
					cout<<currentNode->info<<"\n";
				}
			}

		}
};


void main()
{
	int choice,x;
	Stack mystack;

	while (1) 
	{
		cout<<"\n***STACK MENU***\n\n";
		cout<<"1. PUSH\n";
		cout<<"2. POP\n";
		cout<<"3. Display\n";
		cout<<"4. Exit\n";

		cout<<"\nEnter your choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"\nEnter a number: ";
				cin>>choice;

				mystack.push(choice);
				break;
					
			case 2:
				if (mystack.empty())
				{
					cout << endl << "Stack Empty." << endl;
					break;
				}

				x = mystack.pop();
				cout << endl << "The popped value is " << x << endl;
				break;

			case 3:
				mystack.display();
				break;
				
			case 4:
				exit(0);

			default:
				cout<<"\nInvalid choice. Try again\n";
			
		}
	}		
}

