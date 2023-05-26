//Chapter 04: Additional Exercises - Exercise 03

#include<iostream.h>
   class values
   {
     public:
     int var1;
     int var2;
     int var3;
     void assign()
     {
       var1=5;
       var2=10;
       var3=15;
     }
     void display()
     {
       cout<<"The value of variable1 is:"<<var1<<endl;
       cout<<"The value of variable2 is:"<<var2<<endl;
       cout<<"The value of variable3 is:"<<var3<<endl;
     }
   };
   void main()
   {
     values V1;
     V1.assign();
     V1.var2=20;
     V1.display();
   }