#include<iostream>
using namespace std;

class Book
               {
        protected:
        char *bookName;
         char *bookAuthor;
         char *publisher;
         char *isdnNumber;
         int   numberOfPages;
         float price;

        public :

    Book(char *name,char *author,char *publisher, char *number,    int pages, float rate)
    {
       bookName=name;
       bookAuthor=author;
       this.publisher=publisher;
       isdnNumber=number;
       numberOfPages=pages;
       price=rate;
    }
void displayDetails()
{
    cout<<"\tTitle\tAuthor\tpublisher\tISDNNumber\tPages\tPrice\n";
    cout<<bookName<<"\t"<<bookAuthor<<"\t"<<publisher<<"\t"<<isdnNumber<<"\t"<<numberOfPages<<"\t"<<price<<endl;
}
void setPrice(int price)
{
   this.price=price;
}
};

class TextBook
{
  
  char  *subject;


  public:
           TextBook(char *name, char *author,char *publisher, char *number, int pages,float rate, char *subject):Book(name,author,publisher, number,pages,rate){
                 
                this.subject=subject;
                 
           }
      
          

  void displayDetails()
  {
     cout<<"\tTitle\tAuthor\tsubject\tpublisher\tISDN\tNumber\tPages\tPrice\n";
     cout<<bookName<<"\t"<<bookAuthor<<"\t"<<subject<<"\t"<<publisher<<"\t"<<isdnNumber<<"\t"<<numberOfPages<<"\t"<<price<<endl;
   }
};
class ReferenceBook
{
         
  public:
 ReferenceBook(char *name, char *author,char *publisher, char *number, int pages,float rate):Book(name,author,publisher, number,pages,rate)
{
                 
            }

   void setPrice(int price)
{
    this.price=price;);
}

         
};
class StoryBook
{
    char *type;
    public:
StoryBook(char *name, char *author, char *publisher, char *number, int pages,float rate, char * type):Book(name,author,publisher, number,pages,rate){
          this.type=type;
}
  void displayDetails()
  {
      cout<<"\tTitle\tAuthor\tpublisher\tISDN Number\tPages\tPrice\tType\n";
    cout<<bookName<<"\t"<<bookAuthor<<"\t"<<publisher<<"\t"<<isdnNumber<<"\t"<<numberOfPages<<"\t"<<price<<"\t"<<type<<endl;
   }
};
