#include<iostream> 
class Furniture
 {
             protected:
             int numberOfLegs;
             int height;
             int width;
             int length;
         public:
             virtual void display()=0;
 };
class Chair:public Furniture
{
      public:
      void display()
        {
             cout<< "Chair";
         }
};
class Table:public Furniture
{
       public :
       void display()
          {
               cout<< "Table";
           }
};

         void display()
            {
                 cout<< "C for chair";
                 cout << "T for table";
                 cout<< "Q to quit";
             }

int main()
{
         Furniture *furniture;
         char choice;
         display();
          cin>>choice;
             while(choice!='Q')
                {
                          
                     switch(choice)
                     {
                          case 'T': furniture=new Table;
                                    break; 
                          case 'C': furniture=new Chair;
                                    break;
                       default:   cout<< "Invalid option. Enter C, T, or Q"<<endl;
                     }
                     furniture->display();
                             
		     display();
                     cin>>choice;
                }
return 0;
}//end of main