#include<iostream.h>
#include<stdlib.h>   //for using exit() function


    class Node
    {
	public:
		int info;
        Node *next;
    };
    class List
    {
        Node *START;
		public:
		List();
		void addNode(int element);
		Node * getStart();
		void traverse();
		List merge(List obj);
	};

	List :: List()
        {
            START = NULL;
        }

	void List :: addNode(int element)
        {
            Node *newnode;
			Node *previous,*current;
   newnode = new Node;
   newnode->info=element;
   if(START == NULL || element <= START->info)//If the node to be inserted is the first node
   {
	newnode->next=START;
	START=newnode;
	return;
   }      
   for(previous=current=START;current!=NULL && element>current->info;previous=current,current=current->next)
   {}
   //Once the above for loop is executed, previous and current are positioned in such
   //a manner that the position for the new node is in between them. 
   newnode->next=current;
   previous->next=newnode;
        }
	 Node * List :: getStart()
        {
            return START;
        }
	 void List :: traverse()
        {
           if(START==NULL)//Checks whether the list is empty
			 {
				cout<<"\nList is empty\n";
				return; 
			 }
			Node * ptr;
			for(ptr=START;ptr!=NULL;ptr=ptr->next)
			  {
				cout<<ptr->info<<"     ";
			  }
        }

		List List :: merge(List l2)
        {
            Node *p1 = START; ;
            Node *p2 = l2.getStart();
            List l3;
	    while (1)
            {
                if (p1->info <= p2->info)
                {
                    l3.addNode(p1->info);
                    if (p1->next == NULL)
                    {
                        while (p2 != NULL)
                        {
                            l3.addNode(p2->info);
                            p2 = p2->next;
                        }
                        return l3;
                    }
                    p1 = p1->next;
                }
                else
                {
                    l3.addNode(p2->info);
                    if (p2->next == NULL)
                    {
                        while (p1 != NULL)
                        {
                            l3.addNode(p1->info);
                            p1 = p1->next;
                        }
                        return l3;
                    }
                    p2 = p2->next;
                }
            }     
        }
       
        void main() 
        {
            List list1 ;
            List list2;
            List list3 ;
            while (1)
            {
                    cout<<"\nMenu.";
					cout<<endl<<"1. Create lists."<<endl;
                    cout<<"2. Merge lists"<<endl;                    
                    cout<<"3. Exit."<<endl;
                    cout<<"\nEnter your choice: ";
                    char ch;
					cin>>ch; 
                    switch (ch)
                    {
                        case '1':
                            {
                                char choice = 'y';
                                cout<<"\nCreate first list....\n"<<endl;
                                while (choice == 'y')
                                {
                                    cout<<"\nEnter a number: ";
                                    int num;
									cin>>num;
                                    list1.addNode(num);
                                    cout<<"\nAdd more elements? (y/n): ";
                                    cin>>choice;
                                }
								cout<<"\nFirst list is....\n"<<endl;
								list1.traverse();
                                cout<<endl<<"\nCreate second list....\n"<<endl;
                                choice = 'y';
                                while (choice == 'y')
                                {
                                    cout<<"\nEnter a number: ";
                                    int num;
									cin>>num;
                                    list2.addNode(num);
                                    cout<<"\nAdd more elements? (y/n): ";
                                    cin>>choice;
                                }      
								cout<<"\nSecond list is....\n"<<endl;
								list2.traverse();
                            }
                            break;
                        case '2':
                            {
                                list3=list1.merge(list2);
                                list3.traverse();
                            }
                            break;    
						case '3':
							{
								exit(0);
							}
                        default:
                            {
                                cout<<"Invalid option";
                                break;
                            }
                    }

                }
                
            }
        

