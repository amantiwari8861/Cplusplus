// Chapter 04: Additional Exercises - 02
#include<iostream.h>
 int var1=10;
int var2=20;
class test
{
 public:
  void disp()
   {
     cout<<"var1="<<var1;
     cout<<"var2="<<var2;
   }
};
class sample
{
  public:
    void display()
     {
       cout<<"var1="<<var1;
       cout<<"var2="<<var2;
     }
};
int main()
{
sample S1;
S1.display();
}
