#include<iostream.h>


class Stack
{

	private:
		int stack_array[5];
		int top;

	public:
		Stack()
		{
			top = -1;
		}
			
		int full()
		{
			if (top == 4)
				return(1);
			else
				return(0);
		}
		
		int empty()
		{
			if (top == -1)
				return(1);
			else
				return(0);
		}

		void push( int passed_value)
		{
			top++;
			stack_array[top] = passed_value;
			cout << endl << passed_value << " pushed." << endl;
		}

		void pop()
		{
			cout<<"\nThe popped value is "<<stack_array[top]<<"\n";
			top--;
		}

		void display()
		{
			if (empty())
				cout << endl << "Stack Empty" << endl;
			else
			{
				cout << endl << "\nThe contents of the stack are :\n" << endl;
								
				for (int i=top; i>=0; i--)
				{
					cout<<stack_array[i]<<"\n";
				}
			}

		}
};


void main()
{
	int choice;
	Stack mystack;

	while (1) 
	{
		cout<<"\n\n***STACK MENU***\n\n";
		cout<<"1. PUSH\n";
		cout<<"2. POP\n";
		cout<<"3. Display\n";
		cout<<"4. Exit\n";

		cout<<"\nEnter your choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				if (mystack.full())
				{
					cout << "\nStack Full";
					break;
				}
				cout<<"\nEnter a number: ";
				cin>>choice;

				mystack.push(choice);
				break;
					
			case 2:
				if (mystack.empty())
				{
					cout << "\nStack Empty";
					break;
				}
				mystack.pop();
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

