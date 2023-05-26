// Chapter 2 Additional Exercises: Exercise 01
#include<iostream>
   class interchange
   {
     private:
      int var1;
      int var2;
      int temp;
     public:
      void swap()
      {
        var1=5;
        var2=10;
        temp=var1;
        var1=var2;
        var2=temp;
      }
      void display()
      {
         cout<<"The new value of variable1 is:"<<var1<<endl;
         cout<<"The new value of variable2 is:"<<var2<<endl;
      }
   };
   void main()
   {
     interchange I1;
     I1.swap();
     I1.display();
   }