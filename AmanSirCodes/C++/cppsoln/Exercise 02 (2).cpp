#include<iostream.h>

class Node
{
	public:
		int data;
		Node *next;		
};

class Dequeue
{
	Node *FRONT,*REAR;
	public:
	Dequeue();
	void insert_left(int element);
	void insert_right(int element);
	void delete_left();
	void delete_right();
	void display();
	void input_queue();
	void output_queue();
};

Dequeue :: Dequeue()
{
	FRONT=REAR=NULL;//Initially, FRONT and REAR will point to null as the queue is empty
}
void Dequeue :: insert_left(int element)
{
	Node *newnode=new Node;
	  newnode->data=element;	
	  newnode->next=NULL;
    if (FRONT == NULL)
      {
      //If the queue is empty i.e if FRONT points to NULL, then the 
      //first node to be inserted in the queue will act as both REAR and FRONT.
      
        FRONT = newnode;
        REAR = newnode;                
      }
    else
      {
       //If queue is NOT empty, then the next pointer of the new node will 
       //point to FRONT. Now the inserted node will become FRONT.
        newnode->next = FRONT;
        FRONT = newnode;
       }
}

void Dequeue :: insert_right(int element)
{
	Node *newnode=new Node;
	newnode->data=element;
    if (FRONT == NULL)
      {
      //If the queue is empty i.e if FRONT points to NULL, then the 
      //first node to be inserted in the queue will act as both REAR and FRONT.
        newnode->next=FRONT; 
        FRONT = newnode;
        REAR = newnode;
      }
    else
      {
      //If queue is NOT empty, then the next pointer of the REAR node will
      //point to the node to be inserted. Now the inserted node will become
      //REAR.
        newnode->next=NULL;
        REAR->next = newnode;                
        REAR=newnode;
      }
}

void Dequeue :: delete_right()//Deletes node from the right of the queue
{	 
     if (FRONT == NULL)//Checks if the queue is empty
      {
		 cout<<"Queue is empty"<<endl;
      }
     else 
      {
        if (FRONT->next == NULL)//Checks if there is only one element in the queue.
            {
              
			  cout<<"\nValue deleted from the queue is "<<FRONT->data<<"\n";
			  FRONT = NULL;
              REAR = NULL;
            }
        else
            {        
			  Node *tmp;
			  tmp = FRONT;//node tmp is made to point to FRONT.
              while (tmp->next != REAR)
                     tmp = tmp->next;
                    //At the end of the while loop, tmp will point to the 
                    //second last element of the queue.
			  cout<<"\nValue deleted from the queue is  " << tmp->next->data;
              REAR = tmp;//tmp will become REAR and the next pointer of tmp will point to NULL.
              tmp->next = NULL;
            }
      }
}

void Dequeue :: delete_left()//Deletes node from the left of the queue
{
	
     if (FRONT == NULL)//Checks if the queue is empty
       {
           cout<<"Queue is empty"<<endl;
           return;
       }
     else
	 {
		 if (FRONT->next == NULL)//Checks if there is only one element in the queue.
            {
              cout<<"\nValue deleted from the queue is "<<FRONT->data<<"\n";
			  FRONT = NULL;
              REAR = NULL;
            }
		 else
       {
	    cout<<"\nValue deleted from the queue is "<<FRONT->data<<"\n";
		Node *tmp;
        tmp = FRONT; //tmp is made to point to FRONT
        FRONT = FRONT->next;//The next node of FRONT will now become FRONT
		delete tmp;
       }
	 }
}

void Dequeue :: display()//Displays the elements of the queue
{
	Node *tmp;
    if (FRONT == NULL)//Checks if the queue is empty
      {
         cout<<"Queue is empty";
      }
    else
      {
       cout<<"\nElements in the queue are......\n\n";
		  //tmp is made to point to FRONT and the queue is traversed using tmp.
       for (tmp = FRONT; tmp != NULL; tmp = tmp->next)
              cout<<tmp->data<<"    ";
      }
      cout<<endl;
}

void main()
{
	 Dequeue d;
	 char ch;
	 int num;
            while (1)
            {
                
                    cout<<"\nMenu";
					cout<<"\n1. Insert value to the left of the queue"<<endl;
                    cout<<"2. Insert value to the right of the queue"<<endl;
                    cout<<"3. Delete value from left"<<endl;
                    cout<<"4. Delete value from right"<<endl;
                    cout<<"5. Display the values"<<endl;
                    cout<<"6. Exit"<<endl;
                    cout<<"\nEnter your choice (1-6): ";
                    cin>>ch;
                    cout<<endl;
                    switch (ch)
                    {
                        case '1':
                            {
								cout<<"Enter a number: ";
								cin>>num;
								d.insert_left(num);								
                            }
                            break;
                        case '2':
                            {
								cout<<"Enter a number: ";
								cin>>num;
								d.insert_right(num);								
                            }
                            break;
                        case '3':
							{
								d.delete_left();
							}
                            break;
						case '4':
							{
								d.delete_right();
							}
							break;
						case '5':
							{
								d.display();
							}
							break;
						case '6':
							{
								exit(0);
							}
							break;
                        default:
                            {
                                cout<<"Invalid option"<<endl;
                            }
                            break;
                    }
                }                
}