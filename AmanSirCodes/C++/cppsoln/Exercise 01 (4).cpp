#include<iostream>
class publication
{
          protected:
           //Variables to store title and price
           char * title;
           float price;
          public:
           //Method declaration
            void getData(char *name, float rate);
            void putData();
};
 void publication::getData(char *name, float rate)
{
           title=name;
           price=rate;
}
void publication::putData()
{ 
          cout<<"Title:"<<title;
           cout<<"Price:"<<price;
}
class book:public publication
{
            int pageCount;
                      public:
             void  getData(char *name, float price, int pages)
              {
                      publication::getData(name, price);
                      pageCount=pages;
              }
              void putData()
          {
             cout<< "Title:"<<title<<endl;
             cout<< "Price:"<<price<<endl;
             cout<< "No of Pages:"<<pageCount<<endl;
          }
};
         
        class tape: public publication
        {
           int playingTime;
            public:
           void getData(char *name, float price, int time)
           {
                   publication::getData(name, price);
                   playingTime=time;
            }
           void putData()
           {
               cout<< "Title:"<<title<<endl;
               cout<< "Price:"<<price<<endl;
               cout<< "Playing time:"<<playingTime<<endl;
            }
  };
int main()
{
book b1;
tape t1;
int price, pages;
char name[30];
cout<<"Enter name, price and pages";
cin>>name;
cin>>price;
cin>>pages;
b1.getData(name, price, pages);
b1.putData();
t1.getData(name, price, pages);
t1.putData();
}
